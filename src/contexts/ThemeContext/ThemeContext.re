type mode =
  | Light
  | Dark;

type dispatch = mode => unit;
type contextValue = (mode, dispatch);
let initValue: contextValue = (Light, _ => ignore());
let themeContext = React.createContext(initValue);