#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(){
    size_t res_x = 120;
    size_t res_y = 30;
    float coef = 11.0f/24.0f;

    for(size_t frame = 0; frame<1000; frame++){
        for (size_t i = 0; i < res_y; i++){
            for (size_t j = 0; j < res_x-1; j++){
                float x = (float)j/(res_x-1)* res_x / res_y *coef * 2.0f - 1.0f;
                float y = (float)i/res_y * 2.0f - 1.0f;
                x += sin(frame*0.1);
                if (x*x+y*y <= 0.5f){
                    printf("@");
                } else {printf(" ");}
            }
            printf("\n");
        }
    }
    return 0;
}