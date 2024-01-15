a = input().split()

if(a[1] >= a[0] and a[0] >= a[2]) or (a[2] >= a[0] and a[0] >= a[1]):
  print(a[0])
elif (a[0] >= a[1] and a[1] >= a[2]) or (a[2] >= a[1] and a[1] >= a[0]):
  print(a[1])
elif (a[0] >= a[2] and a[2] >= a[1]) or (a[1] >= a[2] and a[2] >= a[0]):
  print(a[2])