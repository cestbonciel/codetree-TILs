if let input = readLine() {
    let values = input.split(separator: " ").compactMap { Int($0) }

    guard values.count == 2,
          let a = values.first, let b = values.last,
          (1...100).contains(a),
          (1...100).contains(b) else {
        fatalError("유효하지 않은 입력이거나 범위를 벗어났습니다.")
    }

    let sum = a + b
    let difference = a - b

    if b != 0 {
        let quotient = a / b
        let remainder = a % b

        print(sum)
        print(difference)
        print(quotient)
        print(remainder)
    } else {
        print("0으로 나눌 수 없습니다.")
    }
} else {
    print("입력이 없습니다.")
}