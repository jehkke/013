#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//���� ���� 
struct student{
		int ID;        //�й� 
		char name[100];     //�̸� 
		float score;   //���� 
		
	};


int main(int argc, char *argv[]) 
{
	struct student s1 = {123,"hyerynn", 4.3}; // �ʱ�ȭ instance ���� 
	
	//�ٸ��� ����
 	s1.ID = 123456;
 	s1.name[0]= 'c';
 	s1.score = 0.7;
	// ��� 
	printf("ID : %i\n" , s1.ID);
	printf("name : %s\n" , s1.name);
	printf("grade : %f\n", s1.score);
	
	strcpy(s1.name, "jetto");
	printf("name2 : %s\n", s1.name);
	
	system("PAUSE");
	return 0;
}





















