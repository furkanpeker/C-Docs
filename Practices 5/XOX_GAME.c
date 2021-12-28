#include <stdio.h>
#include <conio.h>

/*
X	O	X
O	X	O
O	O	X
*/

int iBoyut=3;
int oyun[3][3];

void OyunAlaniBosalt()
{
	int iSatir=0,iSutun=0;
	for(iSatir=0;iSatir<iBoyut;iSatir++)
	{
		for(iSutun=0;iSutun<iBoyut;iSutun++)
		{
			oyun[iSatir][iSutun]=-1;
		}
	}
}

int BosMu(int iSatir,int iSutun)
{
	return oyun[iSatir][iSutun]==-1 ? 1 : 0;
}

int OyunBittiMi()
{
	int iSatir=0,iSutun=0;
	int iXSayisi=0,iOSayisi=0,iBosAlanSayisi=0;
	//bos alan kaldi mi
	for(iSatir=0;iSatir<iBoyut;iSatir++)
	{
		for(iSutun=0;iSutun<iBoyut;iSutun++)
		{
			if(BosMu(iSatir,iSutun)==1)
			{
				iBosAlanSayisi++;
			}
		}
	}

	if(iBosAlanSayisi==0)
		return 3;

	for(iSatir=0;iSatir<iBoyut;iSatir++)
	{
		for(iSutun=0;iSutun<iBoyut;iSutun++)
		{
			iXSayisi += oyun[iSatir][iSutun] == 1 ? 1 : 0;
			iOSayisi += oyun[iSatir][iSutun] == 2 ? 1 : 0;
		}
		if(iXSayisi==3)
			return 1;
		else if(iOSayisi==3)
			return 2;
		else
		{
			iXSayisi = 0;
			iOSayisi = 0;
		}
	}


	for(iSutun=0;iSutun<iBoyut;iSutun++)
	{
		for(iSatir=0;iSatir<iBoyut;iSatir++)
		{
			iXSayisi += oyun[iSatir][iSutun] == 1 ? 1 : 0;
			iOSayisi += oyun[iSatir][iSutun] == 2 ? 1 : 0;
		}
		if(iXSayisi==3)
			return 1;
		else if(iOSayisi==3)
			return 2;
		else
		{
			iXSayisi = 0;
			iOSayisi = 0;
		}
	}


	for(iSatir=0;iSatir<iBoyut;iSatir++)
	{
			iXSayisi += oyun[iSatir][iSatir] == 1 ? 1 : 0;
			iOSayisi += oyun[iSatir][iSatir] == 2 ? 1 : 0;
	}
	if(iXSayisi==3)
		return 1;
	else if(iOSayisi==3)
		return 2;
	else
	{
		iXSayisi = 0;
		iOSayisi = 0;
	}


	for(iSatir=0;iSatir<iBoyut;iSatir++)
	{
			iXSayisi += oyun[iSatir][2-iSatir] == 1 ? 1 : 0;
			iOSayisi += oyun[iSatir][2-iSatir] == 2 ? 1 : 0;
	}
	if(iXSayisi==3)
		return 1;
	else if(iOSayisi==3)
		return 2;
	else
	{
		iXSayisi = 0;
		iOSayisi = 0;
	}

	return 0;
}

void EkranaYazdir()
{
	int iSatir=0,iSutun=0;
	char cKarakter;
	 printf("-------XOX--------|\n");
	for(iSatir=0;iSatir<iBoyut;iSatir++)
		{
		for(iSutun=0;iSutun<iBoyut;iSutun++)
		{
			cKarakter = oyun[iSatir][iSutun]==1 ? 'X' :  (oyun[iSatir][iSutun]==2 ? 'O' :'--');
			printf("%c\t",cKarakter);
		}
		printf("\n");
	}
	printf("------------------\n");

}

int main(void)
{
	int iSatir=0,iSutun=0,iOyuncuID=1,iOyunBittiMi=0;
	OyunAlaniBosalt();
	while(1)
	{
		EkranaYazdir();
		printf("Hangi satir ve sutuna isareti koymak istiyorsunuz:");
		scanf("%d %d",&iSatir,&iSutun);
		if(BosMu(iSatir,iSutun)==1)
		{
			oyun[iSatir][iSutun] = iOyuncuID;
			iOyunBittiMi=OyunBittiMi();
			if(iOyunBittiMi!=0)
				break;
			iOyuncuID = iOyuncuID == 1 ? 2 : 1;
		}
		else
		{
			printf("Bu alan dolu yeniden girmelisiniz...\n");
		}
	}

	switch(iOyunBittiMi)
	{
		case 1:
			printf("Tebrikler 1. oyuncu kazandi :)");
			break;
		case 2:
			printf("Tebrikler 2. oyuncu kazandi :)");
			break;
		case 3:
			printf("Kimse kazanamadi :)");
			break;
	}
	getch();
	return 0;
}
