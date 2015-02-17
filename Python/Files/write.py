set_of_strings = ["one", "two", "three", "four"]

test = open("another_file", "a")

with open("test.txt", "w") as file:
    for string in set_of_strings:
	file.writelines(string)
	test.writelines(string)

with open("whole_string.txt", "w") as file:
    file.writelines(set_of_strings)
