def know(arr, i, ans):
    if i == len(arr):
        print("base case")
        return ans
    ans += arr[i]
    print("Before recursive call:", ans)
    result = know(arr, i + 1, ans)
    print("After recursive call:", ans)  # This will print now
    return result

arr = [1,2,3,4,5]
ans = 0 
i = 0 
print(know(arr,i,ans))
