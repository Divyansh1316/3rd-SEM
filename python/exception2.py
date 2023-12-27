'''
a=[1,2,3]
try:
    print(a[1])
    print(a[4])
except:
    print("invalid index")
'''

def fun(a):
    if a<4:
        b=a/(a-3)
    print("value of b",b)
try:
    fun(3) #if this line is commented then NameError will occur
    fun(5)
except ZeroDivisionError:
    print("Denominator cant be zero")    
except NameError:
    print("Name error")