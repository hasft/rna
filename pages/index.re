module Home = {
  [@react.component]
  let make = () => {
    <Container>
      <View justifyContent=SpaceBetween>
        <Text domNode=H1 selectable=false> "haska"->React.string </Text>
        <ModeButton />
      </View>
    </Container>;
  };
};

[@react.component]
let make = () => {
  <ConsumerPage> <Home /> </ConsumerPage>;
};

let default = make;