open ReactNative;

[@react.component]
let make = () => {
  let theme = React.useContext(ThemeProvider.themeContext);
  let styles =
    Style.(
      StyleSheet.create({
        "wrapper":
          style(
            ~flexDirection=`column,
            ~backgroundColor="#6698FF",
            ~marginVertical=0.->dp,
            ~marginHorizontal=0.->dp,
            ~paddingVertical=64.->dp,
            (),
          ),
        "text":
          style(
            ~color="#fff",
            ~fontSize=17.,
            ~fontWeight=`_500,
            ~marginLeft=15.->dp,
            (),
          ),
      })
    );

  <ConsumerPage>
    <View style=styles##wrapper>
      <Text style=styles##text> {ReasonReact.string(theme)} </Text>
    </View>
  </ConsumerPage>;
};

let default = make;