let input = readLine()!.split(separator: "-").map { String($0) }
print("\(input[0])-\(input[2])-\(input[1])")