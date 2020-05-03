[@react.component]
let make = () => {
  let (theme, action) = React.useContext(ThemeContext.themeContext);
  <button onClick={_ => action(theme)}>
    "Toggle Theme"->React.string
  </button>;
};

let default = make;