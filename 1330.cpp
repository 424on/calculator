//#include<stdio.h>
//
//int main(void) {
//    int n = 5;
//    for (int a = 1; a <= n; ++a){
//        for (int i = 1; i <= a; ++i) {
//            for (int j = 1; j <= i; ++j) {
//                printf("%d ", j);
//            }
//            for (int j = i - 1; j >= 1; --j) {
//                printf("%d ", j);
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include<stdio.h>
////int solution(float num1, float num2) {
////    float answer = num1 / num2;
////    return answer;
////}
//
//int main(void) {
//	int num1 = 3;
//	int num2 = 2;
//
//	printf("%0.1f", num1 / num2);
//	return 0;
//}

#include<stdio.h>
int main(void){
    int array[5] = { 1,2,3,4,5 };
    int array_len = 5;
    int answer = 0;
    int i, j, tmp;
    for (i = 0; i < array_len - 1; i++)
        for (j = 0; j < array_len - 1; j++)
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }

    answer = array[array_len / 2];
    printf("%d", array_len / 2);
    return answer;
}