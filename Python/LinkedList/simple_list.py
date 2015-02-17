class node:
    def __init__(self, value=0):
	self.data = value
	self.next_node = None

def create_list():
    root = node(10)
    root.next_node = node(20)
    root.next_node.next_node = node(30)
    root.next_node.next_node.next_node = node(40)
    return root

def print_list(head):
    while(head != None):
	print(head.data)
	head = head.next_node

n = node(20)
print(n.data, n.next_node)

list = create_list()
print_list(list)
