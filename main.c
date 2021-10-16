#include <stdio.h>
#include <stdlib.h>

/*Fonksiyon tanımlamaları*/
void Soru_1(void);
void Soru_2(void);
void Soru_3(void);
void Soru_4(void);
void Soru_5(void);
void Soru_6(void);
void Soru_7(void);
void Soru_8(void);
void Soru_9(void);
void Soru_10(void);
void Soru_11(void);

int main()
{
    /*Cevabı başlatmak için "//" silip programı başlatınız*/
    //Soru_1();
    //Soru_2();
    //Soru_3();
    //Soru_4();
    //Soru_5();
    //Soru_6();
    //Soru_7();
    //Soru_8();
    //Soru_9();
    //Soru_10();
    //Soru_11();

    return 0;
}

/*FONKSİYONLAR*/
void Soru_1(void)
{
    /*
    *   Kullanıcıdan x,a,b,c değerlerini alarak ax^2+bx+c fonksiyonunun sonucunu ekrana bastır.
    */

    float x,a,b,c;

    printf("Lutfen f(x) = ax^2 + bx + c fonksiyonu icin sirasiyla \"x, a, b, c\" degerleri giriniz : ");
    scanf("%f %f %f %f",&x,&a,&b,&c);
    printf("\nGirdiginiz degerleri fonksiyona islendi.");
    printf("\n>> %.1f", ( (a*x*x) + (b*x) + c) );

    printf("\n\n\n");//görüntü amaçlı boş satır.
}
void Soru_2(void)
{   /*
    *   Kullanıcıdan a,b,h değerlerini alarak bir dikdörtgen prizmanın taban alanını - yanal alanlar toplamını - toplam alanı - hacmini ekrana bastır.
    */

    float a,b,h;

    printf("Lutfen dikdortgenler prizmasisinin sirasiyla \"a, b, h\" degerlerini giriniz : ");
    scanf("%f %f %f",&a,&b,&h);
    printf("\n\nTaban alani : %.1f\nYanal alanlar toplami : %.1f\nToplam cevre : %.1f\nAlan : %.1f",(a*b),((a*h*2)+(b*h*2)), ((a*b*2)+(a*h*2)+(b*h*2)), (a*b*h));

    printf("\n\n\n");//görüntü amaçlı boş satır.
}
void Soru_3(void)
{
    /*
    *   Kullanıcıdan alınan 3 tam sayı arasında en büyük ve en küçüğü ekrana bastır.
    */

    int a,b,c;
    printf("3 farkli tam sayi giriniz : ");
    scanf("%d %d %d",&a, &b, &c);
    if(a>=b && a>=c)
        printf("\nEn buyuk sayi : %d",a);
    else if(b>=a && b>=c)
        printf("\nEn buyuk sayi : %d",b);
    else
        printf("\nEn buyuk sayi : %d",c);

    if(a<=b && a<=c)
        printf("\nEn kucuk sayi : %d",a);
    else if(b<=a && b<=c)
        printf("\nEn kucuk sayi : %d",b);
    else
        printf("\nEn kucuk sayi : %d",c);

    printf("\n\n\n");//görüntü amaçlı boş satır.
}
void Soru_4(void)
{
    /*
    *   Kullanıcıdan alınan 2 tam sayıyı kıyaslayınız
    */

    int a,b;

    printf("Lutfen a ve b tam sayilarina bir deger veriniz : ");
    scanf("%d %d",&a ,&b);
    if(a==b)
        printf(">> Girdiginiz iki sayi birbirine esittir.");
    else{
        if(a>b)
            printf(">> %d > %d",a,b);
        else
            printf(">> %d < %d",a,b);
    }

    printf("\n\n\n");//görüntü amaçlı boş satır.
}
void Soru_5(void)
{
    /*
    *   Kullanıcıdan bir değer alın ve bu değeri 1 olana kadar ekrana eksilterek bastırın
    */

    int a;
    printf("Lutfen 1 tam sayi giriniz : ");
    scanf("%d",&a);
    printf("\n");
    while(a > 0)
    {
        printf(" %d",a);
        a -= 1;
    }

    printf("\n\n\n");//görüntü amaçlı boş satır.
}
void Soru_6(void)
{
    /*
    *   Kullanıcıdan alınan değere kadar olan tüm sayıları toplayarak yazdırın.
    */

    int a,i,sonuc = 0;
    printf("Lutfen bir tam sayi giriniz : ");
    scanf("%d",&a);
    printf("\n");
    for(i = 0; i<=a; i++)
    {
        if(i == 0)
            printf("%d",i);
        else
            printf(" + %d",i);

        sonuc += i;
    }
    printf(" = %d",sonuc);

    printf("\n\n\n");//görüntü amaçlı boş satır.
}
void Soru_7(void)
{
    /*
    *   Kullanıcıdan alınan 2 sayının çarpımı sonucunun işaretini çarpmadan bulunuz ve ekrana bastırınız.
    */

    float a,b;

    printf("Lutfen 2 sayi giriniz : ");
    scanf("%f %f", &a, &b);
    if(a>0 && b>0)
        printf("\n>> Pozitif");
    else if(a<0 && b>0 || a>0 && b<0)
        printf("\n>> Negatif");
    else
        printf("\n>> Pozitif");

    printf("\n\n\n");//görüntü amaçlı boş satır.
}
void Soru_8(void)
{
    /*
    *   0 ile kullanıcıdan alınan değer arasındaki tüm 17 nin katlarını ekrana yazdırınız. Her 10 sayıda bir satır aşağı kayınız.
    */

    int a, i, sira = 0;

    printf("Lutfen bir tam sayi giriniz : ");
    scanf("%d",&a);
    printf("\n");
    for(i = 0; i<=a; i++)
    {
        if(i%17 == 0)
        {
            printf("%d\t",i);
            sira++;
            if(sira > 9)
            {
                printf("\n");
                sira = 0;
            }
        }
    }

    printf("\n\n\n");//görüntü amaçlı boş satır.
}
void Soru_9(void)
{
    /*
    *   Kullanıcıdan ücgenin açılarını alınız ve ucgenin eşkenar - ikizkenar - çeşitkenar olduğunu belirtiniz.
    */

    int a,b,c;

    printf("Lutfen ucgenin acilarini giriniz : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b+c == 180){
        if(a==b && a!=c || a==c && a!= b || b==c && b!= a)
            printf("\n>> Ikizkenar");
        else if(a==b && a==c)
            printf("\n>> Eskenar");
        else
            printf("\n>> Cesitkenar");
    }
    else
        printf("\nGirdiginiz acilar bir ucgeni ifade etmiyor.");

    printf("\n\n\n");//görüntü amaçlı boş satır.
}
void Soru_10(void)
{
    /*
    *   Bir telefon şirketi telefonda 3 dakikaya kadar konuşma ücretini 0.25TL sonrasındaki her dakika için 0.08TL ücret almaktadır.
    *   Kullanıcıdan konuşma süresini dakika insinden alarak ücreti ekrana yazdırınız.
    */

    int dk;
    float ucret;

    printf("Lutfen konusma surenizi dakika cinsinden yaziniz : ");
    scanf("%d", &dk);
    if(dk <= 3 && dk > 0)
    {
       ucret = 0.25;
       printf(">> %.2fTL", ucret);
    }
    else if(dk > 3)
    {
        ucret = ((dk - 3) * 0.08) + 0.25;
        printf(">> %.2fTL", ucret);
    }
    else
        printf(">> 0TL");

    printf("\n\n\n");//görüntü amaçlı boş satır.
}
void Soru_11(void)
{
    /*
    *Girilen harfin alfabede kaçıncı sırada olduğunu bulunuz(Türk alfabesi değil!)
    */

    char ch;

    printf("Bir harf giriniz : ");
    scanf(" %c", &ch);
    if(ch>='A' && ch<='Z')
        printf("\n>> %d",(int)ch-(int)'A'+1);
    else if(ch>='a' && ch<='z')
        printf("\n>> %d",(int)ch-(int)'a'+1);
    else
        printf("\nYanlis bir karakter girdiniz!");


    printf("\n\n\n");//görüntü amaçlı boş satır.
}
