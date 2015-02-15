class fib:
    def __init__(self, max1):
	self.max1=max1

    def __iter__(self):
	self.a = 0
	self.b = 1
	return self

    def next(self):
	tmp = self.a
	if(self.a > self.max1):
	    raise StopIteration

	self.a = self.b
	self.b = self.b + tmp
	return tmp

for n in fib(10):
    print(n)
