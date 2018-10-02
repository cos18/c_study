## 3주차 과제

### 연습 문제

1. 두 변수에 저장되어있는 값들을 서로 바꾸는 과정(Swapping)을 설명하시오.
2. 변수에 참(True) 또는 거짓(False)을 저장하는 방법을 설명하시오.

### 출력 결과를 예상해보시오. (빌드하지 말고 머리속으로 생각해보세요.)

```C
// 출처 - ch.4 연습문제 Q1 + 변형
#include <stdio.h>
int main(void){
    int a=0, b=-1, c=0, d=-1, e;
    e = a++ || (++b && c--) || ++d;
    printf("%d %d %d %d %d\n", a, b, c, d, e);
    if((c++)==0){
        printf("A");
        if(e-a){
            printf("B");
        } else if(a-c) {
            printf("C");
        } else {
            printf("D");
        }
        printf("E");
    } else {
        printf("F");
        if(b++){
            printf("G");
        } else if (sizeof(--a)){
            printf("H");
        } else {
            printf("I");
        }
        printf("J");
    }
    printf("K\n");
    printf("%d %d %d %d %d\n", a, b, c, d, e);
}
```

### [백준 온라인 저지](https://www.acmicpc.net) 문제

- 5장 - 연산자 (응용)
  - 백준 과제가 없습니다 :)
- 6장 - 기본 제어문
  - [9498번](https://www.acmicpc.net/problem/9498) : 시험 성적
  - [10817번](https://www.acmicpc.net/problem/10817) : 세 수

### 추가 문제
1. 두 정수를 입력해, 먼저 입력한 정수가 크면 1을 출력하고, 아닐 경우에는 0을 출력해보자.
  
  입력 예 : `30 50`

  출력 예 : `0`

2. 세 정수가 입력되었을 때, 짝수만 출력해보자.

  입력 예 : `1 2 4`

  출력 예 : 
  `2
  4`

3. 학점(A, B, C, D, 등...)을 문자로 입력 받아 내용을 다르게 출력해보자. -> 출력하는 문자는 학점에 따라 알맞게 만들어보자.

  입력 예 : `A`

  출력 예 : `You are Best!`

### 4주차 내용 예습
- 7장 - 반복문
