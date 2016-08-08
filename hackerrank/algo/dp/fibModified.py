#https://www.hackerrank.com/challenges/fibonacci-modified

inp = raw_input()	
inp = inp.split()
t1 = int(inp[0])
t2 = int(inp[1])
n = int(inp[2])
res = 0
for i in range(n-2):
	res = t1 + (t2*t2);
	t1 = t2;
	t2 = res;
print res