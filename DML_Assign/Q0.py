a1 = 1
a2 = 2
i = 2
total = a2
while(a2<3524578):
	a3 = a1+a2
	a1 = a2
	a2 = a3
	if(a2%2==0):
		total+=a2
print(total)

