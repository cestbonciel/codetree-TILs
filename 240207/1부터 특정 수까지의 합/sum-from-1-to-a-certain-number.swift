func sumNumbers(_ n: Int) -> Int {
    guard n >= 1, n <= 100 else { return 0 }
    let sum = (1...n).reduce(0, +)
    return sum / 10
}

if let input = readLine() {
    let number = Int(input)!
   print(sumNumbers(number))
}