list=[2,7,9,4,5,8,3,1,10]
even=0
odd=0
#count1=0
for i in list:
    if(i%2==0):
        even=even+1
    else:
        odd=odd+1
print("total even no =",even)
print("total odd no =",odd)
