/*
* Lets say we have the following problem 5x - 2y = 16 and 7x + 6y = -4
* 
* put into a matrix we get :
* 
* | 5  -2 |    multiplied by | x |  ==  | 16 |
* | 7   6 |                  | y |      | -4 |
* 
* or written differently :
* 
*  A multiplied by | x | == | 16 |
*                  | y |    | -4 |
* 
* now multiply both sides by the inverse of the matrix A or A^-1 :
* 
*  A^-1 multiplied by A multiplied by | x | ==   A^-1 multiplied by | 16 |
*                                     | y |                         | -4 |
* 
* multiplying the inverse of matrix A with matrix A gives us the identity matrix or I :
* 
* I multiplied by | x | == A^-1 multiplied by | 16 |
*                 | y |                       | -4 |
* 
* multiplying any matrix by the identity matrix results in the origional matrix therefore :
* 
*  | x | == A^-1 multiplied by | 16 |
*  | y |                       | =4 |
* 
* to find A^-1 we need to calculate the determinant of the matrix by multiplying the opposite corners and subtracting the two results in this case :
* determinant of matrix A = (5 * 6) - (7 * -2) = 44
* now we know that A^-1 = (1 / 44) or 1 over the determinant multiplied by matrix A with the top left and bottom right elements swapped and the top
* right and bottom left elements having a sign swap i.e going from poitive to negative or negative to positive :
* 
*       1
*	 ------  multiplied by |  6  2  |
*	   44                  | -7  5  |
* 
* therefore :
*  | x |  ==  (1/44) multiplied by |  6  2  | multiplied by | 16 |
*  | y |                           | -7  5  |               | -4 |
* 
*  x = 2 y = -3
*/
