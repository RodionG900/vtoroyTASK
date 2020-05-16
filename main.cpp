#include "spisok_head.h"
#include <iostream>
using namespace std;

spisok *A=NULL;

void menu(int b)
{
    int x;
    int y;
    switch(b)
    {
    case 1:
        cout << "vvedite perviy element" << endl;
        cin >>x;
        push(A,x);
        break;
    case 2:
        cout << "spisok: ";
        write(A);
        cout<<endl;
        break;
    case 3:
        cout << "vvedite noviy element" << endl;
        cin >>x;
        cout << "vvedite zadanniy element" << endl;
        cin >>y;
        add_before(A,x,y);
        break;
    case 4:
        cout << "vvedite noviy element" << endl;
        cin >>x;
        cout << "vvedite zadanniy element" << endl;
        cin >>y;
        add_after(A,x,y);
        break;
    case 5:
        cout << "vvedite posledniy element" << endl;
        cin >>x;
        push_tail(A,x);
        break;
    case 6:
        pop(A);
        break;
    case 7:
        pop_tail(A);
        break;
    case 8:
        cout << "vvedite zadanniy element" << endl;
        cin >>x;
        pop_concrete(A,x);
        break;
    case 9:
        cout << "summa takih elementov:" << individual(A) <<endl;
        break;
    }
    cin >>b;
    if(b==0)return;
    else
        menu(b);

}
int main()
{
    int a;
    cin >>a;
    menu(a);
    return 0;
}
