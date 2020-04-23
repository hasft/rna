[@react.component]
let make = () => {
  let theme = React.useContext(ThemeProvider.themeContext);
  <ConsumerPage>
    <View> {ReasonReact.string("home" ++ theme)} </View>
  </ConsumerPage>;
};

let default = make;