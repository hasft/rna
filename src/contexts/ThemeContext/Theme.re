open Css_Core;
open ThemeTypes;

module Default = {
  let sizes = {
    xxl: px(32),
    xl: px(24),
    l: px(20),
    m: px(16),
    s: px(14),
    xs: px(12),
  };

  let colors = {
    text_01: hex("161616"),
    text_02: hex("393939"),
    text_03: hex("a8a8a8"),
    text_04: hex("ffffff"),
    text_05: hex("6f6f6f"),
    text_error: hex("da1e28"),
  };
};

module LightMode = {
  let system: system = {sizes: Default.sizes, colors: Default.colors};
};

module DarkMode = {
  let system: system = {
    sizes: Default.sizes,
    colors: {
      ...Default.colors,
      text_01: hex("da1e28"),
    },
  };
};

let getThemeByMode = mode =>
  switch (mode) {
  | Light => LightMode.system
  | Dark => DarkMode.system
  };