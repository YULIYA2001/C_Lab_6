#include "func.h"

int main(void)
{
    Item *root = NULL;  /* ������ ������ */
    int num[100], is_balance, i = 0;

    setlocale (LC_CTYPE, "Russian");
    printf("���� ����� ����� (���� �� ������ '0'). �������� ������ ������ ");  /* ������� */
    printf("(��� ��������). �������� ������������������\n\n");                 /* ������� */
    printf("������� ����� ����� ����� ������ (0+\"Enter\" - ����������� �����).");
    printf("\n��������: 1 2 3 4 0+\"Enter\"\n\n");
    do
    {
        if (scanf("%d", &num[i]) != 1)
        {
            printf("�������� ����");
            return 1;
        }
        if (num[i] == 0)
            break;
        AddNode(num[i], &root);
        i++;
    }while(1);
    if (root != 0)
    {
        printf("\n�������� ������ ������ (�� �����������):\n");
        LeftOrder(root);
        printf("\n\n");
        is_balance = Balance(root);
        if (is_balance)
            printf("������ ���������������\n");
        if (!is_balance)
            printf("������ �� ���������������\n");
    }
    return 0;
}
