def Selection(A:list, n:int) -> list:
    for i in range(n):
        for j in range(n):
            if A[i] < A[j]:
                A[i], A[j] = A[j], A[i]

    return A

if __name__ == '__main__':
    Array = [1,3,34,3,5,3,5,6,3,6,44,56,32,6]
    lenght = len(Array)
    print(Selection(Array, lenght))
    


'''array = input("Enter the elements of array : ")

#List to Array of numbers
array = array.split(" ")
for i in range(len(array)):
    array[i] = int(array[i])

# Selection Sort
for i in range(len(array)-1):
    for j in range(i+1, len(array)):
        if array[i] > array[j]:
            array[i], array[j] = array[j], array[i]

print(array)'''