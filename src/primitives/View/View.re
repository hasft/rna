// TODO set default style
// TODO onLayout, pointerEvents, flexDirection
module Styles = {
  open Css;
  let view = style([display(flexBox), flexDirection(column)]);
  let viewWithFlexDirection = (direction: Css_Core.Types.FlexDirection.t) =>
    style([flexDirection(direction)]);
};

[@react.component]
let make =
    (
      ~flexDirection: option(Css_Core.Types.FlexDirection.t)=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~children,
    ) => {
  let className =
    Cn.make([
      Styles.view,
      Styles.viewWithFlexDirection(
        Belt.Option.getWithDefault(flexDirection, `column),
      )
      ->Cn.ifSome(flexDirection),
      className->Cn.unpack,
    ]);
  <div className ?id> children </div>;
};