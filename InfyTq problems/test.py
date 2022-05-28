inp=input()
otp=''
for i in range(len(inp)):
    if int(inp[i])%2!=0:
        otp+=str(int(inp[i]**2))
print(otp[0:4])