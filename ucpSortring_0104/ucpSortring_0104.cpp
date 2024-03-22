
#include <iostream>
using namespace std;

//1.cara algoritam bubble short membanadingkan: adalah dengan membandingkan dengan element yang berada di sampingnya, contoh jika kita 
// memiliki array yang berisi 5 element[7,1,3,8,6] maka bandingkan 7 denagn 1 jika lebih kecil maka tukar, dan ulangi setelah itu bandingkan 7 dan 3 jika
// kecil di tukar, dan lakukan sehingga tersusun [1,3,6,7,8].
// 
// cara menukarnya adalah dengan: membuat variabel baru yang berna int temp,sehingg kita dapat memasukkan element pertama ke variabel int temp, dan membandingkannya
// denagn isi element ke dua,jika elemet pertama yang telah dimasukkan ke int lebih kecil maka masukkan isi element ke dua ke dalam element pertama dan isi element
// int temp ke tempat element kedua.

//2.cara membandingkan algoritma shell short dan menukar elementnya : adalah yang pertama membagi element dari algoritma tersebut menjadi beberapa bagian contoh jika
//  memiliki array yang berisi 11 element maka di bagi menjadi 3 list, kemudian ambil isi element array nya diambil dengan 3 jarak 3 jarak, setelah terbagi menjadi 3 list maka lakukian 
//  algoritma insertion short sehingga tersusun, setelah itu ke 3 list digabungkan kembali menjadi 1 , kemudian di ubah menjadi 2 list serta isi element array nya diambil 2 jarak
//  2 jarak dan lakukan kembali algoritma insertion short  sehingga tersusun, kemudian 2 list tersebut di gabung kembali menjadi 1, kemudian lakukan algoritma insertion short
//  setelah itu semua elementnya akan tersusun

//3.jika data nya telah tersusun maka gunakan algoritma insertion short, karena algoritma insertion short memiliki kelebihan sangat efektif dalam mensortir data yang sedikit
//  dan sudah banyak yang tersusun


//4.
int i, temp, j;
int n;
int Azkal[04];

void input() {
	while (true)
	{
		cout << "Masukkan banyak element pada array: ";
		cin >> n;
		if (n <= 4) {
			break;
		}
		else
		{
			cout << "\nArray ddapat mempunyai maksimal 20 element/n";
		}
	}

	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke" << (i + 1) << ": ";
		cin >> Azkal[i];
	}
}

void Shortir() {
	int pass = 1;
	int j = 0;
	do
	{
		for (int i = 0; i <= n - 1 - pass; i++) {
			if (Azkal[i] < Azkal[j]) {
				int temp;
				temp = Azkal[j];
				Azkal[i] = Azkal[i + 1];
				Azkal[i + 1] = temp;
				j = i;
			}
		}

		pass = pass + 1;
	} while (pass <= n - 2);
}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element attay yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << Azkal[j] << endl;
	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}


int main() {
	input();
	Shortir();
	display();
	system("pause");

	return 0;
}




