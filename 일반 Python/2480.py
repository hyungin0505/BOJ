dice=sorted(input().split())
a,b,c=int(dice[0]),int(dice[1]),int(dice[2])
if a==b==c:print(10000+a*1000)
elif a!=b and b!= c and c!=a:print(c*100)
else: 
    if a==b: print(1000+a*100)
    elif b==c: print(1000+b*100)
    elif c==a: print(1000+c*100)