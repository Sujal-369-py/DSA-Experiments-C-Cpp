arr = [1,2,3,4,5,6,7,8] 
l = 0
h = len(arr)-1;
target = 7

while(l <= h): 
    mid = (l+h)//2
    if(arr[mid] == target): 
        print(f"founded at index : {mid}")
        break
    elif(target < arr[mid]): 
        h = mid-1
    else: 
        l = mid+1
if(l > h): 
    print("Not found")