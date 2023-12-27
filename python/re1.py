#extract date from string

# import re
# a="today is 27/12/2023 tomorrow is 28/12/2023"
# b=re.findall(r"\w+/\w+/\w+",a)
# print(b)

#extract domain name from email id

# import re
# a="divyanshdec@gmail.com"
# b=re.findall(r"\w+@\w+.(\w+)",a) #() is the capture grp
# print(b)

#Write a Python program that matches a string that has an 'a' followed by anything, ending in 'b'.

# import re
# a="aaasdkob my name is hi asab"
# b=re.findall(r"\w+b",a)
# print(b)

#Write a Python program to replace all occurrences of space comma, or dot with a colon.

# import re
# a="hi my name is div. my age is , 19"
# b=re.sub("[ ,.]",":",a) 
# print(b)

#Write a Python program to find all five characters long word in a string.

# import re
# a="hi my namee is dsdiv. my adage is , 19"
# b=re.findall(r"\w{5}",a) 
# print(b)

#Write a Python program to extract year, month and date from a an url.

# import re
# a="https://www.washingtonpost.com/news/footballinsider/wp/2016/09/02/odell-beckhams-fame-rests-on-onestupid-little-ball-josh-norman-tells-author/"
# b=re.findall(r"\d+/\d+/\d+",a)
# print(b)

#Write a Python program to find urls in a string.

# import re
# a='''Follow our leader Elon musk on twitter here: https://twitter.com/elonmusk, more information on Tesla's products can be found at https://www.tesla.com/. Also here are leading influencers for tesla related news,
# https://twitter.com/teslarati
# https://twitter.com/dummy_tesla
# https://twitter.com/dummy_2_tesla'''
# b=re.findall(r'https://[^\s,]+',a)
# print(b)

#Write a python program to extract the first word of a given string

# import re
# a="hello world"
# b=re.findall(r"\w+",a)
# if b:
#     print(b[0])

#Write a python program to extract the all the words of a string that starts with vowel

import re
a="hello world this is anonymous letter to eight prime minister of uk"
b=re.findall(r"\b[aeiou]\w+\b",a)
print(b)