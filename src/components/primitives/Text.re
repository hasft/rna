module Styles = {
  open Css;
  let text = style([]);
  let textWithNumberOfLines = (lineClamp: int) =>
    style([unsafe("-webkit-line-clamp", string_of_int(lineClamp))]);
  let textWithSelectable = (isSelectable: bool) =>
    style([pointerEvents(isSelectable ? `auto : `none)]);
};

[@react.component]
let make =
    (
      ~domNode: option(PrimitivesDom.domText)=?,
      ~onPress=?,
      ~numberOfLines: option(int)=?,
      ~selectable=true,
      ~style=?,
      ~className: option(string)=?,
      ~id: option(string)=?,
      ~children,
    ) => {
  let className =
    Cn.make([
      Styles.text,
      Styles.textWithNumberOfLines(
        Belt.Option.getWithDefault(numberOfLines, 1),
      )
      ->Cn.ifSome(numberOfLines),
      Styles.textWithSelectable(selectable),
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