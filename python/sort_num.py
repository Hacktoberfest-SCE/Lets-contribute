#code to sort the numbers in a list

#list of numbers
list = [-1,5,8,34,2,1,-67,-3,23]
sort_list= []

while list:
    min = list[0]  
    for x in list: 
        if x < min:
            min = x
    sort_list.append(min)
    list.remove(min)    

print(sort_list)
