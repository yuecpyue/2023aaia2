#week12-3.py 質數的篩子法
table=[True]*224740
ans=0
for i in range(2,224740):
  if(table[i]==True):
    ans+=1
    for k in range(i*i,224740,i):
      table[k]=False
print('找到',ans,'個質數')
