#include<iostream>
#include<string>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int choice1,choice2,marks=0;
char user,ans;
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);

class studentinfo
{
	public:
		
		int roll;
		string name;
		void getdata()
		{   // student information
		    system("color 0B");
		    cout<<"ENTER YOUR DETAILS : "<<endl;
			cout<<"Name : ";
		    getline(cin>>ws,name);
			cout<<"Roll number = ";
		    cin>>roll;
		}
		void getchoice1();
		void getchoice2();
		void cal();
};

void studentinfo::getchoice1()
{   system("color 0A");
    // choice for c or c++
    cout<<"ENTER 1 FOR C AND 2 FOR C++"<<endl<<endl;
	cout<<"1)C programing "<<endl;
	cout<<"2)C++ programing"<<endl<<endl;
	cin>>choice1;
}

void studentinfo::getchoice2()
{   // choice for easy or hard
    system("color 0F");
	cout<<"ENTER 1 FOR EASY AND 2 FOR HARD"<<endl<<endl;
    cout<<"1) EASY"<<endl<<"2) HARD"<<endl<<endl;	
    cin>>choice2;
}

class C_easy
{ // c language easy questions
  public:
    void questions_C_easy();  
};

class C_hard
{ // c language hard questions
  public:
     void questions_C_hard();
};

class Cpp_easy
{ // c++ language easy questions
  public:
    void questions_Cpp_easy();
};

class cpp_hard
{ // c++ language hard questions
  public:
     void questions_Cpp_hard();
};

void C_easy::questions_C_easy()
{ 
  system("color 0E");
  system("cls");
  ans = 'a';
  cout<<"1)What does the 'C' in C language stand for?"<<endl;
  cout<<"a) Common"<<endl;
  cout<<"b) Compiled"<<endl;
  cout<<"c) Complex"<<endl;
  cout<<"d) Character"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'a' "<<endl<<endl;
	SetConsoleTextAttribute(h,14);  	
  }  

//Correct answer: a) Common
  ans = 'b';
  cout<<"2)Which of the following is a valid C identifier?"<<endl;
  cout<<"a) 123variable"<<endl;
  cout<<"b) _variable"<<endl;
  cout<<"c) variable@name"<<endl;
  cout<<"d) break"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

    
//Correct answer: b) _variable

  ans = 'a';
  cout<<"3)How do you include comments in C code?"<<endl;
  cout<<"a) // This is a comment"<<endl;
  cout<<"b) # This is a comment"<<endl;
  cout<<"c) /* This is a comment /"<<endl;
  cout<<"d) -- This is a comment"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'a' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  
    
