#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 4명의 나이를 입력받고 나이가 40대 미만이면 y그룹,
// 이상이면 o를 저장하시오.
//단 구조체 멤버로 나이, 그룹을 저장 후 출력하시오.
// 4명 배열로 처리하기 (구조체를 배열로 만들면 됨)
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