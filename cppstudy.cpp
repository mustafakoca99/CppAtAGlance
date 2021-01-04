#include <iostream>
#include <string>
#include <cstring>
#define dosya "output.txt"

using namespace std;

int mustafa(int i,int j){
return i*j;
}
int uyari(){
	cout<<"BU KOD MUSTAFA KOCA'YA AİTTİR!!"<<endl;
}
int deger(int x){
	if(x==10)
		return x;
	
	else
		return x+2;
	
}
struct tarih{
	int gun;
	int ay;
	int yil;
};
struct person{
	char *name;
	int no;
};
struct point{
	int x,y;
};
int main(int argc, char** argv) {
	uyari();
	cout<<"Mustafa Koca"<<endl;
	int m,k;
	cout<<"sayi gir:";
	cin>>m;
	cout<<"2. sayi gir:";
	cin>>k;
	cout<<mustafa(m,k);
	cout<<endl<<endl;
	
	//matris kullanımı
	int a[5][5];
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j)
				a[i][j]=1;
			else
				a[i][j]=0;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//if else sayi artır
	int ab=13;
	ab=deger(ab);
	cout<<endl<<ab;
		cout<<endl<<endl;
		//struct mantığı örnek
	tarih bugun={20,02,2020};
	bugun.gun=24;
	cout<<"tarih:"<<bugun.gun<<"-"<<bugun.ay<<"-"<<bugun.yil<<endl<<endl;
	
	//struct pointer mantığı
	struct person per={
		"evreka!!",123
	};
	char ch;
	ch=per.name[2];
	putchar(ch);
	cout<<endl<<endl;
	
	//pointer değişkenini struct içinde kullanmak...
	struct point pt;
	struct point *ppt;
	ppt=&pt;
	ppt->x=10;
	ppt->y=20;
	cout<<ppt->x<<ppt->y<<endl;
	
	//dosya yazma işlemi
	const char *mytext="cpp programlama kolay";
	FILE *fp=fopen(dosya,"w");
	if(fp){
		fwrite(mytext,sizeof(char),strlen(mytext),fp);
		fclose(fp);
	}
	
	cout<<endl;
	//yazdığımız dosyayı okuma
	char mytextt[25];
	FILE *fpp=fopen(dosya,"r");
	if(fpp==NULL)
		cout<<"dosya okunamadı!";
	else
		fread(mytextt,sizeof(char),25,fpp);
	cout<<"okudugum: "<<mytextt<<endl;
	fclose(fpp);
	return 0;
}
