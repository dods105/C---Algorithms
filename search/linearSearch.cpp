#include <iostream>
#include <vector>

template <typename T>
int linearSearch(std::vector <T> arr, T target){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector arr = {2,1,4,8,6,3,9};
    std::cout << linearSearch(arr, 8);
}