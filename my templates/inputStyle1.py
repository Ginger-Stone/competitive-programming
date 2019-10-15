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

# Try to use this input style with this values to see how it works

# 2
# 4 1024 5
# 0
# 1024
# 2048
# 3076
# 4096
# 2 128 7
# 0
# 255
# 127
# 256
# 60
# 1024
# 120