//Correct answer: a) // This is a comment

  ans = 'c';
  cout<<"4)Which data type is used to store whole numbers in C?"<<endl;
  cout<<"a) char"<<endl;
  cout<<"b) float"<<endl;
  cout<<"c) int"<<endl;
  cout<<"d) double"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: c) int

  ans = 'b';
  cout<<"5)What does the 'scanf' function do in C?"<<endl;
  cout<<"a) Print data"<<endl;
  cout<<"b) Input data from the user"<<endl;
  cout<<"c) Perform calculations"<<endl;
  cout<<"d) Declare a variable"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: b) Input data from the user

  ans = 'c';
  cout<<"6)How do you declare a constant in C?"<<endl;
  cout<<"a) #define"<<endl;
  cout<<"b) constant"<<endl;
  cout<<"c) const"<<endl;
  cout<<"d) immut"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: c) const

  ans = 'b';
  cout<<"7)Which operator is used for equality comparison in C?"<<endl;
  cout<<"a) ="<<endl;
  cout<<"b) =="<<endl;
  cout<<"c) ==="<<endl;
  cout<<"d) :="<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: b) ==

  ans = 'a';
  cout<<"8)Which header file is used for input and output operations in C?"<<endl;
  cout<<"a) stdio.h"<<endl;
  cout<<"b) iostream.h"<<endl;
  cout<<"c) math.h"<<endl;
  cout<<"d) conio.h"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'a' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: a) stdio.h

  ans = 'b';
  cout<<"9)What is the result of the expression 10 % 3 in C?"<<endl;
  cout<<"a) 0"<<endl;
  cout<<"b) 1"<<endl;
  cout<<"c) 2"<<endl;
  cout<<"d) 3"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: b) 1

  ans = 'b';
  cout<<"10)What is the format specifier for a character data type in 'printf' and 'scanf' functions?"<<endl;
  cout<<"a) %d"<<endl;
  cout<<"b) %c"<<endl;
  cout<<"c) %s"<<endl;
  cout<<"d) %f"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: b) %c

  ans = 'c';
  cout<<"11)Which control structure is used for making decisions in C?"<<endl;
  cout<<"a) for"<<endl;
  cout<<"b) switch"<<endl;
  cout<<"c) if"<<endl;
  cout<<"d) while"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: c) if

  ans = 'c';
  cout<<"12)What is the purpose of the 'break' statement in a 'switch' statement?"<<endl;
  cout<<"a) To end the program"<<endl;
  cout<<"b) To skip the current case and move to the next"<<endl;
  cout<<"c) To exit the loop"<<endl;
  cout<<"d) To execute the default case"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: c) To exit the loop

  ans = 'a';
  cout<<"13)Which operator is used to access the value stored in a pointer in C?"<<endl;
  cout<<"a) *"<<endl;
  cout<<"b) &"<<endl;
  cout<<"c) ->"<<endl;
  cout<<"d) %"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'a' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: a) *

  ans = 'b';
  cout<<"14)What is the result of the expression 5 + 7 / 3 in C?"<<endl;
  cout<<"a) 6"<<endl;
  cout<<"b) 7"<<endl;
  cout<<"c) 8.5"<<endl;
  cout<<"d) 9"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: b) 7

  ans = 'a';
  cout<<"15)Which operator is used for incrementing a variable in C?"<<endl;
  cout<<"a) ++"<<endl;
  cout<<"b) --"<<endl;
  cout<<"c) +="<<endl;
  cout<<"d) *="<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'a' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: a) ++

  ans = 'c';
  cout<<"16)What is the purpose of the 'return' statement in a function in C?"<<endl;
  cout<<"a) To print a message"<<endl;
  cout<<"b) To exit the program"<<endl;
  cout<<"c) To return a value to the calling function"<<endl;
  cout<<"d) To declare a variable"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: c) To return a value to the calling function
 
  ans = 'b';
  cout<<"17)What is the range of the 'char' data type in C?"<<endl;
  cout<<"a) -32768 to 32767"<<endl;
  cout<<"b) -128 to 127"<<endl;
  cout<<"c) 0 to 255"<<endl;
  cout<<"d) -2147483648 to 2147483647"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: b) -128 to 127
 
  ans = 'b';
  cout<<"18)How do you define a one-dimensional array in C?"<<endl;
  cout<<"a) array()"<<endl;
  cout<<"b) int array[]"<<endl;
  cout<<"c) array[]"<<endl;
  cout<<"d) (int)array[]"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  

//Correct answer: b) int array[]
  
  ans = 'c';
  cout<<"19)Which function is called automatically at the end of a C program?"<<endl;
  cout<<"a) start()"<<endl;
  cout<<"b) main()"<<endl;
  cout<<"c) exit()"<<endl;
  cout<<"d) end()"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  	
  }  

//Correct answer: c) exit()
 
  ans = 'b';
  cout<<"20)What is the purpose of the 'sizeof' operator in C?"<<endl;
  cout<<"a) To find the square root of a number"<<endl;
  cout<<"b) To calculate the size of a variable or data type"<<endl;
  cout<<"c) To compare two variables"<<endl;
  cout<<"d) To check if a number is prime"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,14);
  }  
Sleep(3);
//Correct answer: b) To calculate the size of a variable or data type 
}

void C_hard::questions_C_hard()
{ system("cls");
  system("color 0A");      
  ans = 'a';
  // question 1
  cout<<"1)What is the result of the expression sizeof(char) in C?"<<endl;
  cout<<"a) 1"<<endl;
  cout<<"b) 2"<<endl;
  cout<<"c) 4"<<endl;
  cout<<"d) 8"<<endl<<endl;
  cout<<"ENTER THE CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'a' "<<endl<<endl;
  SetConsoleTextAttribute(h,10);
  }  
