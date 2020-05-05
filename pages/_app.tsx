import * as React from "react";
import App from "next/app";
import RUM from "next-rum";
import {UserAgentProvider} from "@quentin-sommer/react-useragent";
import 'normalize.css';

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

export default class Rna extends App {
    static async getInitialProps({ctx, Component}) {
        let pageProps = {};

        if (Component.getInitialProps) {
            pageProps = await Component.getInitialProps(ctx)
        }

        const ua = ctx.req
            ? ctx.req.headers["user-agent"]
            : navigator.userAgent;

        return {pageProps, ua}
    }

    render(): JSX.Element {
        // @ts-ignore
        const {Component, pageProps, ua} = this.props;

        // TODO only for foundation context
        return (
            <RUM navigated={navigated}>
                <UserAgentProvider ua={ua}>
                    <Component {...pageProps} />
                </UserAgentProvider>
            </RUM>
        )
    }
}