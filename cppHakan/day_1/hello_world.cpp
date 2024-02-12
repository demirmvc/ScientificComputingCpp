/**
 * Hello world
 * Tasks:
 *     - Implement a program that prints "Hello world!" to the standard output.
 *     - Use the std namespace explicitly and omit it with the help of the using
 *       directive.
**/

#include <iostream>


void add(int x[]){
    x[0] +=1;
    std::cout << "x: " << x[0] << std::endl;
}


void ornek(int *p){
    std::cout <<"example 1 fonc *p: " <<  *p << std::endl;
    std::cout <<"example 1 fonc p: "<<  p << std::endl;
}
void ornek2(int **p){
    std::cout <<"example 2 fonc **p: " << **p << std::endl;
    std::cout <<"example 2 fonc *p : " << *p << std::endl;

}
int main()
{   
    int t=55;
    std::cout <<"example 1 t = 55:  " << t << std::endl;
    std::cout <<"example 1 t*    :  " << &t << std::endl;

    ornek(&t);

    // std::cout << "Hello world!" << std::endl;

    int k=5;
    int *c=&k;
    std::cout <<"example 2 k = 5: " << k << std::endl;
    std::cout <<"example 2 &k   : " << &k << std::endl;

    std::cout <<"example 2 *c   : " << *c << std::endl;
    std::cout <<"example 2  c   :  " << c << std::endl;
    std::cout <<"example 2 &c   :  " << &c << std::endl;

    ornek2(&c);



    int **d ;
    *d=c;
    std::cout << " k: " << k << std::endl;
    std::cout << " *c: " << *c << std::endl;
    std::cout << " c : " << c << std::endl;
    
    std::cout << "**d: " << **d << std::endl;
    std::cout << " *d: " << *d << std::endl;
    std::cout << " d: " << d << std::endl;
    int *temp = *d;
    std::cout << "*temp: " <<*temp << std::endl;
    std::cout << " temp: " << temp << std::endl; 

    //int **p=&c; // pointer c nin adresine point ediyor
    //int *p = new int[5]; // sağ taraf: dinamik olarak bellekte 5tane int türünde dizi oluştur
                            // değişkeni pointer olan p tanımlar ve adre tutar
    return 0;
}