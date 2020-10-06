x=y=0//defining in single line
d=1
ip=int(input())
while(ip!=0):
    x=x+10*d
    ip-=1
    d+=1
    if(ip==0):
        continue
    y=y+10*d
    ip-=1
    d+=1
    if(ip==0):
        continue
    x=x-10*d
    ip-=1
    d+=1
    if(ip==0):
        continue
    y=y-10*d
    ip-=1
    d+=1
    if(ip==0):
        continue
    x=x+10*d
    ip-=1
    d+=1
    if(ip==0):
        continue
print(x,y,end="")
   
    
    
    