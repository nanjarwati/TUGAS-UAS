#include<iostream>
using namespace std;



int main()
{
	
 int harga[5];
	harga [0]=32;
	harga [1]=57;
	harga [2]=89;
	harga [3]=94;
	harga [4]=52;
	
 
	for (int i;i<5;i++){
		
if(harga[i]<=40)
 {
 	cout<<"harga cengkeh"<<" = "<<harga[i]<<" ribu"<<" termasuk HARGA MURAH"<<endl;
 }
 else if((harga[i]>=41)&&(harga[i]<=60))
 {
 	cout<<"harga cengkeh"<<" = "<<harga[i]<<" ribu"<<" termasuk HARGA STANDAR"<<endl;
 }
 else
 {
 	cout<<"harga cengkeh"<<" = "<<harga[i]<<" ribu"<<" termasuk HARGA MAHAL"<<endl;
 }
	

	}

	
	system("pause");
	return 0;
}
