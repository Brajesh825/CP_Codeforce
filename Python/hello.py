a=int(input("Write first number"))
b=int(input("Write first number"))
c=int(input("Write first number"))

if(a<b):
	if(a<c):
		print(a)
	elif(a>c):
		print(c)
	else:
		print(b)
else:
	if(b<c):
		print(b)
	else:
		print(c)					