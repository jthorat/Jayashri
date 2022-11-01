# Armstrong number
Num=int(input("Enter The Number"))    # take the input from the user
temp=Num
Sum=0
while(Num>0):                         # logic of the finding armstrong number 
    Rem=Num%10
    Sum=Sum+Rem**3                    
    Num=Num//10
if (temp==Sum):                       # user input and the after logic get output is equal condition true
    print("The Armstrong Number")     # messg for user
else:
    print("Not Armstrong Number")     # messg for user
