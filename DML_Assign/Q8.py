n = 1
k = 0
total = 1
count = 1
total1 = 1
numb = 1
for i in range(2,2002,2):
	n+=i
	total+=n
for i in range(0,1000):
	if(i%2==0):
		k+=4
	numb+=k
	total1+=numb

print(total+total1-1)