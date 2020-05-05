type domNodeText =
  | Span
  | P
  | Em
  | Small
  | H1
  | H2
  | H3;

type domNodeTouchable =
  | A
  | Div;

let getDomNodeTouchable = dn =>
  switch (dn) {
  | None => "div"
  | Some(dt) =>
    switch (dt) {
    | A => "a"
    | Div => "div"
    }
  };

let getDomNodeText = dn =>
  switch (dn) {
  | None => "span"
  | Some(dt) =>
    switch (dt) {
    | Span => "span"
    | P => "p"
    | Em => "em"
    | Small => "small"
    | H1 => "h1"
    | H2 => "h2"
    | H3 => "h3"
    }
  };