from collections import deque

# dx[0], dy[0] => 오른쪽
# dx[1], dy[1] => 왼쪽
# dx[2], dy[2] => 아래
# dx[3], dy[3] => 위
dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

n, m = map(int, input().split()) # 한 줄에 두 수 받기
a = [list(map(int, list(input()))) for _ in range(n)] # 리스트 받아서 정수로 바꾸고 이걸 n줄 반복
q = deque()
check = [[False] * m for _ in range(n)] # 방문리스트, 전부 false 처리
dist = [[0] * m for _ in range(n)] # 시작 노드로부터의 거리

# 시작점
q.append((0, 0)) # queue에 시작점 추가
check[0][0] = True # 시작점 방문 -> True
dist[0][0] = 1 # 거리 1로 시작

while q: # q에 아무것도 없을 때까지 반복
    x, y = q.popleft() # q에 있는 값을 꺼낸다.
    for k in range(4): #위, 아래, 왼쪽, 오른쪽 4번 반복
        nx, ny = x + dx[k], y + dy[k] # 현재 노드에서 위, 아래, 왼쪽, 오른쪽 방향 중 하나 대입
        if 0 <= nx < n and 0 <= ny < m: # 향하는 방향이 matrix 범위를 넘지 않을 때
            if check[nx][ny] == False and a[nx][ny] == 1: # 방문하지 않은 노드이고 값이 1일때
                q.append((nx, ny)) # q에 노드 추가
                dist[nx][ny] = dist[x][y] + 1 # 거리는 현재 거리 + 1
                check[nx][ny] = True # 방문한 노드로 지정

print(dist[n - 1][m - 1]) # 마지막 노드까지의 거리 출력