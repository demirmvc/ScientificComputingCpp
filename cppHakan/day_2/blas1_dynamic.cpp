/**
 * Array
 * Tasks:
 *     - Declare a variable of type int named n
 *     - Get n from the user through the standard input
 *     - Perform the tasks in blas1_static exercise with arrays of size n
 *     - Comment the code
 *     - Run the code with n = 10, 20, 100. What do you observe?
 * Note: Make sure that the memory in the program is managed safely
 */

#include <iostream>
#include <cmath>
int main(){
//  *     - Declare a variable of type int named n
int N;
 //   - Get n from the user through the standard input
std::cin >> N;

//  *     - Declare an array of type int named fibonacci with size 10

int fibonacci[N];
double factors[N];
double alpha{1.25};

int size = N; 


//  *     - Loop through the array and form the Fibonacci sequence for each element


 //    - Populate factors with (3i + 1)/2 for odd indices and (i^2)/2 for even
 //     entries



    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i=2 ; i< size;i++ ){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
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



/*

burda dinamik array kullanmak daha doğru çünkü stackda compiled time arrayin değerini bilmesi gerkeiyor
fakat burda çalıştı çünkü under the hood c++ N ye bier değer atıyor. sonra N biz yazınca 
oraya N değerini atıyor
dinamik array kullanılması lazım çünkü biz bu kodu execute ediyoruz ve execute ettiğmizde çoktan compile 
edilmiş oluyor
int* point = new int[N]; olması lazım. 
*/
return 0;
}