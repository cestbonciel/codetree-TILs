func printSquare(_ n: Int, _ m: Int) {
    guard n >= 1, n <= 100, m >= 1, m <= 100 else { return }
    for _ in 1...n {
        print(String(repeating: "1", count: m))
    }
}

if let input = readLine() {
    let values = input.split(separator: " ").compactMap { Int($0) }
    guard values.count == 2 else { fatalError("두 수를 한 칸 띄고 입력하세요") }
    let firstNum = values[0]
    let secondNum = values[1]
    
    printSquare(firstNum, secondNum)
} else {
    print("입력이 없습니다.")
}