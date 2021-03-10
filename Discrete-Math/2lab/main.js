let start = 2
let last = 7


const arr = [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
console.log(arr);

const bubbleSort = (arr, s, l) => {
    let arrLength = null
    l !== 0 ? arrLength = l : arrLength = arr.length
    for (let i = 0 + s; i < arrLength; i++) {
        for (let j = 0 + s; j < arrLength; j++) {
            if (arr[j] > arr[j + 1]) {
                let tmp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = tmp
            }
        }
    }
    return arr
}

console.log("bubbleSort", bubbleSort([9, 8, 7, 6, 5, 4, 3, 2, 1, 0], start, last));

function insertionSort(arr, s, l) {
    let arrLength = null
    l !== 0 ? arrLength = l + 1 : arrLength = arr.length
    for (let i = 1; i < arrLength; i++) {
        let current = arr[i]
        let j = i - 1
        while ((j > -1 + s) && (current < arr[j])) {
            arr[j + 1] = arr[j]
            j--
        }
        arr[j + 1] = current
    }
    return arr
}

console.log("insertionSort", insertionSort([9, 8, 7, 6, 5, 4, 3, 2, 1, 0], start, last));

function selectionSort(arr, s, l) {
    let arrLength = null
    l !== 0 ? arrLength = l : arrLength = arr.length
    for (let i = 0 + s; i < arrLength; i++) {
        let min = i
        for (let j = i + 1; j < arrLength + 1; j++) {
            if (arr[j] < arr[min]) {
                min = j
            }
        }
        if (min != i) {
            let tmp = arr[i]
            arr[i] = arr[min]
            arr[min] = tmp
        }
    }
    return arr
}

console.log("selectionSort", selectionSort([9, 8, 7, 6, 5, 4, 3, 2, 1, 0], start, last));