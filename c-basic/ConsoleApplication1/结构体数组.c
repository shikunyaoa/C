#include <string.h>
#include <stdio.h>

//����ṹ�����鲢��ʼ��
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
��Visual Stadio 2015��������Ϊ��
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
���ۣ��ṹ���������Ԫ�ض��ǽṹ��
*/