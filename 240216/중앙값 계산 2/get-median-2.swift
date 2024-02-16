func findMedians(_ n: Int, _ numbers: [Int]) -> [Int] {
    var result: [Int] = []
    var sortedNumbers: [Int] = []

    for i in 0..<n {
        sortedNumbers.insert(numbers[i], at: binarySearchIndex(sortedNumbers, numbers[i]))
        if i % 2 == 0 {
            let middleIndex = i / 2
            result.append(sortedNumbers[middleIndex])
        }
    }

    return result
}

func binarySearchIndex(_ array: [Int], _ target: Int) -> Int {
    var low = 0
    var high = array.count - 1

    while low <= high {
        let mid = (low + high) / 2
        if array[mid] < target {
            low = mid + 1
        } else if array[mid] > target {
            high = mid - 1
        } else {
            return mid
        }
    }

    return low
}


let n = Int(readLine()!)!
let numbers = readLine()!.split(separator: " ").map { Int($0)! }


let result = findMedians(n, numbers)
print(result.map { String($0) }.joined(separator: " "))