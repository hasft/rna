[@react.component]
let make = () => {
  let (theme, action) = React.useContext(ThemeContext.themeContext);
  <Button onPress={_ => action(theme)} title="toggle mode">
    "Toggle Theme"->React.string
  </Button>;
};

let default = make;