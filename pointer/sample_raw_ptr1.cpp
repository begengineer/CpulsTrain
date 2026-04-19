#include<iostream>
int main(){
   int* ptr=new int(10);
   int* ptrAray = new int[10];
   
   for(int i=0;i<10;++i){
      *ptr+=i;
      ptrAray[i]=i;
   }
   std::cout<<"ptr="<<*ptr<<std::endl;
   std::cout<<"ptrAray[0]="<<ptrAray[0]<<std::endl;

   delete ptr; //これを忘れると、メモリリーク
   delete[] ptrAray;

   return 0;
}
