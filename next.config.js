const withTM = require('next-transpile-modules')(['bs-platform', 'bs-css'])

module.exports = withTM({
    pageExtensions: ['jsx', 'js', 'web.js', 'web.jsx', 'ts', 'tsx', 'bs.js'],
    dontAutoRegisterSw: true
})
