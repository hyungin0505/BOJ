time = input().split()
H = int(time[0])
M = int(time[1])

if M<45:
    if H == 0:
        print("{} {}".format(23, M+15))
    else:
        print("{} {}".format(H-1, M+15))
elif M >= 45:
    print("{} {}".format(H, M-45))