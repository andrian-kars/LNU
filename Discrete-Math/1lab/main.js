const logNot = a => !a
const logAnd = (a, b) => a && b
const logOr = (a, b) => a || b
const logImp = (a, b) => a ? b : true
const logEqu = (a, b) => a === b
const logXor = (a, b) => Boolean(a ^ b)

const res1 = [
    {
        a: true, b: true, not: logNot(true), and: logAnd(true, true), or: logOr(true, true),
        imp: logImp(true, true), equ: logEqu(true, true), xor: logXor(true, true)
    },
    {
        a: true, b: false, not: logNot(true), and: logAnd(true, false), or: logOr(true, false),
        imp: logImp(true, false), equ: logEqu(true, false), xor: logXor(true, false)
    },
    {
        a: false, b: true, not: logNot(false), and: logAnd(false, true), or: logOr(false, true),
        imp: logImp(false, true), equ: logEqu(false, true), xor: logXor(false, true)
    },
    {
        a: false, b: false, not: logNot(false), and: logAnd(false, false), or: logOr(false, false),
        imp: logImp(false, false), equ: logEqu(false, false), xor: logXor(false, false)
    }
]

console.table(res1)

// 5 Варіант
const logTask2 = (a, b, c) => {
    // const f3 = logImp((logAnd((logAnd(a, logNot(c))), b)), (logOr((logImp(b, c)), a)))
    const f5 = logEqu((logOr((logAnd(a, b)), c)), (logAnd(c, logNot(a))))
    return f5
}

const res = {
    'a': [true, true, true, true, false, false, false, false],
    'b': [true, true, false, false, true, true, false, false],
    'c': [true, false, true, false, true, false, true, false],
    'task2': []
}

const res2 = [
    {
        a: true, b: true, c: true, task2: logTask2(true, true, true)
    },
    {
        a: true, b: true, c: false, task2: logTask2(true, true, false)
    },
    {
        a: true, b: false, c: true, task2: logTask2(true, false, true)
    },
    {
        a: true, b: false, c: false, task2: logTask2(true, false, false)
    },
    {
        a: false, b: true, c: true, task2: logTask2(false, true, true)
    },
    {
        a: false, b: true, c: false, task2: logTask2(false, true, false)
    },
    {
        a: false, b: false, c: true, task2: logTask2(false, false, true)
    },
    {
        a: false, b: false, c: false, task2: logTask2(false, false, false)
    },
]

console.table(res2)