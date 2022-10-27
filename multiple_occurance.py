list=[2,4,6,2,9,5,2,9,2,11]
print(list)
#x=2
x=int(input("enter the number:"))
count=0
for elem in list:
    if elem==x:
        count=count+1
print("the number of multiple time occure is:",count)