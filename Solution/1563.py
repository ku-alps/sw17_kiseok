###num = int(input())
### 0 : 출석, 1: 지각, 2: 결석
##ls = [f'{i}{j}{k}{l}' for i in range(3) for j in range(3) for k in range(3) for l in range(3)]
##print(len(ls))
## 1000이 들어오면 for문 1000중첩해야함. 미침.


n = 4
ls = [[[[[0]*n]*3]*3]*3]*2
ls[1][1][1][1][1] = 1
print(ls)



    
