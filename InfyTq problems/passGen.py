strInput=input()
finalStr=''
lt=[]
listInput=strInput.split(',')
for i in listInput:
    ltIn=i.split(':')
    name=ltIn[0]
    num=ltIn[1]
    length=len(name)
    max=0
    for dig in num:
        if(int(dig)<length):
            if(max<int(dig)):
                max=int(dig)
    if(max==0):
        finalStr='X'
    else:
        finalStr+=name[max-1]
print(finalStr)