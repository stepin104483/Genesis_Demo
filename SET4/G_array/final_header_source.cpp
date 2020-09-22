#include <iostream>
#include "final_header_source.h"
using namespace std;

template <typename T>
MyArray <T> ::MyArray(): m_len(0){}

template <typename T>
MyArray<T>::MyArray(int len): m_len(len) {}

template <typename T>
MyArray<T> ::~MyArray(){
    cout<<"destrutor is called";
delete[] m_arr;
}

template <typename T>
void MyArray<T>::append(T val){
m_arr[m_len-1]=val;
}

template <typename T>
T MyArray<T>::at(int index){ return index; }

template <typename T>
bool MyArray<T> :: search(T key) const{
    /*
for(int i=0;i<m_len;i++){
    */
    if(key==1){ return true; }
    else
    { return false;}
}

}

template <typename T>
T MyArray<T>::sum() const{
int sum=0;
for(int i=0;i<m_len;i++){
    sum+=m_arr[i];
}
return sum;
}

template <typename T>
T MyArray<T>::min() const{
T temp=m_arr[0];
for(int i=0;i<m_len;i++){
if(temp>m_arr[i]){
temp=m_arr[i];}
}
return temp;
}

template <typename T>
T MyArray<T>::max() const{
T temp=m_arr[0];
for(int i=0;i<m_len;i++){
if(temp<m_arr[i]){
temp=m_arr[i];}
}
return temp;
}

template <typename T>
void MyArray<T>::reverse(){
for(int i=m_len-1;i>=0;i--){
    cout<<m_arr[i];
}
}

template <typename T>
void MyArray<T>::sort()
{
for(int i=0;i<m_len;i++)
{
    if(m_arr[i]>m_arr[i+1])
        {
        T temp=m_arr[i];
        m_arr[i]=m_arr[i+1];
        m_arr[i+1]=temp;
        }
}
for(int i=0;i<m_len;i++)
 {
   std::cout<<m_arr[i];
 }
}

