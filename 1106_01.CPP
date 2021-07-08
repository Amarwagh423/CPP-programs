#include<iostream.h>
#include<conio.h>
#include<stdio.h>

const int size=5;  // const is a keyword used to create a constant in c++

class student
{
  int roll_no;  //instance variable
  char na[20];
  int marks[size];   // marks is an array with 5 size and it is private member of class
  public:
    void getdata (); //only declared
    void tot_marks ();  // only declared
} ;

   void student :: getdata () // defined outside the class
   {
      cout<<"\nEnter roll no: ";
      cin>>roll_no;
      cout<<"\nEnter Name : ";
      cin>>na;
      for(int i=0; i<size; i++)   // loop iterate from 0 to 5
      {
	cout<<"Enter marks in subject"<< (i+1) <<": ";
	cin>>marks[i] ;
    }
   }
   void student :: tot_marks() //calculating total marks
   {
      int total=0; // local variable
      for(int i=0; i<size; i++)
	  total = total + marks[i];
	  cout<<"\n\nRoll No : "<< roll_no;
	  cout<<"\n\nName :  "<< na;
	  cout<<"\n\nTotal marks "<<total;
   }
int main()  // startup method of C & C++
{
   clrscr();
   student stu;  // class object
   stu.getdata() ; // calling of method using object
   stu.tot_marks() ; // calling of method using object
   return 0;
}