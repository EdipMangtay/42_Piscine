#include <unistd.h>

int main() {
    int i = 0;
    char letter;

    while (i < 26) {
        if (i % 2 == 0) {
            letter = 'a' + i; // Tek sıradaki harfler küçük
        } else {
            letter = 'A' + i; // Çift sıradaki harfler büyük
        }
        write(1, &letter, 1);
        i++;
    }
    write(1, "\n", 1); // Yeni satır karakteri ekle
    return 0;
}
