def sol(ip,op,res,check): 
    if len(ip) == 0: 
        if tuple(op) in check: 
            return
        res.append(op[:]) 
        check.add(tuple(op[:]))
        return
    op1 = op[:] 
    op2 = op[:] 
    op2.append(ip[0])
    sol(ip[1:],op1,res,check)
    sol(ip[1:],op2,res,check)

ip = [1,2,2] 
op = [] 
res = [] 
check = set() 
sol(ip,op,res,check) 
print(res)