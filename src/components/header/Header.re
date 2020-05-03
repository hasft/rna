let str = ReasonReact.string;

module HeaderMobile = {
  [@react.component]
  let make = () => <Text> {"header mobile" |> str} </Text>;
};

module HeaderDesktop = {
  [@react.component]
  let make = () => {
    <Text> {"header" |> str} </Text>;
  };
};

[@react.component]
let make = () => {
  <UserAgent tablet=true mobile=true>
    {(uaIsTablet, uaIsMobile) =>
       uaIsTablet || uaIsMobile ? <HeaderMobile /> : <HeaderDesktop />}
  </UserAgent>;
};