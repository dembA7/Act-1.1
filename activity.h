// =================================================================
//
// File: activity.h
// Author: Arturo Diaz
// Date: 27/08/22
//
// =================================================================

#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================


unsigned int sumaIterativa(unsigned int n) {
  
  unsigned int sum = 0;
  for 
    (unsigned int i = 1; i <= n; i++){
      sum += i;
    }
	return sum;
}

// --> @Complexity	O(n)


// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================


unsigned int sumaRecursiva(unsigned int n) {
  
	if (n == 1){
    return 1;
  }

  else {
    return n + sumaRecursiva(n - 1);
  }
}

// --> @Complexity	O(n)


// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================


unsigned int sumaDirecta(unsigned int n) {
	return (n * (n + 1)) / 2;
}

// --> @Complexity	O(1)

#endif /* ACTIVITY_H */
