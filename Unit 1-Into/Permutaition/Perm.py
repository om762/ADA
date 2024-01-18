def perm(A:list, n:int, k:int):
    # A is list of elements ; k is number of elements in permuatation; n is size of list
    if n == k:
        print(A)
    else:
        for i in range(0, n):
            A[i], A[k] = A[k], A[i]
            perm(A, n, k+1)
            A[i], A[k] = A[k], A[i]

s = ['a', 'b', 'c,', 'd']
perm(s,len(s), 0)