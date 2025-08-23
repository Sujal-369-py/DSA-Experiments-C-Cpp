def permutation(ip, op, res): 
    print(f"CALL -> ip: {ip}, op: {op}")
    
    if len(ip) == 0: 
        res.append(op[:]) 
        print(f"Base condition met. op: {op}")
        return 
    for i in range(len(ip)):
        print(f"Picking ip[{i}] = {ip[i]}")
        
        new_ip = ip[:i] + ip[i+1:]
        new_op = op + [ip[i]]

        print(f"Before Recursion: new_ip = {new_ip}, new_op = {new_op}")
        permutation(new_ip, new_op, res)
        print(f"After Recursion: backtracked to ip = {ip}, op = {op}")

    print(f"END of call for ip: {ip}, op: {op}\n")
    return res

ip = [1,2,3,4,5,6,7,8,9,10]
op = []
res = [] 
abc = permutation(ip, op, res)
print("Final Result:", abc)
