#include <stdio.h>

//����ṹ�����鲢��ʼ��
struct Student {
    int num;
    char name[20];
    char sex;
    int age;
};

struct Student stu[3] = {
    {10101, "Li Lin", 'M', 18},
    {10102, "Zhang Fang", 'M', 19},
    {10104, "Wang Min", 'F', 20}
};
int main(void) {

    struct Student * p;
    printf("No.       Name            sex    age\n");
    //Ϊ��ʹ�÷����ֱ�ۣ�C���������(* p).num��p->num������
    //->��Ϊָ�������
    for (p = stu; p < stu + 3; p++) {
        printf("%5d %-20s %2c %4d\n", p->num, p->name, p->sex, p->age);
    }
    return 0;
}

/*
��Visual Stadio 2015��������Ϊ��
***********************************
No.       Name            sex      age
10101 Li Lin                M   18
10102 Zhang Fang            M   19
10104 Wang Min              F   20
***********************************
���ۣ�����ʹ�ú���ָ����Ϊ��������
*/