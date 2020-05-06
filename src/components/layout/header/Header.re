let str = ReasonReact.string;

module HeaderMobile = {
  [@react.component]
  let make = () => {
    <View id="somebre"> <Logo /> </View>;
  };
};

module HeaderDesktop = {
  [@react.component]
  let make = () => {
    <Container>
      <View justifyContent=SpaceBetween> <Logo /> <Nav id="segment" /> </View>
    </Container>;
  };
};

[@react.component]
let make = () => {
  <UserAgent tablet=true mobile=true>
    {(uaIsTablet, uaIsMobile) =>
       uaIsTablet || uaIsMobile ? <HeaderMobile /> : <HeaderDesktop />}
  </UserAgent>;
};