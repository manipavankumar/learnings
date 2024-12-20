d1 = {'ramesh':10001,'pavan':10012,'vijay':11003}
for key,val in d1.items():
    a = str(val)
    for i in range(len(a)):

        if a[i] == '1':
            b = a.replace(a[i],'*')
            d1[key] = b
            print(b)

print(d1)
