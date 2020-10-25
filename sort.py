import random, timeit

global Qc, Qs, Mc, Ms, Hc, Hs
Qc, Qs, Mc, Ms, Hc, Hs = 0, 0, 0, 0, 0, 0

def quick_sort(A, first, last):
    global Qc, Qs
    if first >= last: return
    left = first + 1
    right = last
    pivot = A[first]
    while left <= right:
        while left <= last and A[left] < pivot:
            left = left + 1
            Qc = Qc + 1
        while right > first and A[right] > pivot:
            right = right - 1
            Qc = Qc + 1
        if left <= right:
            temp = A[left]
            A[left] = A[right]
            A[right] = temp
            Qs = Qs + 1
            left = left + 1
            right = right - 1
    temp = A[right]
    A[right] = A[first]
    A[first] = temp
    quick_sort(A, first, right-1)
    quick_sort(A, right+1, last)

def merge_two_sorted_lists(A, first, last):
    global Mc, Ms
    m = int((first + last) / 2)
    i = first
    j = m + 1
    B=[]
    while i <= m and j <= last:
        if A[i] <= A[j]:
            B.append(A[i])
            i = i + 1
            Mc = Mc + 1
        else:
            B.append(A[j])
            j = j + 1
            Mc = Mc + 1
    for k in range(i, m+1):
        B.append(A[k])
    for k in range(j, last+1):
        B.append(A[k])
    for i in range(first, last+1):
        A[i] = B[i-first]
        Ms = Ms + 1

def merge_sort(A, first, last):
    if first >= last: return
    merge_sort(A, first, (first+last)//2)
    merge_sort(A, (first+last)//2+1, last)
    merge_two_sorted_lists(A, first, last)

def heapify_down(A, k, n):
    global Hc, Hs
    while 2*k + 1 < n:
        L = 2*k + 1
        R = 2*k + 2
        if L < n and A[L] > A[k]:
            m = L
            Hc = Hc + 1
        else:
            m = k
            Hc = Hc + 1
        if R < n and A[R] > A[m]:
            m = R
            Hc = Hc + 1
        if m != k:
            temp = A[k]
            A[k] = A[m]
            A[m] = temp
            k = m
            Hc = Hc + 1
            Hs = Hs + 1
        else:
            break

def make_heap(A):
    n = len(A)
    for k in range(n-1, -1, -1):
        heapify_down(A, k, n)
    return A

def heap_sort(A):
    global Hc, Hs
    A = make_heap(A)
    n = len(A)
    for k in range(len(A)-1, -1, -1):
        temp = A[0]
        A[0] = A[k]
        A[k] = temp
        n = n-1
        heapify_down(A, 0, n)
        Hs = Hs + 1
## 여기에 세 가지 정렬함수를 위한 코드를...
##

# 아래 코드는 바꾸지 말 것!
# 직접 실행해보면, 어떤 값이 출력되는지 알 수 있음
#

def check_sorted(A):
	for i in range(n-1):
		if A[i] > A[i+1]: return False
	return True

#
# Qc는 quick sort에서 리스트의 두 수를 비교한 횟수 저장
# Qs는 quick sort에서 두 수를 교환(swap)한 횟수 저장
# Mc, Ms는 merge sort에서 비교, 교환(또는 이동) 횟수 저장
# Hc, Hs는 heap sort에서 비교, 교환(또는 이동) 횟수 저장
#
n = int(input())
random.seed()
A = []
for i in range(n):
    A.append(random.randint(-1000,1000))
B = A[:]
C = A[:]

print("")
print("Quick sort:")
print("time =", timeit.timeit("quick_sort(A, 0, n-1)", globals=globals(), number=1))
print("  comparisons = {:10d}, swaps = {:10d}\n".format(Qc, Qs))


print("Merge sort:")
print("time =", timeit.timeit("merge_sort(B, 0, n-1)", globals=globals(), number=1))
print("  comparisons = {:10d}, swaps = {:10d}\n".format(Mc, Ms))

print("Heap sort:")
print("time =", timeit.timeit("heap_sort(C)", globals=globals(), number=1))
print("  comparisons = {:10d}, swaps = {:10d}\n".format(Hc, Hs))

assert(check_sorted(A))
assert(check_sorted(B))
assert(check_sorted(C))
# 진짜 정렬되었는지 check한다. 정렬이 되지 않았다면, assert 함수가 fail됨!


