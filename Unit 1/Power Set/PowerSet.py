def powerSet(elements, currIndex, currSubset):
    n = len(elements)

    if currIndex == n:
        return

    print(currSubset)

    for i in range(currIndex + 1, n):
        currSubset.append(elements[i])
        powerSet(elements, i, currSubset)
        currSubset.pop()
    return

my_list = [1, 2, 3]
powerSet(my_list, -1, [])
