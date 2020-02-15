#include <stdio.h>
#include <time.h>

int main() {
    //time_t是long的typedef形式
    time_t biggest = 0x7FFFFFFF;
    //ctime()函数把参数转换为当前时间
    printf("biggest = %s \n", ctime(&biggest));
    return 0;
}
/*
在Visual Stadio 2015中输出结果为：
***********************************
biggest = Tue Jan 19 11:14:07 2038
***********************************

*/