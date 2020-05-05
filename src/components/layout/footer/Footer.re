let str = ReasonReact.string;

[@react.component]
let make = () =>
  <View id="footer-desktop">
    <Container> {"footer" |> str} </Container>
  </View>;