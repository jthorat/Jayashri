Num=int(input("Enter The Number :"))
First_Num=0
Second_Num=1
if(Num<=0):
    print("The requested series is",First_Num)
else:
    print(First_Num,Second_Num,end="")
for count in range(2,Num):
    Next=First_Num+Second_Num
    print(Next,end="")
    First_Num=Second_Num
    Second_Num=Next
