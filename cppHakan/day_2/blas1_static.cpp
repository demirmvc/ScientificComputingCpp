/**
 * Array
 * Tasks:
 *     - Declare an array of type int named fibonacci with size 10
 *     - Loop through the array and form the Fibonacci sequence for each element
 *     - Declare an array of type double named factors with size 10
 *     - Populate factors with (3i + 1)/2 for odd indices and (i^2)/2 for even
 *     entries
 *     - Declare a double variable named sum_fibonacci and compute the sum of
 *     fibonacci
 *     - Declare a double variable named norm_fibonacci and compute the l2 norm
 *     of fibonacci
 *     - Declare a double variable alpha and initialize it with 1.25
 *     - Declared a double variable named dot_product and compute the inner
 *     product (alpha * fibonacci, factors)
 *     - Print the fibonacci and factors vector as well as the computed sums,
 *     norms, etc. to the standard output
 */

#include <iostream>
#include <cmath>
//  *     - Declare an array of type int named fibonacci with size 10

int fibonacci[10];
double factors[10];
double alpha{1.25};

int size = std::size(fibonacci); 


//  *     - Loop through the array and form the Fibonacci sequence for each element


 //    - Populate factors with (3i + 1)/2 for odd indices and (i^2)/2 for even
 //     entries



int main(){
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i=2 ; i< size;i++ ){
        fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
        std::cout << fibonacci[i] <<std::endl;
    }
    for(int i = 0;i<size;++i){
        if (i%2 == 0){
            factors[i] = (i*i)/2.0;
            std::cout << i << "value is even: " << factors[i] << std::endl;
        }
        else{
            factors[i] = (3*i+1)/2.0;
            std::cout << i << "value is odd: " << factors[i] << std::endl;

        }
        std::cout << fibonacci[i] << std::endl;
        }

    double sum;
    for(int i=0;i<size;i++){
        sum += fibonacci[i];
    }
    std::cout << " sum of the fibonacci is: " << sum << std::endl;


    double l2 = 0;
    for(int i=0;i<size;i++){
        l2 += fibonacci[i]*fibonacci[i];
    }
    l2 = std::sqrt(l2);
    std::cout << " l2 norm: " << l2 << std::endl;


    double product;
    for(int i=0;i<size;i++){
        product += alpha*fibonacci[i]*factors[i];
    }
    std::cout << " inner product of factors and fibonacci: " << product << std::endl;


    return 0;
}