// correct ans a) 1
     ans ='c';
    // Question 2
    cout << "2)In C, what does the 'volatile' keyword indicate?" << endl;
    cout << "a) It is a pointer type" << endl;
    cout << "b) It can't be used in C" << endl;
    cout << "c) The variable's value can change unexpectedly" << endl;
    cout << "d) It makes a variable constant" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  } 
  //  cout << "Correct answer: c) The variable's value can change unexpectedly" << endl;

    // Question 3
    ans = 'c';
    cout << "3)Which of the following is a correct way to allocate memory for a 2D array in C?" << endl;
    cout << "a) int arr[][] = new int[3][3];" << endl;
    cout << "b) int arr[3, 3];" << endl;
    cout << "c) int arr[3][3];" << endl;
    cout << "d) int arr[3][3] = {0};" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
      marks=marks+1;
      cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
    } 
   //   cout << "Correct answer: c) int arr[3][3];" << endl;
  ans = 'b';
    // Question 4
    cout << "4)In C, what is a 'register variable'?" << endl;
    cout << "a) A variable stored in a hardware register" << endl;
    cout << "b) A variable defined with the 'register' keyword" << endl;
    cout << "c) A variable declared in a header file" << endl;
    cout << "d) A global variable" << endl<<endl;
      cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  } 
 //   cout << "Correct answer: b) A variable defined with the 'register' keyword" << endl;

    // Question 5
      ans = 'c';
    cout << "5)What is the purpose of the 'bitwise AND' operator (&) in C?" << endl;
    cout << "a) Logical AND between two numbers" << endl;
    cout << "b) Bitwise OR between two numbers" << endl;
    cout << "c) Bitwise AND between two numbers" << endl;
    cout << "d) Bitwise XOR between two numbers" << endl<<endl;
      cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  } 
  //  cout << "Correct answer: c) Bitwise AND between two numbers" << endl;
    ans = 'd';
    // Question 6
    cout << "6)In C, which keyword is used to define a macro?" << endl;
    cout << "a) define" << endl;
    cout << "b) macro" << endl;
    cout << "c) macrodef" << endl;
    cout << "d) #define" << endl<<endl;
      cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'd' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  } 
   // cout << "Correct answer: d) #define" << endl;

    // Question 7
      ans = 'd';
    cout << "7)What is the range of the 'double' data type in C?" << endl;
    cout << "a) -32768 to 32767" << endl;
    cout << "b) -128 to 127" << endl;
    cout << "c) -2147483648 to 2147483647" << endl;
    cout << "d) Approximately �1.7 x 10^308" <<endl<< endl;
      cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'd' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  } 
  //  cout << "Correct answer: d) Approximately �1.7 x 10^308" << endl;

    // Question 8
      ans = 'b';
    cout << "8)What is the scope of a variable declared as 'static' within a function in C?" << endl;
    cout << "a) Global scope" << endl;
    cout << "b) Function scope" << endl;
    cout << "c) Block scope" << endl;
    cout << "d) No scope" << endl<<endl;
      cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  } 
   // cout << "Correct answer: b) Function scope" << endl;

    // Question 9
      ans = 'a';
    cout << "9)What is the primary purpose of the 'enum' data type in C?" << endl;
    cout << "a) To define custom data types" << endl;
    cout << "b) To create arrays" << endl;
    cout << "c) To store floating-point values" << endl;
    cout << "d) To create mathematical constants" << endl<<endl;
      cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'a' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  } 
    //cout << "Correct answer: a) To define custom data types" << endl;

    // Question 10
      ans = 'b';
    cout << "10)In C, what is the 'void' data type used for?" << endl;
    cout << "a) To create empty variables" << endl;
    cout << "b) To indicate a function returns no value" << endl;
    cout << "c) To store null values" << endl;
    cout << "d) To define mathematical functions" << endl<<endl;
      cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  } 
   // cout << "Correct answer: b) To indicate a function returns no value" << endl;
   
    // Question 11
      ans = 'b';
    cout << "11)What does the 'volatile' keyword do in C when applied to a pointer?" << endl;
    cout << "a) Makes the pointer constant" << endl;
    cout << "b) Forces the compiler to optimize the pointer" << endl;
    cout << "c) Allows the pointer to change unexpectedly" << endl;
    cout << "d) Makes the pointer null" << endl<<endl;
      cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  } 
 //    cout << "Correct answer: b) Forces the compiler to optimize the pointer" << endl;

    // Question 12
      ans = 'a';
    cout << "12)In C, what is the 'extern' keyword used for?" << endl;
    cout << "a) To declare a global variable" << endl;
    cout << "b) To indicate an internal function" << endl;
    cout << "c) To create a structure" << endl;
    cout << "d) To declare a local variable" << endl<<endl;
      cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'a' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  } 
 //   cout << "Correct answer: a) To declare a global variable" << endl;

    // Question 13
      ans = 'b';
    cout << "13)What is the result of the expression 3 * 4 / 2 in C?" << endl;
    cout << "a) 3" << endl;
    cout << "b) 6" << endl;
    cout << "c) 12" << endl;
    cout << "d) 2" << endl<<endl;
   cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  }    
   // cout << "Correct answer: b) 6" << endl;

    // Question 14
      ans = 'd';
    cout << "14)In C, what is the purpose of the 'static' keyword when applied to a global variable?" << endl;
    cout << "a) Makes the variable immutable" << endl;
    cout << "b) Restricts the variable to the local scope" << endl;
    cout << "c) Allows external access to the variable" << endl;
    cout << "d) Persists the variable's value across function calls" << endl<<endl;
   cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'd' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  }    
   // cout << "Correct answer: d) Persists the variable's value across function calls" << endl;

    // Question 15
      ans = 'd';
    cout << "15)What does the 'malloc' function do in C?" << endl;
    cout << "a) Allocates memory on the stack" << endl;
    cout << "b) Allocates memory for an array of elements" << endl;
    cout << "c) Deallocates memory" << endl;
    cout << "d) Allocates memory on the heap" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'd' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  }   
   // cout << "Correct answer: d) Allocates memory on the heap" << endl;

    // Question 16
      ans = 'c';
    cout << "16)In C, what is the purpose of the 'union' data type?" << endl;
    cout << "a) To create arrays" << endl;
    cout << "b) To define custom data types" << endl;
    cout << "c) To store variables of different data types in the same memory location" << endl;
    cout << "d) To store only boolean values" << endl<<endl;
      cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  } 
   // cout << "Correct answer: c) To store variables of different data types in the same memory location" << endl;

    // Question 17
      ans = 'a';
    cout << "17)Which library should be included to use the 'pow' function in C for power/exponentiation?" << endl;
    cout << "a) math.h" << endl;
    cout << "b) stdio.h" << endl;
    cout << "c) conio.h" << endl;
    cout << "d) cmath" << endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'a' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  }     
  //  cout << "Correct answer: a) math.h" << endl;

    // Question 18
      ans = 'b';
    cout << "18)What is the purpose of the 'do-while' loop in C?" << endl;
    cout << "a) To create an infinite loop" << endl;
    cout << "b) To execute the loop body at least once" << endl;
    cout << "c) To iterate over an array" << endl;
    cout << "d) To perform conditional branching" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
      marks=marks+1;
      cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'b' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
    } 
   // cout << "Correct answer: b) To execute the loop body at least once" << endl;
   
   //question 19
  ans = 'c';
  cout<<"19)Which control structure is used for making decisions in C?"<<endl;
  cout<<"a) for"<<endl;
  cout<<"b) switch"<<endl;
  cout<<"c) if"<<endl;
  cout<<"d) while"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  }  

