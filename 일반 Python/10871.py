nx = input().split()
n = nx[0]
x = nx[1]

list = input().split()
for i in range(0, int(n)) :
    if int(list[i]) < int(x):
        print("{} ".format(list[i]), end='')