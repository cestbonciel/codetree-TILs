import Foundation

let INT_MAX = Int.max

func minTotalDistance(n: Int, arr: [Int]) -> Int {
    var ans = INT_MAX
    
    for i in 0..<n {
        var sumVal = 0
        
        for j in 0..<n {
            sumVal += arr[j] * abs(i - j)
        }
        
        ans = min(ans, sumVal)
    }
    
    return ans
}


if let n = Int(readLine() ?? ""), let arr = readLine()?.split(separator: " ").compactMap({ Int($0) }) {

    let result = minTotalDistance(n: n, arr: arr)
    print(result)
}