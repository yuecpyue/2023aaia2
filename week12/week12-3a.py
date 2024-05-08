#week12-3a.py 列出N以下的全部質數較慢
n=int(input('請輸入一個數字:'))
def isPrime(n):
  for i in range(2,n):
    if n%i==0:
      return False
  return True
ans=0
for i in range(2,n+1):
  if isPrime(i): ans+=1
a
print(ans)