class person:
    def __init__(self,n,o): #cretes constructor
        self.name=n
        self.occupation=o
    def info(self):
        print(f"{self.name} is a {self.occupation}")

obj=person("div","HR")
obj.info()