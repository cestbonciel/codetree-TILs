func printStars(_ n: Int, currentRow: Int = 1) {
    guard n >= 1, n <= 100, currentRow <= 2 * n else { return }

    if currentRow <= n {
        let stars = String(repeating: "* ", count: n - currentRow + 1)
        print(stars)
    } else {
        let stars2 = String(repeating: "* ", count: currentRow - n)
        print(stars2)
    }

    printStars(n, currentRow: currentRow + 1)
}

// 입력 받기
if let n = readLine(), let number = Int(n) {
    printStars(number)
}