#create "x"

#f=open("file1.txt","x") #this will give error as the file is already created
f=open("sample.txt","x")
f.write("Party over")
f.close()