k = 0
for a in range(1,1000):
	if(k==1):
		break
	for b in range(1,1000):
		d = a**2
		e = b**2
		c1 = d+e
		c = c1**0.5
		if(a+b+c==1000):
			print(int(a*b*c))
			k = 1
			break