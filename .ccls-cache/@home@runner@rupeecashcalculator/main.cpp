#include<iostream>
using namespace std ;

class rupee_cash {

private:

int Rupee;
int Cash;


public:


   rupee_cash(){

     // making default calculator and set all valoues to 0


      Rupee = 0;
      Cash = 0;



}
    rupee_cash(int r, int c){


      Rupee = r;
      Cash = c;

}

 void print (){

cout<<Rupee<<"."<<Cash<<endl;

 }

void operator ++(){

  
}


};

int main(){


  rupee_cash a (30,8) ,b(10,2) , c;
  a.print();
  b.print();
  c.print();
 
  
}