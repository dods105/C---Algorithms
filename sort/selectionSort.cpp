#include <iostream>
#include <vector>

int main(){
    std::vector <int> arr = {2,5,3,62,1,79,0};

    for(int i = 0; i < arr.size(); i++){
        int min = i;
        for(int j = i; j < arr.size(); j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        if(min != i){
            int temp = arr[i];
            arr[i]  = arr[min];
            arr[min] = temp;
        }
        
    }

    for(int i: arr){
        std::cout << i << " ";
    }
}