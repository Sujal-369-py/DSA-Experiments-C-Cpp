class Solutions :
    def CountOcuurences(arr,target): 
        i,j = -1;
        l,h = 0,len(arr)-1
        while(l <= h): 
            mid = (l+h)//2
            if(arr[mid] == target and arr[mid-1] != target): 
                i = mid
                break
            elif(target < arr[mid]): 
                h = mid-1
            else: 
                l = mid+1
        l,h = 0,len(arr)-1
        while(l <= h): 
            mid = (l+h)//2
            if(arr[mid] == target and arr[mid+1] != target): 
                j = mid
                break
            elif(target < arr[mid]): 
                h = mid-1
            else: 
                l = mid+1
        return i,j






arr = [2,4,10,10,10,18,20] 
l = 0
h = len(arr)-1;
target = 10
i =j = -1
while(l <= h): 
    mid = (l+h)//2
    if(arr[mid] == target and arr[mid-1] != target): 
        i = mid
        break
    elif(target < arr[mid]): 
        h = mid-1
    else: 
        l = mid+1
l,h = 0,len(arr)-1
while(l <= h): 
    mid = (l+h)//2
    if(arr[mid] == target and arr[mid+1] != target): 
        j = mid
        break
    elif(target < arr[mid]): 
        h = mid-1
    else: 
        l = mid+1
print(i,j)
