#include <stdio.h>
//����search����
//����ֵΪָ��
float * search(float(*pointer)[4], int n);
int main() {

    float score[][4] = {
        {60, 70, 80, 90},
        {56, 89, 67, 88},
        {34, 78, 90, 66}
    };
    float * p;
    int i, k;
    printf("enter the number of student:");
    scanf("%d", &k);
    printf("The scores of No. %d are:\n", k);
    p = search(score, k);
    for (i = 0; i < 4; i++) {
        printf("%5.2f\t", *(p + i));
    }
    printf("\n");
    return 0;
}

//�β�pointer��һ��ָ��һλ�����ָ��
float * search(float(*pointer)[4], int n) {
    float * pt;
    pt = (pointer + n);
    return(pt);
}

/*
��Visual Stadio 2015��������Ϊ��
***********************************
enter the number of student:1
The scores of No. 1 are:
56.00   89.00   67.00   88.00
***********************************
����:ָ�������Ϊ�����ķ���ֵ
*/