import itertools
lst = [0,1,2,3,4,5,6,7,8,9]
a = list(itertools.permutations(lst))
b = a[999999]
k=""
for i in b:
	k+=str(i)
print(k)