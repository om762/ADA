def coffi(n:int, k:int):
    if k > n:
        return 0
    if  k == 0 or k == n:
        return 1
    
    return coffi(n-1, k-1) + coffi(n-1, k)

print(coffi(7,6))