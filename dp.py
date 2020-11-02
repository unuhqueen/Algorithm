A = [0, 1, 2]
B = [0, 1, 2]

n = int(input())
for i in range(3, n + 1):
    B.append(A[i - 1] + B[i - 1])
    A.append(A[i - 1] + A[i - 2] + 2*B[i - 2])


print(A[n])

# A[i] = A[i-1] + A[i-2] + 2*B[i-2]
# B[i] = A[i-1] + B[i-1]
# A[n]은 2*n짜리 블록을 채우는 경우의 수이고, B[n]은 2*n짜리 블록에 블록 하나가 붙어있는 형태의 블록을 채우는 경우의 수이다.