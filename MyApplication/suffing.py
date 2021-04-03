bits=input("enter data in o and 1: ")
stuff=[]
count=0
for i in range(len(bits)):
	if bits[i]==1:
	   count=count+1
	   stuff.append(bits[i])
    elif bits[i]!=1:
	   count=0
	   stuff.append(bits[i])

	if count==5:
		stuff.insert(i+1,0)
		print stuff: