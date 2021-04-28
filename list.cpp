#include <iostream>
#include <cstdio>
#include<cstring>
using namespace std;
struct list{
    int* data;
    int length;
    list()//chushihua
    {
        data=new int[10];
        memset(data,0,10);
        length=0;
    }
    ~list()
    {
        delete[] data;
    }
    
    
    int get(int sta)
    {
        if((sta>length)||(sta<=0)) return -1;
        return data[sta-1];
    }
     
    
    int insert(int dat,int sta)
    {
        if(sta<=0||sta>length+1) return -1;
        if(length==10) return -1;
        else if(sta==length+1) 
        {
            data[length]=dat;
        }
        else
        {
            for(int i=length;i>sta;i--) data[i]=data[i-1];
        }
        length++;
        return 0;
    }
    
    int del(int sta)
    {
        if(sta>length||sta<=0) return -1;
        if(sta==length);
        else 
        {
            for(int i=sta;i<length;i++) data[i-1]=data[i];
        }
        length--;
        return 0;
    }
};
int main()
{
    list* t=new list;
    t->insert(15,1);
    t->insert(1,2);
    t->insert(2,3);
    t->insert(3,4);
    t->insert(4,5);
    t->insert(5,6);
    t->insert(6,7);
    t->insert(7,8);
    t->del(7);
    for(int i=0;i<10;i++) cout<<t->get(i+1)<<endl;
    delete t;
    return 0;
}
