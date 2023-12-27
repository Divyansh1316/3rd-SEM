Q=[]
f=None
r=None

def IsEmpty(que):
    if(que==[]):
        return True
    else:
        return False
        
def enqueue(que,item):
    que.append(item)
    if(len(que)==1):
        f=r=0
    else:
        r=len(que)-1

def dequeue(que):
    if(IsEmpty(que)):
        return("Underflow")
    elif(len(que)==0):
        f=r=None
    else:
        f=0
        i=que.pop(0)
        return i
        
def peek(que):
    if(IsEmpty(que)):
        return("Underflow")
    else:
        f=0
    return que[f]

def disp(que):
    if(IsEmpty(que)):
        print("Underflow")
    elif(len(que)==1):
        print(que[0])
    else:
        f=0
        r=len(que)-1
        for i in range(f,r+1):
            print(que[i])

while(True):
    ch=int(input("Enter a choice : "))
    if(ch==1):
        item=int(input("Enter an element : "))
        enqueue(Q,item)
        print("%d element added"%item)
    elif(ch==2):
        i=dequeue(Q)
        print("%d item popped"%i)
    elif(ch==3):
        i=peek(Q)
        print("%d <---- top element"%i)
    elif(ch==4):
        disp(Q)
    elif(ch==5):
        print("invalid choice")
        break