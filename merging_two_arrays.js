<script>
// javascript program to merge two sorted arrays
//using maps	

	// Function to merge arrays
	function mergeArrays(a , b , n , m)
	{

		// Declaring a map.
		// using map as a inbuilt tool
		// to store elements in sorted order.
		var mp = new Map();

		// Inserting values to a map.
		for (i = 0; i < n; i++) {
			mp.set(a[i], true);
		}
		for (i = 0; i < m; i++) {
			mp.set(b[i], true);
		}
		var a = [];
		
		// Printing keys of the map.
		for ( me of mp.keys()) {
			a.push(me);
		}
		a.sort();
		for ( me of a) {
			document.write(me + " ");
		}
	}

	// Driver Code
		var a = [ 1, 3, 5, 7 ], b = [ 2, 4, 6, 8 ];
		var size = a.length;
		var size1 = b.length;

		// Function call
		mergeArrays(a, b, size, size1);

// This code is contributed by gauravrajput1
</script>
