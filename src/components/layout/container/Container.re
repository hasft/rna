open ThemeContext;

module StylesMobile = {
  open Css;
  open ThemeTypes;
  let container = theme => style([width(pct(100.0))]);
};

//width: 100%;
//    display: flex;
//    height: 32px;
module StylesDesktop = {
  open Css;
  open ThemeTypes;

  let container = theme =>
    style([
      width(pct(100.0)),
      paddingTop(px(0)),
      paddingBottom(px(0)),
      paddingLeft(theme.spaces.xxl),
      paddingRight(theme.spaces.xxl),
    ]);
};

module ContainerDesktop = {
  [@react.component]
  let make = (~style=?, ~className=?, ~id=?, ~children) => {
    let theme = useTheme();
    let className =
      Cn.make([StylesDesktop.container(theme), className->Cn.unpack]);
    <div ?style ?id className> children </div>;
  };
};

module ContainerMobile = {
  [@react.component]
  let make = (~style=?, ~className=?, ~id=?, ~children) => {
    let theme = useTheme();
    let className =
      Cn.make([StylesMobile.container(theme), className->Cn.unpack]);
    <div ?style ?id className> children </div>;
  };
};

[@react.component]
let make = (~children, ~className=?, ~id=?, ~style=?) => {
  <UserAgent tablet=true mobile=true>
    {(uaIsTablet, uaIsMobile) =>
       uaIsTablet || uaIsMobile
         ? <ContainerMobile ?id ?style ?className> children </ContainerMobile>
         : <ContainerDesktop ?id ?style ?className>
             children
           </ContainerDesktop>}
  </UserAgent>;
};