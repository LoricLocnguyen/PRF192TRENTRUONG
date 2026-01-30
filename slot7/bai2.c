// ex 2 : nhap vao 2 so nguyen a ,b 
// Nhap vao 1 trong 5 phep toan : + ,- , * , / ,%
 /* Test case 1:
3,5 
+
3 + 5 = 8

Test case 2 :
3,5 
/ 
3/5 = 0.6 

Test case 3 : 
3,5 
%
3 % 5 = 3 

Test case 4 : 
3,0 
/
không thể chia cho 0 */


#include <stdio.h>

int main() {
    int a, b;
    char pheptoan;
    float kq;
    int soDu;

    // Nhập 2 số nguyên dạng: 3,5
    scanf("%d,%d", &a, &b);

    // Nhập phép toán
    scanf(" %c", &pheptoan);

    switch (pheptoan) {
        case '+':
            kq = a + b;
            printf("%d %c %d = %.0f", a, pheptoan, b, kq);
            break;

        case '-':
            kq = a - b;
            printf("%d %c %d = %.0f", a, pheptoan, b, kq);
            break;

        case '*':
            kq = a * b;
            printf("%d %c %d = %.0f", a, pheptoan, b, kq);
            break;

        case '/':
            if (b == 0) {
                printf("Khong the chia cho 0");
                return 0;
            }
            kq = (float)a / b;
            printf("%d %c %d = %.2f", a, pheptoan, b, kq);
            break;

        case '%':
            if (b == 0) {
                printf("Khong the chia cho 0");
                return 0;
            }
            soDu = a % b;
            printf("%d %c %d = %d", a, pheptoan, b, soDu);
            break;

        default:
            printf("Phep toan khong hop le");
    }

    return 0;
}
