func swapAtTwoNums( n: inout Int, m: inout Int) -> String {
    var newOrder = [n, m]
    newOrder.swapAt(0, 1)
    let changeOrder = newOrder.map { String($0) }.joined(separator: " ")
    
    return changeOrder
}


if let input = readLine() {
    let values = input.split(separator: " ").compactMap { Int($0) }
    guard values.count == 2,
          var a = values.first, var b = values.last,
          (1...100).contains(a),
          (1...100).contains(b) else {
        fatalError("유효하지 않은 범위 값입니다.")
    }
    print(swapAtTwoNums(n: &a, m: &b))
}