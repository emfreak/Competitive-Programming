def countFee(s, p, q):
    fee = 0 
    fee = s.count("CJ")*p + s.count("JC")*q
    return fee

def moon_umb():
    inpuT = input().split()
    p = int(inpuT[0])
    q = int(inpuT[1])
    s = inpuT[2]
    fee = countFee(s,p,q)
    length = len(s)
    i = 0
    while i < length:
        m =""
        if i > 0 and s[i] == "?":
            m = s[i-1] 
        while s[i] == "?":
            if i < (length-1):
                i = i+1

            else:
                break
       
        f = m + s[i]
        if f == "CJ":
                fee += p 
        elif f == "JC":
                fee += q
        i+=1

    print("Case #"+str(u+1)+": "+ str(fee))

for u in range(int(input())):
    moon_umb()