const n = 6, k = 4

const fact = num => {
    if (num < 0)
        return -1;
    else if (num == 0)
        return 1;
    else {
        return (num * fact(num - 1));
    }
}

const A = (n, k) => fact(n) / fact(n - k)
const _A = (n, k) => Math.pow(n, k)
const C = (n, k) => fact(n) / (fact(n - k) * fact(k))
const _C = (n, k) => fact(n + k - 1) / (fact(n - 1) * fact(k))

console.log(A(n, k))
console.log(_A(n, k))
console.log(C(n, k))
console.log(_C(n, k))

function GenPerm(items) {
    const results = [[...items]];
    while ((p = permutation(items))) {
        results.push([...p]);
    }
    return results;
}

function permutation(items) {
    var len = items.length;
    for (var k = len - 2; items[k] >= items[k + 1]; k--) { }
    if (k < 0) {
        return undefined;
    }
    for (var l = len - 1; items[k] >= items[l]; l--) { }
    if (l < 0) {
        return undefined;
    }
    swap(items, l, k);
    reverse(items, k + 1, len - 1);
    return items;
}

function swap(items, left, right) {
    var tmp = items[left];
    items[left] = items[right];
    items[right] = tmp;
    return items;
}

function reverse(items, start, end) {
    var middle = start + (end - start) / 2;
    for (var i = start; i < middle; i++) {
        swap(items, i, end - (i - start));
    }
    return items;
}

console.dir(GenPerm([1, 2, 3, 4, 5, 6]));





const genComb = (a, n, k) => {
    for (let i = a.length - 1; i >= 0; i--) {
        if (a[i] !== (n - k + i + 1)) {
            a[i]++
            for (let j = i + 1; j < a.length; j++) {
                a[j] = a[j - 1] + 1
            }
            break
        }
    }
    return a
}

console.log(genComb(2, 3, 2));