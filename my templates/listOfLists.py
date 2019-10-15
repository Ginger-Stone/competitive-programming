# input index on outer list and items of individual indexes in inner list
outerList=[]

t=int(input())
while t>0:
    innerList=[]
    n=int(input())
    while n>0:
        line=input()
        innerList.append(line)
        n-=1
    outerList.append(innerList)
    t-=1
for item in outerList:
    print(item)
