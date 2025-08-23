arr = [2,3,4,7,11]

res = [0] * 1001 
k = 5
for i in arr: 
    res[i] = 1 
c = 0 
for i in range(arr[len(arr)-1]): 
    if res[i] == 0: 
        c+=1
    if c == k: 
        print(i)