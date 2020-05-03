open ThemeTypes;

[@react.component]
let make = (~children) => {
  let (mode, setMode) = React.useState(() => Light);
  let toggleMode = mode =>
    switch (mode) {
    | Light => setMode(_ => Dark)
    | Dark => setMode(_ => Light)
    };

  <ThemeProvider value=(mode, (m: mode) => toggleMode(m))>
    children
  </ThemeProvider>;
};