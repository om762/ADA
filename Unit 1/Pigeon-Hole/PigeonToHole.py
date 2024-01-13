import random
def p2h(P, H):
    rel = {}
    for i in range(P):
        rel[i] = None
        
    currentPegeon = 0
    emptyHole = list(range(H))
    while P != 0:
        
        if emptyHole:
            hole =  random.choice(emptyHole)
            rel[currentPegeon] = hole
            
            #effect
            currentPegeon += 1
            P = P-1
            emptyHole.remove(hole)
        else:
            emptyHole = list(range(H))
    print(rel)
    return rel

def findCollision(p2h):
    NumberOfPigeon = len(p2h)
    nonReapeatelHole = []
    for p in range(NumberOfPigeon):
        if (p2h[p] in nonReapeatelHole):
            return p2h[p]
        else:
            nonReapeatelHole.append(p2h[p])

print(findCollision(p2h(5,4)))
