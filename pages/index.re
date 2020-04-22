module Styles = {
  open Css;

  let home = style([display(flexBox)]);
};

[@react.component]
let make = () => {
  <div> {ReasonReact.string("Home")} </div>;
};

let default = make;