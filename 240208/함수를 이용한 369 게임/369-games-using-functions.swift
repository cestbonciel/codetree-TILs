func countMultipleOfThree(_ a: Int, _ b: Int) -> Int {
    let filteredCount = (a...b).filter { num in
        let digits = String(num).compactMap { Int(String($0)) }
        return num % 3 == 0 || digits.contains(3) || digits.contains(6) || digits.contains(9)
    }.count
    
    return filteredCount
}

if let input = readLine() {
    let values = input.split(separator: " ").compactMap { Int($0) }
    guard values.count == 2,
          let a = values.first, let b = values.last,
          a >= 1, a <= 1000000,
          b >= 1, b <= 1000000 else { fatalError("잘못된 숫자의 범위를 입력했습니다.") }
    print(countMultipleOfThree(a, b))
}