//Correct answer: c) if

 //question 20
  ans = 'c';
  cout<<"20)What is the purpose of the 'break' statement in a 'switch' statement?"<<endl;
  cout<<"a) To end the program"<<endl;
  cout<<"b) To skip the current case and move to the next"<<endl;
  cout<<"c) To exit the loop"<<endl;
  cout<<"d) To execute the default case"<<endl<<endl;
  cout<<"ENTER CORRECT OPTION = ";
  cin>>user;
  if (user==ans)
  {
    marks=marks+1;
    cout<<endl<<endl; 
  }
  else
  {
  	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'c' "<<endl<<endl;
  	SetConsoleTextAttribute(h,10);
  }  
  Sleep(3);     
  system("cls"); 
}

void Cpp_easy::questions_Cpp_easy()
{   
      system("cls"); 
	 // Question 1
	system("color 0D");
	ans = 'c';
    cout << "1)What does C++ stand for?" << endl;
    cout << "a) Common Computing and Coding" << endl;
    cout << "b) Compiler and C" << endl;
    cout << "c) C Plus Plus" << endl;
    cout << "d) C+ Language" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'c' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  
   // cout << "Correct Answer: C. C Plus Plus" << endl << endl;

    // Question 2
    ans = 'c';
    cout << "1)Which of the following is not a fundamental data type in C++?" << endl;
    cout << "a) int" << endl;
    cout << "b) float" << endl;
    cout << "c) string" << endl;
    cout << "d) char" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'c' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    } 
    // cout << "Correct Answer: C. string" << endl << endl;

    // Question 3
    ans = 'a';
    cout << "3)In C++, what is the operator used for the modulo operation?" << endl;
    cout << "a) %" << endl;
    cout << "b) &" << endl;
    cout << "c) *" << endl;
    cout << "d) /" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'a' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  

    //cout << "Correct Answer: A. %" << endl << endl;

    // Question 4
    ans = 'b';
    cout << "4)What is the purpose of the 'new' operator in C++?" << endl;
    cout << "a) To delete memory" << endl;
    cout << "b) To allocate memory" << endl;
    cout << "c) To perform type conversion" << endl;
    cout << "d) To access class members" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'b' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  

    // cout << "Correct Answer: B. To allocate memory" << endl << endl;

    // Question 5
    ans = 'd';
    cout << "5)Which of the following is not a valid access specifier in C++?" << endl;
    cout << "a) public" << endl;
    cout << "b) private" << endl;
    cout << "c) protected" << endl;
    cout << "d) internal" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    { 
    SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'd' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  

    // cout << "Correct Answer: D. internal" << endl << endl;

    // Question 6
    ans = 'a';
    cout << "6)What is the keyword used to define a class in C++?" << endl;
    cout << "a) class" << endl;
    cout << "b) struct" << endl;
    cout << "c) type" << endl;
    cout << "d) object" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'a' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  

    // cout << "Correct Answer: A. class" << endl << endl;

    // Question 7
    ans = 'a';
    cout << "7)What is the process of creating a new class from an existing class in C++ called?" << endl;
    cout << "a) Inheritance" << endl;
    cout << "b) Encapsulation" << endl;
    cout << "c) Polymorphism" << endl;
    cout << "d) Abstraction" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'a' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  

    // cout << "Correct Answer: A. Inheritance" << endl << endl;

    // Question 8
    ans = 'd';
    cout << "8)Which C++ keyword is used to create an instance of a class?" << endl;
    cout << "a) object" << endl;
    cout << "b) instance" << endl;
    cout << "c) create" << endl;
    cout << "d) new" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if(user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'd' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  

    //cout << "Correct Answer: D. new" << endl << endl;

    // Question 9
    ans = 'c';
    cout << "9)What is a constructor in C++?" << endl;
    cout << "a) A member function of a class" << endl;
    cout << "b) A variable that holds an object" << endl;
    cout << "c) A special member function to initialize objects" << endl;
    cout << "d) A data type" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'c' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }   

   // cout << "Correct Answer: C. A special member function to initialize objects" << endl << endl;

    // Question 10
    ans = 'b';
    cout << "10)Which of the following operators is used to access the member of a class through a pointer?" << endl;
    cout << "a) ." << endl;
    cout << "b) ->" << endl;
    cout << "c) ::" << endl;
    cout << "d) *" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'b' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  

    //cout << "Correct Answer: B. ->" << endl << endl;

    // Question 11
    ans = 'b';
    cout << "11)Which C++ feature allows a class to have multiple methods with the same name but different parameters?" << endl;
    cout << "a) Inheritance" << endl;
    cout << "b) Overloading" << endl;
    cout << "c) Polymorphism" << endl;
    cout << "d) Abstraction" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'b' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }   

   // cout << "Correct Answer: B. Overloading" << endl << endl;

    // Question 12
    ans = 'b';
    cout << "12)What is the default access specifier for members of a C++ class?" << endl;
    cout << "a) public" << endl;
    cout << "b) private" << endl;
    cout << "c) protected" << endl;
    cout << "d) internal" << endl<<endl;
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'b' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  
   // cout << "Correct Answer: B. private" << endl << endl;

    // Question 13
    ans = 'b';
    cout << "13)What is the process of wrapping the data (attributes) and methods (functions) into a single unit called?" << endl;
    cout << "a) Inheritance" << endl;
    cout << "b) Encapsulation" << endl;
    cout << "c) Polymorphism" << endl;
    cout << "d) Abstraction" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
	  SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'b' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  

   // cout << "Correct Answer: B. Encapsulation" << endl << endl;

    // Question 14
    ans = 'b';
    cout << "14)What is the keyword used to call the base class constructor from a derived class constructor?" << endl;
    cout << "a) super" << endl;
    cout << "b) base" << endl;
    cout << "c) parent" << endl;
    cout << "d) this" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'b' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  

    //cout << "Correct Answer: B. base" << endl << endl;

    // Question 15
    ans = 'b';
    cout << "15)Which keyword is used to implement method overriding in C++?" << endl;
    cout << "a) override" << endl;
    cout << "b) virtual" << endl;
    cout << "c) final" << endl;
    cout << "d) abstract" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'b' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  

    //cout << "Correct Answer: B. virtual" << endl << endl;

    // Question 16
    ans = 'a';
    cout << "16)In C++, what is a pure virtual function?" << endl;
    cout << "a) A function that has no implementation in the base class" << endl;
    cout << "b) A function that is declared in the derived class" << endl;
    cout << "c) A function that is not virtual" << endl;
    cout << "d) A function that cannot be overridden" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
    cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	cout<<"wrong option !"<<endl;
  	cout<<"correct option is 'a' "<<endl<<endl;
  	SetConsoleTextAttribute(h,13);
    }  

    //cout << "Correct Answer: A. A function that has no implementation in the base class" << endl << endl;

    // Question 17
    ans = 'a';
	cout << "17)What is the purpose of the 'this' pointer in C++?" << endl;
    cout << "a) It points to the current object" << endl;
    cout << "b) It points to the base class" << endl;
    cout << "c) It points to the derived class" << endl;
    cout << "d) It points to the global object" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'a' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  
    //cout << "Correct Answer: A. It points to the current object" << endl << endl;

    // Question 18
      ans = 'b';
    cout << "18)Which C++ feature allows a class to inherit from multiple base classes?" << endl;
    cout << "a) Overloading" << endl;
    cout << "b) Multiple inheritance" << endl;
    cout << "c) Polymorphism" << endl;
    cout << "d) Encapsulation" << endl<<endl;
      cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'b' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  

   //cout << "Correct Answer: B. Multiple inheritance" << endl << endl;

     // Question 19
     ans = 'a';
    cout << "19)What is the difference between 'public', 'private', and 'protected' access specifiers in a class?" << endl;
    cout << "a) They control the visibility of class members" << endl;
    cout << "b) They determine the class size" << endl;
    cout << "c) They specify the order of member functions" << endl;
    cout << "d) They define the class name" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'a' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }   

    //cout << "Correct Answer: A. They control the visibility of class members" << endl << endl;

    // Question 20
    ans = 'c';
    cout << "20)What is the main advantage of using C++ over C?" << endl;
    cout << "a) C++ is faster" << endl;
    cout << "b) C++ has better memory management" << endl;
    cout << "c) C++ supports object-oriented programming" << endl;
    cout << "d) C++ has a simpler syntax" << endl<<endl;
    cout<<"ENTER CORRECT OPTION = ";
    cin>>user;
    if (user==ans)
    {
     marks=marks+1;
     cout<<endl<<endl; 
    }
    else
    {
    	SetConsoleTextAttribute(h,12);
  	 cout<<"wrong option !"<<endl;
  	 cout<<"correct option is 'c' "<<endl<<endl;
  	 SetConsoleTextAttribute(h,13);
    }  
    Sleep(3);
    system("cls");

   //cout << "Correct Answer: C. C++ supports object-oriented programming" << endl << endl;

}


