#include <stdio.h>
#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_between_negative.h"
#include "multi_before_and_after_negative.h"
#include "console_input_opt.h"
#include "console_input_arr.h"
#include "final_result.h"
#define ARR_MAX_SIZE 20

int final_result(int case_num, int arr1[], int length){
    switch(case_num){
        case 0:
        	printf("%d\n", index_first_negative(arr1, length));
        	break;

        case 1:
        	printf("%d\n", index_last_negative(arr1, length));
        	break;

        case 2:
        	printf("%d\n", multi_between_negative(arr1, length));
        	break;

        case 3:
        	printf("%d\n", multi_before_and_after_negative(arr1, length));
        	break;

        default:
        	printf("Данные некорректны");
        	break;
    }
    return 0;
}
