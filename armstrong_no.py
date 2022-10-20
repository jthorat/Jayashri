Num=int(input("Enter The Number"))
temp=Num
Sum=0
while(Num>0):
    Rem=Num%10
    Sum=Sum+Rem**3
    Num=Num//10
if (temp==Sum):
    print("The Armstrong Number")
else:
    print("Not Armstrong Number")
