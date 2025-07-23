#include <iostream>
#include <vector>

int main(){
    std::vector <int> arr = {1,2,6,3,2,9,1,0,22};

    for(size_t i = 0; i < arr.size(); i++){
        for(size_t j = i + 1; j < arr.size(); j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i: arr){
        std::cout << i << " ";
    }
}