num = []

for i in range(0,10):
    num.append(int(input()))
    num[i] = num[i] % 42
    i = i+1

print(len(list(set(num))))
