def climb(n):
    if n < 0:
        return 0
    if n == 0:
        return 1
    return climb(n - 1) + climb(n - 2)

print(climb(3))
