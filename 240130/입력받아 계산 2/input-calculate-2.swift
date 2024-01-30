func executeMultiple(a: Int, b: Int) -> Int {
    guard a >= 1, a <= 100, b >= 1, b <= 100 else { return 0 }
    return a * b
}