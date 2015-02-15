import sys

def get_factors(num):
    i = 1
    num1 = num
    num_of_fact = 1
    factors = [1]

    for i in range(2, num):
	power = 0
	while(num %i  == 0):
	    num = num/i
	    power = power + 1
	
	if(power > 0):
	    factors.append(i)

	num_of_fact*= (power+1)

    if(num > 1):
	num_of_fact*=2

    print("Number of factors (%d) = %d" %(num1, num_of_fact) ,factors )
    return num_of_fact


#print("Enter number: ")
#line = sys.stdin.readline()
#print(factors(int(line)))

for x in range(1, 50):
    get_factors(x)
