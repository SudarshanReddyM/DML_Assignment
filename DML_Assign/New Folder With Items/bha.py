
for x in range(1,1000):
	for y in range(1,1000):
		p = x**2
		q = y**2
		t = p+q
		z = t**0.5
		if(x+y+z==1000):
			print(x*y*z)
			exit()