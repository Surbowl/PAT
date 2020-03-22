#include <cstdio>
using namespace std;
int main(){
    int nums[10] = {0};
    for(int i = 0; i < 10; i++){
        scanf("%d", nums + i);
    }
    for(int i = 1; i < 10; i++){
        if(nums[i] > 0){
            nums[i]--;
            printf("%d", i);
            break;
        }
    }
    for(int i = 0; i < 10; i++){
        while(nums[i]--){
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
