open ThemeContext;

module Styles = {
  open Css;
  open ThemeTypes;

  let text = (theme: system) =>
    style([color(theme.colors.text_01), fontSize(theme.sizes.m)]);

  let textWithSelectable = (isSelectable: bool) =>
    style([pointerEvents(isSelectable ? `auto : `none)]);

  let textWithColor = colorName => style([color(colorName)]);
};

[@react.component]
let make =
    (
      ~domNode: option(PrimitivesDom.domText)=?,
      ~onPress=?,
      ~selectable: option(bool)=?,
      ~style=?,
      ~className: option(string)=?,
      ~id: option(string)=?,
      ~children,
    ) => {
  let (mode, _) = React.useContext(themeContext);
  let theme = Theme.getThemeByMode(mode);

  let className =
    Cn.make([
      Styles.text(theme),
      Styles.textWithSelectable(Belt.Option.getWithDefault(selectable, true))
      ->Cn.ifSome(selectable),
      className->Cn.unpack,
    ]);

  ReactDOMRe.createDOMElementVariadic(
    PrimitivesDom.domNode(domNode),
    ~props=
      ReactDOMRe.domProps(~className, ~id?, ~style?, ~onClick=?onPress, ()),
    [|children|],
  );
};

let default = make;