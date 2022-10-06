#pragma once
#include<iostream>
#include<string.h>
using namespace std;

//pure abstract class
class CODE
{ 
protected:
	char *ptr; //pointer which point the actual string
    char  A[3]=".-", B[5]="-...", C[5]="-.-.", D[4]="-..", E[2]=".", F[5]="..-.", G[4]="--.",H[5]="....", I[3]="..", J[5]=".--",
          K[4]="-.-", L[5]=".-..", M[3]="--", N[3]="-.", O[4]="---", P[5]=".--.", Q[5]="--.-", R[4]=".-.", S[4]="...", T[2]="-",
          U[4]="..-" ,V[5]="..-", W[4]=".--", X[5]="-..-", Y[5]="-.--", Z[5]="--.."; //array's of all alphabets which contain the related MORSECODE value

    char *arr[26]={A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};  //character pointer array which point to the alphabet

public:
};

class S_M:public CODE //class which publicly inherited from class CODE
{
	char *temp;
 public:
 	void Convert(); //function which convert the string in MORSE CODE
 	void GET(); //function for getting the string and convert in uppercase
};

void S_M::GET()
{
    int SIZE;
	cout<<"[NOTE : Characters only & white space not allowed ";
	cout<<endl<<"Enter String size :: "; cin>>SIZE;
	cout<<"Enter String : ";
    temp=new char[SIZE];  //dynamic allocate memory
    cin>>temp;
    strupr(temp);
}

void S_M::Convert()
{
	int assci;
	cout<<endl<<endl<<" MORSE CODE =  ";

	for(int i=0;*temp!='\0';temp++,i++)  //logic of convert string into M_CODE
     {
     	assci=*temp;
     	assci-=65;
     	cout<<"   "<<arr[assci];
     }
}

