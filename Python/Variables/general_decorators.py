def logger(fun):
    def ret_fun(*args, **kargs):
	print("START", args)
	print(kargs, "END")
	ret = fun(*args, **kargs)
	return ret
    return ret_fun

@logger
def add(x, y):
    print("args are : ", x, y)
    print('Sum is : ', x+y)
    return x+y

add(10, 20)

print("--------------------")
add(x=100, y=300)
print("--------------------")
add(y=999, x=299)

