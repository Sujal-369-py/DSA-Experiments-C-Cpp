nums = [7,1,5,4]

m = float('inf') 
diff = float('-inf') 

for i in nums: 
    m = min(i,m) 
    print(m)
    diff = max(diff,m-1) 
    print(diff)
print("Hello",diff)
