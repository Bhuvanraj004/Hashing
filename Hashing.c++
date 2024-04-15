#include<iostream.h> 
#include<limits.h>
using namespace std;
void Insert(int ary[],int hFn, int Size){
 int element,pos,n=0;
cout<<"Enter key element to insert\n"; cin>>element;
pos = element%hFn;
while(ary[pos]!= INT_MIN) { if(ary[pos]== INT_MAX)
break;
pos = (pos+1)%hFn; n++;
if(n==Size)
break;
}
if(n==Size)
cout<<"Hash table was full of elements\nNo Place to insert this element\n\n";
 else
}
 ary[pos] = element;	//Inserting element
 void Delete(int ary[],int hFn,int Size){ int element,n=0,pos;
cout<<"Enter element to delete\n"; cin>>element;
pos = element%hFn;
while(n++ != Size){ if(ary[pos]==INT_MIN){
cout<<"Element not found in hash table\n"; break;
}
else if(ary[pos]==element){ ary[pos]=INT_MAX; cout<<"Element deleted\n\n"; break;
}
else{
pos = (pos+1) % hFn;
}
