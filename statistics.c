#include<stdio.h>
#include<math.h>

float mean( float array[], int length) {
    float sum = 0;
    for(int i = 0; i < length; i++){
        sum+=array[i];
    }
    return sum/length;
}

float median( float array[], int length){
    int median_index = floor(length/2);
    float median_value = 0;
    if( length%2 != 0){
        return array[median_index];
        }
    return (array[median_index]+array[median_index - 1]) / 2;
}

float* insertion_sort( float array[], int length) {
    for(int i = 1; i < length; i++){
        int extract_index = i;
        float extract_value = array[i];
        
    }
}




int main (){
    
    float array[] ={ 90, 85, 100, 95, 85, 90, 21 };
    int length = sizeof(array)/ sizeof(float);
    printf( "%f", mean(array, length));
    printf("\n");
    printf( "%f", median(array, length));

    return 0;
}
