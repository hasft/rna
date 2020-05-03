[@react.component]
let make = (~children) =>
  <UiWrapper>
    <MdsWrapper> <Header /> children <Footer /> </MdsWrapper>
  </UiWrapper>;