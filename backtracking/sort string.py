s = "aashjsa*9aahj***" 

res = [] 
[res.pop() if i == "*" else res.append(i) for i in s] 
print(res)