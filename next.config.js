const withTM = require('next-transpile-modules')(['bs-platform', 'bs-css', 'bs-css-emotion', 're-classnames'])

module.exports = withTM({
    pageExtensions: ['jsx', 'js', 'web.js', 'web.jsx', 'ts', 'tsx', 'bs.js'],
    dontAutoRegisterSw: true
})
