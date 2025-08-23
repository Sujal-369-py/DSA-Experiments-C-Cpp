n = 25

binary = 0
place = 1

while n > 0:
    digit = n%2
    binary+=digit * place
    n//=2
    place*=10
print("binary form : ",binary)