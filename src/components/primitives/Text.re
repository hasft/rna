open Belt;

module Styles = {
  open Css;
  let text = style([]);
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
  let className =
    Cn.make([
      Styles.text,
      Styles.textWithSelectable(Option.getWithDefault(selectable, true))
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