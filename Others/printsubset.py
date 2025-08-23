def solve(ip,op): 
    if len(ip) == 0: 
        print(op,end=" ")
        return
    op1 = op 
    op2 = op 
    op2+=ip[0]
    ip-=ip[0]
    solve(ip,op1)
    solve(ip,op2)
    return

op = " "
ip = input("Enter the set you want all subset : ") 

solve(ip,op)