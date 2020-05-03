type color = Css_Core.Types.Color.t;
type size = Css_Core.Types.Length.t;

type sizeScheme = {
  xxl: size,
  xl: size,
  l: size,
  m: size,
  s: size,
  xs: size,
};

type colorScheme = {
  text_01: color,
  text_02: color,
  text_03: color,
  text_04: color,
  text_05: color,
  text_error: color,
};

type system = {
  colors: colorScheme,
  sizes: sizeScheme,
};

type mode =
  | Light
  | Dark;
type dispatch = mode => unit;
type contextValue = (mode, dispatch);