#ifndef SPISOK_HEAD_H_INCLUDED
#define SPISOK_HEAD_H_INCLUDED
#include <iostream>
using namespace std;
struct spisok
{
    int id;
    spisok *next;
};


void push(spisok* &sp, int add);
void write(spisok *sp);
void add_before(spisok* &sp, int add, int where);
void add_after(spisok* &sp, int add, int where);
void push_tail(spisok* &sp,int add);
int pop(spisok* &sp);
int pop_tail(spisok* &sp);
int pop_concrete(spisok* &sp,int c);
int individual(spisok* &sp);
#endif // SPISOK_HEAD_H_INCLUDED
