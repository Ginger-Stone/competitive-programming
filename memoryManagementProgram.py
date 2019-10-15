outerList=[]

t=int(input())
while t>0:
    innerList=[]
    p,s,n=[int(n) for n in input().split()]
    #the first three in each inner list represent the inputs p,s,n
    innerList.append(p) #index 0
    innerList.append(s) #index 1
    innerList.append(n) #index 2
    while n>0:
        line=input()
        innerList.append(line)
        n-=1
    outerList.append(innerList)

    t-=1
for item in outerList:
    print(item)