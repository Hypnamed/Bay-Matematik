#include <iostream>
using namespace std;

int main()
{
	cout << "Bay Matematik" << endl << "v0.01b" << endl;
	cout << "[1]Hesap Makinesi" << endl << "[2]Kare Alma" << endl << "[3]Kok Bulma" << endl << "[4]Fibonacca Serisi" << endl;
	int secim;
	cout << "Hangi tur islem yapmak istediginizi lutfen kategoriler arasindan seciniz" << endl;
	cin >> secim;
	while (secim < 0 and secim > 5)
		cout << "Yanlis bir kategori numarasi girdiniz, lutfen tekrar deneyiniz: " << endl;
		cin >> secim;
	switch (secim) 
	{
		case 1:
			cout << "Hesap Makinesi" << endl;
			int s1, s2;
			char islem;
			cout << "Lutfen islemler icin dogru operator isaretlerini kullanin aksi takdirde program calismayacaktir." << endl;
			cin >> s1;
			cin >> islem;
			cin >> s2;
			if (islem == '+')
				cout << s1 << " + " << s2 << " = " << s1 + s2 << endl;
			else if (islem == '-')
				cout << s1 << " - " << s2 << " = " << s1 - s2 << endl;
			else if (islem == '/')
				cout << s1 << " / " << s2 << " = " << s1 / s2 << endl;
			else if (islem == '*')
				cout << s1 << " * " << s2 << " = " << s1 * s2 << endl;
			else
				cout << "Hatali bir operator isareti girdiniz." << endl;
			break;
		case 2: {
			cout << "Karesini almak istediginiz sayiyi giriniz: ";
			int sayi;
			cin >> sayi;
			int kare = sayi * sayi;
			cout << sayi << " sayisinin karesi:" << kare << endl;
			break;
		}
		case 3:
			cout << "Karekokunu bulmak istediginiz sayiyi giriniz: " << endl;
			int karekok;
			cin >> karekok;
			cout << karekok << " sayisinin karekoku: " << sqrt(karekok) << endl;
			break;
		case 4:
			int a, b, c;
			a = 1;
			b = 1;
			cout << "Fibonacca serisinin ilk kac basamagini almak istiyorsunuz?: " << endl;
			int seri;
			cin >> seri;
			if (seri <= 0);
			else if (seri == 1)
				cout << 1 << endl;
			int i = 0;
			for (i = 0; i < seri; i++)
				c = a + b;
				a = b;
				b = c;
				cout << c << endl;
			break;
	}


}
