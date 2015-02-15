di = {1:"A", 2:"B", 3:"B", 4:"D"}

def get_value(key, value):
    return (str(key)) + str(value)

dicr = {get_value(key, value) for key, value in di.items()}
print(dicr)
dicr = [get_value(key, value) for key, value in di.items() ]
print(dicr)

#Dictionay comprehension

dicr = {value:key for key,value in di.items()}
print(dicr)
