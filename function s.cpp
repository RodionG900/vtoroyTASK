#include "spisok_head.h"


void push(spisok* &sp, int add)
{
    spisok *tmp= new spisok;
    tmp->id=add;
    tmp->next=sp;
    sp=tmp;
};
void write(spisok *sp)
{
    while(sp!=NULL)
    {
        cout << sp->id << " ";
        sp=sp->next;
    }

}
void add_before(spisok* &sp, int add, int where)
{
    spisok *tmp=sp, *p;
    p= new spisok;
    p->id=add;
    if(tmp->id==where)
    {
        p->next=sp;
        sp=p;
    }
    else
    {
        while(tmp->next!=NULL&&tmp->next->id!=where)tmp=tmp->next;
        if(tmp->next!=NULL)
        {
            p->next=tmp->next;
            tmp->next=p;
        }
    }

}
void add_after(spisok* &sp, int add, int where)
{
    spisok *tmp=sp, *p;
    p=new spisok;
    p->id=add;
    while(tmp!=NULL&&tmp->id!=where)tmp=tmp->next;
    if(tmp!=NULL)
    {
        p->next=tmp->next;
        tmp->next=p;
    }

}
void push_tail(spisok* &sp,int add)
{
    spisok *tmp=sp,*p;
    p=new spisok;
    p->id=add;
    while(tmp->next!=NULL)tmp=tmp->next;
    tmp->next=p;
    p->next=NULL;
}
int pop(spisok* &sp)
{
    spisok *tmp=sp;
    sp=sp->next;
    int x=tmp->id;
    delete(tmp);
    return x;
}
int pop_tail(spisok* &sp)
{
    int x;
    spisok *tmp=sp;
    if(sp->next==NULL)
    {
        x=sp->id;
        delete(sp);
        sp=NULL;
        return x;
    }
    else
    {
        while(tmp->next->next!=NULL)tmp=tmp->next;
        x=sp->id;
        delete(tmp->next);
        tmp->next=NULL;
        return x;
    }

}
int pop_concrete(spisok* &sp,int c)
{
    spisok *tmp=sp,*p;
    if(tmp->id==c)
    {
        sp=sp->next;
        delete(tmp);
        return c;
    }
    else
    {
        while(tmp->next!=NULL&&tmp->next->id!=c)tmp=tmp->next;
        if(tmp->next!=NULL)
        {
            p=tmp->next;
            tmp->next=tmp->next->next;
            delete(p);
            return c;
        }
        else
            return -1;
    }

}
int individual(spisok* &sp)
{
    int sum=0;
    spisok *tmp=sp;
    while(tmp->next!=NULL)
    {
        if(tmp->id<tmp->next->id)sum+=tmp->id;
        tmp=tmp->next;
    }
    return sum;
}
