module Styles = {
  open Css;
  let view =
    style([
      display(flexBox),
      flexDirection(column),
      flexShrink(0.0),
      flexBasis(auto),
      boxSizing(borderBox),
      position(relative),
      margin(px(0)),
      padding(px(0)),
      minHeight(px(0)),
      minWidth(px(0)),
      border(px(0), solid, black),
      alignItems(stretch),
      zIndex(0),
    ]);
};

[@react.component]
let make = (~children, ~className="view") => {
  <div className={Styles.view ++ " " ++ className}> children </div>;
};
let default = make;