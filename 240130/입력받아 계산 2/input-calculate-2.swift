func executeMultiple(a: Int, b: Int) {
    guard a >= 1, a <= 100 && b >= 1, b <= 100 else { return }
    print(a * b, separator: " ")
}