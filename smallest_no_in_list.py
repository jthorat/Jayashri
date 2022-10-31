#method-1
#list=[5,8,1,6,10]
#list.sort()
#print(list)
#print("the smallest no in the list:",list[0])


#method-2
list=[5,7,2,6,3,9,1]
small=list[0]
for i in range(0,len(list)):
    if small>list[i]:
        small=list[i]
print("the smallest no in the list:",small)
