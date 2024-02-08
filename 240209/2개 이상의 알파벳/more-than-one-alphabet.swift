func hasMultipleDistinctCharacters(_ str: String) -> String {
    var characterSet = Set<Character>()

    for char in str {
        if char.isLetter && char.isLowercase {
            characterSet.insert(char)
            if characterSet.count >= 2 {
                return "Yes"
            }
        } else {
            return "소문자 알파벳으로 입력해주세요."
        }
    }

    return "No"
}


if let input = readLine() {
    let result = hasMultipleDistinctCharacters(input)
    print(result)
}