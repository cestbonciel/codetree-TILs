func printString(_ length: Int) {
    let repeatStr = "12345^&*()_"

    for _ in 1...length {
        print(repeatStr)
    }
}

// 입력 받기
if let input = readLine(), let n = Int(input), (1...100).contains(n) {
    printString(n)
} else {
    print("유효하지 않은 입력입니다.")
}