void cpp_hard::questions_Cpp_hard()
{   
    system("cls");
    system("color 0B");
    ans = 'a';
	  // Question 1
    cout << "1) What will be the output of the following C++ code?" << endl;
    cout << "int x = 5; cout << ++x + x++;" << endl;
    cout << "a) 12" << endl;
    cout << "b) 11" << endl;
    cout << "c) 10" << endl;
    cout << "d) 13" << endl << endl;
    // Correct answer A. 12
    
   cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'a' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
    
      ans = 'c';
    // Question 2
    cout << "2) What is the purpose of the 'std::move' function in C++?" << endl;
    cout << "a) Moves the object to a new memory location" << endl;
    cout << "b) Initiates a move constructor" << endl;
    cout << "c) Casts an object to an rvalue" << endl;
    cout << "d) All of the above" << endl << endl;
    // Correct answer C. Casts an object to an rvalue
   cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'c' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
      
     ans = 'c'; 
    // Question 3
    cout << "3) In C++, what is the purpose of the 'volatile' qualifier for a variable?" << endl;
    cout << "a) It indicates that the variable can be modified by hardware" << endl;
    cout << "b) It prevents compiler optimization for the variable" << endl;
    cout << "c) It ensures that the variable is accessed atomically" << endl;
    cout << "d) All of the above" << endl << endl;
    // Correct answer C. Casts an object to an rvalue
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'c' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'd';
    // Question 4
    cout << "4) What is the purpose of the 'std::forward' function in C++?" << endl;
    cout << "a) Moves the object to a new memory location" << endl;
    cout << "b) Initiates a move constructor" << endl;
    cout << "c) Casts an object to an rvalue" << endl;
    cout << "d) Facilitates perfect forwarding in functions" << endl << endl;
    // Correct answer D. Facilitates perfect forwarding in functions
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'd' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'a';
    // Question 5
    cout << "5) In C++, what is the difference between 'delete' and 'delete[]' operators?" << endl;
    cout << "a) 'delete' is used for single objects, 'delete[]' for arrays" << endl;
    cout << "b) 'delete' is used for arrays, 'delete[]' for single objects" << endl;
    cout << "c) There is no difference; both can be used interchangeably" << endl;
    cout << "d) 'delete' is used for stack-allocated objects, 'delete[]' for heap-allocated objects" << endl << endl;
    // Correct answer A. 'delete' is used for single objects, 'delete[]' for arrays
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'a' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'b';
    // Question 6
    cout << "6) What is the purpose of the 'noexcept' specifier in C++?" << endl;
    cout << "a) Specifies that a function can throw exceptions" << endl;
    cout << "b) Specifies that a function cannot throw exceptions" << endl;
    cout << "c) Facilitates exception handling in C++" << endl;
    cout << "d) Prevents the propagation of exceptions" << endl << endl;
    // Correct answer B. Specifies that a function cannot throw exceptions
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'b' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'b';
    // Question 7
    cout << "7) In C++, what is the purpose of the 'const_cast' operator?" << endl;
    cout << "a) Adds const qualifier to a variable" << endl;
    cout << "b) Removes const qualifier from a variable" << endl;
    cout << "c) Converts an object to an rvalue" << endl;
    cout << "d) Converts an object to a volatile type" << endl << endl;
    // Correct answer B. Removes const qualifier from a variable
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'b' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'c';
    // Question 8
    cout << "8) What is the output of the following C++ code?" << endl;
    cout << "int arr[] = {1, 2, 3, 4}; cout << sizeof(arr) / sizeof(arr[0]);" << endl;
    cout << "a) 1" << endl;
    cout << "b) 2" << endl;
    cout << "c) 3" << endl;
    cout << "d) 4" << endl << endl;
    // Correct answer C. 3
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'c' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'b';
    // Question 9
    cout << "9) What is the purpose of the 'auto' keyword in C++?" << endl;
    cout << "a) Declares a variable with automatic storage duration" << endl;
    cout << "b) Specifies a variable with an automatically deduced type" << endl;
    cout << "c) Defines a variable with an auto-incrementing value" << endl;
    cout << "d) Declares a variable with automatic initialization" << endl << endl;
    // Correct answer B. Specifies a variable with an automatically deduced type
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'b' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'b';
    // Question 10
    cout << "10) In C++, what is a lambda expression?" << endl;
    cout << "a) A function pointer" << endl;
    cout << "b) An anonymous function" << endl;
    cout << "c) A member function of a class" << endl;
    cout << "d) A predefined macro" << endl << endl;
    // Correct answer B. An anonymous function
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'b' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'a';
    // Question 11
    cout << "11) What is the purpose of the 'override' keyword in C++?" << endl;
    cout << "a) Declares an overridden function in a derived class" << endl;
    cout << "b) Specifies an override for the virtual keyword" << endl;
    cout << "c) Identifies a function as non-virtual" << endl;
    cout << "d) Indicates a function to override a base class function" << endl << endl;
    // Correct answer  A. Declares an overridden function in a derived class
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'a' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'a';
    // Question 12
    cout << "12) In C++, what is a smart pointer?" << endl;
    cout << "a) A pointer with enhanced arithmetic operations" << endl;
    cout << "b) A memory-efficient pointer" << endl;
    cout << "c) A pointer with automatic memory management" << endl;
    cout << "d) A pointer used for complex mathematical calculations" << endl << endl;
    // Correct answer C. A pointer with automatic memory management
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'a' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'b';
    // Question 13
    cout << "13) What is the purpose of the 'std::async' function in C++?" << endl;
    cout << "a) Performs asynchronous I/O operations" << endl;
    cout << "b) Launches a new thread asynchronously" << endl;
    cout << "c) Creates an asynchronous lambda expression" << endl;
    cout << "d) Enables asynchronous exception handling" << endl << endl;
    // Correct answer B. Launches a new thread asynchronously
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'b' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
    
    ans = 'b';
    // Question 14
    cout << "14) What is the output of the following C++ code?" << endl;
    cout << "int x = 10; cout << x << (++x) << (x++);" << endl;
    cout << "a) 1011" << endl;
    cout << "b) 10 11 12" << endl;
    cout << "c) 11 11 12" << endl;
    cout << "d) 10 11 11" << endl << endl;
    // Correct answer B. 10 11 12
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'b' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'c';
    // Question 15
    cout << "15) In C++, what is the purpose of the 'std::tie' function?" << endl;
    cout << "a) Creates a tuple from a set of values" << endl;
    cout << "b) Unpacks a tuple into a set of values" << endl;
    cout << "c) Ties the values of two or more variables together" << endl;
    cout << "d) Ties the values of two or more variables for comparison" << endl << endl;
     // Correct answer C. Ties the values of two or more variables together
     cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'c' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'd';
    // Question 16
    cout << "16) What is the purpose of the 'sizeof' operator in C++?" << endl;
    cout << "a) Determines the size of a data type or object" << endl;
    cout << "b) Returns the size of the memory allocated for a variable" << endl;
    cout << "c) Calculates the size of a class" << endl;
    cout << "d) All of the above" << endl << endl;
    // Correct answer D. All of the above
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'd' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'b';
    // Question 17
    cout << "17) In C++, what is the purpose of the 'decltype' specifier?" << endl;
    cout << "a) Declares the type of a variable" << endl;
    cout << "b) Obtains the type of an expression" << endl;
    cout << "c) Defines the type of a function" << endl;
    cout << "d) All of the above" << endl << endl;
    // Correct answer B. Obtains the type of an expression
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'b' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'd';
    // Question 18
    cout << "18) What is the output of the following C++ code?" << endl;
    cout << "int x = 5; cout << x << (x++, x++, x++);" << endl;
    cout << "a) 555" << endl;
    cout << "b) 6" << endl;
    cout << "c) 7" << endl;
    cout << "d) 8" << endl << endl;
    // Correct answer D. 8
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'd' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'b';
    // Question 19
    cout << "19) What is the purpose of the 'std::initializer_list' in C++?" << endl;
    cout << "a) Represents an array of elements" << endl;
    cout << "b) Facilitates the initialization of objects with a list of values" << endl;
    cout << "c) Initializes objects with a default set of values" << endl;
    cout << "d) Initializes a list of default values for an array" << endl << endl;
    // Correct answer B. Facilitates the initialization of objects with a list of values
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'b' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     
     ans = 'a';
    // Question 20
    cout << "20) In C++, what is the purpose of the 'std::next' function?" << endl;
    cout << "a) Advances an iterator by a specified number of positions" << endl;
    cout << "b) Retrieves the next element in a container" << endl;
    cout << "c) Determines the next available memory location" << endl;
    cout << "d) Calculates the next prime number" << endl << endl;
    // Correct answer A. Advances an iterator by a specified number of positions
    cout<<"ENTER CORRECT OPTION = ";
   cin>>user;
   if (user==ans)
     {
       marks=marks+1;
       cout<<endl<<endl; 
     }
   else
     {
     	SetConsoleTextAttribute(h,12);
  	  cout<<"wrong option !"<<endl;
  	  cout<<"correct option is 'a' "<<endl<<endl;
  	  SetConsoleTextAttribute(h,11);
     }  
     Sleep(3);
     system("cls");

}

