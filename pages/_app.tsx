import * as React from "react";
import App from "next/app";
import {UserAgentProvider} from "@quentin-sommer/react-useragent";

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

        return <UserAgentProvider ua={ua}><Component {...pageProps} /></UserAgentProvider>
    }
}