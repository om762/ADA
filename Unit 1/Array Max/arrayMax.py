def maxOfArray(A, n):
    # A is array with size n
    if n >= 1:
        Result = A[0]
    else:
        Result = None
    for i in range(1, n):
        if A[i] > Result:
            Result = A[i]
    return Result

if __name__ == '__main__':
    array = [1,4,2,5,66,4,3,66,3,45,7]
    # array = []
    length = len(array)
    print(maxOfArray(array, length))