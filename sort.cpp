#include<iostream>
using namespace std;
template<class T>
T* sort(T* arr,int len){
	for(int i=0;i<len;i++){
		cout<<arr[i]<<endl;
	}
	int temp;
	for(int i=0;i<len-1;i++){

	for(int j=i+1;j<len;j++){
		if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
		}
	return arr;
}

int main(){
	//int a[5]={5,3,1,2,9};
	char a[5]={'a','e','c','y','o'};
	char* p=a;
	p=sort(a,5);
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
	return 0;
	
} 
