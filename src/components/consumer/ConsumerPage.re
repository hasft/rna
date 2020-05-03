[@react.component]
let make = (~children) =>
  <PageProviders> <Header /> children <Footer /> </PageProviders>;