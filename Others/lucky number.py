arr = [1,2,2,3,3,3] 
ht = {} 
for i in range(len(arr)): 
    if arr[i] in ht: 
        ht[arr[i]]+=1 
    else: 
        ht[arr[i]] = 1 

print(ht[2])