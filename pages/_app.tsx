import * as React from "react";
import App from "next/app";
import RUM from "next-rum";
import {UserAgentProvider} from "@quentin-sommer/react-useragent";
import {ApolloProvider} from "@apollo/react-common";
import 'normalize.css';
import '../src/styles/styles.css';

import {withApollo} from "../src/shared/apollo";

function navigated(url, rum) {
    console.log("the page has navigated to", url, rum);

    /*
    // GA example
    for (let metricName in rum) {
        ga('send', 'event', {
          eventCategory: 'Performance Metrics',
          eventValue: rum[metricName],
          eventAction: metricName,
          nonInteraction: true,
        });
      }
    */
}

class Rna extends App {
    static async getInitialProps({ctx, Component}) {
        let pageProps = {};

        try {
            if (Component.getInitialProps) {
                pageProps = await Component.getInitialProps(ctx);
            }
        } catch (e) {
            throw e; // you can also skip re-throwing and set property on pageProps
        }


        const ua = ctx.req
            ? ctx.req.headers["user-agent"]
            : navigator.userAgent;

        return {pageProps, ua}
    }

    render(): JSX.Element {
        // @ts-ignore
        const {Component, pageProps, ua, apolloClient} = this.props;

        return (
            <RUM navigated={navigated}>
                <UserAgentProvider ua={ua || ""}>
                    <ApolloProvider client={apolloClient}>
                        <Component {...pageProps} />
                    </ApolloProvider>
                </UserAgentProvider>
            </RUM>
        )
    }
}

export default withApollo(Rna);