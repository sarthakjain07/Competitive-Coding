def returnPosition(array,size):
    for i in range(0,size-1):
        if array[i+1]<array[i]:
            return i+1

def findPair(a,size,position,x):
    if x<a[position]:
        return False
    elif x>(a[size-1]+a[size-2]):
        for j in range(1,position):
            for i in range(0,position-1):
                if a[i]+a[j]==x:
                    return True
        return False                   
    else:
        for j in range(position+1,size):
            for i in range(position,size-1):
                if a[i]+a[j]==x:
                    return True
        return False    


if __name__ == "__main__":
    array=[]
    size=int(input("Enter the size of array\n"))
    for i in range(0,size):
        i=int(input())
        array.append(i)
    x=int(input("Enter the nuo. for which u want the pair\n"))    
    position=returnPosition(array,size)
    print(position)
    if findPair(array,size,position,x):
        print("True")
    else:
        print("False")    