#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2개의 문자를 입력하고 대문자는 소문자로, 소문자는 대문자로 변환해서 출력하기

int main() {

    char ch1, ch2;
    char ch;

    printf("'대문자 -> 소문자, 소문자 -> 대문자'로 바꿀 첫번째 문자를 입력하세요 : ");
    scanf("%c", &ch1);
    // fflush(stdin);
    printf("'대문자 -> 소문자, 소문자 -> 대문자'로 바꿀 두번째 문자를 입력하세요 : ");
    scanf(" %c", &ch2);
    
    if ('A' <= ch1 <= 'Z') {
        printf("대문자를 소문자로 바꿨을 때 : ");
        printf("%c = > %c", ch1, ch1 + 32);
    } else if ('a' <= ch1 <= 'z') {
        printf("소문자를 대문자로 바꿨을 때 : ");
        printf("%c = > %c", ch1, ch1 - 32);
    } else{
        printf("알파벳이 아닙니다 **");
    }

    return 0;
}