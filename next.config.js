const withTM = require('next-transpile-modules')(['bs-platform', 're-classnames', 'bs-guid', 'bs-css', 'bs-css-emotion'])

module.exports = withTM({
    pageExtensions: ['jsx', 'js', 'web.js', 'web.jsx', 'ts', 'tsx', 'bs.js'],
    dontAutoRegisterSw: true
})
