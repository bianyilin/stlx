/*************************************************************************
	> File Name: 4201.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年04月20日 星期六 15时13分33秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n == 0){
        printf("FOOLISH\n");
    } else if (n < 60){
        printf("FAIL\n");
    } else if (n < 75){
        printf("MEDIUM\n");
    } else {
        printf("GOOD\n");
    }
    return 0;
}
