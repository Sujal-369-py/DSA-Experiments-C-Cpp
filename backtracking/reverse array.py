def rev(arr,i,ans): 
    if i == len(arr):
        print("Base case") 
        return
    rev(arr,i+1,ans)
    ans.append(arr[i]) 
    return ans

arr = [1,2,3,4,5] 
i = 0
ans = []
final = rev(arr,i,ans)
print(final)