try:
    n=int(input("Enter numerator : "))
    d=int(input("Enter denominator : "))
    r=n/d
    print(r)
    a=[1,2]
    print(a[4])
except ValueError:
    print("Input should be integer value")
except ZeroDivisionError:
    print("Denominator cant be zero")
except IndexError:
    print("Invalid index")