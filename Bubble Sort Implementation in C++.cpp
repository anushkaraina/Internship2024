//bubble sort
#include<iostream>
using namespace std;
void bubblesort(int array[]){
	int i,j,temp;
	for(i =0;i<4;i++){
		for(j=0;j<4;j++){
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	cout << "Sorted Final array:" << endl;
	for(int z=0;z<5;z++){
		cout << array[z] << endl;
	}
}
int main(){
	int array[5]={5,8,1,9,3};
	cout << "Unsorted Initial array:" << endl;
	for(int x=0;x<5;x++)
	{
		cout << array[x] << endl;
	}
	bubblesort(array);
}
