#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2���� ���ڸ� �Է��ϰ� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ��ȯ�ؼ� ����ϱ�

int main() {

    char ch1, ch2;
    char ch;

    printf("'�빮�� -> �ҹ���, �ҹ��� -> �빮��'�� �ٲ� ù��° ���ڸ� �Է��ϼ��� : ");
    scanf("%c", &ch1);
    // fflush(stdin);
    printf("'�빮�� -> �ҹ���, �ҹ��� -> �빮��'�� �ٲ� �ι�° ���ڸ� �Է��ϼ��� : ");
    scanf(" %c", &ch2);
    
    if ('A' <= ch1 <= 'Z') {
        printf("�빮�ڸ� �ҹ��ڷ� �ٲ��� �� : ");
        printf("%c = > %c", ch1, ch1 + 32);
    } else if ('a' <= ch1 <= 'z') {
        printf("�ҹ��ڸ� �빮�ڷ� �ٲ��� �� : ");
        printf("%c = > %c", ch1, ch1 - 32);
    } else{
        printf("���ĺ��� �ƴմϴ� **");
    }

    return 0;
}