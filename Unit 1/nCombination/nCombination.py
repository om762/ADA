def comb(n:int, A:list, out:list):
    if n == 0:
        out.append(A)
    else:
        comb(n-1, A.append(True), out)
        comb(n-1, A.append(False), out)
    
    return out

outx = []
res = comb(3, [], outx)

for i in range(len(res)):
    print(i , res[i])
    # print(i , outx[i]) This line that in python when a list is passed in a function the function do not
    # create a copy of the function rather than that it start working on the list directy so whatever
    # changes are perform on the passed list directly the list in the main function
    
    
    