#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 14

int main() {
    char word[MAX_LENGTH + 1]; // слово
    scanf("%s", word);
    int length = strlen(word); // довжина слова
    int count[26] = {0}; // масив для зберігання кількостей кожної букви в слові
    for (int i = 0; i < length; i++) {
        count[word[i] - 'A']++; // збільшення лічильника для відповідної букви
    }
    long long factorial[MAX_LENGTH + 1]; // масив для зберігання факторіалів
    factorial[0] = 1;
    for (int i = 1; i <= MAX_LENGTH; i++) {
        factorial[i] = factorial[i - 1] * i; // обчислення факторіалу
    }
    long long result = factorial[length]; // початкове значення результату - факторіал довжини слова
    for (int i = 0; i < 26; i++) {
        result /= factorial[count[i]]; // поділ на факторіали кількостей кожної букви
    }
    printf("%lld\n", result); // виведення результату
    return 0;
}
