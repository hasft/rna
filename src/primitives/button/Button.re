[@react.component]
let make = (~disabled=?, ~onPress=?, ~title: string, ~children) =>
  <button onClick=?onPress ?disabled title> children </button>;