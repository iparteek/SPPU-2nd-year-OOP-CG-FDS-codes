n = int(input("Enter the total no. of student in class: "))
data = []
for i in range(1,n+1):
    a = int(input("Enter %ist student roll no.: " %(i)))
    data.append(a)
x = int(input("\nEnter the roll no. to be search: "))

def linear():
    flag = 0
    for i in range(n):
        if (x == data[i]):
            flag = 1
            print("Roll number %i attended training program"%(x))
            break
    if flag == 0:
        print("Roll number %i does not attended training program"%(x))

def sentinel():
    last = data[n-1]
    data[n-1] = x
    i = 0
    while(data[i] != x):
        i += 1

    data[n-1] = last
    if((i < n-1 or (data[n-1] == x))):
       print("Roll number %i attended training program"%(x))
    else:
        print("Roll number %i does not attended training program"%(x))

def binary():
    data.sort()
    print("\n* Here we want the roll nos. in sorted form so we already sorted it")
    flag = 0
    first = 0
    last = n-1
    while(first <= last):
        mid = (first+last)//2
        if(x == data[mid]):
            flag = 1
            print("Roll number %i attended training program"%(x))
            break
        elif( x < data[mid]):
            last = mid-1
        else:
            first = mid+1
    if(flag == 0):
        print("Roll number %i does not attended training program"%(x))

def fibonacci():
    data.sort()
    print("\n* Here we want the roll nos. in sorted form so we already sorted it")

    m1 = 1
    m2 = 0
    m = m1+m2
    while(m<n):
        m2 = m1
        m1 = m
        m = m1+m2
    flag = 0
    offset = -1
    while(m>n):
        i = offset + m2
        if (data[i]<x):
            m = m1
            m1 = m2
            m2 = m-m1
            offset = i
        elif(data[i]>x):
            m = m2
            m1 = m1-m
            m2 = m-m1
        else:
            flag = 1
            print("Roll number %i attended training program"%(x))
            break
    if(flag == 0):
        print("Roll number %i does not attended training program"%(x))
        
print("\nBy which method you want to search")
print("1.Linear Search\n2.Sentinel Search\n3.Binary Search\n4.Fibonacci Search\n5.Quit")
while True:
    p = int(input("\nEnter the Choice you want: "))
    if p == 1:
        linear()
    elif p == 2:
        sentinel()
    elif p == 3:
        binary()
    elif p == 4:
        fibonacci()
    elif p == 5:
        quit()
    else:
        print("Invalid Option")
    
