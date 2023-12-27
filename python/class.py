class person:
    def set(self,n,o):
        self.name=n
        self.occupation=o
    def info(self):
        print(f"{self.name} is a {self.occupation}")

obj=person()
obj.set("div","HR")
obj.info()