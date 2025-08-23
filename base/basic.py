arr = [1,1,0,1]
place = 1 
num = 0 

for i in range(len(arr)): 
    num += place*arr[i]
    place *= 10
print(num)
real_num = 0 
pl = 1
while num >0: 
    r = num%10 
    real_num += r*pl 
    pl*=10 
    num//=10 
print(real_num)