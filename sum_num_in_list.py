list=[11,22,33,44,55,66,77]
print("original list:",list)
res=[]
for elem in list:
    sum=0
    for digit in str(elem):
        sum=sum+int(digit)
    res.append(sum)
print("the sum of number digits in given list is:",res)