function factorial(x) {
    if (x > 12) throw new RangeError;
    if (x === 0) return 1;
    return x * factorial(x - 1);
}

// rgb to hex
function rgb(r, g, b) {
    return toHex(r) + toHex(g) + toHex(b);
}

function toHex(d) {
    if (d < 0) { return "00"; }
    if (d > 255) { return "FF"; }
    return ("0" + (Number(d).toString(16))).slice(-2).toUpperCase()
}