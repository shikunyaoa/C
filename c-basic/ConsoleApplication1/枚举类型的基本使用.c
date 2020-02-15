#include <stdio.h>

int main(void) {
    //定义枚举类型
    //enum[枚举名]{枚举元素列表}
    enum Color{red, yellow, blue, white, black};
    enum Color i, j, k, pri;
    int n, loop;
    n = 0;
    for (i = red; i <= black; i++) {
        for (j = red; j <= black; j++) {
            if (i != j) {
                for (k = red; k <= black; k++) {
                    if ((k != i) && (k != j)) {
                        n = n + 1;
                        printf("%-4d", n);
                        for (loop = 1; loop <= 3; loop++) {
                            switch (loop) {
                            case 1: 
                                pri = i;
                                break;
                            case 2:
                                pri = j;
                                break;
                            case 3:
                                pri = k;
                                break;
                            default:
                                break;
                            }

                            switch (pri) {
                            case red:
                                printf("%-10s", "red");
                                break;
                            case yellow:
                                printf("%-10s", "yellow");
                                break;
                            case blue:
                                printf("%-10s", "blue");
                                break;
                            case white:
                                printf("%-10s", "white");
                                break;
                            case black:
                                printf("%-10s", "black");
                                break;
                            default:
                                break;
                            }
                        }
                        printf("\n");
                    }
                }

            }
        }
    }
    printf("\ntotal:%5d\n", n);
    return 0;
}

/*
在Visual Stadio 2015中输出结果为：
***********************************
1   red       yellow    blue
2   red       yellow    white
3   red       yellow    black
4   red       blue      yellow
5   red       blue      white
6   red       blue      black
7   red       white     yellow
8   red       white     blue
9   red       white     black
10  red       black     yellow
11  red       black     blue
12  red       black     white
13  yellow    red       blue
14  yellow    red       white
15  yellow    red       black
16  yellow    blue      red
17  yellow    blue      white
18  yellow    blue      black
19  yellow    white     red
20  yellow    white     blue
21  yellow    white     black
22  yellow    black     red
23  yellow    black     blue
24  yellow    black     white
25  blue      red       yellow
26  blue      red       white
27  blue      red       black
28  blue      yellow    red
29  blue      yellow    white
30  blue      yellow    black
31  blue      white     red
32  blue      white     yellow
33  blue      white     black
34  blue      black     red
35  blue      black     yellow
36  blue      black     white
37  white     red       yellow
38  white     red       blue
39  white     red       black
40  white     yellow    red
41  white     yellow    blue
42  white     yellow    black
43  white     blue      red
44  white     blue      yellow
45  white     blue      black
46  white     black     red
47  white     black     yellow
48  white     black     blue
49  black     red       yellow
50  black     red       blue
51  black     red       white
52  black     yellow    red
53  black     yellow    blue
54  black     yellow    white
55  black     blue      red
56  black     blue      yellow
57  black     blue      white
58  black     white     red
59  black     white     yellow
60  black     white     blue

total:   60
***********************************
结论：枚举类型就是所有可能结果的集合
*/