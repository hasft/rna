module HeaderMobile = {
  [@react.component]
  let make = () => <div> {ReasonReact.string("header mobile")} </div>;
};

module HeaderDesktop = {
  [@react.component]
  let make = () => <div> {ReasonReact.string("header desktop")} </div>;
};

[@react.component]
let make = () => {
  <UserAgent tablet=true mobile=true>
    {(uaIsTablet, uaIsMobile) =>
       uaIsTablet || uaIsMobile ? <HeaderMobile /> : <HeaderDesktop />}
  </UserAgent>;
};
let default = make;