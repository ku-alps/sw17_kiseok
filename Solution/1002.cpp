#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int x1, y1, r1, x2, y2, r2;
	int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        double dis = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

        if (!dis && r1 == r2)
            printf("-1\n"); // �յ�
        else if(dis<abs(r1-r2)||dis>r1+r2)
            printf("0\n"); //����, ������ ����
        else if (dis == r1+r2 || dis == abs(r1-r2))
            printf("1\n"); //����, ����
        else if (dis>abs(r1-r2)&&dis < r1+r2)
            printf("2\n"); //���� 2
    }
}
