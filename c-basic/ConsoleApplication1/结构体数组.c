#include <string.h>
#include <stdio.h>

//定义结构体数组并初始化
struct Persion {
    char name[20];
    int count;
} leader[3] = { "Li", 0, "Zhang", 0, "Sun", 0 };

int main(void) {

    int i, j;
    char leader_name[20];
    for (i = 1; i <= 10; i++) {
        scanf("%s", leader_name);
        for (j = 0; j < 3; j++) {
            if (strcmp(leader_name, leader[j].name) == 0)leader[j].count++;
        }
    }
    printf("\nResult:\n");
    for (i = 0; i < 3; i++) {
        printf("%5s:%d\n", leader[i].name, leader[i].count);
    }
    return 0;
}
/*
在Visual Stadio 2015中输出结果为：
***********************************
Li
Li
Sun
Zhang
Zhang
Sun
Li
Sun
Zhang
Li

Result:
Li:4
Zhang:3
Sun:3
***********************************
结论：结构体数组就是元素都是结构体
*/