let str = ReasonReact.string;

module LogoMobile = {
  [@react.component]
  let make = () => {
    <Touchable>
      <Next.Link href="home"> {"logo mobile" |> str} </Next.Link>
    </Touchable>;
  };
};

module LogoDesktop = {
  [@react.component]
  let make = () => {
    <Touchable>
      <Next.Link href="home"> <a> {"logo desktop" |> str} </a> </Next.Link>
    </Touchable>;
  };
};

[@react.component]
let make = () => {
  <UserAgent tablet=true mobile=true>
    {(uaIsTablet, uaIsMobile) =>
       uaIsTablet || uaIsMobile ? <LogoMobile /> : <LogoDesktop />}
  </UserAgent>;
};