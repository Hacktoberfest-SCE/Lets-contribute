print("Enter Roman Numeral:-")
s = input()
print("After converting it to Integer:-")
def romanToInteger(s):
    d = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
    ans = 0
    
    for i in range(len(s)):
        if i+1 != len(s) and d[s[i]]<d[s[i+1]]:
            ans = ans - d[s[i]]
            
        else:
            ans = ans + d[s[i]]
    return ans

print(romanToInteger(s))
