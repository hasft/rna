module Home = {
  [@react.component]
  let make = () => {
    <> <Text domNode=P> "haska"->React.string </Text> <ModeButton /> </>;
  };
};

[@react.component]
let make = () => {
  <ConsumerPage> <Home /> </ConsumerPage>;
};

let default = make;