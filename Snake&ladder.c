#include<stdio.h>
#include<windows.h>
void pos_cursor(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void print_box(int x,int y) {
	int i,j;
	if(x==0 && y==0) {
		pos_cursor(x,y);
		for(i=x; i<=x+8; i++) {
			if(i==x) {
				printf("%c",218);
			} else if(i==(x+8)) {
				printf("%c",194);
			} else {
				printf("%c",196);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x+8,i+1);
			if(i==y+3) {
				printf("%c",197);
			} else {
				printf("%c",179);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x,i+1);
			if(i==y+3) {
				printf("%c",195);
			} else {
				printf("%c",179);
			}
		}
		for(i=x; i<=x+6; i++) {
			printf("%c",196);
		}
	} else if(x==72 && y==36) {
		pos_cursor(x,y);
		for(i=x; i<=x+8; i++) {
			if(i==x) {
				printf("%c",197);
			} else if(i==(x+8)) {
				printf("%c",180);
			} else {
				printf("%c",196);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x+8,i+1);
			if(i==y+3) {
				printf("%c",217);
			} else {
				printf("%c",179);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x,i+1);
			if(i==y+3) {
				printf("%c",193);
			} else {
				printf("%c",179);
			}
		}
		for(i=x; i<=x+6; i++) {
			printf("%c",196);
		}
	} else if(x==0 && y==36) {
		pos_cursor(x,y);
		for(i=x; i<=x+8; i++) {
			if(i==x) {
				printf("%c",195);
			} else if(i==(x+8)) {
				printf("%c",197);
			} else {
				printf("%c",196);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x+8,i+1);
			if(i==y+3) {
				printf("%c",193);
			} else {
				printf("%c",179);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x,i+1);
			if(i==y+3) {
				printf("%c",192);
			} else {
				printf("%c",179);
			}
		}
		for(i=x; i<=x+6; i++) {
			printf("%c",196);
		}
	} else if(y==0 && x==72) {
		pos_cursor(x,y);
		for(i=x; i<=x+8; i++) {
			if(i==x) {
				printf("%c",194);
			} else if(i==(x+8)) {
				printf("%c",191);
			} else {
				printf("%c",196);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x+8,i+1);
			if(i==y+3) {
				printf("%c",180);
			} else {
				printf("%c",179);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x,i+1);
			if(i==y+3) {
				printf("%c",197);
			} else {
				printf("%c",179);
			}
		}
		for(i=x; i<=x+6; i++) {
			printf("%c",196);
		}
	} else if(y!=0 && y!=36 && x==72) {
		pos_cursor(x,y);
		for(i=x; i<=x+8; i++) {
			if(i==x) {
				printf("%c",197);
			} else if(i==(x+8)) {
				printf("%c",180);
			} else {
				printf("%c",196);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x+8,i+1);
			if(i==y+3) {
				printf("%c",180);
			} else {
				printf("%c",179);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x,i+1);
			if(i==y+3) {
				printf("%c",197);
			} else {
				printf("%c",179);
			}
		}
		for(i=x; i<=x+6; i++) {
			printf("%c",196);
		}
	} else if(y==0 && x!=0 && x!=72) {
		pos_cursor(x,y);
		for(i=x; i<=x+8; i++) {
			if(i==x) {
				printf("%c",194);
			} else if(i==(x+8)) {
				printf("%c",194);
			} else {
				printf("%c",196);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x+8,i+1);
			if(i==y+3) {
				printf("%c",197);
			} else {
				printf("%c",179);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x,i+1);
			if(i==y+3) {
				printf("%c",197);
			} else {
				printf("%c",179);
			}
		}
		for(i=x; i<=x+6; i++) {
			printf("%c",196);
		}
	} else if(y==36 && x!=0 && x!=72) {
		pos_cursor(x,y);
		for(i=x; i<=x+8; i++) {
			if(i==x) {
				printf("%c",197);
			} else if(i==(x+8)) {
				printf("%c",197);
			} else {
				printf("%c",196);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x+8,i+1);
			if(i==y+3) {
				printf("%c",193);
			} else {
				printf("%c",179);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x,i+1);
			if(i==y+3) {
				printf("%c",193);
			} else {
				printf("%c",179);
			}
		}
		for(i=x; i<=x+6; i++) {
			printf("%c",196);
		}
	} else if(y!=0 && y!=36 && x==0) {
		pos_cursor(x,y);
		for(i=x; i<=x+8; i++) {
			if(i==x) {
				printf("%c",195);
			} else if(i==(x+8)) {
				printf("%c",197);
			} else {
				printf("%c",196);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x+8,i+1);
			if(i==y+3) {
				printf("%c",197);
			} else {
				printf("%c",179);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x,i+1);
			if(i==y+3) {
				printf("%c",195);
			} else {
				printf("%c",179);
			}
		}
		for(i=x; i<=x+6; i++) {
			printf("%c",196);
		}
	} else {
		pos_cursor(x,y);
		for(i=x; i<=x+8; i++) {
			if(i==x) {
				printf("%c",197);
			} else if(i==(x+8)) {
				printf("%c",197);
			} else {
				printf("%c",196);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x+8,i+1);
			if(i==y+3) {
				printf("%c",197);
			} else {
				printf("%c",179);
			}
		}
		for(i=y; i<y+4; i++) {
			pos_cursor(x,i+1);
			if(i==y+3) {
				printf("%c",197);
			} else {
				printf("%c",179);
			}
		}
		for(i=x; i<=x+6; i++) {
			printf("%c",196);
		}
	}
}

int avail(int arr[][2],int a,int n) {
	int i,j,flag=0;
	if(n==0) {
		return 0;
	} else {
		for(i=0; i<n; i++) {
			for(j=0; j<2; j++) {
				if(arr[i][j]==a) {
					flag=1;
					break;
				}
			}
		}
	}
	return flag;
}

int lookout(int arr[][2],int a) {
	int i,j,flag=0;
	for(i=0; i<5; i++) {
		for(j=0; j<2; j++) {
			if(arr[i][j]==a) {
				flag=i+1;
				break;
			}
		}
	}
	return flag;
}

void display_ele(int* ele,int s[][2],int l[][2],int* u,int n) {
	int i,j,k=0,count=0;
	for(i=38; i>=2; i=i-4) {
		for(j=4; j<=76; j=j+8) {
			pos_cursor(j,i);
			int s1=0,l1=0;
			fflush(stdin);
			s1=lookout(s,ele[k]);
			l1=lookout(l,ele[k]);
			if(s1) {
				if(s[s1-1][0]==ele[k]) {
					j--;
					printf("S%dH",s1);
					j++;
				} else {
					j--;
					printf("S%dT",s1);
					j++;
				}
			} else if(l1) {
				if(l[l1-1][0]==ele[k]) {
					j--;
					printf("L%dH",l1);
					j++;
				} else {
					j--;
					printf("L%dT",l1);
					j++;
				}
			} else {
				printf("%d",ele[k]);
			}
			int l,count=0,a[9];
			for(l=0; l<n; l++) {
				if(ele[k]==u[l]) {
					a[count]=l;
					count++;
				}
			}
			switch(count) {
				case 1:
					pos_cursor(j,i);
					printf("U%d ",a[0]+1);
					break;
				case 2:
					pos_cursor(j-2,i);
					printf("U%d ",a[0]+1);
					pos_cursor(j+1,i);
					printf("U%d",a[1]+1);
					break;
				case 3:
					pos_cursor(j-2,i);
					printf("U%d",a[0]+1);
					pos_cursor(j,i);
					printf("U%d",a[1]+1);
					pos_cursor(j+2,i);
					printf("U%d",a[2]+1);
					break;
				case 4:
					pos_cursor(j,i-1);
					printf("U%d",a[0]+1);
					pos_cursor(j+1,i);
					printf(" U%d",a[1]+1);
					pos_cursor(j,i+1);
					printf("U%d",a[2]+1);
					pos_cursor(j-2,i);
					printf("U%d ",a[3]+1);
					break;
				case 5:
					pos_cursor(j,i-1);
					printf("U%d",a[0]+1);
					pos_cursor(j+2,i);
					printf("U%d",a[1]+1);
					pos_cursor(j,i+1);
					printf("U%d",a[2]+1);
					pos_cursor(j-2,i);
					printf("U%d",a[3]+1);
					pos_cursor(j,i);
					printf("U%d",a[4]+1);
					break;
				case 6:
					pos_cursor(j-2,i-1);
					printf("U%d",a[0]+1);
					pos_cursor(j-2,i);
					printf("U%d ",a[1]+1);
					pos_cursor(j-2,i+1);
					printf("U%d",a[2]+1);
					pos_cursor(j+2,i-1);
					printf("U%d",a[3]+1);
					pos_cursor(j+2,i);
					printf("U%d",a[4]+1);
					pos_cursor(j+2,i+1);
					printf("U%d",a[5]+1);
					break;
				case 7:
					pos_cursor(j-2,i-1);
					printf("U%d",a[0]+1);
					pos_cursor(j-2,i);
					printf("U%d ",a[1]+1);
					pos_cursor(j-2,i+1);
					printf("U%d",a[2]+1);
					pos_cursor(j,i-1);
					printf(" U%d",a[3]+1);
					pos_cursor(j,i);
					printf("U%d",a[4]+1);
					pos_cursor(j,i+1);
					printf(" U%d",a[5]+1);
					pos_cursor(j+2,i);
					printf("U%d",a[6]+1);
					break;
				case 8:
					pos_cursor(j-2,i-1);
					printf("U%d",a[0]+1);
					pos_cursor(j-2,i);
					printf("U%d ",a[1]+1);
					pos_cursor(j-2,i+1);
					printf("U%d",a[2]+1);
					pos_cursor(j,i-1);
					printf("U%d",a[3]+1);
					pos_cursor(j,i);
					printf(" U%d",a[4]+1);
					pos_cursor(j,i+1);
					printf("U%d",a[5]+1);
					pos_cursor(j+2,i-1);
					printf("U%d",a[6]+1);
					pos_cursor(j+2,i+1);
					printf("U%d",a[7]+1);
					break;
				case 9:
					pos_cursor(j-2,i-1);
					printf("U%d",a[0]+1);
					pos_cursor(j-2,i);
					printf("U%d ",a[1]+1);
					pos_cursor(j-2,i+1);
					printf("U%d",a[2]+1);
					pos_cursor(j,i-1);
					printf("U%d",a[3]+1);
					pos_cursor(j,i);
					printf("U%d",a[4]+1);
					pos_cursor(j,i+1);
					printf("U%d",a[5]+1);
					pos_cursor(j+2,i-1);
					printf("U%d",a[6]+1);
					pos_cursor(j+2,i);
					printf("U%d",a[7]+1);
					pos_cursor(j+2,i+1);
					printf("U%d",a[8]+1);
					break;
			}
			k++;
		}
	}
}

void display_box() {
	system("cls");
	int i,j;
	for(i=0; i<=72; i=i+8) {
		for(j=0; j<=36; j=j+4) {
			print_box(i,j);
		}
	}
}

int check_win(int* ele,int snake[][2],int ladder[][2],int *u,int n) {
	int i,count=n;
	system("cls");
	display_box();
	display_ele(ele,snake,ladder,u,n);
	for(i=0; i<n; i++) {
		if(u[i]==100) {
			count--;
		}
		if(count==1) {
			printf("Game has ended... Thanks for playing. ^_^");
			exit(0);
		}
	}
	return 1;
}

int look(int arr[][2],int a) {
	int i,j;
	for(i=0; i<5; i++) {
		for(j=0; j<2; j++) {
			if(arr[i][0]==a) {
				return arr[i][1];
			}
		}
	}
	return 0;
}

int main() {
	int ele[100],i,j,n,user[9],snake[5][2],s,ladder[5][2],l,count=5,el;
	char isokBoard,ch;
	printf("\t\t\t\t\tWelcome to Snake and Ladder Game ^_^\n\nLoading Game...");
	Sleep(1750);
	el=1;
	for(i=0; i<10; i++) {
		ele[i]=el;
		el++;
	}
	el=20;
	for(i=10; i<20; i++) {
		ele[i]=el;
		el--;
	}
	el=21;
	for(i=20; i<30; i++) {
		ele[i]=el;
		el++;
	}
	el=40;
	for(i=30; i<40; i++) {
		ele[i]=el;
		el--;
	}
	el=41;
	for(i=40; i<50; i++) {
		ele[i]=el;
		el++;
	}
	el=60;
	for(i=50; i<60; i++) {
		ele[i]=el;
		el--;
	}
	el=61;
	for(i=60; i<70; i++) {
		ele[i]=el;
		el++;
	}
	el=80;
	for(i=70; i<80; i++) {
		ele[i]=el;
		el--;
	}
	el=81;
	for(i=80; i<90; i++) {
		ele[i]=el;
		el++;
	}
	el=100;
	for(i=90; i<100; i++) {
		ele[i]=el;
		el--;
	}
	printf("\n\nEnter number of players(Max 9 is allowed): ");
	scanf("%d",&n);
	while(n<2 || n>9) {
		printf("\nOnly 2-9 user can play. Enter number of players: ");
		scanf("%d",&n);
	}
	printf("\nLoading Game. Please wait...");
	for(i=0; i<n; i++) {
		user[i]=1;
	}
isok:
	count=5;
	s=0;
	while(count!=0) {
		int sn=rand()%99;
		while(avail(snake,sn,s) || sn<=10) {
			sn=rand()%99;
		}
		snake[s][0]=sn;
		sn=rand()%99;
		while(avail(snake,sn,s) || sn>=snake[s][0] || snake[s][0]-sn<=10) {
			sn=rand()%99;
		}
		snake[s][1]=sn;
		s++;
		count--;
	}
	count=5;
	l=0;
	while(count!=0) {
		int ln=rand()%90;
		while(avail(ladder,ln,l)) {
			ln=rand()%90;
		}
		ladder[l][0]=ln;
		ln=rand()%99;
		while(avail(ladder,ln,l) || ln<=ladder[l][0] || ln-ladder[l][0]<=10) {
			ln=rand()%99;
		}
		ladder[l][1]=ln;
		l++;
		count--;
	}
//	printf("\nSnakes: \n");
//	for(i=0; i<5; i++) {
//		for(j=0; j<2; j++) {
//			printf("%d->",snake[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\nLadders: \n");
//	for(i=0;i<5;i++){
//		for(j=0;j<2;j++){
//			printf("%d->",ladder[i][j]);
//		}
//		printf("\n");
//	}
	system("cls");
	display_box();
	display_ele(ele,snake,ladder,user,n);
	pos_cursor(0,41);
	printf("\nIs the board OK press Enter to continue or y to load another board: ");
	isokBoard=getchar();
	if(isokBoard=='y') {
		goto isok;
	} else {
		int c=0;
		while(check_win(ele,snake,ladder,user,n)) {
			system("cls");
			display_box();
			display_ele(ele,snake,ladder,user,n);
			c%=n;
			if(user[c]!=100) {
				pos_cursor(0,41);
				printf("User%d turn. Press enter to roll: ",c+1);
				ch=getchar();
				int ran=rand()%6;
				ran++;
				printf("\tRolling dice...");
				Sleep(750);
				printf("\tOutcome: %d",ran);
				Sleep(1500);
				if(user[c]+ran>100) {
					printf("Invalid move... -_-");
					Sleep(1500);
				} else {
					user[c]+=ran;
					int sn=look(snake,user[c]);
					int ln=look(ladder,user[c]);
					if(sn!=0) {
						user[c]=sn;
					} else if(ln!=0) {
						user[c]=ln;
					}
				}
			}
			c++;
		}
	}
}
