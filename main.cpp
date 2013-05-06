#include <iostream>
#include "poly.h"

using namespace std;

int main()
{
    Railway **array = 0;
    int count;
    cout<<"Введите количество поездов:\n";
    cin>>count;
    array = new Railway*[count];
    for(int i = 0; i < count; ++i)
	array[i] = 0;
    input(array, count);
    output(array, count);
    for(int i = 0; i < count; ++i)
	delete array[i];
    delete [] array;
    return 0;
}
