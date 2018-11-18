from math import log10, ceil, sqrt
phi = (1+sqrt(5))/2 

d = 1000

term = ceil((log10(5)/2 + d - 1) / log10(phi))
print(int(term))