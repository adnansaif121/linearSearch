#include<iostream>
using namespace std;

template<size_t N>
void linearSearch(int (&array)[N], int target)
{
    for(int i = 0; i < N; i++) {
        if(array[i] == target) {
            cout<<"Target found at position : "<<i+1;
            return;
        }
    }
    cout<<"Target not found";

}
int main(){
    int array[] = {10 , 30, 50, 60, 80, 90, 100};
    int target = 20;
    linearSearch(array, target);
}
