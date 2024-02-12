#include <iostream>
/**
 * BLAS 1 with functions
 * Tasks:
 *     - Implement the following functions
 *     - Write the main function that receives an integer n from the user
 *     through the standard input and creates the fibonacci and factors arrays
 *     from the previous exercises. Compute the following:
 *         - The sum of fibonacci
 *         - The l2_norm of fibonacci
 *         - The dot product (fibonacci, factors)
 *         - The vector 1.25 * fibonacci + factors
 *         - The l2_norm of (1.25 * fibonacci + factors)
 *     - Print the output to the standard output
 */

/**
 * @brief  swap - Swap x and y
 * 
 * Swap x and y element wise, where x and y are vectors of size n.
 * Both x and y are represented as dynamically allocated arrays of type double.
 * 
 * @param[in/out]  x  dynamically allocated array of type double
 * @param[in/out]  y  dynamically allocated array of type double
 * @param[in]      n  the size of vectors x and y
 * 
 * @return none
 */
// TODO: implement the function swap


void swap(double **x,double **y,int n){
    double *temp =*y;
    *y=*x;
    *x=temp;
    
}



/**
 * @brief  scal - x = a*x
 * 
 * Scale a vector of size n with a scalar alpha.
 * Both the vector and the scalar are of type double.
 * 
 * @param[in/out]  x      dynamically allocated array of type double
 * @param[in]      alpha  scaling factor of type double
 * @param[in]      n      the size of vector x
 * 
 * @return none
 */
// TODO: implement the function scal

void scal(double* x, double alpha,int n){
    for(int i=0;i<n;i++){
        x[i] = x[i]*alpha;
    }  
}

/**
 * @brief  copy - Copy x into y
 * 
 * Copy vector x into vector y element wise.
 * Both vectors are of type double.
 * The memory for vector y must be allocated prior to calling this function.
 * 
 * @param[in]      x  dynamically allocated array of type double
 * @param[in/out]  y  dynamically allocated array of type double
 * @param[in]      n  the size of vectors x and y
 * 
 * @return none
 */
// TODO: implement the function copy

void copy(double* x,double* y,int n){
    for(int i = 0;i<n;i++){
        y[i] = x[i];
    }
}
/**
 * @brief  axpy - x = a*x + y
 * 
 * Perform x = a*x + y, where x and y are vectors of type double with size n and
 * a is a scaling factor of type double.
 * 
 * @param[in/out]  x      dynamically allocated array of type double
 * @param[in/out]  y      dynamically allocated array of type double
 * @param[in]      alpha  scaling factor of type double
 * @param[in]      n      the size of vectors x and y
 * 
 * @return none
 */
// TODO: implement the function axpy

void axpy(double* x,double*y,double alpha,int n){
    for(int i=0;i<n;i++){
        
    }

}

/**
 * @brief  dot - (x, y)
 * 
 * Perform the dot product of two vectors x and y of type double with size n
 * and return the result.
 * 
 * @param[in]  x  dynamically allocated array of type double
 * @param[in]  y  dynamically allocated array of type double
 * @param[in]  n  the size of vectors x and y
 * 
 * @return product the result of the dot product
 */
// TODO: implement the function dot

/**
 * @brief  nrm2 - Euclidean norm of x
 * 
 * Return the Euclidean norm of vector x
 * 
 * @param[in]  x  dynamically allocated array of type double
 * @param[in]  n  the size of vectors x
 * 
 * @return norm the Euclidean norm of x
 */
// TODO: implement the function nrm2

/**
 * @brief  asum - Sum of absolute values
 * 
 * Return the sum of the elements of a vector x of type double
 * 
 * @param[in]  x  dynamically allocated array of type double
 * @param[in]  n  the size of vectors x
 * 
 * @return sum the sum of the elements of x
 */
// TODO: implement the function asum

/**
 * @brief  iamax - Index of the largest element
 * 
 * Return the index of the largest element in a vector x
 * 
 * @param[in]  x  dynamically allocated array of type double
 * @param[in]  n  the size of vectors x
 * 
 * @return index the index of the largest element in x
 */
// TODO: implement the function iamax


int main(){
    std::cout << " Enter N value\n " << std::endl;
    int n;
    std::cin >> n;
    
    double *x = new double[n];
    double *y = new double[n];

    std::cout << "Original arrays \n" << std::endl;
    for(int i=0;i<n;i++){
        x[i] = i*i;
        y[i] = i+3;
        std::cout << x[i] << std::endl;
        std::cout << y[i] << std::endl;
    }
    swap(&x,&y,n);

        std::cout << "modified arrays \n" << std::endl;

    for(int i=0;i<n;i++){
        std::cout << x[i] << std::endl;
        std::cout << y[i] << std::endl;
    }
    

    

    delete[] x;
    delete[] y;
    return 0;
}














