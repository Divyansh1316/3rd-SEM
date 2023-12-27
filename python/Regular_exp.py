import re

text = "The cat and and the hat sat on the mat."

match_findall=re.findall("and",text) #findall returns a list of all occurances of "and"
print(match_findall)

match_search=re.search("and",text) #search returns a match object of 1st occurance
if match_search:
    print("yes")
else:
    print("no")

split_match=re.split("hat",text) #split splits the list into 2 parts where the word has occured
print(split_match)

mat_sub=re.sub("and","dog",text) #sub replaces the occurance(s) with given word
print(mat_sub)