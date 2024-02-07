func getMinimumValue(_ a: Int, _ b: Int, _ c: Int) -> Int {
    guard a >= -100, a <= 100,
          b >= -100, b <= 100,
          c >= -100, c <= 100 else { return 0 }
    return min(a, b, c)
}

if let input = readLine() {
    let values = input.split(separator: " ").compactMap { Int($0) }
    guard values.count == 3,
          let a = values.first,
            let b = values.dropFirst().first,
            let c = values.last else {
        fatalError("유효하지 않은 입력이거나 범위를 벗어났습니다.")
    }
    print(getMinimumValue(a, b, c))
}