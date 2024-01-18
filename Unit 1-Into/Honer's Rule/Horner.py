def horner(A:list, n:int, x:int):
    res = 0
    for i in range(n):
        res = (res * x) + A[i]
    
    return res

coffi = [7, -8, 3, -4, 2, -6]
n = 6
x = 2

print("Result: ", horner(coffi, n, x))
