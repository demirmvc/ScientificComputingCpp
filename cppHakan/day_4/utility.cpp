/**
 * Utility
 * Tasks:
 *     - Implement the following functions
 *     - HINT: unify the implementation of export_vec and export_mat, i.e.,
 *     try to minimize code duplication if possible.
 */

/**
 * @brief  export_vec - Write x to file
 * 
 * Write a dynamically allocated vector x to file in CSV format as follows
 * 
 * element_1,
 * element_2,
 * .
 * .
 * .
 * element_n
 * 
 * @param[in]  x         dynamically allocated array of type double
 * @param[in]  n         the size of x
 * @param[in]  filename  the filename
 *
 * 
 * @return success true if operation is successful and false otherwise.
 */
// TODO: implement the function export_vec
#include <string>
#include <fstream>

bool  export_vec(double *x,int x,string filename);


/**
 * @brief  export_mat - Write A to file
 * 
 * Write a dynamically allocated matrix A of size n X m to file in CSV format
 * as follows
 * 
 * a_11, a_12, a_13, ..., a1m
 * a_21, a_22, a_23, ..., a2m
 * .
 * .
 * .
 * a_n1, a_n2, a_n3, ..., a_nm
 * 
 * A is stored in row-major format as an array.
 * 
 * @param[in]  A         dynamically allocated array of type double representing
 *                       the matrix
 * @param[in]  m         the number of rows of A
 * @param[in]  n         the number of columns of A
 * @param[in]  filename  the filename
 * 
 * @return success true if operation is successful and false otherwise.
 */
// TODO: implement the function export_mat