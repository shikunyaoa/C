#include <stdio.h>
//����������malloc����,Ӧ����stdlib.h
#include <stdlib.h>

//��������check
void check(int *);
int main(void) {
    
    int * p1, i;
    //���ٶ�̬�ڴ���������ַת����int *��
    p1 = (int *)malloc(5 * sizeof(int));
    for (i = 0; i < 5; i++) {
        scanf("%d", p1 + i);
    }
    check(p1);
    //�ͷŶ�̬������
    free(p1);
    return 0;
}

//����check����
void check(int * p) {
    int i;
    printf("They are fail:");
    for (i = 0; i < 5; i++) {
        if (p[i] < 60) {
            printf("%d", p[i]);
        }
        printf("\n");
    }

}

/*
��Visual Stadio 2015��������Ϊ��
***********************************
67 98 29 29 39
They are fail:

29
29
39
***********************************
���ۣ�ָ�������Ϊ��������
*/