module Styles = {
  open Css;
  let touchable = style([cursor(pointer)]);
};

[@react.component]
let make =
    (
      ~domNode: option(DomNode.domNodeTouchable)=?,
      ~href=?,
      ~onPress=?,
      ~className: option(string)=?,
      ~children,
      ~id=?,
      ~style=?,
    ) => {
  let className = Cn.make([Styles.touchable, className->Cn.unpack]);

  ReactDOMRe.createDOMElementVariadic(
    DomNode.getDomNodeTouchable(domNode),
    ~props=
      ReactDOMRe.domProps(
        ~className,
        ~id?,
        ~style?,
        ~href?,
        ~onClick=?onPress,
        (),
      ),
    [|children|],
  );
};