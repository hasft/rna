module Styles = {
  open Css;

  let home = style([display(flexBox)]);
  let viewHome = style([background(red)]);
};

[@react.component]
let make = () => {
  let theme = React.useContext(ThemeProvider.themeContext);
  <ConsumerPage>
    <View className=Styles.viewHome>
      {ReasonReact.string("home" ++ theme)}
    </View>
  </ConsumerPage>;
};

let default = make;