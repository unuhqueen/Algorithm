vertexList = ['0', '1', '2', '3', '4', '5', '6']
edgeList = [(0,1), (1,0), (0,2), (2,0), (1,3), (3,1), (2,4), (4,2), (2,5), (5,2), (4,6), (6,4)]
graphs = (vertexList, edgeList)


def bfs(graph, start):
    vertexList, edgeList = graph
    visitedList = []
    queue = [start]

    adjacencyList = [[] for vertex in vertexList] #vertex 개수만큼 빈 리스트 생성
    for edge in edgeList: # 첫번째 (0,1)로 예를 들면
        adjacencyList[edge[0]].append(edge[1]) #adjacencyList[0]에 1을 값으로 추가

    while queue:
        current = queue.pop() #queue의 첫번째 index가 현재값
        for neighbor in adjacencyList[current]: #현재값에 이웃한 노드들을 돎
            if not neighbor in visitedList: #방문한 노드가 아닐 경우
                queue.insert(0, neighbor) #queue의 맨 앞에 추가
        visitedList.append(current) #현재값은 역할을 끝냈으니 방문 노드에 추가
    return visitedList #bfs가 끝나면 visitedList를 return

print(bfs(graphs, 0))
