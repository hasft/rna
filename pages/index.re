module Styles = {
  open Css;

  let home = style([display(flexBox)]);
};

[@react.component]
let make = () =>
  <UserAgent mobile=true tablet=true>
    {(uaIsMobile, uaIsTablet) =>
       uaIsMobile || uaIsTablet
         ? <p>
             {ReasonReact.string(
                "This will ONLY be rendered on mobile/tablet",
              )}
           </p>
         : <p className=Styles.home>
             {ReasonReact.string("This will NOT be rendered on mobile/tablet")}
           </p>}
  </UserAgent>;

let default = make;