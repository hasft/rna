open ThemeTypes;

let initValue: contextValue = (Light, _ => ignore());
let themeContext = React.createContext(initValue);