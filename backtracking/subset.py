def solve(ip,op,res): 
    if len(ip) == 0: 
        res.append(op[:]) 
        return res 
    op1 = op[:] 
    op2 = op[:] 
    op2.append(ip[0])
    solve(ip[1:],op1,res)
    solve(ip[1:],op2,res)
    return res 

ip = [1,2,3,] 
op = [] 
res = [] 
ans = solve(ip,op,res) 
print(ans)
