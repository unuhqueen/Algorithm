def find_median_five(L):
    if L[0] > L[1]:
        w1 = L[0]
        l1 = L[1]
    else:
        w1 = L[1]
        l1 = L[0]
    if L[2]>L[3]:
        w2 = L[2]
        l2 = L[3]
    else:
        w2 = L[3]
        l2 = L[2]
    if w1 > w2:
        if L[4] > l1:
            w1 = L[4]
        else:
            w1 = l1
            l1 = L[4]
    else:
        if L[4]>l2:
            w2=L[4]
        else:
            w2=l2
            l2=L[4]
    if w1 > w2:
        if w2 > l1:
            return w2
        else:
            return l1
    else:
        if w1 > l2:
            return w1
        else:
            return l2

def quick_select(L, k):
    if len(L)==1:
        return L[0]
    p = L[0]
    A, B, M = [], [], []
    M.append(p)
    for x in L:
        if x < p:
            A.append(x)
        elif x > p:
            B.append(x)
        else:
            M.append(x)
    if len(A) >= k: return quick_select(A, k)
    elif len(A)+len(M) < k: return quick_select(B, k-len(A)-len(M))
    else: return p

def MoM(L, k):
    if len(L) == 1:
        return L[0]
    i=0
    A, B, M, medians = [], [], [], []
    while i+4 < len(L):
        medians.append(find_median_five(L[i:i+5]))
        i=i+5
    if i<len(L) and i+4 >= len(L):
        L2 = L[i:len(L)]
        print("L2", L2)
        medians.append(quick_select(L2, int(len(L2)/2)))
    print("medians", medians)

    mom=MoM(medians, int(len(medians)/2))
    for v in L:
        if v < mom: A.append(v)
        elif v > mom: B.append(v)
        else: M.append(v)
    print("A", A)
    print("B", B)
    print("M", M)

    if len(A) >= k: return MoM(A, k)
    elif len(A) + len(M) < k: return MoM(B, k-len(A)-len(M))
    else: return mom

n, k = map(int, input().split())
L=list(map(int, input().split()))
print(MoM(L, k))