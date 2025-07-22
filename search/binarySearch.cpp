#include <iostream>
#include <vector>

template <typename T>
int search_index(std::vector<int> arr, T target){

    if(arr.empty()){
        return -1;
    }

    int right = arr.size() - 1;
    int left = 0;

    while(true){
        int middle = left + ((right - left) / 2);

        if(arr[middle] == target){
            return middle;
        }else if(arr[middle] > target){
            right = middle - 1;
        }else{
            left = middle + 1;
        }
    }
}

int main(){
    std::vector<int> arr = {1,2,3,4,5};
    int target = 5;

    std::cout << search_index(arr, target);

}