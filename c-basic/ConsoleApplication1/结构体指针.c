#include <stdio.h>
#include <string.h>

//����ṹ��
struct Student {
    long num;
    char name[20];
    char sex;
    float score;
};
int main(void) {

    //����struct Sudent���͵ı���stu
    struct Student stu;
    //����ָ��struct Student�������ݵ�ָ��
    struct Student * p;
    //pָ��stu
    p = &stu;
    //�Խṹ������ĳ�Ա��ֵ
    stu.num = 10101;
    //���ַ�����ֵ������stu.name��ֵ
    strcpy(stu.name, "Li Lin");
    stu.sex = 'M';
    stu.score = 89.5;
    printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
        stu.num, stu.name, stu.sex, stu.score);
    printf("\nNo.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
        (*p).num, (*p).name, (*p).sex, (*p).score);

    //Ϊ��ʹ�÷����ֱ�ۣ�C���������(* p).num��p->num������
    //->��Ϊָ�������
    printf("\nNo.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
        p->num, p->name, p->sex, p->score);
   
    return 0;
}

/*
��Visual Stadio 2015��������Ϊ��
***********************************
No.:10101
name:Li Lin
sex:M
score: 89.5

No.:10101
name:Li Lin
sex:M
score: 89.5

No.:10101
name:Li Lin
sex:M
score: 89.5
***********************************
����:����ʹ�ýṹ��ָ����ʽṹ��ĳ�Ա����
*/