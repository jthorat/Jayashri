start=int(input("enter the starting range no :"))
end=int(input("enter the ending range no :"))
for i in range(start,end+1):
    if(i%2!=0):
        print("all odd numbers in a given range is :",i)