# 문제
# 문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오. 
# 즉, 첫 번째 문자를 R번 반복하고, 
# 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다. 
# S에는 QR Code "alphanumeric" 문자만 들어있다.

# QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다.

# 입력
# 첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다. 
# 각 테스트 케이스는 반복 횟수 R(1 ≤ R ≤ 8), 문자열 S가 공백으로 구분되어 주어진다. 
# S의 길이는 적어도 1이며, 20글자를 넘지 않는다. 

# 출력
# 각 테스트 케이스에 대해 P를 출력한다.


 # 테스트 케이스 개수 t에 입력
t = int(input()) 

# t만큼 반복
for i in range(t): 

  # p는 입력받을 문자열
  p = input().split() 

  # p의 첫 번째 문자를 r에 저장
  r = int(p[0]) 

  # s에 두 번째 문자를 리스트 형태로 저장
  s = list(p[1]) 

  # s의 길이만큼 반복
  for v in range(len(s)): 
    print(s[v] * r, end='') # 줄바꿈 없애기 위해 end='' 사용

  # 다음 테스트 케이스에서 줄바꿈
  print() 


