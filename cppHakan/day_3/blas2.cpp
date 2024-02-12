/**
 * BLAS 2
 * Tasks:
     - Implement the following functions
 */

/**
 * @brief  gemv - matrix-vector multiply
 * 
 * Multiply a matrix of size m X n by a vector of size n and store the resultant
 * vector.
 * The matrix is stored in row-wise format as an array.
 * 
 * @param[in]  A  dynamically allocated array representing the matrix.
 * @param[in]  x  dynamically allocated vector representing the rhs vector.
 * @param[in]  m  The number of rows of A
 * @param[in]  n  The number of columns of A which must be equal to the number
 *                of rows of x
 * @param[out] y  dynamically allocated array representing the resultant
 *                vector. Note that the memory for y must be allocated prior to
 *                calling this function.
 * 
 * @return success true if operation is successful and false otherwise.
 */
// TODO: implement the function gemv

/**
 * @brief  symv - symmetric matrix-vector multiply
 * 
 * Multiply a symmetric matrix of size m X n by a vector of size n and store the
 * resultant vector.
 * The upper triangle of the matrix is stored in row-wise format as an array.
 * 
 * @param[in]  A  dynamically allocated array representing the symmetric matrix.
 *                Note that only the upper triangle is stored.
 * @param[in]  x  dynamically allocated vector representing the rhs vector.
 * @param[in]  m  The number of rows of A
 * @param[in]  n  The number of columns of A which must be equal to the number
 *                of rows of x
 * @param[out] y  dynamically allocated array representing the resultant
 *                vector. Note that the memory for y must be allocated prior to
 *                calling this function.
 * 
 * @return success true if operation is successful and false otherwise.
 */
// TODO: implement the function gemv