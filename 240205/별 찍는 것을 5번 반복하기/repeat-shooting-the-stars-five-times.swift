func printStars(_ char: Character, _ length: Int) -> String {
    
    let stars3 = String(repeating: char, count: length)
    
    for _ in 0...4 {
        print(stars3)
    }
    
    return stars3
}

printStars("*", 10)