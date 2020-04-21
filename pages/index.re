module Styles = {
  open Css;

  let home = style([display(flexBox)]);
};

[@react.component]
let make = () => {
  <ConsumerPage> <div> {ReasonReact.string("Home")} </div> </ConsumerPage>;
};

let default = make;