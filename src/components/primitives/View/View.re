module Styles = {
  open Css;
  let view = style([display(flexBox)]);
};

[@react.component]
let make = (~id=?, ~className=?, ~children) => {
  let className = Cn.make([Styles.view, className->Cn.unpack]);
  <div ?id className> children </div>;
};

let default = make;