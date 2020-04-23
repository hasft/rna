module TextStyles = {
  open Css;
  let default =
    style([
      border(px(0), solid, black),
      boxSizing(borderBox),
      color(black),
      display(inline),
      fontSize(px(14)),
      margin(px(0)),
      padding(px(0)),
      whiteSpace(`preWrap),
      wordWrap(breakWord),
    ]);

  let selectable = isSelectable =>
    style([userSelect(isSelectable ? auto : none)]);
};

[@react.component]
let make = (~selectable=true, ~numberOfLine: option(string)=?, ~children) => {
  let className =
    Cn.make([TextStyles.default, TextStyles.selectable(selectable)]);
  <div className> children </div>;
};
let default = make;