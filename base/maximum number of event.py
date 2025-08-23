arr = [[1,2],[2,3],[3,4],[1,2]]
count = 0 
ht = {}

for i in range(len(arr)):
    attended = False
    for j in range(len(arr[i])):
        if not attended: 
            if arr[i][j] in ht: 
                if arr[i][j] == False: 
                    arr[i][j] = True 
                    attended = True
                    count+=1 
                else: 
                    continue 
            else: 
                ht[arr[i][j]] = True
                count+=1
                attended = True
        else: 
            ht[arr[i][j]] = False
print(count)
