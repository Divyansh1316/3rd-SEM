#copy contents of one file to another

f=open("file_sample.txt","w")
f.write("Hello world")
f.close()

with open("file_sample.txt","r") as sourcefile,open("copy.txt","w") as copyfile:
    for line in sourcefile:
        copyfile.write(line)