open ApolloHooks;

module UsersQuery = [%graphql
  {|
  query UserQuery {
    country(input: {slug: "united-states"}) {
      name
      id
      type
    }
  }
|}
];

module Home = {
  [@react.component]
  let make = () => {
    let (users, _full) = useQuery(UsersQuery.definition);

    Js.log(users);

    <Container>
      <View justifyContent=SpaceBetween>
        <Text domNode=H1 selectable=false> "haska"->React.string </Text>
        <ModeButton />
        {switch (users) {
         | Loading => <p> {React.string("Loading...")} </p>
         | Data(data) => <p> {React.string(data##country##name)} </p>
         | NoData
         | Error(_) => <p> {React.string("Get off my lawn!")} </p>
         }}
      </View>
    </Container>;
  };
};

[@react.component]
let make = () => {
  <ConsumerPage> <Home /> </ConsumerPage>;
};

let default = make;