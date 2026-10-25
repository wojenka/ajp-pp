/* losujemy trzy liczby z przdziału od 100 do 1000, ale losujemy je tak długo, aż wszystkie liczby będą liczbami pierwszymi */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

bool liczbaPierwsza(int x){
    if (x<2)
        return false;
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i ==0){
            return false;
        }
    }
    return true;
}
int main(){
    srand(time(NULL));
    int i=0, x;
    while(i<3){
        x = (rand()%900)+100;
        if (liczbaPierwsza(x)){
            cout<<x<<endl;
            i++;
        }
    }
    return 0;
}
