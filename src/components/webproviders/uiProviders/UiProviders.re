[@react.component]
let make = (~children) =>
  <ThemeProvider value="light"> children </ThemeProvider>;
let default = make;