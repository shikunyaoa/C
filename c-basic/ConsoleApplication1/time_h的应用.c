#include <stdio.h>
#include <time.h>

int main() {
    //time_t��long��typedef��ʽ
    time_t biggest = 0x7FFFFFFF;
    //ctime()�����Ѳ���ת��Ϊ��ǰʱ��
    printf("biggest = %s \n", ctime(&biggest));
    return 0;
}
/*
��Visual Stadio 2015��������Ϊ��
***********************************
biggest = Tue Jan 19 11:14:07 2038
***********************************

*/