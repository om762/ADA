def naive(x:int,n:int):
    power = 1
    for i in range(n):
        power = power * x
    return power

print(naive(3,5))
print("Original value", 3**5)