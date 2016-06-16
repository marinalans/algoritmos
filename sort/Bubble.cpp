#include <iostream>

using namespace std;

bool need_swap(int a, int b){
	return a > b;
}

void swap(int * a, int * b){
	int t = *a;
	*a = *b;
	*b = t;
}

int * bubble(int * array, int array_size){
	
	for(int i = 0; i < array_size-1; i++){
		for(int j = i + 1; j < array_size; j++)	{
			if(need_swap(array[i], array[j])){
				swap(&array[i], &array[j]);
			}
		}
	}
	
	return array;
}

int main(){
	int array[]=  { 2, 3, 1, 5, 4 };
	int size = sizeof(array)/sizeof(int);
	auto array_sorted = bubble(array, size);

	for(auto a:array){
		printf("%d\n", a);
	}
	
	return 0;
}