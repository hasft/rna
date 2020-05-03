open ThemeContext;

[@react.component]
let make = (~children) => {
  let (mode, setMode) = React.useState(() => Light);
  let toggle = mode =>
    switch (mode) {
    | Light => setMode(_ => Dark)
    | Dark => setMode(_ => Light)
    };

  <ThemeProvider value=(mode, (m: mode) => toggle(m))>
    children
  </ThemeProvider>;
};