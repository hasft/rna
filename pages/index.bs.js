// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as $$Text from "../src/primitives/Text/Text.bs.js";
import * as React from "react";
import * as ModeButton from "../src/components/modeButton/ModeButton.bs.js";
import * as ConsumerPage from "../src/components/consumer/ConsumerPage.bs.js";

function Index$Home(Props) {
  return React.createElement(React.Fragment, undefined, React.createElement($$Text.make, {
                  domNode: /* H1 */4,
                  selectable: false,
                  children: "haska"
                }), React.createElement(ModeButton.make, { }));
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
  Home ,
  make ,
  $$default ,
  $$default as default,
  
}
/* Text Not a pure module */
