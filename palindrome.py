Num=int(input("Enter The Number :"))
temp=Num
Sum=0
while(Num>0):
    Rem=Num%10
    Sum=Sum*10+Rem
    Num=Num//10
if(temp==Sum):
    print("The Palindrome Number")
else:
    print("Not Palindrome Number")