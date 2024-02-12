/**
 * BLAS 3
 * Tasks:
 *     - Implement the following functions
 *     - Control BLAS 1, BLAS 2, and BLAS 3 functions for const correctness
 *     - Add error handling to BLAS 1, BLAS 2, BLAS 3 functions
 */

/**
 * @brief  gemm - matrix matrix multiply
 * 
 * Multiply a matrix of size m X n by a matrix of size n X p and store the
 * resultant matrix.
 * The matrices are stored row-wise as arrays
 * 
 * @param[in]     A  dynamically allocated array representing the left matrix.
 * @param[in]     B  dynamically allocated array representing the right matrix.
 * @param[in/out] C  dynamically allocated array representing the resultant
 *                   matrix. Note that the memory for C must be allocated prior to
 *                   calling this function.
 * @param[in]     m  The number of rows of A
 * @param[in]     n  The number of columns of A / number of rows of B 
 * @param[in]     p  The number of columns of B 
 *  
 * 
 * @return none
 */
// TODO: implement the function gemm

void gemm(const double *A, const double *B, double *C, const int m, const int n, const int p) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < n; ++k) {
                C[i * p + j] += A[i * n + k] * B[k * p + j];
            }
        }
    }
}