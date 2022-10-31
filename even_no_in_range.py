start=int(input("enter the starting range number:"))
end=int(input("enter the ending range number:"))
for i in range(start,end+1):
    if(i%2==0):
        print("all even numbers in a range is :",i)