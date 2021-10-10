#include <iostream>

using namespace std;

void visualizza(int var, int *&p1, int**&p2){
    cout<<endl<<" "<<&p2<<"\t "<<&p1<<"\t "<<&var<<endl;
    cout<<"----------\t"<<"----------\t"<<"---------\t"<<endl;
    cout<<"|"<<p2<<"|"<<"\t"<<"|"<<p1<<"|"<<"\t"<<"|"<<var<<"\t|"<<"\t"<<endl;
    cout<<"----------\t"<<"----------\t"<<"---------\t"<<endl;
    cout<<"    p2      -->     p1      -->     var"<<endl;
}

int main()
{
    int var;
    int* p1;
    int** p2;
    var = 420;
    p1 = &var;
    p2 = &p1;
    visualizza(var,p1,p2);
    return 0;
}
