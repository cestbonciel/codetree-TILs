func minTotalDistance(n: Int, people: [Int]) -> Int {

    let sortedPeople = zip(people.indices, people).sorted { $0.1 < $1.1 }


    let medianPosition = sortedPeople[n / 2].0


    let totalDistance = (0..<n).reduce(0) { $0 + abs($1 - medianPosition) * people[$1] }

    return totalDistance
}


if let n = Int(readLine() ?? ""), let people = readLine()?.split(separator: " ").compactMap({ Int($0) }) {

    let result = minTotalDistance(n: n, people: people)
    print(result)
}