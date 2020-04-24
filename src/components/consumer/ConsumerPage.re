[@react.component]
let make = (~children) =>
  <PageProviders> <Header /> children </PageProviders>;
let default = make;