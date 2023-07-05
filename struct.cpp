#include <iostream>
#include <cmath>

using namespace std;

struct Persegi_Panjang{
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
    void isi(int a){
        r = a;
    }
    float luas(){
        return (3.14)*r*r;
    }

private:
    int r;
};

struct Kerucut{
    void isi(float a, float b){
        r = a;
        t = b;
    }
    float volume(){
        return 0.3*3.14*sqrt(r)*t;
    }

private:
    float r, t;
};

struct Bola{;
    void isi(int a){
        r = a;
    }
    float volume(){
        return 1.3*3.14*pow(r,3);
    }

private:
    int r;
};
int main()
{
    Persegi_Panjang perspan;
    perspan.isi(10,2);
    cout << "Luas Persegi Panjang: " << perspan.luas() << endl;

    Lingkaran ling;
    ling.isi(14);
    cout << "Luas Lingkaran: " << ling.luas() << endl;

    Kerucut krt;
    krt.isi(4,2);
    cout << "Volume Kerucut: " << krt.volume() << endl;

    Bola bl;
    bl.isi(2);
    cout << "Volume Bola: " << bl.volume() << endl;

    return 0;
}
