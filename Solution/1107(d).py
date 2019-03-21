n = int(input())
m = int(input())
c = 100
button = [i for i in range(10)] # with +, -
button = list(set(button) - set(map(int, input().split(' '))) if m else set())

if n == c:
        print(0)
        exit(0)


nlist = [int(i) for i in str(n)]

d = {}

for i in range(10):
    if i in button:
        d[0] = i+1
        break
    
for i in range(1, n+1):
    td1 = d[i-1] +1
    td2 = td1
    if set([int(n) for n in str(i)])<=set(button):
        td2= len(nlist)    
    d[i] = min(td1, td2)

d[500000] = 11117
for i in range(499999, n-1, -1):
    td1 = d[i+1] +1 #11118
    td2 = td1
    if set([int(n) for n in str(i)])<=set(button):
        td2= len(nlist)
    d[i] = min(d[i], td1, td2)
    
print(d[n])
