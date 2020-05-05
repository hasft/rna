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
      ~domNode: option(DomNode.domNodeText)=?,
      ~onPress=?,
      ~selectable: option(bool)=?,
      ~style=?,
      ~className: option(string)=?,
      ~id: option(string)=?,
      ~children,
    ) => {
  let theme = useTheme();

  let className =
    Cn.make([
      Styles.text(theme),
      Styles.textWithSelectable(Belt.Option.getWithDefault(selectable, true))
      ->Cn.ifSome(selectable),
      className->Cn.unpack,
    ]);

  ReactDOMRe.createDOMElementVariadic(
    DomNode.getDomNodeText(domNode),
    ~props=
      ReactDOMRe.domProps(~className, ~id?, ~style?, ~onClick=?onPress, ()),
    [|children|],
  );
};

let default = make;