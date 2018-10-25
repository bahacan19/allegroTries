#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>

int main()
{

    initwindow( 1000, 1000, "Window Text",0, 0);

    char giris1,giris2,cikis1,cikis2,basa,yona,basb,yonb,basc,yonc,basd,yond,base,yone;

    //1. sekil icin--------------1. sekil icin----------------------1. sekil icin---------------------1. sekil icin
    arc(250, 250, 0,90,50); //d�s
    arc(220,250,90,180,50);//d�s
    arc(250,280,270,360,50);//d�s
    arc(220,280,180,270,50);//d�s

    arc(235, 265, 0,360,40);//ic

    line(300,250,350,250);//y
    line(300,280,350,280);//y

    line(120,250,170,250);//t
    line(120,280,170,280);//t

    line(250,200,250,150);//x
    line(220,200,220,150);//x

    line(250,330,250,380);//z
    line(220,330,220,380);//z
    //1. sekil harflendirme
    settextstyle(1,0,2);
    setcolor(4);
    outtextxy(230,180,"x");
    outtextxy(310,255,"y");
    outtextxy(230,340,"z");
    outtextxy(150,255,"t");

    outtextxy(185,225,"a");
    outtextxy(270,225,"b");
    outtextxy(185,290,"c");
    outtextxy(270,290,"d");

    settextstyle(1,0,3);
    outtextxy(170,400,"1.Yol");
    outtextxy(670,400,"2.Yol");
    setcolor(7);
    //2.sekil icin----------------2.sekil icin---------------------2.sekil icin---------------------2. sekil icin
    arc(750, 250, 0,90,50);//d�s
    arc(720,250,90,180,50);//d�s
    arc(750,280,270,360,50);//d�s
    arc(720,280,180,270,50);//d�s

    arc(720,250,90,180,20);//ic
    arc(750,250,0,90,20);//ic
    arc(720,280,180,270,20);//ic
    arc(750,280,270,360,20);//ic

    line(800,250,850,250);//y
    line(800,280,850,280);//y

    line(620,250,670,250);//t
    line(620,280,670,280);//t

    line(750,200,750,150);//x
    line(720,200,720,150);//x

    line(750,330,750,380);//z
    line(720,330,720,380);//z

    line(700,250,770,250);//e
    line(700,280,770,280);//e

    line(720,230,750,230);//ic daire cizgisi
    line(720,300,750,300);//ic daire cizgisi
    //2. sekil icin harflendirme
    settextstyle(1,0,2);
    setcolor(4);
    outtextxy(730,180,"x");
    outtextxy(810,255,"y");
    outtextxy(730,340,"z");
    outtextxy(650,255,"t");

    outtextxy(685,225,"a");
    outtextxy(770,225,"b");
    outtextxy(685,290,"c");
    outtextxy(770,290,"d");
    outtextxy(730,255,"e");

    setcolor(7);
//**************************************
    int yol;
    printf("Hangi Yolu Secmek Istersiniz:");
    scanf("%d",&yol);

    if(yol==1)//1.sekil icin
    {
        setcolor(0);
        arc(750, 250, 0,90,50);//d�s
        arc(720,250,90,180,50);//d�s
        arc(750,280,270,360,50);//d�s
        arc(720,280,180,270,50);//d�s

        arc(720,250,90,180,20);//ic
        arc(750,250,0,90,20);//ic
        arc(720,280,180,270,20);//ic
        arc(750,280,270,360,20);//ic

        line(800,250,850,250);//y
        line(800,280,850,280);//y

        line(620,250,670,250);//t
        line(620,280,670,280);//t

        line(750,200,750,150);//x
        line(720,200,720,150);//x

        line(750,330,750,380);//z
        line(720,330,720,380);//z

        line(700,250,770,250);//e
        line(700,280,770,280);//e

        line(720,230,750,230);//ic daire cizgisi
        line(720,300,750,300);//ic daire cizgisi
        //2. sekil icin harflendirme
        settextstyle(1,0,2);

        outtextxy(730,180,"x");
        outtextxy(810,255,"y");
        outtextxy(730,340,"z");
        outtextxy(650,255,"t");

        outtextxy(685,225,"a");
        outtextxy(770,225,"b");
        outtextxy(685,290,"c");
        outtextxy(770,290,"d");
        outtextxy(730,255,"e");

        settextstyle(1,0,3);
        outtextxy(670,400,"2.Yol");
        setcolor(0);
        outtextxy(670,400,"2.Yol");
        setcolor(7);
        //////////////////////////////////////////////////////////////
        puts("1. girisi belirleyiniz:");
        scanf("%c",&giris1);
        scanf("%c",&giris1);
        puts("\n2. girisi belirleyiniz:");
        scanf("%c",&giris2);
        scanf("%c",&giris2);

        puts("1. cikisi belirleyiniz:");
        scanf("%c",&cikis1);
        scanf("%c",&cikis1);
        puts("\n2. girisi belirleyiniz:");
        scanf("%c",&cikis2);
        scanf("%c",&cikis2);
        /////////////////////////////////////////////////////////////
        //----yol olas�l�klar�----------------yol olas�l�klar�---------------yol olas�l�klar�

        if(giris1=='t' && giris2=='x' || giris2=='t' && giris1=='x')
        {

            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(100+i,265,120+i,265);//t giris
                line(115+i,260,120+i,265);//t giris
                line(115+i,270,120+i,265);//t giris

                line(235,130+i,235,150+i);//x giris
                line(230,145+i,235,150+i);//x giris
                line(240,145+i,235,150+i);//x giris

                line(320+i,265,340+i,265);//y cikis
                line(335+i,260,340+i,265);//y cikis
                line(335+i,270,340+i,265);//y cikis

                line(235,350+i,235,370+i);//z cikis
                line(230,365+i,235,370+i);//z cikis
                line(240,365+i,235,370+i);//z cikis

                delay(400);
                setcolor(0);

                line(115+i,260,120+i,265);//t giris k
                line(115+i,270,120+i,265);//t giris k

                line(230,145+i,235,150+i);//x giris k
                line(240,145+i,235,150+i);//x giris k

                line(335+i,260,340+i,265);//y cikis k
                line(335+i,270,340+i,265);//y cikis k

                line(230,365+i,235,370+i);//z cikis k
                line(240,365+i,235,370+i);//z cikis k
            }
            setcolor(YELLOW);
            line(155,260,160,265);//t giris
            line(155,270,160,265);//t giris
            line(230,185,235,190);//x giris
            line(240,185,235,190);//x giris
            line(375,260,380,265);//y cikis
            line(375,270,380,265);//y cikis
            line(230,405,235,410);//z cikis
            line(240,405,235,410);//z cikis
        }
        /////////////////////////////////////////////////////////////////

        if(giris1=='t' && giris2=='y' || giris2=='t' && giris1=='y')
        {
            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(100+i,265,120+i,265);//t giris
                line(115+i,260,120+i,265);//t giris
                line(115+i,270,120+i,265);//t giris

                line(380-i,265,360-i,265);//y giris
                line(365-i,270,360-i,265);//y giris
                line(365-i,260,360-i,265);//y giris

                line(235,180-i,235,160-i);//x cikis
                line(230,165-i,235,160-i);//x cikis
                line(240,165-i,235,160-i);//x cikis

                line(235,350+i,235,370+i);//z cikis
                line(230,365+i,235,370+i);//z cikis
                line(240,365+i,235,370+i);//z cikis

                delay(400);
                setcolor(0);

                line(115+i,260,120+i,265);//t giris k
                line(115+i,270,120+i,265);//t giris k

                line(365-i,270,360-i,265);//y giris k
                line(365-i,260,360-i,265);//y giris k

                line(230,165-i,235,160-i);//x cikis k
                line(240,165-i,235,160-i);//x cikis k

                line(230,365+i,235,370+i);//z cikis k
                line(240,365+i,235,370+i);//z cikis k
            }
            setcolor(YELLOW);
            line(155,260,160,265);//t giris
            line(155,270,160,265);//t giris
            line(325,270,320,265);//y giris
            line(325,260,320,265);//y giris
            line(230,125,235,120);//x cikis
            line(240,125,235,120);//x cikis
            line(230,405,235,410);//z cikis
            line(240,405,235,410);//z cikis
        }
        //-------------------------------

        if(giris1=='t' && giris2=='z' || giris2=='t' && giris1=='z')
        {
            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(100+i,265,120+i,265);//t giris
                line(115+i,260,120+i,265);//t giris
                line(115+i,270,120+i,265);//t giris

                line(235,400-i,235,380-i);//z giris
                line(230,385-i,235,380-i);//z giris
                line(240,385-i,235,380-i);//z giris

                line(235,180-i,235,160-i);//x cikis
                line(230,165-i,235,160-i);//x cikis
                line(240,165-i,235,160-i);//x cikis

                line(320+i,265,340+i,265);//y cikis
                line(335+i,260,340+i,265);//y cikis
                line(335+i,270,340+i,265);//y cikis

                delay(400);
                setcolor(0);

                line(115+i,260,120+i,265);//t giris k
                line(115+i,270,120+i,265);//t giris k

                line(230,385-i,235,380-i);//z giris k
                line(240,385-i,235,380-i);//z giris k

                line(230,165-i,235,160-i);//x cikis k
                line(240,165-i,235,160-i);//x cikis k

                line(335+i,260,340+i,265);//y cikis k
                line(335+i,270,340+i,265);//y cikis k
            }
            setcolor(YELLOW);
            line(155,260,160,265);//t giris
            line(155,270,160,265);//t giris
            line(230,345,235,340);//z giris
            line(240,345,235,340);//z giris
            line(230,125,235,120);//x cikis
            line(240,125,235,120);//x cikis
            line(375,260,380,265);//y cikis
            line(375,270,380,265);//y cikis
        }
        //-------------------------------------

        if(giris1=='x' && giris2=='y' || giris2=='x' && giris1=='y')
        {
            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(235,130+i,235,150+i);//x giris
                line(230,145+i,235,150+i);//x giris
                line(240,145+i,235,150+i);//x giris

                line(380-i,265,360-i,265);//y giris
                line(365-i,270,360-i,265);//y giris
                line(365-i,260,360-i,265);//y giris

                line(235,350+i,235,370+i);//z cikis
                line(230,365+i,235,370+i);//z cikis
                line(240,365+i,235,370+i);//z cikis

                line(150-i,265,130-i,265);//t cikis
                line(135-i,260,130-i,265);//t cikis
                line(135-i,270,130-i,265);//t cikis

                delay(400);
                setcolor(0);

                line(230,145+i,235,150+i);//x giris k
                line(240,145+i,235,150+i);//x giris k

                line(365-i,270,360-i,265);//y giris k
                line(365-i,260,360-i,265);//y giris k

                line(230,365+i,235,370+i);//z cikis k
                line(240,365+i,235,370+i);//z cikis k

                line(135-i,260,130-i,265);//t cikis k
                line(135-i,270,130-i,265);//t cikis k
            }
            setcolor(YELLOW);
            line(230,185,235,190);//x giris
            line(240,185,235,190);//x giris
            line(325,270,320,265);//y giris
            line(325,260,320,265);//y giris
            line(230,405,235,410);//z cikis
            line(240,405,235,410);//z cikis
            line(95,260,90,265);//t cikis
            line(95,270,90,265);//t cikis
        }
        //------------------------------

        if(giris1=='x' && giris2=='z' || giris2=='x' && giris1=='z')
        {
            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(235,130+i,235,150+i);//x giris
                line(230,145+i,235,150+i);//x giris
                line(240,145+i,235,150+i);//x giris

                line(235,400-i,235,380-i);//z giris
                line(230,385-i,235,380-i);//z giris
                line(240,385-i,235,380-i);//z giris

                line(320+i,265,340+i,265);//y cikis
                line(335+i,260,340+i,265);//y cikis
                line(335+i,270,340+i,265);//y cikis

                line(150-i,265,130-i,265);//t cikis
                line(135-i,260,130-i,265);//t cikis
                line(135-i,270,130-i,265);//t cikis

                delay(400);
                setcolor(0);

                line(230,145+i,235,150+i);//x giris k
                line(240,145+i,235,150+i);//x giris k

                line(230,385-i,235,380-i);//z giris k
                line(240,385-i,235,380-i);//z giris k

                line(335+i,260,340+i,265);//y cikis k
                line(335+i,270,340+i,265);//y cikis k

                line(135-i,260,130-i,265);//t cikis k
                line(135-i,270,130-i,265);//t cikis k
            }
            setcolor(YELLOW);
            line(230,185,235,190);//x giris
            line(240,185,235,190);//x giris
            line(230,345,235,340);//z giris
            line(240,345,235,340);//z giris
            line(375,260,380,265);//y cikis
            line(375,270,380,265);//y cikis
            line(95,260,90,265);//t cikis
            line(95,270,90,265);//t cikis
        }
        //-------------------------------

        if(giris1=='y' && giris2=='z' || giris2=='y' && giris1=='z')
        {
            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(380-i,265,360-i,265);//y giris
                line(365-i,270,360-i,265);//y giris
                line(365-i,260,360-i,265);//y giris

                line(235,400-i,235,380-i);//z giris
                line(230,385-i,235,380-i);//z giris
                line(240,385-i,235,380-i);//z giris

                line(235,180-i,235,160-i);//x cikis
                line(230,165-i,235,160-i);//x cikis
                line(240,165-i,235,160-i);//x cikis

                line(150-i,265,130-i,265);//t cikis
                line(135-i,260,130-i,265);//t cikis
                line(135-i,270,130-i,265);//t cikis

                delay(400);
                setcolor(0);

                line(365-i,270,360-i,265);//y giris k
                line(365-i,260,360-i,265);//y giris k

                line(230,385-i,235,380-i);//z giris k
                line(240,385-i,235,380-i);//z giris k

                line(230,165-i,235,160-i);//x cikis k
                line(240,165-i,235,160-i);//x cikis k

                line(135-i,260,130-i,265);//t cikis k
                line(135-i,270,130-i,265);//t cikis k
            }
            setcolor(YELLOW);
            line(325,270,320,265);//y giris
            line(325,260,320,265);//y giris
            line(230,345,235,340);//z giris
            line(240,345,235,340);//z giris
            line(230,125,235,120);//x cikis
            line(240,125,235,120);//x cikis
            line(95,260,90,265);//t cikis
            line(95,270,90,265);//t cikis
        }
        /////////////////////////////////////////////////////////////////
        puts("a yolu icin yon belirtiniz:");
        puts("Baslangic noktasi:");
        scanf("%c",&basa);
        scanf("%c",&basa);
        puts("Yonu:");
        scanf("%c",&yona);
        scanf("%c",&yona);
        //------------------
        puts("b yolu icin yon belirtiniz:");
        puts("Baslangic noktasi:");
        scanf("%c",&basb);
        scanf("%c",&basb);
        puts("Yonu:");
        scanf("%c",&yonb);
        scanf("%c",&yonb);
        //------------------
        puts("c yolu icin yon belirtiniz:");
        puts("Baslangic noktasi:");
        scanf("%c",&basc);
        scanf("%c",&basc);
        puts("Yonu:");
        scanf("%c",&yonc);
        scanf("%c",&yonc);
        //------------------
        puts("d yolu icin yon belirtiniz:");
        puts("Baslangic noktasi:");
        scanf("%c",&basd);
        scanf("%c",&basd);
        puts("Yonu:");
        scanf("%c",&yond);
        scanf("%c",&yond);

        ////////////////////////////////////////////////////////////////

        if(basa=='t' && yona=='x')
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(220,250,150-i,180-i,35);

            }
            line(220,215,215,210);
            line(220,215,215,220);
        }
            //-----------------------------
        else
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(220,250,90+i,120+i,35);

            }
            line(185,250,180,245);
            line(185,250,190,245);
        }

        //////////////////////////////////////////////////////////////////////////

        if(basb=='x' && yonb=='y')
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(250,250,60-i,90-i,35);
            }
            line(285,250,280,245);
            line(285,250,290,245);
        }
            //-----------------------------
        else
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(250,250,0+i,30+i,35);
            }
            line(250,215,255,210);
            line(250,215,255,220);
        }

        ////////////////////////////////////////////////////////////

        if(basc=='z' && yonc=='t')
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(220,280,270-i,240-i,35);
            }
            line(185,280,180,285);
            line(185,280,190,285);
        }
            //-----------------------------
        else
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(250,250,180+i,210+i,35);
            }
            line(220,315,215,310);
            line(220,315,215,320);
        }

        //////////////////////////////////////////////////////////////

        if(basd=='y' && yond=='z')
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(250,280,330-i,360-i,35);
            }
            line(250,315,255,320);
            line(250,315,255,310);
        }
            //-----------------------------
        else
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(250,280,270+i,300+i,35);
            }
            line(285,280,290,285);
            line(285,280,280,285);
        }
    }
        //*********************************************

    else
    {
        setcolor(0);
        arc(250, 250, 0,90,50); //d�s
        arc(220,250,90,180,50);//d�s
        arc(250,280,270,360,50);//d�s
        arc(220,280,180,270,50);//d�s

        arc(235, 265, 0,360,40);//ic

        line(300,250,350,250);//y
        line(300,280,350,280);//y

        line(120,250,170,250);//t
        line(120,280,170,280);//t

        line(250,200,250,150);//x
        line(220,200,220,150);//x

        line(250,330,250,380);//z
        line(220,330,220,380);//z
        //1. sekil harflendirme
        settextstyle(1,0,2);

        outtextxy(230,180,"x");
        outtextxy(310,255,"y");
        outtextxy(230,340,"z");
        outtextxy(150,255,"t");

        outtextxy(185,225,"a");
        outtextxy(270,225,"b");
        outtextxy(185,290,"c");
        outtextxy(270,290,"d");

        settextstyle(1,0,3);
        outtextxy(170,400,"1.Yol");
        setcolor(0);
        outtextxy(170,400,"1.Yol");
        setcolor(7);

        puts("1. girisi belirleyiniz:");
        scanf("%c",&giris1);
        scanf("%c",&giris1);
        puts("\n2. girisi belirleyiniz:");
        scanf("%c",&giris2);
        scanf("%c",&giris2);

        puts("1. cikisi belirleyiniz:");
        scanf("%c",&cikis1);
        scanf("%c",&cikis1);
        puts("\n2. girisi belirleyiniz:");
        scanf("%c",&cikis2);
        scanf("%c",&cikis2);

        //----yol olas�l�klar�----------------------------------

        if(giris1=='t' && giris2=='x' || giris2=='t' && giris1=='x')
        {

            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(600+i,265,620+i,265);//t giris
                line(615+i,260,620+i,265);//t giris
                line(615+i,270,620+i,265);//t giris

                line(735,130+i,735,150+i);//x giris
                line(730,145+i,735,150+i);//x giris
                line(740,145+i,735,150+i);//x giris

                line(820+i,265,840+i,265);//y cikis
                line(835+i,260,840+i,265);//y cikis
                line(835+i,270,840+i,265);//y cikis

                line(735,350+i,735,370+i);//z cikis
                line(730,365+i,735,370+i);//z cikis
                line(740,365+i,735,370+i);//z cikis

                delay(400);
                setcolor(0);

                line(615+i,260,620+i,265);//t giris k
                line(615+i,270,620+i,265);//t giris k

                line(730,145+i,735,150+i);//x giris k
                line(740,145+i,735,150+i);//x giris k

                line(835+i,260,840+i,265);//y cikis k
                line(835+i,270,840+i,265);//y cikis k

                line(730,365+i,735,370+i);//z cikis k
                line(740,365+i,735,370+i);//z cikis k
            }
            setcolor(YELLOW);
            line(655,260,660,265);//t giris
            line(655,270,660,265);//t giris
            line(730,185,735,190);//x giris
            line(740,185,735,190);//x giris
            line(875,260,880,265);//y cikis
            line(875,270,880,265);//y cikis
            line(730,405,735,410);//z cikis
            line(740,405,735,410);//z cikis
        }
        //----------------------------

        if(giris1=='t' && giris2=='y' || giris2=='t' && giris1=='y')
        {
            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(600+i,265,620+i,265);//t giris
                line(615+i,260,620+i,265);//t giris
                line(615+i,270,620+i,265);//t giris

                line(880-i,265,860-i,265);//y giris
                line(865-i,270,860-i,265);//y giris
                line(865-i,260,860-i,265);//y giris

                line(735,180-i,735,160-i);//x cikis
                line(730,165-i,735,160-i);//x cikis
                line(740,165-i,735,160-i);//x cikis

                line(735,350+i,735,370+i);//z cikis
                line(730,365+i,735,370+i);//z cikis
                line(740,365+i,735,370+i);//z cikis

                delay(400);
                setcolor(0);

                line(615+i,260,620+i,265);//t giris k
                line(615+i,270,620+i,265);//t giris k

                line(865-i,270,860-i,265);//y giris k
                line(865-i,260,860-i,265);//y giris k

                line(730,165-i,735,160-i);//x cikis k
                line(740,165-i,735,160-i);//x cikis k

                line(730,365+i,735,370+i);//z cikis k
                line(740,365+i,735,370+i);//z cikis k
            }
            setcolor(YELLOW);
            line(655,260,660,265);//t giris
            line(655,270,660,265);//t giris
            line(825,270,820,265);//y giris
            line(825,260,820,265);//y giris
            line(730,125,735,120);//x cikis
            line(740,125,735,120);//x cikis
            line(730,405,735,410);//z cikis
            line(740,405,735,410);//z cikis
        }
        //-------------------------------

        if(giris1=='t' && giris2=='z' || giris2=='t' && giris1=='z')
        {
            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(600+i,265,620+i,265);//t giris
                line(615+i,260,620+i,265);//t giris
                line(615+i,270,620+i,265);//t giris

                line(735,400-i,735,380-i);//z giris
                line(730,385-i,735,380-i);//z giris
                line(740,385-i,735,380-i);//z giris

                line(735,180-i,735,160-i);//x cikis
                line(730,165-i,735,160-i);//x cikis
                line(740,165-i,735,160-i);//x cikis

                line(820+i,265,840+i,265);//y cikis
                line(835+i,260,840+i,265);//y cikis
                line(835+i,270,840+i,265);//y cikis

                delay(400);
                setcolor(0);

                line(615+i,260,620+i,265);//t giris k
                line(615+i,270,620+i,265);//t giris k

                line(730,385-i,735,380-i);//z giris k
                line(740,385-i,735,380-i);//z giris k

                line(730,165-i,735,160-i);//x cikis k
                line(740,165-i,735,160-i);//x cikis k

                line(835+i,260,840+i,265);//y cikis k
                line(835+i,270,840+i,265);//y cikis k
            }
            setcolor(YELLOW);
            line(655,260,660,265);//t giris
            line(655,270,660,265);//t giris
            line(730,345,735,340);//z giris
            line(740,345,735,340);//z giris
            line(730,125,735,120);//x cikis
            line(740,125,735,120);//x cikis
            line(875,260,880,265);//y cikis
            line(875,270,880,265);//y cikis
        }
        //-------------------------------------

        if(giris1=='x' && giris2=='y' || giris2=='x' && giris1=='y')
        {
            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(735,130+i,735,150+i);//x giris
                line(730,145+i,735,150+i);//x giris
                line(740,145+i,735,150+i);//x giris

                line(880-i,265,860-i,265);//y giris
                line(865-i,270,860-i,265);//y giris
                line(865-i,260,860-i,265);//y giris

                line(735,350+i,735,370+i);//z cikis
                line(730,365+i,735,370+i);//z cikis
                line(740,365+i,735,370+i);//z cikis

                line(650-i,265,630-i,265);//t cikis
                line(635-i,260,630-i,265);//t cikis
                line(635-i,270,630-i,265);//t cikis

                delay(400);
                setcolor(0);

                line(730,145+i,735,150+i);//x giris k
                line(740,145+i,735,150+i);//x giris k

                line(865-i,270,860-i,265);//y giris k
                line(865-i,260,860-i,265);//y giris k

                line(730,365+i,735,370+i);//z cikis k
                line(740,365+i,735,370+i);//z cikis k

                line(635-i,260,630-i,265);//t cikis k
                line(635-i,270,630-i,265);//t cikis k
            }
            setcolor(YELLOW);
            line(730,185,735,190);//x giris
            line(740,185,735,190);//x giris
            line(825,270,820,265);//y giris
            line(825,260,820,265);//y giris
            line(730,405,735,410);//z cikis
            line(740,405,735,410);//z cikis
            line(595,260,590,265);//t cikis
            line(595,270,590,265);//t cikis
        }
        //------------------------------

        if(giris1=='x' && giris2=='z' || giris2=='x' && giris1=='z')
        {
            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(735,130+i,735,150+i);//x giris
                line(730,145+i,735,150+i);//x giris
                line(740,145+i,735,150+i);//x giris

                line(735,400-i,735,380-i);//z giris
                line(730,385-i,735,380-i);//z giris
                line(740,385-i,735,380-i);//z giris

                line(820+i,265,840+i,265);//y cikis
                line(835+i,260,840+i,265);//y cikis
                line(835+i,270,840+i,265);//y cikis

                line(650-i,265,630-i,265);//t cikis
                line(635-i,260,630-i,265);//t cikis
                line(635-i,270,630-i,265);//t cikis

                delay(400);
                setcolor(0);

                line(730,145+i,735,150+i);//x giris k
                line(740,145+i,735,150+i);//x giris k

                line(730,385-i,735,380-i);//z giris k
                line(740,385-i,735,380-i);//z giris k

                line(835+i,260,840+i,265);//y cikis k
                line(835+i,270,840+i,265);//y cikis k

                line(635-i,260,630-i,265);//t cikis k
                line(635-i,270,630-i,265);//t cikis k
            }
            setcolor(YELLOW);
            line(730,185,735,190);//x giris
            line(740,185,735,190);//x giris
            line(730,345,735,340);//z giris
            line(740,345,735,340);//z giris
            line(875,260,880,265);//y cikis
            line(875,270,880,265);//y cikis
            line(595,260,590,265);//t cikis
            line(595,270,590,265);//t cikis
        }
        //-------------------------------

        if(giris1=='y' && giris2=='z' || giris2=='y' && giris1=='z')
        {
            for(int i=0;i<60;i=i+20)
            {
                delay(200);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(880-i,265,860-i,265);//y giris
                line(865-i,270,860-i,265);//y giris
                line(865-i,260,860-i,265);//y giris

                line(735,400-i,735,380-i);//z giris
                line(730,385-i,735,380-i);//z giris
                line(740,385-i,735,380-i);//z giris

                line(735,180-i,735,160-i);//x cikis
                line(730,165-i,735,160-i);//x cikis
                line(740,165-i,735,160-i);//x cikis

                line(650-i,265,630-i,265);//t cikis
                line(635-i,260,630-i,265);//t cikis
                line(635-i,270,630-i,265);//t cikis

                delay(400);
                setcolor(0);

                line(865-i,270,860-i,265);//y giris k
                line(865-i,260,860-i,265);//y giris k

                line(730,385-i,735,380-i);//z giris k
                line(740,385-i,735,380-i);//z giris k

                line(730,165-i,735,160-i);//x cikis k
                line(740,165-i,735,160-i);//x cikis k

                line(635-i,260,630-i,265);//t cikis k
                line(635-i,270,630-i,265);//t cikis k
            }
            setcolor(YELLOW);
            line(825,270,820,265);//y giris
            line(825,260,820,265);//y giris
            line(730,345,735,340);//z giris
            line(740,345,735,340);//z giris
            line(730,125,735,120);//x cikis
            line(740,125,735,120);//x cikis
            line(595,260,590,265);//t cikis
            line(595,270,590,265);//t cikis
        }

        /////////////////////////////////////////////////////////////////////////

        puts("a yolu icin yon belirtiniz:");
        puts("Baslangic noktasi:");
        scanf("%c",&basa);
        scanf("%c",&basa);
        puts("Yonu:");
        scanf("%c",&yona);
        scanf("%c",&yona);
        //------------------
        puts("b yolu icin yon belirtiniz:");
        puts("Baslangic noktasi:");
        scanf("%c",&basb);
        scanf("%c",&basb);
        puts("Yonu:");
        scanf("%c",&yonb);
        scanf("%c",&yonb);
        //------------------
        puts("c yolu icin yon belirtiniz:");
        puts("Baslangic noktasi:");
        scanf("%c",&basc);
        scanf("%c",&basc);
        puts("Yonu:");
        scanf("%c",&yonc);
        scanf("%c",&yonc);
        //------------------
        puts("d yolu icin yon belirtiniz:");
        puts("Baslangic noktasi:");
        scanf("%c",&basd);
        scanf("%c",&basd);
        puts("Yonu:");
        scanf("%c",&yond);
        scanf("%c",&yond);
        //-----------------
        puts("e yolu icin yon belirtiniz:");
        puts("Baslangic noktasi:");
        scanf("%c",&base);
        scanf("%c",&base);
        puts("Yonu:");
        scanf("%c",&yone);
        scanf("%c",&yone);

        ////////////////////////////////////////////////////////////////

        if(basa=='t' && yona=='x')
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(720,250,150-i,180-i,35);

            }
            line(720,215,715,210);
            line(720,215,715,220);
        }
            //-----------------------------
        else
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(720,250,90+i,120+i,35);

            }
            line(685,250,680,245);
            line(685,250,690,245);
        }

        //////////////////////////////////////////////////////////////////////////

        if(basb=='x' && yonb=='y')
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(750,250,60-i,90-i,35);
            }
            line(785,250,780,245);
            line(785,250,790,245);
        }
            //-----------------------------
        else
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(750,250,0+i,30+i,35);
            }
            line(750,215,755,210);
            line(750,215,755,220);
        }

        ////////////////////////////////////////////////////////////

        if(basc=='z' && yonc=='t')
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(720,280,240-i,270-i,35);
            }
            line(685,280,680,285);
            line(685,280,690,285);
        }
            //-----------------------------
        else
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(720,280,180+i,210+i,35);
            }
            line(720,315,715,310);
            line(720,315,715,320);
        }

        //////////////////////////////////////////////////////////////

        if(basd=='y' && yond=='z')
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(750,280,330-i,360-i,35);
            }
            line(750,315,755,320);
            line(750,315,755,310);
        }
            //-----------------------------
        else
        {
            for(int i=0;i<60;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                arc(750,280,270+i,300+i,35);
            }
            line(785,280,790,285);
            line(785,280,780,285);
        }

        ////////////////////////////////////////////////////////////

        if(base=='t' && yone=='y')
        {
            for(int i=0;i<40;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(705+i,265,725+i,265);
            }
            line(765,265,760,260);
            line(765,265,760,270);
        }
            //-----------------------------
        else
        {
            for(int i=0;i<40;i++)
            {
                delay(20);
                setlinestyle(2,0,5);
                setcolor(YELLOW);

                line(765-i,265,745-i,265);
            }
            line(705,265,710,260);
            line(705,265,710,270);
        }
    }
    //********************************

    int t,x,y,z,a,b,c,d,e,count;
    printf("t yolu icin deger giriniz:\n");
    scanf("%d",&t);
    if(t==-1)
        count++;        //bilinmeyen say�s�

    printf("x yolu icin deger giriniz:\n");
    scanf("%d",&x);
    if(x==-1)
        count++;

    printf("y yolu icin deger giriniz:\n");
    scanf("%d",&y);
    if(y==-1)
        count++;

    printf("z yolu icin deger giriniz:\n");
    scanf("%d",&z);
    if(z==-1)
        count++;

    printf("a yolu icin deger giriniz:\n");
    scanf("%d",&a);
    if(a==-1)
        count++;

    printf("b yolu icin deger giriniz:\n");
    scanf("%d",&b);
    if(b==-1)
        count++;

    printf("c yolu icin deger giriniz:\n");
    scanf("%d",&c);
    if(c==-1)
        count++;

    printf("d yolu icin deger giriniz:\n");
    scanf("%d",&d);
    if(d==-1)
        count++;

    if(yol==2)
    {
        printf("e yolu icin deger giriniz:\n");
        scanf("%d",&e);
        if(e==-1)
            count++;
    }
    //to do if count>5 ten  hata ver

    if(yol==1)
    {

        int A[9][5];                  //t x y z a b c d ||||  temp
        //brinci d���mdenklemleri
        if(a==-1 || b==-1 || x==-1)
        {
            if(giris1=='x' || giris2=='x')        //x=giris oldu�u durum
            {
                if(basa=='x' && basb=='x')    //a+b-x=0   //a ve b d���mden ��kar
                {
                    int temp;
                    if(a==-1)
                    {
                        A[0][4]=1;
                    }
                    else
                    {
                        temp=temp-a;
                    }
                    if(b==-1)
                    {
                        A[0][5]=1;
                    }
                    else
                    {
                        temp=temp-b;
                    }
                    if(x==-1)
                    {
                        A[0][1]=-1;
                    }
                    else
                    {
                        temp=temp+x;
                    }
                    A[0][8]=temp;

                }
                if(basa=='t' && basb=='y')      //a+b+x=0   a ve b d���me do�ru
                {
                    int temp;
                    if(a==-1)
                    {
                        A[0][4]=1;
                    }
                    else
                    {
                        temp=temp-a;
                    }
                    if(b==-1)
                    {
                        A[0][5]=1;
                    }
                    else
                    {
                        temp=temp-b;
                    }
                    if(x==-1)
                    {
                        A[0][1]=1;
                    }
                    else
                    {
                        temp=temp-x;
                    }
                    A[0][8]=temp;

                }
                if(basa=='t' && basb=='x')    //a-b+x=0   a ve b saat y�n�nde
                {
                    int temp;
                    if(a==-1)
                    {
                        A[0][4]=1;
                    }
                    else
                    {
                        temp=temp-a;
                    }
                    if(b==-1)
                    {
                        A[0][5]=-1;
                    }
                    else
                    {
                        temp=temp+b;
                    }
                    if(x==-1)
                    {
                        A[0][1]=1;
                    }
                    else
                    {
                        temp=temp-x;
                    }
                    A[0][8]=temp;
                }
                if(basa=='x' && basb=='y')     //a-b-x=0  a ve b saat y�n�n�n tersi
                {
                    int temp;
                    if(a==-1)
                    {
                        A[0][4]=1;
                    }
                    else
                    {
                        temp=temp-a;
                    }
                    if(b==-1)
                    {
                        A[0][5]=-1;
                    }
                    else
                    {
                        temp=temp+b;
                    }
                    if(x==-1)
                    {
                        A[0][1]=-1;
                    }
                    else
                    {
                        temp=temp+x;
                    }
                    A[0][8]=temp;
                }
            }
            if(cikis1=='x' || cikis2=='x')
            {
                if(basa=='t' && basb=='y')    //a+b-x=0   //a ve b d���me do�ru
                {
                    int temp;
                    if(a==-1)
                    {
                        A[0][4]=1;
                    }
                    else
                    {
                        temp=temp-a;
                    }
                    if(b==-1)
                    {
                        A[0][5]=1;
                    }
                    else
                    {
                        temp=temp-b;
                    }
                    if(x==-1)
                    {
                        A[0][1]=-1;
                    }
                    else
                    {
                        temp=temp+x;
                    }
                    A[0][8]=temp;
                }
                if(basa=='x' && basb=='x')    //a+b+x=0    a ve b d���mden ��kan
                {
                    int temp;
                    if(a==-1)
                    {
                        A[0][4]=1;
                    }
                    else
                    {
                        temp=temp-a;
                    }
                    if(b==-1)
                    {
                        A[0][5]=1;
                    }
                    else
                    {
                        temp=temp-b;
                    }
                    if(x==-1)
                    {
                        A[0][1]=1;
                    }
                    else
                    {
                        temp=temp-x;
                    }
                    A[0][8]=temp;
                }
                if(basa=='t' && basb=='x')     //a-b-x=0  a ve b saat y�n�
                {
                    int temp;
                    if(a==-1)
                    {
                        A[0][4]=1;
                    }
                    else
                    {
                        temp=temp-a;
                    }
                    if(b==-1)
                    {
                        A[0][5]=-1;
                    }
                    else
                    {
                        temp=temp+b;
                    }
                    if(x==-1)
                    {
                        A[0][1]=-1;
                    }
                    else
                    {
                        temp=temp+x;
                    }
                    A[0][8]=temp;
                }
                if(basa=='x' && basb=='y')     //a-b+x=0   a ve b saat y�n� tersi
                {
                    int temp;
                    if(a==-1)
                    {
                        A[0][4]=1;
                    }
                    else
                    {
                        temp=temp-a;
                    }
                    if(b==-1)
                    {
                        A[0][5]=-1;
                    }
                    else
                    {
                        temp=temp+b;
                    }
                    if(x==-1)
                    {
                        A[0][1]=1;
                    }
                    else
                    {
                        temp=temp-x;
                    }
                    A[0][8]=temp;
                }

            }
        }
        //.........................birinci d���m denklemlerinin sonu

        //ikinci d���m denklemleri
        if(b==-1 ||d==-1 || y==-1)
        {
            if(giris1=='y' || giris2=='y')        //y=giris oldu�u durum
            {
                if(basb=='y' && basd=='y')    //b+d-y=0   //b ve d d���mden ��kar
                {
                    int temp1;
                    if(b==-1)
                    {
                        A[1][5]=1;
                    }
                    else
                    {
                        temp1=temp1-b;
                    }
                    if(d==-1)
                    {
                        A[1][7]=1;
                    }
                    else
                    {
                        temp1=temp1-d;
                    }
                    if(y==-1)
                    {
                        A[1][2]=-1;
                    }
                    else
                    {
                        temp1=temp1+y;
                    }
                    A[1][8]=temp1;

                }
                if(basb=='x' && basd=='z')      //b+d+y=0   b ve d d���me do�ru
                {
                    int temp1;
                    if(b==-1)
                    {
                        A[1][5]=1;
                    }
                    else
                    {
                        temp1=temp1-b;
                    }
                    if(d==-1)
                    {
                        A[1][7]=1;
                    }
                    else
                    {
                        temp1=temp1-d;
                    }
                    if(y==-1)
                    {
                        A[1][2]=1;
                    }
                    else
                    {
                        temp1=temp1-y;
                    }
                    A[1][8]=temp1;

                }
                if(basb=='x' && basd=='y')    //b-d+y=0   b ve d saat y�n�nde
                {
                    int temp1;
                    if(b==-1)
                    {
                        A[1][5]=1;
                    }
                    else
                    {
                        temp1=temp1-b;
                    }
                    if(d==-1)
                    {
                        A[1][7]=-1;
                    }
                    else
                    {
                        temp1=temp1+d;
                    }
                    if(y==-1)
                    {
                        A[1][2]=1;
                    }
                    else
                    {
                        temp1=temp1-y;
                    }
                    A[1][8]=temp1;
                }
                if(basb=='y' && basd=='z')     //b-d-y=0  b ve d saat y�n�n�n tersi
                {
                    int temp1;
                    if(b==-1)
                    {
                        A[1][5]=1;
                    }
                    else
                    {
                        temp1=temp1-b;
                    }
                    if(d==-1)
                    {
                        A[1][7]=-1;
                    }
                    else
                    {
                        temp1=temp1+d;
                    }
                    if(y==-1)
                    {
                        A[1][2]=-1;
                    }
                    else
                    {
                        temp1=temp1+y;
                    }
                    A[1][8]=temp1;
                }
            }
            if(cikis1=='y' || cikis2=='y')
            {
                if(basb=='x' && basd=='z')    //b+d-y=0   //b ve d d���me do�ru
                {
                    int temp1;
                    if(b==-1)
                    {
                        A[1][5]=1;
                    }
                    else
                    {
                        temp1=temp1-b;
                    }
                    if(d==-1)
                    {
                        A[1][7]=1;
                    }
                    else
                    {
                        temp1=temp1-d;
                    }
                    if(y==-1)
                    {
                        A[1][2]=-1;
                    }
                    else
                    {
                        temp1=temp1+y;
                    }
                    A[1][8]=temp1;
                }
                if(basb=='y' && basd=='y')    //b+d+y=0    b ve d d���mden ��kan
                {
                    int temp1;
                    if(b==-1)
                    {
                        A[1][5]=1;
                    }
                    else
                    {
                        temp1=temp1-b;
                    }
                    if(d==-1)
                    {
                        A[1][7]=1;
                    }
                    else
                    {
                        temp1=temp1-d;
                    }
                    if(y==-1)
                    {
                        A[1][2]=1;
                    }
                    else
                    {
                        temp1=temp1-y;
                    }
                    A[1][8]=temp1;
                }
                if(basb=='x' && basd=='y')     //b-d-y=0  b ve d saat y�n�
                {
                    int temp1;
                    if(b==-1)
                    {
                        A[1][5]=1;
                    }
                    else
                    {
                        temp1=temp1-b;
                    }
                    if(d==-1)
                    {
                        A[1][7]=-1;
                    }
                    else
                    {
                        temp1=temp1+d;
                    }
                    if(y==-1)
                    {
                        A[1][2]=-1;
                    }
                    else
                    {
                        temp1=temp1+y;
                    }
                    A[1][8]=temp1;
                }
                if(basb=='y' && basd=='z')     //b-d+y=0   b ve d saat y�n� tersi
                {
                    int temp1;
                    if(b==-1)
                    {
                        A[1][5]=1;
                    }
                    else
                    {
                        temp1=temp1-b;
                    }
                    if(d==-1)
                    {
                        A[1][7]=-1;
                    }
                    else
                    {
                        temp1=temp1+d;
                    }
                    if(y==-1)
                    {
                        A[1][2]=1;
                    }
                    else
                    {
                        temp1=temp1-y;
                    }
                    A[1][8]=temp1;
                }

            }
        }
        //ikinci d���m denklemlerinin sonu

        //�c�nc� d���m denklemleri
        if(d==-1 ||c==-1 || z==-1)
        {
            if(giris1=='z' || giris2=='z')        //z=giris oldu�u durum
            {
                if(basd=='z' && basc=='z')    //d+c-z=0   //d ve c d���mden ��kar
                {
                    int temp2;
                    if(d==-1)
                    {
                        A[2][7]=1;
                    }
                    else
                    {
                        temp2=temp2-d;
                    }
                    if(c==-1)
                    {
                        A[2][6]=1;
                    }
                    else
                    {
                        temp2=temp2-c;
                    }
                    if(z==-1)
                    {
                        A[2][3]=-1;
                    }
                    else
                    {
                        temp2=temp2+z;
                    }
                    A[2][8]=temp2;

                }
                if(basd=='y' && basc=='t')      //d+c+z=0   d ve c d���me do�ru
                {
                    int temp2;
                    if(d==-1)
                    {
                        A[2][7]=1;
                    }
                    else
                    {
                        temp2=temp2-d;
                    }
                    if(c==-1)
                    {
                        A[2][6]=1;
                    }
                    else
                    {
                        temp2=temp2-c;
                    }
                    if(z==-1)
                    {
                        A[2][3]=1;
                    }
                    else
                    {
                        temp2=temp2-z;
                    }
                    A[2][8]=temp2;

                }
                if(basd=='y' && basc=='z')    //d-c+z=0   d ve c saat y�n�nde
                {
                    int temp2;
                    if(d==-1)
                    {
                        A[2][7]=1;
                    }
                    else
                    {
                        temp2=temp2-d;
                    }
                    if(c==-1)
                    {
                        A[2][6]=-1;
                    }
                    else
                    {
                        temp2=temp2+c;
                    }
                    if(z==-1)
                    {
                        A[2][3]=1;
                    }
                    else
                    {
                        temp2=temp2-z;
                    }
                    A[2][8]=temp2;
                }
                if(basd=='z' && basc=='t')     //d-c-z=0  d ve c saat y�n�n�n tersi
                {
                    int temp2;
                    if(d==-1)
                    {
                        A[2][7]=1;
                    }
                    else
                    {
                        temp2=temp2-d;
                    }
                    if(c==-1)
                    {
                        A[2][6]=-1;
                    }
                    else
                    {
                        temp2=temp2+c;
                    }
                    if(z==-1)
                    {
                        A[2][3]=-1;
                    }
                    else
                    {
                        temp2=temp2+z;
                    }
                    A[2][8]=temp2;
                }
            }
            if(cikis1=='z' || cikis2=='z')        //z=cikis oldu�u durum
            {
                if(basd=='y' && basc=='t')    //d+c-z=0   //d ve c d���me do�ru
                {
                    int temp2;
                    if(d==-1)
                    {
                        A[2][7]=1;
                    }
                    else
                    {
                        temp2=temp2-d;
                    }
                    if(c==-1)
                    {
                        A[2][6]=1;
                    }
                    else
                    {
                        temp2=temp2-c;
                    }
                    if(z==-1)
                    {
                        A[2][3]=-1;
                    }
                    else
                    {
                        temp2=temp2+z;
                    }
                    A[2][8]=temp2;
                }
                if(basd=='z' && basc=='z')    //d+c+z=0    d ve c d���mden ��kan
                {
                    int temp2;
                    if(d==-1)
                    {
                        A[2][7]=1;
                    }
                    else
                    {
                        temp2=temp2-d;
                    }
                    if(c==-1)
                    {
                        A[2][6]=1;
                    }
                    else
                    {
                        temp2=temp2-c;
                    }
                    if(z==-1)
                    {
                        A[2][3]=1;
                    }
                    else
                    {
                        temp2=temp2-z;
                    }
                    A[2][8]=temp2;
                }
                if(basd=='y' && basc=='z')     //d-c-z=0  d ve c saat y�n�
                {
                    int temp2;
                    if(d==-1)
                    {
                        A[2][7]=1;
                    }
                    else
                    {
                        temp2=temp2-d;
                    }
                    if(c==-1)
                    {
                        A[2][6]=-1;
                    }
                    else
                    {
                        temp2=temp2+c;
                    }
                    if(z==-1)
                    {
                        A[2][3]=-1;
                    }
                    else
                    {
                        temp2=temp2+z;
                    }
                    A[2][8]=temp2;
                }
                if(basd=='z' && basc=='t')     //d-c+z=0   d ve c saat y�n� tersi
                {
                    int temp2;
                    if(d==-1)
                    {
                        A[2][7]=1;
                    }
                    else
                    {
                        temp2=temp2-d;
                    }
                    if(c==-1)
                    {
                        A[2][6]=-1;
                    }
                    else
                    {
                        temp2=temp2+c;
                    }
                    if(z==-1)
                    {
                        A[2][3]=1;
                    }
                    else
                    {
                        temp2=temp2-z;
                    }
                    A[2][8]=temp2;
                }

            }
        }
        //�c�nc� d���m denklemlerinin sonu

        //d�rd�nc� d���m denklemleri
        if(a==-1 || t==-1 || c==-1)
        {
            if(giris1=='t' || giris2=='t')        //t=giris oldu�u durum
            {
                if(basc=='t' && basa=='t')    //c+a-t=0   //c ve a d���mden ��kar
                {
                    int temp3;
                    if(c==-1)
                    {
                        A[3][6]=1;
                    }
                    else
                    {
                        temp3=temp3-c;
                    }
                    if(a==-1)
                    {
                        A[3][4]=1;
                    }
                    else
                    {
                        temp3=temp3-a;
                    }
                    if(t==-1)
                    {
                        A[3][0]=-1;
                    }
                    else
                    {
                        temp3=temp3+t;
                    }
                    A[3][8]=temp3;

                }
                if(basc=='z' && basa=='x')      //c+a+t=0   c ve a d���me do�ru
                {
                    int temp3;
                    if(c==-1)
                    {
                        A[3][6]=1;
                    }
                    else
                    {
                        temp3=temp3-c;
                    }
                    if(a==-1)
                    {
                        A[3][4]=1;
                    }
                    else
                    {
                        temp3=temp3-a;
                    }
                    if(t==-1)
                    {
                        A[3][0]=1;
                    }
                    else
                    {
                        temp3=temp3-t;
                    }
                    A[3][8]=temp3;

                }
                if(basc=='z' && basa=='t')    //c-a+x=0   c ve a saat y�n�nde
                {
                    int temp3;
                    if(c==-1)
                    {
                        A[3][6]=1;
                    }
                    else
                    {
                        temp3=temp3-c;
                    }
                    if(a==-1)
                    {
                        A[3][4]=-1;
                    }
                    else
                    {
                        temp3=temp3+a;
                    }
                    if(t==-1)
                    {
                        A[3][0]=1;
                    }
                    else
                    {
                        temp3=temp3-t;
                    }
                    A[3][8]=temp3;
                }
                if(basc=='t' && basa=='x')     //c-a-t=0  c ve a saat y�n�n�n tersi
                {
                    int temp3;
                    if(c==-1)
                    {
                        A[3][6]=1;
                    }
                    else
                    {
                        temp3=temp3-c;
                    }
                    if(a==-1)
                    {
                        A[3][4]=-1;
                    }
                    else
                    {
                        temp3=temp3+a;
                    }
                    if(t==-1)
                    {
                        A[3][0]=-1;
                    }
                    else
                    {
                        temp3=temp3+t;
                    }
                    A[3][8]=temp3;
                }
            }
            if(cikis1=='t' || cikis2=='t')
            {
                if(basc=='x' && basa=='z')    //c+a-t=0   //c ve a d���me do�ru
                {
                    int temp3;
                    if(c==-1)
                    {
                        A[3][6]=1;
                    }
                    else
                    {
                        temp3=temp3-c;
                    }
                    if(a==-1)
                    {
                        A[3][4]=1;
                    }
                    else
                    {
                        temp3=temp3-a;
                    }
                    if(t==-1)
                    {
                        A[3][0]=-1;
                    }
                    else
                    {
                        temp3=temp3+t;
                    }
                    A[3][8]=temp3;
                }
                if(basc=='t' && basa=='t')    //c+a+t=0    c ve a d���mden ��kan
                {
                    int temp3;
                    if(c==-1)
                    {
                        A[3][6]=1;
                    }
                    else
                    {
                        temp3=temp3-c;
                    }
                    if(a==-1)
                    {
                        A[3][4]=1;
                    }
                    else
                    {
                        temp3=temp3-a;
                    }
                    if(t==-1)
                    {
                        A[3][0]=1;
                    }
                    else
                    {
                        temp3=temp3-t;
                    }
                    A[3][8]=temp3;
                }
                if(basc=='z' && basa=='t')     //c-a-t=0  c ve a saat y�n�
                {
                    int temp3;
                    if(c==-1)
                    {
                        A[3][6]=1;
                    }
                    else
                    {
                        temp3=temp3-c;
                    }
                    if(a==-1)
                    {
                        A[3][4]=-1;
                    }
                    else
                    {
                        temp3=temp3+a;
                    }
                    if(t==-1)
                    {
                        A[3][0]=-1;
                    }
                    else
                    {
                        temp3=temp3+t;
                    }
                    A[3][8]=temp3;
                }
                if(basc=='t' && basa=='x')     //c-a+t=0   c ve a saat y�n� tersi
                {
                    int temp3;
                    if(c==-1)
                    {
                        A[3][6]=1;
                    }
                    else
                    {
                        temp3=temp3-c;
                    }
                    if(a==-1)
                    {
                        A[3][4]=-1;
                    }
                    else
                    {
                        temp3=temp3+a;
                    }
                    if(t==-1)
                    {
                        A[3][0]=1;
                    }
                    else
                    {
                        temp3=temp3-t;
                    }
                    A[3][8]=temp3;
                }

            }

        }
        //d�rd�nc� d���m denklemlerinin sonu






    }











    return 0;

}