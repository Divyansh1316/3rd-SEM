class person:
    def __init__(self,n,o): #cretes constructor
        self.name=n
        self.occupation=o
    def info(self):
        print(f"{self.name} is a {self.occupation}")

class rno(person): #rno class is derived from person class
    def showrno(self):
        print("Rno is 20")

obj=person("div","HR")
obj.info()
obj2=rno("harry","SD")
obj2.info()
obj2.showrno()