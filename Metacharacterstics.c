1)[] A set of characters:in between "[a-m]"
import re
txt = "Feel Like Freedom"
#Find all lower case characters alphabetically between "a" and "m":
x = re.findall("[a-m]", txt)
print(x)
#o/p=['e', 'e', 'l', 'i', 'k', 'e', 'e', 'e', 'd', 'm']

2) \ Signals a special sequence (can also be used to escape special characters)	"\d":

import re
txt = "employee salary is 33000"
#Find all digit characters:
x = re.findall("\d", txt)
print(x)
#o/p=['3', '3', '0', '0', '0']

3) . Any character (except newline character)	"he..o":

import re
txt = "hello planet"
#Search for a sequence that starts with "he", followed by two (any) characters, and an "o":
x = re.findall("he..o", txt)
print(x)
#o/p=['hello']

#example of giveing none or [];	
import re
txt = "Freedom takeing"
#Search for a sequence that starts with "Fr", followed by two (any) characters, and an "m":
x = re.findall("Fr..m", txt) #i will only two (..)so it will give []like that
print(x)
#o/p=[]

#it will give correct output because i will (....)for fr....m
import re
txt = "Freedom takeing"
#Search for a sequence that starts with "Fr", followed by two (any) characters, and an "m":
x = re.findall("Fr....m", txt)
print(x)
#o/p=;[Freedom']

4) ^ Starts with "^hello": ^ indicates starting

import re
txt = "hello planet"
#Check if the string starts with 'hello':
x = re.findall("^hello", txt)
if x:
  print("Yes, the string starts with 'hello'")
else:
  print("No match")
#o/p=Yes, the string starts with 'hello'


example for No match:

import re
txt = "Freedom planet"
#Check if the string starts with 'hello':
x = re.findall("^hello", txt)
if x:
  print("Yes, the string starts with 'hello'")
else:
  print("No match")
#o/p=no match

5) $ Ends with	"planet$": $indicates ending word

import re
txt = "hello planet"
#Check if the string ends with 'planet':
x = re.findall("planet$", txt)
if x:
  print("Yes, the string ends with 'planet'")
else:
  print("No match")
#o/p=Yes, the string ends with 'planet'

6) * Zero or more occurrences "he.*o":

import re
txt = "hello planet"
#Search for a sequence that starts with "he", followed by 0 or more  (any) characters, and an "o":
x = re.findall("he.*o", txt)
print(x)
#o/p=['hello']

another example:
import re
txt = "hello planet"
#Search for a sequence that starts with "he", followed by 0 or more  (any) characters, and an "o":
x = re.findall("he.*o", txt)
print(x)
#o/p=['freedom']
7) + One or more occurrences	"he.+o":

import re
txt = "hello planet"
#Search for a sequence that starts with "he", followed by 1 or more  (any) characters, and an "o":
x = re.findall("he.+o", txt)
print(x)
#o/p=['hello']
 
another examples

import re
txt = "never give up"
#Search for a sequence that starts with "ne", followed by 1 or more  (any) characters, and an "e":
x = re.findall("ne.+p", txt) #end with p so it will give total
print(x)
#o/p=['never give up']

import re
txt = "never give up"
#Search for a sequence that starts with "ne", followed by 1 or more  (any) characters, and an "e":
x = re.findall("ne.+e", txt) 3it will give never give
print(x)
o/p=['never give']


8) ? Zero or one occurrence "hello":
import re
txt = "hello planet"
#Search for a sequence that starts with "he", followed by 0 or 1  (any) character, and an "o":
x = re.findall("he.?o", txt)
print(x)
#This time we got no match, because there were not zero, not one, but two characters between "he" and the "o"
#o/p=[]

9) {} Exactly the specified number of occurrences "he.{2}o":
import re
txt = "hello planet"
#Search for a sequence that starts with "he", followed excactly 2 (any) characters, and an "o":
x = re.findall("he.{2}o", txt) #l is came 2 times
print(x)
#o/p=['hello']

import re
txt = "freed planet"
#Search for a sequence that starts with "he", followed excactly 2 (any) characters, and an "o":
x = re.findall("fr.{2}d", txt)
print(x)
#o/p=['freed']

import re
txt = "Bunny smile"
#Search for a sequence that starts with "Bu", followed excactly 2 (any) characters, and an "y":
x = re.findall("Bu.{2}y", txt) #nn will came 2 times
print(x)
#o/p=['Bunny']


#if nbr of occurence is not match
import re
txt = "Bunny smile"
#Search for a sequence that starts with "Bu", followed excactly 2 (any) characters, and an "y":
x = re.findall("Bu.{3}y", txt) #{3}means not will retun because nn 2 times only
print(x)
#o/p=[]


10) | Either or "falls|stay :

import re
txt = "The rain in Spain falls mainly in the plain!"
#Check if the string contains either "falls" or "stays":
x = re.findall("falls|stays", txt)
print(x)
if x:
  print("Yes, there is at least one match!")
else:
  print("No match")
#['falls']
Yes, there is at least one match!


import re
txt = "Bunny feels like freedom mainly in the plain!
#Check if the string contains either "falls" or "stays":
x = re.findall("freedom|stays", txt) #in txt freedom is their so matched
print(x)
if x:
  print("Yes, there is at least one match!")
else:
  print("No match")
#o/p=['freedom']
Yes, there is at least one match!

