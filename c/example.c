#include <stdio.h>
#define MAX 8
typedef struct{
	int data[MAX];
	int head;
	int tail;
} Queue;

Queue antrian;
void main(){
	int pilihan;
	label:
	printf("==[Toko Sinar Harapan]== \n");
	printf("1. Input Pendapatan \n");
	printf("2. Hapus Pendapatan \n");
	printf("3. Transaksi Terakhir  \n");
	printf("4. Analisis Pendapatan \n");
	printf("Masukkan Pilihan: ");scanf("%d", &pilihan);
	if(pilihan == 1){
		Enqueue();
		goto label;
	}else
	if(pilihan == 2){
		Dequeue();
		goto label;
	}else
	if(pilihan == 3){
		Tampil();
		goto label;
	}else
	if(pilihan == 4){
		Analisis();
		goto label;
	}
}
void Analisis(){
	int largest,i,total,lowest,ratarata;
	largest = antrian.data[0];
	for(i=0;i<8;i++){
		total = total + antrian.data[i];
		ratarata = total/antrian.data[i];
		if(largest < antrian.data[i]){
			largest = antrian.data[i];
		}
	}
	for(i=0;i<8;i++){
		if(lowest > antrian.data[i] && lowest !=0){
			lowest = antrian.data[i];
		}
	}
	ratarata = total/8;
	printf("Total    : Rp. %d \n", &total);
	printf("Terbesar : Rp. %d \n", &largest);
	printf("Terkecil : Rp. %d \n", &lowest);
	printf("Rata Rata: Rp. %d \n", &ratarata);
	
}
void Create(){
	antrian.head=antrian.tail=-1;
}

int IsEmpty(){
	if(antrian.tail==-1)
		return 1;
	else
		return 0;
}

int IsFull(){
	if(antrian.tail==MAX-1)
		return 1;
	else
		return 0;
}

void Enqueue(int data){
	if(IsEmpty()==1){
		antrian.head=antrian.tail=0;
		printf("Masukkan data(Rp): ");scanf("%d", &antrian.data[antrian.tail]);
		printf("Rp. %d Masuk \n\n", antrian.data[antrian.tail]);
	} else
	if(IsFull()==0){
		antrian.tail++;
		printf("Masukkan data(Rp): ");scanf("%d", &antrian.data[antrian.tail]);
		printf("Rp. %d Masuk \n\n", antrian.data[antrian.tail]);
	}
}

int Dequeue(){
	int i;
	int e = antrian.data[antrian.head];
	for(i=antrian.head;i<=antrian.tail-1;i++){
		antrian.data[i] = antrian.data[i+1];
	}
	antrian.tail--;
	printf("Transaksi Terakhir Berhasil Dihapus");
	return e;
}

void Clear(){
	antrian.head=antrian.tail=-1;
	printf("data clear");
}

void Tampil(){
	int i = antrian.head;
	if(IsEmpty()==0){
		for(i;i<=antrian.tail;i++){
			printf("Rp. %d \n", antrian.data[i]);
		}
	}else printf("Data Kosong");
}

