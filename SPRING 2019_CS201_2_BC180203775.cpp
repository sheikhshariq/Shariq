#include<iostream>

using namespace std;

void getValue();

void reverseArray();

void displayArray();

void multipleOf3();

void sumOfElements();

int array[5];

main()

{

char input;

char yes;

do{

cout << "Press 1 To Enter Value In Array \n";

cout << "Press 2 To to Read Array Elements \n";

cout << "Press 3 To Show Array Elements In Reverse Order \n";

cout << "Press 4 To Show Array Elements Which are multiples of 3 \n";

cout << "Press 5 To Show Sum Of All The Elements. \n";

cout << "Press 6 To Exit\n\n";


cout << "Enter Your Choice: ";

cin >> input;

switch(input)

{

case '1':

getValue();

break;

case '2':

displayArray();

break;

case '3':

reverseArray();

break;

case '4':

multipleOf3();

break;

case '5':

sumOfElements();

break;

case '6':

break;

default:

cout << "Please enter a valid choice\n\n";

}

if(input != '6')
{

cout <<"Do you want to continue? Press Y/y for yes "<<endl;

cin >> yes;

cout << endl;

}


}

while (yes == 'y');

}


void getValue()

{

cout << "\nEnter Data In Array \n\n";

for(int i=0; i<=4; i++){
cout << "Enter Value: ";
cin >> array[i];

}

cout << "\n5 Elements entered\n\n";

}

void displayArray()

{

for(int i=0; i<=4; i++){
if(array[i] == 0){
cout << "Array is empty, first enter data in array\n";
break;
}else

{
cout << array[i] << endl; 
}
 
}

cout << endl;

}

void reverseArray(){

cout <<"\nShow array elements in reverse order \n";

for(int i=4; i>=0; i--){

if(array[i] == 0){

cout << "Array is empty, first enter data in array\n\n";

break;
}

else

{
cout << array[i] << endl; 
}

}

cout <<endl;

}

void multipleOf3(){

cout << "\nElements that are multiple of 3 are \n";

for(int i=0; i<=4; i++){

if((array[i] % 3) == 0)

cout << array[i] << endl;

}

cout << endl;

}

void sumOfElements()

{

int sum = 0;

cout << "Sum of all the elements is: ";

for(int i=0; i<=4; i++)
{
sum += array[i];
}
cout << sum << endl << endl;}
