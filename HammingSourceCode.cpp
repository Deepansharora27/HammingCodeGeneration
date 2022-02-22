#include<iostream>
 
using namespace std;
 
int main() {
    int data[10];
    int dataatrec[10],c,Parity1,Parity2,Parity3,i;
 
    cout<<"Enter 4 bits of data one by one\n";
    cin>>data[0];
    cin>>data[1];
    cin>>data[2];
    cin>>data[4];
 
    //Calculation of even parity for each of the Redundant/Parity Bits:
data[6]=data[0]^data[2]^data[4];
data[5]=data[0]^data[1]^data[4];
data[3]=data[0]^data[1]^data[2];
 
cout<<"\nEncoded data is\n";
for(i=0;i<7;i++)
        cout<<data[i];
    
cout<<"\n\nEnter received data bits one by one\n";
    for(i=0;i<7;i++)
        cin>>dataatrec[i];
 
 //Verifying with the Set of Redundant Bits: 
Parity1=dataatrec[6]^dataatrec[4]^dataatrec[2]^dataatrec[0];
Parity2=dataatrec[5]^dataatrec[4]^dataatrec[1]^dataatrec[0];
Parity3=dataatrec[3]^dataatrec[2]^dataatrec[1]^dataatrec[0];
c=Parity3*4+Parity2*2+Parity1 ;
 
    if(c==0) {
cout<<"\nNo error while transmission of data\n";
    }
else {
cout<<"\nError on position "<<c;
cout<<"\nData sent : ";
for(i=0;i<7;i++)
         cout<<data[i];
}
        
cout<<"\nData received : ";
        for(i=0;i<7;i++)
         cout<<dataatrec[i];
        
}