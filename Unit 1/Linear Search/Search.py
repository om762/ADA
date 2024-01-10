def lin(A, x, n):
    for i in range(n):
        if A[i] == x:
            print("Element Position:", i)
            return
    print("Element not found")


A = [1, 2, 3, 4, 5]
x = 3
n = len(A)
lin(A, x, n)
