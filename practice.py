import time, random


def evaluate_n2(A, x):
    for i in range(len(A)):
        if i == 0:
            A_sum = A[0]
            continue
        sqr = 1
        for j in range(i):
            sqr = x * sqr
        A_sum = A_sum + A[i] * sqr
    return A_sum


# code for O(n^2)-time function

def evaluate_n(A, x):
    A_sum = 0
    for i in range(len(A)):
        A_sum = A_sum * x + A[len(A) - i - 1];
    return A_sum


# code for O(n)-time function

random.seed()  # random 함수 초기화
n = int(input())  # n 입력받음

A = []  # 다항식 계수 리스트
for i in range(n):
    rand_num = random.randint(-999, 999)
    A.append(rand_num)
# 리스트 A를 randint를 호출하여 n개의 랜덤한 숫자로 채움

x = random.randint(-99, 99)
before = time.perf_counter()
tmp = evaluate_n2(A, x)
after = time.perf_counter()
print('O(n^2): ', after - before)

x = random.randint(-99, 99)
before = time.perf_counter()
tmp = evaluate_n(A, x)
after = time.perf_counter()
print('O(n): ', after - before)
# evaluate_n2 호출
# evaluate_n 호출
# 두 함수의 수행시간 출력