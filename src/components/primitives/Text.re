module Styles = {
  open Css;
  let text = style([]);
  let textWithNumberOfLines = (lineClamp: int) =>
    style([unsafe("-webkit-line-clamp", string_of_int(lineClamp))]);
};

[@react.component]
let make =
    (
      ~domNode: option(PrimitivesDom.domText)=?,
      ~numberOfLines: option(int)=?,
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
      className->Cn.unpack,
    ]);

  ReactDOMRe.createDOMElementVariadic(
    PrimitivesDom.domNode(domNode),
    ~props=ReactDOMRe.domProps(~className, ~id?, ~style?, ()),
    [|children|],
  );
};

let default = make;