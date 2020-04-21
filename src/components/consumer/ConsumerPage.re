module Wrapper = {
  [@react.component]
  let make = (~children) => {
    let theme = React.useContext(ThemeProvider.themeContext);

    <div className=theme> children </div>;
  };

  let default = make;
};

[@react.component]
let make = (~children) =>
  <ThemeProvider value="light"> <Wrapper> children </Wrapper> </ThemeProvider>;

let default = make;