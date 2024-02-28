let input = readLine()!.split(separator: " ").map { Int($0)! }
let n = input[0]
let m = input[1]


var graph = Array(repeating: Array(repeating: 0, count: n + 1), count: n + 1)

var visited = Array(repeating: false, count: n + 1)
var vertexCnt = 0

func dfs(vertex: Int) {

    for currV in 1...n {

        if graph[vertex][currV] == 1 && !visited[currV] {
            visited[currV] = true
            vertexCnt += 1
            dfs(vertex: currV)
        }
    }
}

for _ in 0..<m {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    let v1 = input[0]
    let v2 = input[1]

    graph[v1][v2] = 1
    graph[v2][v1] = 1
}

visited[1] = true
dfs(vertex: 1)

print(vertexCnt)