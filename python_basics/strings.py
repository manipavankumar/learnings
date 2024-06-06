name="pavan"
'''len is a function to find the length of the string''' 
print(len(name)) 
print(name[-5]) #as python supports negative indexing  |p|a|v|a|n| == -5-4-3-2-1

for i in name:
    print(i)

""" arthematic operation on strings: '+' is used for concatination and '*' is used for repeatations """ 


'''  write a program to convert the string into the lowercase

print("enter the string")
str1=input()
i=0
new_str = ""
while(i <= len(str1)-1):
    data = str1[i]
    ascii = ord(data)
    if(ascii >=65 and  ascii <=90):
        newascii = ascii +32
        newdata = chr(newascii)
        new_str = new_str + newdata
    else:
        new_str= new_str + data
    i=i+1
print(new_str)            '''

''' method 2
data = str.Lower()
data = str.Upper()
datta = str.Swapcase()  '''



