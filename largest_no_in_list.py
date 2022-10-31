list=[11,66,90,5,70,100]
large=list[0]
for i in range(0,len(list)):
    if (large<list[i]):
        large=list[i]
print("the largest number in the list:",large)