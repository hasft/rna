// TODO set default style
// TODO onLayout, pointerEvents, flexDirection
module Styles = {
  open Css;
  let view = style([display(flexBox)]);
  let viewWithFlexDirection = (direction: StyleUtils.flexDirection) =>
    style([flexDirection(StyleUtils.getFlexDirection(direction))]);
  let viewWithAlignItems = (align: StyleUtils.alignItems) =>
    style([alignItems(StyleUtils.getAlignItems(align))]);
  let viewWithJustifyContent = (justify: StyleUtils.justifyContent) =>
    style([justifyContent(StyleUtils.getJustifyContent(justify))]);
};

[@react.component]
let make =
    (
      ~flexDirection: option(StyleUtils.flexDirection)=?,
      ~justifyContent: option(StyleUtils.justifyContent)=?,
      ~alignItems: option(StyleUtils.alignItems)=?,
      ~style=?,
      ~id: option(string)=?,
      ~className: option(string)=?,
      ~children,
    ) => {
  let className =
    Cn.make([
      Styles.view,
      Styles.viewWithFlexDirection(
        Belt.Option.getWithDefault(flexDirection, StyleUtils.Inherit),
      )
      ->Cn.ifSome(flexDirection),
      Styles.viewWithAlignItems(
        Belt.Option.getWithDefault(alignItems, StyleUtils.Inherit),
      )
      ->Cn.ifSome(alignItems),
      Styles.viewWithJustifyContent(
        Belt.Option.getWithDefault(justifyContent, StyleUtils.Inherit),
      )
      ->Cn.ifSome(justifyContent),
      className->Cn.unpack,
    ]);
  <div ?style className ?id> children </div>;
};