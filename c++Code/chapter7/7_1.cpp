//===========================
// exer 7.1
//===========================
#include<iostream>
using namespace std;
//---------------------------
int findMinIndex(int a[], int n);
//---------------------------
int main(){
  int array[]={34,91,83,56,29,93,56,12,88,72};
  int size=sizeof(array)/sizeof(*array);

  int minIndex = findMinIndex(array, size);

  cout<<"��С��:     "<<array[minIndex]<<endl
      <<"��Ӧ���±�: "<<minIndex <<endl;
}//--------------------------
int findMinIndex(int a[], int n){
  int index = 0;
  for(int i=1; i<n; i++)
    if(a[index]>a[i])
      index = i;

  return index;
}//--------------------------

