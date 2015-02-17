roman = ""

def add_chars(ch1, ch2):
    global roman
    roman = roman + ch1 + ch2

def postdigit(ch, num):
    global roman
    for x in range(num):
	roman = roman + ch

def roman_numbers(num):
    while(num != 0):
	if(num >= 900):
	    if(num >= 1000):
		postdigit("M", num/1000)
		num = num - (num/1000)*1000
	    else:
		add_chars('C', 'M')
		num = num - 900

	elif(num>= 400):
	    if(num >=500):
		postdigit("D", 1)
		num = num - 500
	    else:
		add_chars("C", "D")
		num = num - 400

	elif( num >= 90):
	    if(num >= 100):
		postdigit("C", num/100)
		num = num - (num/100)*100
	    else:
		add_chars("X", "C")
		num = num - 90

	elif( num >= 40):
	    if(num>=50):
		postdigit("L", 1)
		num = num - 50
	    else:
		add_chars("X", "L")
		num = num - 40

	elif( num >= 9):
	    if(num >= 10):
		postdigit("X", num/10)
		num = num - (num/10)*10
	    else:
		add_chars("I", "X")
		num = num - 9

	elif( num >= 4):
	    if(num >= 5):
		postdigit("V", 1)
		num = num - 5
	    else:
		add_chars("I", "V")
		num = num - 4
	elif( num >= 1):
	    postdigit("I", num)
	    num = 0

    
roman_numbers(3860)
global roman
print("Equivalenr roman = ", roman)
