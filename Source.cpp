#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
//--------------------------------------------------------------------
const char CDfva[] = "Miestas1.txt";
const char CDfva[] = "Miestas2.txt";
const char CRfv[]  = "Rezultatai.txt";
const int CMax = 50;
const int G1Max = 40;
const int G2Max = 40;
//--------------------------------------------------------------------
struct G1 {
	string mpav;
	string gpav;
	int ilgis;
	int nsk;

};
struct G2 {
	string mpav2;
	string gpav2;
	int ilgis2;
	int nsk2;

};
//--------------------------------------------------------------------
void Skaityti (char fv[], G1 A[], G2 B[], int & n, int & m);
void Spausdinti (G1 A[], G2 B[], int n, int m);
//--------------------------------------------------------------------
int main ()
{
	G1 A[CMax]; G2 B[CMax]; int n; int m;
	Skaityti(CDfva, A, B, n, m);
	return 0;
}
//--------------------------------------------------------------------
void Skaityti (char fv[], G1 A[], G2 B[], int & n, int & m)
{
	ifstream fd (fv);
	int ilgis, nsk;
	char eil[G1Max+1];
	fd >> n;
	fd.ignore(80, '\n');
	for (int i = 0; i < n; i++) {
		fd.get(eil, G1Max);
		A[i].gpav = eil;
}
	fd.close;
}
//--------------------------------------------------------------------
void Spausdinti (G1 A[], G2 B[], int n, int m)
{
	ofstream fr (CRfv);
}
//--------------------------------------------------------------------