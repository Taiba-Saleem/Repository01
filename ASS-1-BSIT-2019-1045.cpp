#include<iostream>
using namespace std;

int count = 0; // A global variable

///////////1-Display- Function//////////////
void display(int arr[])
{
if(count==0)
	
cout<<"List is empty\n";

else
	{

for(int i=0; i<count; i++)

cout<<arr[i]<<endl;
	
	}
}

////////2-Add elements-Function////////////
void Addelement(int arr[], int size)
{	int value;  
	if(count<size)
	{
	 for(int i=0; i<size; i++)
	 {
	 cout<<"Enter value  "<<i<<"\t\t";
	 cin>>arr[i];
	 count++;
	}
}
	else
	{
		cout<<"List is full";
	}
}

/////////////////3-Delete-Element-Function//////
void delelement(int arr[])	
{
int i, index;
cout<<"Enter Index of Element to delete";
cin>>index;
i=index;
while(i<=count)
{
arr[i]=arr[i+1];
i=i+1;
}
count=count-1;
}
/////////////////4-Search-Element-Function//////
void search(int arr[])	
{
int j=0, key;
cout<<"Enter key value\t";
cin>>key;
if(count==0)
{cout<<"list is empty";}
else
{

while(j<count)
{
if(arr[j]==key){
break;
}
j=j+1;
cout<<"Element found at   "<<j;
}
}
}
/////////////////5-Get-Size of List-Function//////
int listsize(int arr[])
{
	return count;
}
///////////7- Copy of list//////////////
void copy(int arr[])
{
if(count==0)
	
cout<<"List is empty\n";

else
	{

for(int i=0; i<count; i++)

cout<<arr[i]<<endl;
	
	}
}

//////////6-Remove Elements from list/////////////////
void remove(int arr[] , int size)
{
if(count>0)
{
size=count-1;
cout<<"All elements in list are removed"<<size;
}
else
{

	cout<<"List is already empty\n";
}
}
//////////8-Get Elements /////////////////
int Get(int arr[]);
{
	
int i, index;
cout<<"Enter Index of Element to get Element";
cin>>index;
i=count;
count++;

switch(index)
{
	case 1:
		index=0;
		cout<<"The element at index 0 is: "<<arr[i];
		break;
	case 2 :
		index=1;
		cout<<"The element at index 1 is: "<<arr[i++];
		break;
	case 3 :
		index=2;
		cout<<"The element at index 2 is: "<<arr[i++];
		break;
	case 4 :
		index=3;
		cout<<"The element at index 3 is: "<<arr[i++];
		break;
	default :
	cout<<"Invalid input";
}
}

int main() 
{

//////////User Interface/////////////////
    const []int size=3;
    int m;  
 	int list[size];
while(true)
{ 		
   cout<<"\n\nEnter a Digit to Perform Required Operation on The List:\n\n";
   cout<<"\nPress 1:\tAdd Elements in the List";
   cout<<"\nPress 2:\tDisplay List Elements";
   cout<<"\nPress 3:\tDelete an Element  in The List";
   cout<<"\nPress 4:\tSearch an Element from The List";
   cout<<"\nPress 5:\tCount Elements in The List";
   cout<<"\nPress 6:\tRemove all Elements";
   cout<<"\nPress 7:\tCopy of list/n";
   cout<<"\nPress 8:\tGet Elements";
   cout<<"\nPress 9:\tUpdate Elements";
   cout<<"\n\nYou Entered:\t";
   
int choice;
cin>>choice;
   switch(choice) {
      case 1 :
  		Addelement(list, size);
        break;
      case 2 :
        cout<<"\nElements are:\n";
      	display(list);
        break;
      case 3 :
         delelement(list);
         break;
      case 4 :
         search(list);
         break;
     case 5 :
     	cout<<"Total no. of elements in the list are:\t ";
        m=listsize(list); 
        cout<<m;
         break;
    case 6 :
         void remove( int arr[] ,  int size);
    break;
     case 7 :
        cout<<"\nCopy of list:\n";
      	copy(list);
      	break;
    case 8 :
         int Get(int arr[]);
         break;
      	
	default :
         cout << "Invalid Choice" << endl;

   }
}
return 0;
}

