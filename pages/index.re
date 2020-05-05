module Home = {
  [@react.component]
  let make = () => {
    <View id="home">
      <Container>
        <Text domNode=H1 selectable=false> "haska"->React.string </Text>
        <ModeButton />
      </Container>
    </View>;
  };
};

[@react.component]
let make = () => {
  <ConsumerPage> <Home /> </ConsumerPage>;
};

let default = make;