t = int(input())
list = []

for i in range(t):
    a, b = (input().split())
    list.append(int(a)+int(b))
for i in range(t):
    print("{}".format(int(list[i])))