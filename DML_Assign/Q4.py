def factorial(x):
	if(x==1):
		return 1;
	else:
		return x*factorial(x-1)

m = 20
n = 20

a = factorial(m+n)
b = factorial(m)
c = factorial(n)
print(int(int(a)/int(b*c)))
