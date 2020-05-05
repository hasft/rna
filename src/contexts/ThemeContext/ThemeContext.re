open ThemeTypes;

let initValue: contextValue = (Light, _ => ignore());
let themeContext = React.createContext(initValue);
let useTheme = () => {
  let (mode, _) = React.useContext(themeContext);
  Theme.getThemeByMode(mode);
};