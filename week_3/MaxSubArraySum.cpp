#include <iostream>

using namespace std;

void printarray (int arg[], int length) {
  for (int n=0; n<length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

void printarray2 (int arg[], int length) {
  for (int n=length/2; n<length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

int main()
{
    int Array[] = {4,-3,2,1,6,-1,-2,4};
    int sub = 0;
    int max_sub1 = 0;
    int max_sub2 = 0;


    int whole = sizeof(Array)/sizeof(int);
    int half = sizeof(Array)/sizeof(int)/2;

     for(int i=0; i<half; i++){
        sub= sub + Array[i];
        if(sub > max_sub1){
                max_sub1=sub;
        }
    }
    sub = 0;

    for(int i=half; i<whole; i++){
        sub = sub + Array[i];
        if(sub > max_sub2){
                max_sub2=sub;
        }
    }

    cout << "First Array:  " ;
    printarray (Array,half);

    cout << "Second Array:  ";
    printarray2 (Array,whole);

    cout << max_sub1+max_sub2 << endl;


    return 0;
}

