def order(a:int, b:int, c:int):
    if a<b and a<c:
        if b<c:
            print(a, b, c)
        else:
            print(a, c, b)
    
    elif (b<a and b<c):
        if a<b:
            print(b, a, c)
        else:
            print(b, c, a)
    
    else:
        if a<b:
            print(c, a, b)
        else:
            print(c, b, a)

order(7,3,6)