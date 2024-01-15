def perfect(n):
    sum = 0
    for i in range(1, int(n/2 + 1)):
        if n%i == 0:
            sum = sum + i
    if sum == n:
        return True
    else:
        return False

for i in range(100):
    if perfect(i):
        print(i)