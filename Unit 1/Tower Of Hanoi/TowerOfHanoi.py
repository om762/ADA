def Hanoi(n:int, A:str, B:str, C:str):
    # A: Start , B: Destination, C: Auxiliary
    if n == 1:
        print(f'Move disk form {A} to {B}')
    else:
        Hanoi(n-1, A, C, B)
        print(f'Move disk from {A} to {B}')
        Hanoi(n-1, C, B, A)

Hanoi(3, 'A', 'B', 'C')