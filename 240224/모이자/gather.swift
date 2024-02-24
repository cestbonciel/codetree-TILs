func minTotalDistance(n: Int, people: [Int]) -> Int {
    // 사람들의 위치를 정렬
    let sortedPeople = zip(people.indices, people).sorted { $0.1 < $1.1 }

    // 중간값에 해당하는 집의 위치
    let medianIndex = sortedPeople[n / 2].0

    // 각 집까지의 이동 거리의 합 계산
    let totalDistance = (0..<n).reduce(0) { (result, index) in
        let distance = abs(index - medianIndex) * people[index]
        return result + distance
    }

    return totalDistance
}

// 입력 받기
if let n = Int(readLine() ?? ""), let people = readLine()?.split(separator: " ").compactMap({ Int($0) }) {
    // 결과 출력
    let result = minTotalDistance(n: n, people: people)
    print(result)
}