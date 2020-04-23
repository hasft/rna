[@react.component]
let make = () => {
  let theme = React.useContext(ThemeProvider.themeContext);
  <ConsumerPage> {ReasonReact.string("home" ++ theme)} </ConsumerPage>;
};

let default = make;