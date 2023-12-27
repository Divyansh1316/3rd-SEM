import os
try:
    f=open("sample.txt","w")
    try:
        f.write("Hello")
    except:
        print("cant write")
    finally:
        f.close()
except:
    print("File is not created")

os.remove("sample.txt")