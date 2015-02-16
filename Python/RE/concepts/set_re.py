import re

# basically set [] matches any regex withij in it.
# Not all the regex in it needs to be matched

#Differece between search and match()
#   1. Search() searches the whole text for the match
#   2. match() will not search for the whole text

str = "anil kumar"
match = re.search(r"[abc]", str)
if match != None:
    print(match.group())
    print(match.group(0))
    print(match.groups())
else:
    print("None")

match = re.match(r"[k]", str)
if match != None:
    print(match.group())
else:
    print("None")
