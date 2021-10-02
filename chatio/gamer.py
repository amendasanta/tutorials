def answer():
    
    ans=0
    for i in x:

        yv=[]
        for v in val:
            if(v[0] >= i):
                yv.append([v[1],v[2]])

        yv.sort()

        value=0
        for v in yv:

            value+=v[1]
            ans=max(ans,value - k*(v[0]-i))

    return  ans



n,k=map(int,input().split())

val,x,y=[],[],[]
for i in range(n):
    xc,yc,value=map(int,input().split())
    x.append(xc)
    y.append(yc)
    val.append([xc,yc,value])

d=dict()

print(answer())
