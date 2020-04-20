module Styles = {
  open Css;

  let home = style([display(flexBox)]);
};

[@react.component]
let make = () =>
  <div className=Styles.home> {ReasonReact.string("Home")} </div>;
let default = make;