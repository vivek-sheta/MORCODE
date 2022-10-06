#include<iostream>
#include<string.h>
#include<stdio.h>
#include<MORSE.hpp>
using namespace std;

class M_S:public CODE
{
private:
    char *mor;
public:
	void GET();
	void M_SConvert(); 
	void check(char []);
};

void M_S::GET()
	{
		cout<<"(NOTE : Enter space bar between two characters symbol like= .-  --..)\nEnter size  Enter Morse code : ";
		gets(mor);
	}

void M_S::M_SConvert()
{
	char temp[5];
	int j=0;
	for(int i=0;*mor!='\0';i++,mor++)
    {
        if(*mor==' ')
        {
            check(temp);
            j=0;
        }
        temp[j]=*mor;
        j++;
    }

}


void M_S::check(char *C)
{
	int CD=strlen(C);

 if(CD==1)
 	  {
   		 if( strcmp(C,arr[4]) == 0)
   	    	cout<<"E";
   	     else if(strcmp(C,arr[19])==0)
	   	    cout<<"E";
	   }


 else if(CD==2)
      {
   		if(strcmp(C,arr[0]) ==0)
   			cout<<"A";
   		else if(strcmp(C,arr[12])==0)
   			cout<<"M";
   		else if(strcmp(C,arr[13])==0)
	   		cout<<"N";
   		else if(strcmp(C,arr[8])==0)
   			cout<<"I";
      }


 else if(CD==3)
  	  {
  	 	if(strcmp(C,arr[3])==0)
	   		cout<<"D";
	   	else if(strcmp(C,arr[6])==0)
	   		cout<<"G";
	   	else if (strcmp(C,arr[10])==0)
	   		cout<<"K";
	   	else if (strcmp(C,arr[14])==0)
	   		cout<<"O";
	   	else if (strcmp(C,arr[17])==0)
	   		cout<<"R";
	   	else if (strcmp(C,arr[18])==0)
	   		cout<<"S";
	   	else if (strcmp(C,arr[20])==0)
	   		cout<<"U";
	   	else if (strcmp(C,arr[22])==0)
	   		cout<<"W";
       }

 else if(CD==4)
 		{
 		if(strcmp(C,arr[1])==0)
	   		cout<<"B";
	   	else if(strcmp(C,arr[2])==0)
	   		cout<<"C";
	   	else if (strcmp(C,arr[5])==0)
	   		cout<<"F";
	   	else if (strcmp(C,arr[7])==0)
	   		cout<<"H";
	   	else if (strcmp(C,arr[9])==0)
	   		cout<<"J";
	   	else if (strcmp(C,arr[11])==0)
	   		cout<<"L";
	   	else if (strcmp(C,arr[15])==0)
	   		cout<<"P";
	   	else if (strcmp(C,arr[16])==0)
	   		cout<<"Q";
	   	else if (strcmp(C,arr[21])==0)
	   		cout<<"V";
	   	else if (strcmp(C,arr[23])==0)
	   		cout<<"X";
	   	else if (strcmp(C,arr[24])==0)
	   		cout<<"Y";
	   	else if (strcmp(C,arr[25])==0)
	   		cout<<"Z";
 		}
}
