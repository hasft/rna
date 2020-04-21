module Content = {
  [@react.component]
  let make = (~children) => {
    let theme = React.useContext(ThemeProvider.themeContext);
    <div className=theme> children </div>;
  };

  let default = make;
};

[@react.component]
let make = (~children) =>
  <ThemeProvider value="light"> <Content> children </Content> </ThemeProvider>;

let default = make;