#include <stdio.h>
#include <string.h>
//声明函数sort,name为一个指针数组
void sort(char * name[], int n);
void p(char * name[], int n);

int main(void) {

    //定义数组指针:类型名 *数组名[数组长度]
    char * name[] = {
        "Follow me",
        "BASIC",
        "Great Wall",
        "FORTRAN",
        "Computer design"
    };
    int n = 5;
   
    sort(name, n);
    p(name, n);
    return 0;
}
//定义sort函数
void sort(char * name[], int n) {
    char * temp;
    int i, j, k;
    for (i = 0; i < n-1; i++) {
        k = i;
        for (j = i+1; j < n; j++) 
            if (strcmp(name[k], name[j]) > 0)  k = j;
               
            
        if (k != i) {
            temp = name[i];
            name[i] = name[k];
            name[k] = temp;
        }
            
        
        
    }
}

//定义print函数
void  p(char * name[], int n) {
    
    int i;
    for (i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
BASIC
Computer design
FORTRAN
Follow me
Great Wall
***********************************
结论:指针数组就是数组的元素都是指针
*/