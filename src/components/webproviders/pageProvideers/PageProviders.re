[@react.component]
let make = (~children) =>
  <UiProviders> <MdsProviders> children </MdsProviders> </UiProviders>;
let default = make;