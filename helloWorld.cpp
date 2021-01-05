#include<iostream>
#include<string.h>

using namespace std;

int main() {

    char Ucase[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char Lcase[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    //To Print "Hello World"

    cout<<"\""<<Ucase[8-1]<<Lcase[5-1]<<Lcase[12-1]<<Lcase[12-1]<<Lcase[15-1]<<" ";
    cout<<Ucase[23-1]<<Lcase[15-1]<<Lcase[18-1]<<Lcase[12-1]<<Lcase[4-1]<<"\"";

}