#include<stdio.h>
#include<string.h>
int main() {
unsigned int a[4][4] = { { 6, 24, 1,12 }, { 13, 16, 10,13 }, { 20, 17, 15,13 } };
unsigned int b[4][4] = { { 8, 5, 10 ,11}, { 21, 8, 21,23 }, { 21, 12, 8 ,35} };
int i, j;
unsigned int c[20], d[20];
char msg[20];
int determinant = 0, t = 0;
;
printf("Enter plain text\n ");
scanf("%s", msg);
for (i = 0; i < 3; i++) {
c[i] = msg[i] - 65;
printf("%d ", c[i]);
}
for (i = 0; i < 3; i++) {
t = 0;
for (j = 0; j < 3; j++) {
t = t + (a[i][j] * c[j]);
}
d[i] = t % 26;
}
printf("\nEncrypted Cipher Text :");
for (i = 0; i < 4; i++)
printf(" %c", d[i] + 65);
for (i = 0; i < 4; i++) {
t = 0;
for (j = 0; j < 4; j++) {
t = t + (b[i][j] * d[j]);
}
c[i] = t % 26;
}
printf("\nDecrypted Cipher Text :");
for (i = 0; i < 3; i++)
printf(" %c", c[i] + 65);
return 0;
}