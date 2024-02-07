func getCommonMultipleNum(_ n: Int, _ m:  Int) {
    print((n * m) / gcdIterativeEuklid(n, m))
}

func gcdIterativeEuklid(_ m: Int, _ n: Int) -> Int {
    guard m >= 1, m <= 100, n >= 1, n <= 100 else { return 0 }
    
    var a: Int = 0
    var b: Int = max(m, n)
    
    var r: Int = min(m, n)

    while r != 0 {
        a = b
        b = r
        r = a % b
    }
    return b
}

if let input = readLine() {
    let values = input.split(separator: " ").compactMap { Int($0) }
    guard values.count == 2,
          let a = values.first, let b = values.last,
          (1...100).contains(a),
          (1...100).contains(b) else {
        fatalError("유효하지 않은 입력이거나 범위를 벗어났습니다.")
    }
    getCommonMultipleNum(a, b)
}