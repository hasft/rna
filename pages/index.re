module Styles = {
  open Css;
  let home = style([display(flexBox)]);
};

[@react.component]
let make = () => {
  <ConsumerPage>
    <div className=Styles.home> {ReasonReact.string("home")} </div>
  </ConsumerPage>;
};

let default = make;