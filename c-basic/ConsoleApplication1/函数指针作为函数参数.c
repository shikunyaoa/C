#include <stdio.h>
//����fun����
void fun(int x, int y, int(*p)(int, int));
//max��������
int max(int, int);
//min��������
int min(int, int);
//add��������
int add(int, int);

int main(void) {

    int a = 34, b = -21, n;
    printf("please choose 1,2 or 3:");
    scanf("%d", &n);
    if (n == 1) {
        fun(a, b, max);
    }
    else if (n == 2) {
        fun(a, b, min);
    }
    else if (n == 3) {
        fun(a, b, add);
    }
    return 0;
}

//����fun����
void fun(int x, int y, int(*p)(int, int)) {
    int result;
    result = (*p)(x, y);
    printf("%d\n", result);
    
}

//����max����
int max(int x, int y) {
    int z;
    if (x > y) {
        z = x;
    }
    else {
        z = y;
    }
    printf("max=");
    return(z);
}

//����min����
int min(int x, int y) {
    int z;
    if (x < y) {
        z = x;
    }
    else {
        z = y;
    }
    printf("min=");
    return(z);
}

//����add����
int add(int x, int y) {
    int z;
    z = x + y;
    printf("sum=");
    return(z);
}

/*
��Visual Stadio 2015��������Ϊ��
***********************************
please choose 1,2 or 3:1
max=34

please choose 1,2 or 3:2
min=-21

please choose 1,2 or 3:3
sum=13
***********************************
���ۣ�����ʹ�ú���ָ����Ϊ��������
*/