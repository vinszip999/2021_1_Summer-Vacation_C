#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 4���� ���̸� �Է¹ް� ���̰� 40�� �̸��̸� y�׷�,
// �̻��̸� o�� �����Ͻÿ�.
//�� ����ü ����� ����, �׷��� ���� �� ����Ͻÿ�.
// 4�� �迭�� ó���ϱ� (����ü�� �迭�� ����� ��)
struct four {
	int age;
	char group;

};
int main(void)
{

	struct four p[4];
	for (int i = 0; i <= 3; i++) {
		scanf("%d", &p.age[i]);
		if (p.age[i] < 40) {
			p.group[i] = 'y';
		}
		else {
			p.group[i] = 'o';
		}
		
	}
	printf("%c %c %c %c", p.group[0], p.group[1], p.group[2], p.group[3]);
	
	return 0;

}