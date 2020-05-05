let str = ReasonReact.string;

module LogoMobile = {
  [@react.component]
  let make = (~image: string, ~alt: string) => {
    <Touchable>
      <Next.Link href="home"> <a> <img src=image alt /> </a> </Next.Link>
    </Touchable>;
  };
};

module LogoDesktop = {
  [@react.component]
  let make = (~image: string, ~alt: string) => {
    <Touchable>
      <Next.Link href="home"> <a> <img src=image alt /> </a> </Next.Link>
    </Touchable>;
  };
};

[@react.component]
let make = () => {
  let image = "https://ecs7.tokopedia.net/assets-tokopedia-lite/v2/zeus/production/e5b8438b.svg";
  let alt = "logo name";

  <UserAgent tablet=true mobile=true>
    {(uaIsTablet, uaIsMobile) =>
       uaIsTablet || uaIsMobile
         ? <LogoMobile image alt /> : <LogoDesktop image alt />}
  </UserAgent>;
};