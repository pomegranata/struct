#include <iostream>
#include <cmath>

using namespace std;

struct Persegi_Panjang{;
    void isi(int a, int b){
        panjang = a;
        lebar = b;
    }
    float luas(){
        return panjang*lebar;
    }

private:
    int panjang, lebar;
};

struct Lingkaran{
    void isi(int c){
        r = c;
    }
    float luas(){
        return (3.14)*r*r;
    }

private:
    int r;
};

struct Kerucut{
    void isi(int c, int d){
        r = c;
        t = d;
    }
    float volume(){
        return 0.3*3.14*pow(r,2)*t;
    }

private:
    int r, t;
};

struct Bola{;
    void isi(int c){
        r = c;
    }
    float volume(){
        return 1.3*3.14*pow(r,3);
    }

private:
    int r;
};
int main()
{
    int a, b, c, d;

    cout << "Panjang: ";
    cin >> a;
    cout << "Lebar: ";
    cin >> b;
    cout << "Rusuk: ";
    cin >> c;
    cout << "Tinggi: ";
    cin >> d;

    Persegi_Panjang perspan;
    perspan.isi(a,b);
    cout << "\nLuas Persegi Panjang: " << perspan.luas() << endl;

    Lingkaran ling;
    ling.isi(c);
    cout << "Luas Lingkaran: " << ling.luas() << endl;

    Kerucut krt;
    krt.isi(c,d);
    cout << "Volume Kerucut: " << krt.volume() << endl;

    Bola bl;
    bl.isi(c);
    cout << "Volume Bola: " << bl.volume() << endl;

    return 0;
}
