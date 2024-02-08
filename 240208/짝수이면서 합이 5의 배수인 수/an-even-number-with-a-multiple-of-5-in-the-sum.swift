func findSpecialNum(_ n: Int) -> String {
    guard n > 9, n < 100 else { return "No" }
    let digits = String(n).compactMap { Int(String($0)) }
    
    let sum = digits.reduce(0, +)

    return (n % 2 == 0) && sum % 5 == 0 ? "Yes" : "No"
}


if let input = readLine() {
    let value = Int(input)!
    print(findSpecialNum(value))
}