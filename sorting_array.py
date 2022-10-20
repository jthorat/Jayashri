Data_List = [1, 4, 7, 8,-9,-1, 5, 3]
New_List=[]
while Data_List:
    Min = Data_List[0]
    for count in Data_List:
        if count<Min:
            Min = count
    New_List.append(Min)
    Data_List.remove(Min)
print(New_List)
