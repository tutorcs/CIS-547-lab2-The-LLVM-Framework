https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <stdio.h>

int main() {
  int u1 = fgetc(stdin);
  int u2 = 4, d;
  if (u1 != 0) {
    d = u2 / u1;
  } else {
    int d = u2 / (u1 + 1);
  }
  return 0;
}
