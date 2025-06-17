def collatz(n):
    if n == 1:
        return 1
    elif n % 2 == 0:
        print(n // 2)
        return collatz(n // 2)
    else:
        print(3 * n + 1)
        return collatz(3 * n + 1)
    
collatz(6)