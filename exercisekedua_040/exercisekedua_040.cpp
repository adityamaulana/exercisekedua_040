#include <iostream>
#include <string>

using namespace std;

class Penerbit
{
	public:
		string Name;

		void printAll();

		Penerbit(string pName) :
			Name(pName)
		{
			cout << "Daftar Pengarang Pada Penerbit Tempo" << Name << "\n" << endl;

			cout << "Daftar Pengarang Pada Penerbit NYTimes" << Name << "\n" << endl;
		}

		Penerbit(string pName) :Name(pName) {}
};

class Pengarang : virtual public Penerbit
{
	public:

		Pengarang(string pName) :
			Penerbit(pName)
		{
			cout << "Daftar Penerbit yang Diikuti J.K Rowling\n" << endl;	
		}
};

class Book : virtual public Penerbit
{
	public:
		Book(string pName) :
			Penerbit(pName)
		{
			cout << "Daftar Buku yang dikarang J.K Rowling\n" << endl;
			cout << "Daftar Buku yang dikarang Tere Liye\n" << endl;
			cout << "Daftar Buku yang dikarang Jonstein Gardnerr\n" << endl;
			cout << "Daftar Buku yang dikarang Andrea Hirata\n" << endl;
		}

};
class DPenerbit : public Pengarang, public Book
{
	public:

		DPenerbit(string pName) :
			Penerbit(pName),
			Pengarang(pName),
			Book(pName)
		{
			cout << "Daftar Penerbit\n" << endl;
		}
};

void Penerbit::printAll()
{
	cout << "Daftar Penerbit = " << Name << endl;

	cout << endl;
}

int main()
{
	Penerbit a();

	return 0;
}