func makeSquareNums(_ n: Int) {
    guard n >= 1, n <= 100 else {
        print("N은 1에서 100사이 입니다.")
        return
    }
    
    var currentNum = 1
    var row = 1

    while row <= n {
        var col = 1
        while col <= n {
            print(currentNum, terminator: " ")
            currentNum = currentNum % 9 + 1
            col += 1
        }
        print()
        row += 1
    }
}

if let input = readLine() {
    let specialN = Int(input)!
    makeSquareNums(specialN)
}