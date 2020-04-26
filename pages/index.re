let str = React.string;

module Styles = {
  open Css;
  let home = style([display(flexBox)]);
};

[@react.component]
let make = () => {
  <ConsumerPage> <Text> {"Home" |> str} </Text> </ConsumerPage>;
};

let default = make;