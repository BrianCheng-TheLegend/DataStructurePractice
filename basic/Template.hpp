#ifndef TEMPLATE_H
#define TEMPLATE_H

template<class T>
T sum(T*data,const int SIZE)
{
    T sum=0;
    for(int i=0;i<SIZE;i++){
        sum+=data[i];
    }
    return sum;
}

#endif