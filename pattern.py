spaces=2
for i in range(4,0,-1):
    for j in range(i,0,-1):
        print(" ",end="")
    print("*",end="")
    
    if(i<=3):
        for k in range(1,spaces):
            print(" ",end="")
        print("*",end="")
        spaces+=2
    print("")

for i in range(1,10):
    print("*",end="")