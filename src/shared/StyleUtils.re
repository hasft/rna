type flexDirection =
  | Column
  | Row
  | ColumnReverse
  | RowReverse
  | Unset
  | Inherit
  | Initial;

type alignItems =
  | Baseline
  | Center
  | End
  | FlexEnd
  | FlexStart
  | Inherit
  | Initial
  | Left
  | Normal
  | Right
  | SelfEnd
  | SelfStart
  | Unset;

type justifyContent =
  | SpaceBetween
  | Inherit
  | Initial;

let getJustifyContent = (justify: justifyContent) =>
  switch (justify) {
  | SpaceBetween => `spaceBetween
  | Inherit => `inherit_
  | Initial => `initial
  };

let getFlexDirection = (direction: flexDirection) =>
  switch (direction) {
  | Column => `column
  | Row => `row
  | RowReverse => `rowReverse
  | ColumnReverse => `columnReverse
  | Unset => `unset
  | Inherit => `inherit_
  | Initial => `initial
  };

let getAlignItems = (align: alignItems) =>
  switch (align) {
  | Baseline => `baseline
  | Center => `center
  | End => `end_
  | FlexEnd => `flexEnd
  | FlexStart => `flexStart
  | Inherit => `inherit_
  | Initial => `initial
  | Left => `left
  | Normal => `normal
  | Right => `right
  | SelfEnd => `selfEnd
  | SelfStart => `selfStart
  | Unset => `unset
  };