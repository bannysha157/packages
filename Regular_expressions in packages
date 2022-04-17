1)re.sub()

import re
text_to_search="abc defghijkl abc tuvwxyz"
pattern=re.compile(r'abc')
res=re.sub(pattern,'123',text_to_search) #abc will replace 123
print("sub:",res)
#o/p=sub: 123 defghijkl 123 tuvwxyz

2)re.findall()
import re
line1="feel like freedom and enjoy the freedom"
res=re.findall(r'freedom',line1) 3in line freedom is 2 time came
print(res)
#o/p=['freedom', 'freedom']

example2:

import re
line1="we feel like never give up"
res=re.findall(r'never give up',line1)
print(res)
#o/p=['never give up']
example3:

import re
line1="we fell like never up"
res=re.findall(r'    ',line1)
print(res)
#o/p=[]

import re
line1="we fell like never give up"
res=re.findall(r'xyz',line1) xyz in not their in line1 
print(res)
#o/p=[]

3)fullmatch()
import re
line1="dont stop untill you are proud"
res=re.fullmatch(r'dont stop untill you proud',line1) #the string does not match the pattern of line1
print(res)
#o/p=None

import re
line1="dont stop untill you are proud"
res=re.fullmatch(r'dont stop untill you are proud',line1,flags=re.IGNORECASE)
print(res)
#o/p=<re.Match object; span=(0, 30), match='dont stop untill you are proud'>

4)subn():
import re
text_to_search="abc defghijk abc lmnopqrs abc tuvwxyz"
pattern=re.compile(r'123')
res=re.subn(pattern,'xyz',text_to_search)
print("subn:",res)
#o/p=subn: ('abc defghijk abc lmnopqrs abc tuvwxyz', 0)

#o/p=subn: ('xyz defghijk xyz lmnopqrs xyz tuvwxyz', 3)
5)group()
import re
string ="30851 345,6728 2456"
#three digit numer followed by spece followed by two digit number.
pattern='(\d{3})(\d{2})' 
#match variable contains a match onject.
match=re.search(pattern,string)
if match:
    print(match.group())
else:
    print("pattern not found")
#o/p=851 34


6)Split()
import re
text_to_search="abcdefghijklabcmnopqabcrstuvwxyz"
pattern=re.compile(r'abc') #abc is splited
res=re.split(pattern,text_to_search)
print("split",res)
#o/p=split ['', 'defghijkl', 'mnopq', 'rstuvwxyz']

import re
text_to_search="bannyshaarvenibannyshabunnusha"
pattern=re.compile(r'bannysha') #bannysha is splited
res=re.split(pattern,text_to_search)
print("split",res)
#o/p=split ['', 'arveni', 'bunnusha']

