const logNot = a => !a
const logAnd = (a, b) => a && b
const logOr = (a, b) => a || b
const logImp = (a, b) => a ? b : true
const logEqu = (a, b) => a === b
const logXor = (a, b) => Boolean(a ^ b)

const res = {
    'a': [true, true, false, false],
    'b': [true, false, true, false],
    'not': [logNot(true), logNot(true), logNot(false), logNot(false)],
    'and': [logAnd(true, true), logAnd(true, false), logAnd(false, true), logAnd(false, false)],
    'or': [logOr(true, true), logOr(true, false), logOr(false, true), logOr(false, false)],
    'imp': [logImp(true, true), logImp(true, false), logImp(false, true), logImp(false, false)],
    'equ': [logEqu(true, true), logEqu(true, false), logEqu(false, true), logEqu(false, false)],
    'xor': [logXor(true, true), logXor(true, false), logXor(false, true), logXor(false, false)],
}

console.table(res)