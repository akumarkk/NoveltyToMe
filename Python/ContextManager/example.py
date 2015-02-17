import sys
count = 0

class RedirectStdoutTo:
    def __init__(self, out_new=sys.stdout):    
        self.out_new = out_new
        #self.count = 0

    def __enter__(self):
        global count
        print("Entering...")
        count += 1
        print("Object count", count)
        self.out_old = sys.stdout
        sys.stdout = self.out_new

    def __exit__(self, *args):
        sys.stdout = self.out_old
        print("exiting...")

'''
class ContextMgrExample:
    def __init__(self):
	#print("This is init")

    def __entry__(self):
	print("Entering context")

    def __exit__(self, *args):
	print("Exiting context")

for x in range(6):
    with RedirectStdoutTo:
        print(x)

'''
print('A')                                                                             
#with open('out.log', mode='w', encoding='utf-8') as a_file, RedirectStdoutTo(a_file):  
for x in range(5):
    with RedirectStdoutTo():
        print('B')                                                                         
print('C')
print("----- END ----")
