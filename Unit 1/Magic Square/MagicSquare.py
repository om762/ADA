def magic(n):
    if n % 2 == 0:
        print("n is even")
        return
    
    # Empty nXn sqaure
    square = [[0]*n for i in range(n)]
    j = int((n-1)/2)
    i = 0
    square[i][j] = 1
    
    
    for val in range(2, n**2+1):
        if i >= 1:
            k = i-1
        else:
            k = n-1
        
        if j >= 1:
            l = j-1
        else:
            l = n-1
        
        if square[k][l] >= 1:
            i = (i+1) % n
        
        else:
            i = k
            j = l
        
        square[i][j] = val
        
        
    for i in range(n):
        for j  in range(n):
            print(square[i][j], '\t', end="")
        print()
    
    return square

    
def checkMagic(mat):
    rowSum = []
    for i in range(len(mat)):
        rowSum.append(sum(mat[i]))
    
    colSum = []
    for j in range(len(mat)):
        colSum.append(sum(mat[:][j]))
        
    digSum = [0,0]
    for i in range(len(mat)):
        digSum[0] += mat[i][i]
        digSum[1] += mat[len(mat) - i -1][len(mat) - i - 1]
        
    print(rowSum)
    print(colSum)
    print(digSum)
    
if __name__ == "__main__":
    p = int(input("Enter a number :"))
    sq = magic(p)
    print("\n MAGIC CHECK")
    checkMagic(sq)