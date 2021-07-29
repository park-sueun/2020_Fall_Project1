#include <stdio.h>
#include "corona.h"

// 메뉴 함수
int selectMenu(){

        int menu;

        printf("\n*** Corona-19 ***\n\n");

        printf("1. 확진자조회\n");
        printf("2. 확진자추가\n");
        printf("3. 확진자수정\n");
        printf("4. 확진자삭제\n");
        printf("5. 파일저장\n");
        printf("6. 확진자검색\n");
        printf("0. 종료\n\n");

        printf("=> 원하는 기능은? ");

        scanf(" %d", &menu);

        return menu;
}

// 코로나 확진자 명단 조회(다중 데이터) (readCorona 활용)
void listCorona(Corona* c[], int count){
	printf("\nNo  지역  이름 성별 나이  확진일   격리시설 감염경로(국내:Y)\n");
	printf("==============================================================\n");

	for(int i = 0; i < count; i++){
		if(c[i] != NULL){
			printf("%2d  ", i+1);
			readCorona(*c[i]);
		}
	}
	
	printf("\n");
}

// 수정, 삭제 시에 리스트를 보여주고 명단을 선택해서 return 하는 함수
int selectIndex(Corona* c[], int count)
{
        int no;

        listCorona(c, count);
        printf("\n=> 작업할 리스트 번호 선택 : ");
        scanf(" %d", &no);

        return no;
}

// 명단을 수정하기 전, 수정할 index를 반환하는 함수
int selectUpdate()
{
        int choice;

        printf("\n*** 수정 선택***\n\n");

        printf("1. 이름\n");
        printf("2. 나이\n");
        printf("3. 성별\n");
        printf("4. 지역\n");
        printf("5. 확진일\n");
        printf("6. 격리시설\n");
        printf("7. 국내감염여부\n");
        printf("8. 전체수정\n");
	printf("0. 수정취소\n\n");

        printf("=> 수정할 항목은? ");
        scanf(" %d", &choice);

        return choice;
}

// 코로나 확진자 명단의 목차를 보여주는 함수
void listContents()
{
        printf("\nNo 지역  이름 성별 나이  확진일   격리시설 감염경로(국내:Y)\n");
	printf("==============================================================\n");

}
