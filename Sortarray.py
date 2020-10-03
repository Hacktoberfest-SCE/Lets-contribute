#take a list of nos for sorting
unsorted_list = [3, 1, 0, 9, 4]
sorted_list = []

while unsorted_list:
    minimum = unsorted_list[0]
    for item in unsorted_list:
        if item < minimum:
            minimum = item
    sorted_list.append(minimum)
    unsorted_list.remove(minimum)

#print the sorted list of array
print(sorted_list)
