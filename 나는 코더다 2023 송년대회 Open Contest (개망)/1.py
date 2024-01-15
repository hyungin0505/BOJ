n = int(input())
A1 = input().split()
A2 = input().split()

# 양식장
game = [[0 for j in range(n)] for i in range(2)]
for z in range(0,n) :
    game[0][z]=(int(A1[z]))
    game[1][z]=(int(A2[z]))
    z += 1

auto_i = 0
auto_j = 0

dave_i = 1
dave_j = n-1

def find(i, j):
    # 위만
    if i == 0 and j != 0 or j != n-1:
        print()
    # 아래만
    elif i == 1 and j != 0 or j != n-1:
        print()
    # 위 오른만
    # 위 왼만
    # 아래 오른만
    # 아래 왼만