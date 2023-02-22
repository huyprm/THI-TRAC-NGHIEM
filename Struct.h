#pragma once
#include<iostream>

using namespace std;
#define MAX_LOP 500
#define MAX_MONHOC 300

//========== danh sach sinh vien ==========
struct SINHVIEN {
	string MASV;
	string HO;
	string TEN;
	string PHAI;
	string password;
	List_DIEM diem;
};
struct List_SV {
	SINHVIEN sv;
	SINHVIEN* next;
};

//========== danh sach lop ==========

struct LOP {
	string MALOP;
	string TENLOP;
	string NIENKHOA;
	List_SV dssv;
};
struct List_LOP {
	int n;
	LOP* nodeLOP[MAX_LOP];
};

//========== danh sach mon hoc ==========

struct MONHOC {
	string MAMH;
	string TENMH;
};
struct List_MONHOC {
	int n;
	MONHOC* nodeMONHOC[MAX_MONHOC];
};

//========== danh sach diem thi ==========

struct DIEMMH {
	string MAMH;
	int DIEM;
};
struct List_DIEM {
	DIEMMH diem;
	DIEMMH* next;
};

//========== danh sach cau hoi thi ==========

struct CAUHOITHI {
	int ID;
	string MAMH;
	string ND;
	string DA;
};
struct List_CHT {
	CAUHOITHI cht;
	CAUHOITHI* left;
	CAUHOITHI* right;
};
