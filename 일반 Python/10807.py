n = input()
list = input().split()
v = input()

result = 0

for i in range(0,int(n)):
    if list[i] == v:
        result = result + 1

print(result)
    