def expo(x:int, n:int):
    m = n
    power = 1
    z = x
    
    while (m > 0):
        while (m % 2 == 0):
            m = m/2
            z = z * z
        m = m - 1
        power = power * z
    return power

print(expo(3,5))
print("Original value", 3**5)