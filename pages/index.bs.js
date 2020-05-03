// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as Curry from "bs-platform/lib/es6/curry.js";
import * as React from "react";
import * as ConsumerPage from "../src/components/consumer/ConsumerPage.bs.js";
import * as ThemeContext from "../src/contexts/ThemeContext/ThemeContext.bs.js";

function str(prim) {
  return prim;
}

function Index$Home(Props) {
  var match = React.useContext(ThemeContext.themeContext);
  var action = match[1];
  var theme = match[0];
  return React.createElement("button", {
              onClick: (function (param) {
                  return Curry._1(action, theme);
                })
            }, theme ? "dark" : "light");
}

var Home = {
  make: Index$Home
};

function Index(Props) {
  return React.createElement(ConsumerPage.make, {
              children: React.createElement(Index$Home, { })
            });
}

var make = Index;

var $$default = Index;

export {
  str ,
  Home ,
  make ,
  $$default ,
  $$default as default,
  
}
/* react Not a pure module */
