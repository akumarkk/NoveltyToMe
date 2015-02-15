def get_squares(num):
    return (num * num)

#if '__name__' == '__main__':
l = [3, 5 , 7, 11]

squares = [get_squares(item) for item in l]
print(squares)
