num =int(input("Enter the range: "))
for n in range(2,num):
    for i in range(2,n):
        if(n%i==0):
            break
    else:
        print(n)   
