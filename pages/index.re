let str = ReasonReact.string;

module Home = {
  [@react.component]
  let make = () => {
    let (theme, action) = React.useContext(ThemeContext.themeContext);

    <button onClick={_ => action(theme)}>
      {switch (theme) {
       | Light => "light" |> str
       | Dark => "dark" |> str
       }}
    </button>;
  };
};

[@react.component]
let make = () => {
  <ConsumerPage> <Home /> </ConsumerPage>;
};

let default = make;