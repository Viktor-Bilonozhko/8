#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 14

int main() {
    char word[MAX_LENGTH + 1]; // �����
    scanf("%s", word);
    int length = strlen(word); // ������� �����
    int count[26] = {0}; // ����� ��� ��������� ��������� ����� ����� � ����
    for (int i = 0; i < length; i++) {
        count[word[i] - 'A']++; // ��������� ��������� ��� �������� �����
    }
    long long factorial[MAX_LENGTH + 1]; // ����� ��� ��������� ���������
    factorial[0] = 1;
    for (int i = 1; i <= MAX_LENGTH; i++) {
        factorial[i] = factorial[i - 1] * i; // ���������� ���������
    }
    long long result = factorial[length]; // ��������� �������� ���������� - �������� ������� �����
    for (int i = 0; i < 26; i++) {
        result /= factorial[count[i]]; // ���� �� ��������� ��������� ����� �����
    }
    printf("%lld\n", result); // ��������� ����������
    return 0;
}
