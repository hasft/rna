module Styles = {
  open Css;

  let home = style([display(flexBox)]);
};

module Home = {
  [@react.component]
  let make = () => {
    let theme = React.useContext(ThemeProvider.themeContext);
    <div> {ReasonReact.string("home" ++ theme)} </div>;
  };
  let default = make;
};

[@react.component]
let make = () => {
  <ConsumerPage> <Home /> </ConsumerPage>;
};

let default = make;