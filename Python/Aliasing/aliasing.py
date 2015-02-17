def modify(num):
    print("Before modification : ", num)
    num[0] = 100
    num[3] = 200

def modify_t(tup):
    print("trying to modify tuple...")
    tup[0] = 100

test = [12, 13, 14, 15]
modify(test)
print("After modify: ", test)

t = (1, 2, 3, 4)
print(t)
modify_t(t)
print(t)
