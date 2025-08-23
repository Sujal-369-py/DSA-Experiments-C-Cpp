def fib(n):
    print("Entering fib(", n, ")")
    if n == 0: return 0
    if n == 1: return 1
    ans = fib(n-1) + fib(n-2)
    print("Returning from fib(", n, ") with ans =", ans)
    return ans

ans = fib(6) 
print(ans)