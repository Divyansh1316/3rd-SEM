#writing into a file

f=open("file1.txt","w")
f.write("Hello world")
f.close()

#reading from a file

f=open("file1.txt","r")
i=f.read()
print(i)
f.close()