void studentinfo::cal()
{   SetConsoleTextAttribute(h,15);
	float r;
	r=(marks*100)/20;
	cout<<"Name : "<<name<<endl<<endl;
	cout<<"Roll number : "<<roll<<endl<<endl;
	cout<<"Percentage Obtained = "<<r<<"%"<<endl<<endl;
	if(r>=40)
	{ 
	  SetConsoleTextAttribute(h,10);
	  cout<<"Pass !"<<endl;
    }
	else
	{
	SetConsoleTextAttribute(h,12);
	cout<<"Fail !"<<endl;
	SetConsoleTextAttribute(h,15);
    }
}

main()
{   
    
	studentinfo S1;
	S1.getdata();
	system("cls");
	S1.getchoice1();
	system("cls");
	switch (choice1)
	{
		case 1:S1.getchoice2();
		       break;
		case 2:S1.getchoice2();	
		       break;	
	}
	if(choice1==1 && choice2==1)
	{ // calling c programming : level easy
	   C_easy C;
          C.questions_C_easy();	
	}
	else if(choice1==1 && choice2==2)
	{ // calling c programming : level hard
	   C_hard c;
          c.questions_C_hard(); 	
	} 
	else if(choice1==2 && choice2==1)
	{ // calling c++ programming : level easy
          Cpp_easy c;
          c.questions_Cpp_easy();
	}
	else 
	{ // calling c++ programming : level hard 
      	   cpp_hard C;
          C.questions_Cpp_hard();
	}
    system("cls");
    SetConsoleTextAttribute(h,15);
    cout<<"TOTAL MARKS YOU HAVE SCORED = "<<marks<<endl<<endl;
    S1.cal();
}
