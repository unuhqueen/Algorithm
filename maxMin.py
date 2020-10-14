def tuple_select_max(a): #max1 함수일때, tuple에서 값을 꺼내는 함수
    if len(a) == 1 or a[0] > a[1]:
        a_select = a[0]
    else:
        a_select = a[1]
    return a_select

def tuple_select_min(a): #min1 함수일때, tuple에서 값을 꺼내는 함수
    if len(a) == 1 or a[0] < a[1]:
        a_select = a[0]
    else:
        a_select = a[1]
    return a_select

def ab_select(a_select, b_select, str): #a_select와 b_select 중 최대값 또는 최소값을 구하는 함수
    if str == 'Max':
        if a_select > b_select:
            return a_select
        else:
            return b_select
    else:
        if a_select < b_select:
            return a_select
        else:
            return b_select

def max1(a, b): #두 수 중 최대값 구하는 함수
    a_select = tuple_select_max(a)
    b_select = tuple_select_max(b)
    ab_select1 = ab_select(a_select, b_select, 'Max')
    return ab_select1

def min1(a, b): #두 수 중 최소값 구하는 함수
    a_select = tuple_select_min(a)
    b_select = tuple_select_min(b)
    ab_select1 = ab_select(a_select, b_select, 'Min')
    return ab_select1

def min_max2(A):
    if len(A) == 1: # 리스트의 길이가 1일 경우 리스트의 값 return
        t = A[0],
        return t
    else: # 리스트의 길이가 2 이상일 경우 재귀함수 호출
        middle = int(len(A)/2)
        return min1(min_max2(A[:middle]), min_max2(A[middle:])), max1(min_max2(A[:middle]), min_max2(A[middle:]))

A = list(map(int,input().split())) # 정수 여러개 리스트 형태로 입력받음

m, M = min_max2(A)
print(m, M)