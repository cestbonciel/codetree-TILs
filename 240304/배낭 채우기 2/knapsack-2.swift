enum ValidationError: Error {
    case invalidInput(String)
}

func knapsackMaxValue(n: Int, m: Int, jewels: [(weight: Int, value: Int)]) -> Int {
    var dp = Array(repeating: Array(repeating: 0, count: m + 1), count: n + 1)

    for i in 1...n {
        let weight = jewels[i - 1].weight
        let value = jewels[i - 1].value

        for w in 1...m {
            if weight <= w {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weight] + value, dp[i][w - weight] + value)
            } else {
                dp[i][w] = dp[i - 1][w]
            }
        }
    }

    return dp[n][m]
}

func readInput() throws -> (n: Int, m: Int, jewels: [(weight: Int, value: Int)]) {
    guard let input = readLine() else {
        throw ValidationError.invalidInput("입력을 읽는 데 실패했습니다.")
    }

    let inputValues = input.split(separator: " ").compactMap { Int($0) }

    guard inputValues.count == 2 else {
        throw ValidationError.invalidInput("입력이 올바르지 않습니다. N과 M 값을 정확히 입력해주세요.")
    }

    let n = inputValues[0]
    let m = inputValues[1]

    var jewels = [(weight: Int, value: Int)]()

    for _ in 0..<n {
        guard let jewelInfoString = readLine() else {
            throw ValidationError.invalidInput("보석 정보를 읽는 데 실패했습니다.")
        }

        let jewelInfo = jewelInfoString.split(separator: " ").compactMap { Int($0) }

        guard jewelInfo.count == 2 else {
            throw ValidationError.invalidInput("보석 정보 입력이 올바르지 않습니다. 무게와 가치를 제대로 입력해주세요.")
        }

        jewels.append((weight: jewelInfo[0], value: jewelInfo[1]))
    }

    return (n, m, jewels)
}

do {
    let inputValues = try readInput()
    let result = knapsackMaxValue(n: inputValues.n, m: inputValues.m, jewels: inputValues.jewels)
    print(result)
} catch let error as ValidationError {
    print("에러: \(error)")
} catch {
    print("알 수 없는 에러가 발생했습니다.")
}