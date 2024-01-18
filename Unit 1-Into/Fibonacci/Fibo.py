def fibo(n:int, a:int, b:int):
    if n > 0:
        print(a, end= ', ')
        a, b = b, a+b
        fibo(n-1, a, b)

fibo(5, 0, 1)