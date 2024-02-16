func printHelloWorld(_ n: Int) {
    let strs =  "HelloWorld"
    guard n >= 1, n <= 20 else { return }
    
    if n == 1 {
        print(strs)
        return
    }
    print(strs)
    printHelloWorld(n - 1)
    
}

if let input = readLine() {
    let n = Int(input)!
    printHelloWorld(n)
}