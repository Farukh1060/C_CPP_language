#include<iostream>
//2. Write a program of to sort the array using templates
using namespace std;

	template <typename f>
	void shortarray(f array[],int size) {

		int k=0;
	cout<<"enter array element: ";
		for(int i=0;i<size;i++){
			
			cin>>array[i];
					
		}
				
		for(int i=0;i<size;i++){	
			for(int j=i+1;j<size;j++){
			
				if(array[i]>array[j]){
					int temp =array[i];
					 	array[i]=array[j];
					 	array[j]=temp;
					 	
			     }
	     	}
//	     	cout<<k;
			  k++;					
		}
		for(int k =0;k<size;k++){
				cout<<array[k]<<" ";
		}
	
		
	}
	
int main(){

     double array[]={};
    

	shortarray<double>(array,5);
	
return 0;
}
