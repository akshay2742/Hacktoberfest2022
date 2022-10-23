import bisect

def mergeArrays(a, b, n, m):
	
	mp=[]
	
	for i in range(n):
		bisect.insort(mp, a[i])
		
	for i in range(m):
		bisect.insort(mp, b[i])
	

	for i in mp:
		print(i,end=' ')
		
# Driver code
arr1 = [1, 3, 5, 7]
arr2 = [2, 4, 6, 8]
size = len(arr1)
size1 = len(arr2)

mergeArrays(arr1, arr2, size, size1)
