type domText =
  | Span
  | P
  | Em
  | Small
  | H1
  | H2
  | H3;

let domNode = dn =>
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