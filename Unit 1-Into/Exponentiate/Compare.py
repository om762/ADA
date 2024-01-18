import timeit

p1 = """
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

(expo(3, 1000))
"""

p2 = """
def naive(x:int,n:int):
    power = 1
    for i in range(n):
        power = power * x
    return power

naive(3, 1000)
"""

# Measure execution time using timeit
time_1 = timeit.timeit(stmt=p1, number=10)
time_2 = timeit.timeit(stmt=p2, number=10)

# Compare execution times
if time_1 < time_2:
    print("Program 1 is faster.")
elif time_1 > time_2:
    print("Program 2 is faster.")
else:
    print("Both programs have similar execution times.")