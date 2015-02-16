import re

test = "cats are smarter than cats because cats are sats"
obj = re.findall(r'^c.*s$', test)

print(obj)
print(obj.group(0))
print(obj.group(1))
print(obj.group(2))
