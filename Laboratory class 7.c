#include <stdio.h>
#include <math.h>

int c(int x_1, int y1, int r__1, int x_2, int y2, int r__2) {
    double dis = sqrt(pow(x_2 - x_1, 2) + pow(y2 - y1, 2));

    if (dis == 0 && r__1 == r__2)
        return -1; 
    else if (dis > r__1 + r__2)
        return 0; 
    else if (dis == r__1 + r__2 || dis == fabs(r__1 - r__2))
        return 1; 
    else if (dis < r__1 + r__2 && dis > fabs(r__1 - r__2))
        return 2; 
    else
        return 0; 
}

int main() {
    int x1, y1, r1, x2, y2, r2;

    printf("Enter the coordinates and radii of the two circles: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int res = c(x1, y1, r1, x2, y2, r2);

    printf("Number of intersection points: %d\n", res);

    return 0;
}
