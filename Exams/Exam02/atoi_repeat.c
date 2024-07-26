#include<stdio.h>
#include<unistd.h>

// Bu fonksiyon, bir stringi integer'a dönüştürür.
int		ft_atoi(char *s)
{
    int i = 0 ; // İndeks için değişken
    int sign = 1; // İşaret için değişken
    int result =  0; // Sonuç için değişken

    // Stringin başındaki boşlukları ve özel karakterleri atla
    while((s[i] >= 9 && s[i]<=13)  || s[i] == 32)
    {
        i++;
    }

    // Sayının işaretini kontrol et
    if(s[i] == '-' || s[i] == '+')
    {
        if(s[i] == '-')
        {
            sign = -1; // İşaret negatifse, sign değişkenini -1 yap
        }
        i++; // İşaret kontrolü sonrasında i'yi artır
    }

    // Sayıyı hesapla
    while(s[i] >= 48 && s[i] <= 57)
    {
        result = (result * 10) + ( s[i] - '0'); // Her bir basamağı ekleyerek sonucu hesapla
        i++; // İndeksi artır
    }

    return(sign * result); // Sonucu döndür
}

int		main(void)
{
    char a[] = "    \n\n\v\f\r\t +2123132AAAgreghrsth"; // Test stringi
    printf("%d\n",ft_atoi(a)); // Dönüştürülen sayıyı yazdır
}
