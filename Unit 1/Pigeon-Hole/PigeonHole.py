import random
def holeCreater(P, H):
    pigeon_hole_assignment = {}
    for h in range(H):
        pigeon_hole_assignment[h] = []

    emptyHolePosition = list(pigeon_hole_assignment.keys())
    currentBird = 0
    while (P != 0):
        if len(emptyHolePosition) != 0:
            pos = random.choice(emptyHolePosition)
            pigeon_hole_assignment[pos].append(currentBird)
            
            # Effect
            emptyHolePosition.remove(pos)
            P = P-1
            currentBird += 1

        else:
            emptyHolePosition = list(pigeon_hole_assignment.keys())
            
    return pigeon_hole_assignment


# How you fill the 11 Pigeons in 6 Holes
print(holeCreater(11, 6))