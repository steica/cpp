#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct Data {
    char prenume[256], nume[256], fct[256], tel[256], email[256];
    uint64_t salariu, varsta, pozz;
};

int comp_prenume(Data a, Data b) {
    return strcmp(a.prenume, b.prenume) < 0 || strcmp(a.prenume, b.prenume) == 0 && a.pozz < b.pozz;
}
int comp_nume(Data a, Data b) {
    return strcmp(a.nume, b.nume) < 0 || strcmp(a.nume, b.nume) == 0 && a.pozz < b.pozz;
}
int comp_tel(Data a, Data b) {
    return strcmp(a.tel, b.tel) < 0 || strcmp(a.tel, b.tel) == 0 && a.pozz < b.pozz;
}
int comp_email(Data a, Data b) {
    return strcmp(a.email, b.email) < 0 || strcmp(a.email, b.email) == 0 && a.pozz < b.pozz;
}
int comp_fct(Data a, Data b) {
    return strcmp(a.fct, b.fct) < 0 || strcmp(a.fct, b.fct) == 0 && a.pozz < b.pozz;
}
int comp_salariu(Data a, Data b) {
    return a.salariu < b.salariu || a.salariu == b.salariu && a.pozz < b.pozz;
}
int comp_varsta(Data a, Data b) {
    return a.varsta < b.varsta || a.varsta == b.varsta && a.pozz < b.pozz;
}



int comp_prenume_descrescator(Data a, Data b) {
    return strcmp(a.prenume, b.prenume) > 0 || strcmp(a.prenume, b.prenume) == 0 && a.pozz > b.pozz;
}
int comp_nume_descrescator(Data a, Data b) {
    return strcmp(a.nume, b.nume) > 0 || strcmp(a.nume, b.nume) == 0 && a.pozz > b.pozz;
}
int comp_tel_descrescator(Data a, Data b) {
    return strcmp(a.tel, b.tel) > 0 || strcmp(a.tel, b.tel) == 0 && a.pozz > b.pozz;
}
int comp_email_descrescator(Data a, Data b) {
    return strcmp(a.email, b.email) > 0 || strcmp(a.email, b.email) == 0 && a.pozz > b.pozz;
}
int comp_fct_descrescator(Data a, Data b) {
    return strcmp(a.fct, b.fct) > 0 || strcmp(a.fct, b.fct) == 0 && a.pozz > b.pozz;
}
int comp_salariu_descrescator(Data a, Data b) {
    return a.salariu > b.salariu || a.salariu == b.salariu && a.pozz > b.pozz;
}
int comp_varsta_descrescator(Data a, Data b) {
    return a.varsta > b.varsta || a.varsta == b.varsta && a.pozz > b.pozz;
}

int main() {
    int n, p;
    char c;
    Data a[80];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].prenume >> a[i].nume >> a[i].salariu >> a[i].varsta >> a[i].fct >> a[i].tel >> a[i].email;
        a[i].pozz = i;
    }
    cin >> p >> c;

    if (c == '+') {
        switch (p) {
            case 1:
                sort(a, a + n, comp_prenume);
                break;
            case 2:
                sort(a, a + n, comp_nume);
                break;
            case 3:
                sort(a, a + n, comp_salariu);
                break;
            case 4:
                sort(a, a + n, comp_varsta);
                break;
            case 5:
                sort(a, a + n, comp_fct);
                break;
            case 6:
                sort(a, a + n, comp_tel);
                break;
            case 7:
                sort(a, a + n, comp_email);
                break;
        }
    } else if (c == '-') {
        switch (p) {
            case 1:
                sort(a, a + n, comp_prenume_descrescator);
                break;
            case 2:
                sort(a, a + n, comp_nume_descrescator);
                break;
            case 3:
                sort(a, a + n, comp_salariu_descrescator);
                break;
            case 4:
                sort(a, a + n, comp_varsta_descrescator);
                break;
            case 5:
                sort(a, a + n, comp_fct_descrescator);
                break;
            case 6:
                sort(a, a + n, comp_tel_descrescator);
                break;
            case 7:
                sort(a, a + n, comp_email_descrescator);
                break;
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i].prenume << " " << a[i].nume << " " << a[i].salariu << " " << a[i].varsta << " " << a[i].fct << " " << a[i].tel << " " << a[i].email << "\n";
}