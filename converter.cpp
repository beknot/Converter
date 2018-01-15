#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int ch1,ch2;
float a;
char c1='y',c2='y';
cout<<"*************\n";
cout<<"* CONVERTER *\n";
cout<<"*************\n";
while(c1=='y')
{
    cout<<"\nSelect the conversion\n";
    cout<<"\n1->WEIGHT 2->LENGTH 3->CURRENCY 4->TIME AND DAYS\n";
    cin>>ch1;
    c2='y';
    switch(ch1)
    {
    case 1:
        while(c2=='y')
        {
        cout<<"\nSelect the unit for conversion";
        cout<<"\n1->KG 2->GM 3->POUNDS 4->OUNCES 5->TONS 6->METRIC TONS\n";
        cin>>ch2;
        switch(ch2)
        {
        case 1:
        cout<<"Enter unit in (kg): ";
        cin>>a;
        cout<<endl<<a<<" kg :\n    "<<a<<" kg\n    "<<a*1000<<" gm\n    "<<a*2.2046<<" pounds\n    ";
        cout<<a*35.27396<<" ounces\n    "<<a*0.0011<<" tons\n    "<<a*0.001<<" metric tons\n";
        break;
        case 2:
        cout<<"Enter unit in (gm): ";
        cin>>a;
        cout<<endl<<a<<" gm :\n    "<<a/1000<<" kg\n    "<<a<<" gm\n    ";
        cout<<a*0.0022<<" pounds\n    "<<a*0.03527<<" ounces\n    ";
        cout<<a*0.000001<<" tons\n    "<<a*0.000001<<" metric tons\n";
        break;
        case 3:
        cout<<"Enter unit in (pounds): ";
        cin>>a;
        cout<<endl<<a<<" pounds :\n    "<<float(a)*0.4536<<" kg\n    "<<float(a)*453.597<<" gm\n    ";
        cout<<a<<" pounds\n    "<<float(a)*16<<" ounces\n    ";
        cout<<float(a)*0.0005<<" tons\n    "<<float(a)*0.00045<<" metric tons\n";
        break;
        case 4:
        cout<<"Enter unit in (ounces): ";
        cin>>a;
        cout<<endl<<a<<" ounces :\n    "<<float(a)*0.02835<<" kg\n    "<<float(a)*28.3495<<" gm\n    ";
        cout<<float(a)*0.0625<<" pounds\n    ";
        cout<<a<<" ounces\n    "<<float(a)*0.00028<<" tons\n    "<<float(a)*0.00031<<" metric tons\n";
        break;
        case 5:
        cout<<"Enter unit in (tons): ";
        cin>>a;
        cout<<endl<<a<<" tons :\n    "<<float(a)*907.18474<<" kg\n    "<<float(a)*907184.74<<" gm\n    ";
        cout<<a*2000<<" pounds\n    "<<a*32000<<" ounces\n    ";
        cout<<a<<" tons\n    "<<float(a)*0.90718<<" metric tons\n";
        break;
        case 6:
        cout<<"Enter unit in (metric ton): ";
        cin>>a;
        cout<<endl<<a<<" metric ton :\n    "<<a*1000<<" kg\n    "<<a*1000000<<" gm\n    ";
        cout<<float(a)*2204.6<<" pounds\n    ";
        cout<<float(a)*35274<<" ounces\n    "<<float(a)*1.10231<<" tons\n    "<<a<<" metric tons\n";
        break;
        default:
        cout<<"\a\nWrong choice\n";
        break;
        }
        cout<<"\a\nDo you want to convert for same unit or different [y/n] ";
        cin>>c2;
        }
    break;
    case 2:
        while(c2=='y')
        {
        cout<<"\nSelect the unit for conversion";
        cout<<"\n1->KM 2->M 3->CM 4->MM 5->INCHES 6->FEET 7->YARDS 8->MILES\n";
        cin>>ch2;
        switch(ch2)
        {
        case 1:
        cout<<"Enter unit in (km): ";
        cin>>a;
        cout<<endl<<a<<" km:\n    "<<a<<" km\n    "<<a*1000<<" m\n    "<<a*100000<<" cm\n    ";
        cout<<a*1000000<<" mm\n    "<<a*39370.1<<" inches\n    "<<a*3280.84<<" feet\n    ";
        cout<<a*1093.61<<" yards\n    "<<a*0.62137<<" miles\n";
        break;
        case 2:
        cout<<"Enter unit in (m): ";
        cin>>a;
        cout<<endl<<a<<" m:\n    "<<a/1000<<" km\n    "<<a<<" m\n    "<<a*100<<" cm\n    ";
        cout<<a*1000<<" mm\n    "<<a*39.37<<" inches\n    "<<a*3.281<<" feet\n    ";
        cout<<a*1.094<<" yards\n    "<<a*0.0006<<" miles\n";
        break;
        case 3:
        cout<<"Enter unit in (cm): ";
        cin>>a;
        cout<<endl<<a<<" cm:\n    "<<a/100000<<" km\n    "<<a/100<<" m\n    "<<a<<" cm\n    ";
        cout<<a*10<<" mm\n    "<<a*0.3937<<" inches\n    "<<a*0.03281<<" feet\n    ";
        cout<<a*0.0109<<" yards\n    "<<a*0.000006<<" miles\n";
        break;
        case 4:
        cout<<"Enter unit in (mm): ";
        cin>>a;
        cout<<endl<<a<<" mm:\n    "<<a/1000000<<" km\n    "<<a/1000<<" m\n    "<<a/10<<" cm\n    ";
        cout<<a<<" mm\n    "<<a*0.03937<<" inches\n    "<<a*0.003281<<" feet\n    ";
        cout<<a*0.00109<<" yards\n    "<<a*0.0000006<<" miles\n";
        break;
        case 5:
        cout<<"Enter unit in (inches): ";
        cin>>a;
        cout<<endl<<a<<" inches:\n    "<<a*0.00003<<" km\n    "<<a*0.0254<<" m\n    ";
        cout<<a*2.54<<" cm\n    "<<a*25.4<<" mm\n    "<<a<<" inches\n    ";
        cout<<a*0.08333<<" feet\n    "<<a*0.02778<<" yards\n    "<<a*0.00002<<" miles\n";
        break;
        case 6:
        cout<<"Enter unit in (feet): ";
        cin>>a;
        cout<<endl<<a<<" feet:\n    "<<a*0.0003<<" km\n    "<<a*0.3048<<" m\n    ";
        cout<<a*30.48<<" cm\n    "<<a*304.8<<" mm\n    "<<a*12<<" inches\n    ";
        cout<<a<<" feet\n    "<<a*0.33333<<" yards\n    "<<a*0.00019<<" miles\n";
        break;
        case 7:
        cout<<"Enter unit in (yards): ";
        cin>>a;
        cout<<endl<<a<<" yards:\n    "<<a*0.00091<<" km\n    "<<a*0.9144<<" m\n    ";
        cout<<a*91.44<<" cm\n    "<<a*914.4<<" mm\n    "<<a*36<<" inches\n    ";
        cout<<a*3<<" feet\n    "<<a<<" yards\n    "<<a*0.00057<<" miles\n";
        break;
        case 8:
        cout<<"Enter unit in (miles): ";
        cin>>a;
        cout<<endl<<a<<" miles:\n    "<<a*1.60934<<" km\n    "<<a*1609.34<<" m\n    ";
        cout<<a*160934<<" cm\n    "<<a*1609344<<" mm\n    "<<a*63360<<" inches\n    ";
        cout<<a*5280<<" feet\n    "<<a*1760<<" yards\n    "<<a<<" miles\n";
        break;
        default:
        cout<<"\a\nWrong choice\n";
        break;
        }
        cout<<"\a\nDo you want to convert for same unit or different [y/n] ";
        cin>>c2;
        }
    break;
    case 3:
        while(c2=='y')
        {
        cout<<"\nSelect the unit for conversion";
        cout<<"\n1->NRS 2->RS 3->$ 4->POUNDS 5->EUROS 6->YEN\n";
        cin>>ch2;
        switch(ch2)
        {
        case 1:
        cout<<"Enter unit in (NRs): ";
        cin>>a;
        cout<<"\nNRs "<<a<<":\n    NRs "<<a<<"\n    RS "<<a*0.63<<"\n    $ "<<a*0.0096;
        cout<<"\n    "<<char(156)<<a*0.007<<"\n    "<<char(128)<<a*0.008<<"\n    "<<char(190)<<a*1.077;
        break;
        case 2:
        cout<<a;
        cout<<"\nRS "<<a<<":\n    NRs "<<a*1.60<<"\n    RS "<<a<<"\n    $ "<<a*0.015;
        cout<<"\n    "<<char(156)<<a*0.012<<"\n    "<<char(128)<<a*0.013<<"\n    "<<char(190)<<a*1.72;
        break;
        case 3:
        cout<<"Enter unit in ($): ";
        cin>>a;
        cout<<"\n$ "<<a<<":\n    NRs "<<a*104.60<<"\n    RS "<<a*65.42<<"\n    $ "<<a;
        cout<<"\n    "<<char(156)<<a*0.76<<"\n    "<<char(128)<<a*0.85<<"\n    "<<char(190)<<a*112.67;
        break;
        case 4:
        cout<<"Enter unit in (pounds): ";
        cin>>a;
        cout<<"\n"<<char(156)<<" "<<a<<":\n    NRs "<<a*137.55<<"\n    RS "<<a*86.02<<"\n    $ "<<a*1.31;
        cout<<"\n    "<<char(156)<<a<<"\n    "<<char(128)<<a*1.12<<"\n    "<<char(190)<<a*148.14;
        break;
        case 5:
        cout<<"Enter unit in (euro): ";
        cin>>a;
        cout<<"\n"<<char(128)<<" "<<a<<":\n    NRs "<<a*122.94<<"\n    RS "<<a*76.89<<"\n    $ "<<a*1.18;
        cout<<"\n    "<<char(156)<<a*0.89<<"\n    "<<char(128)<<a<<"\n    "<<char(190)<<a*132.41;
        break;
        case 6:
        cout<<"Enter unit in (yen): ";
        cin>>a;
        cout<<"\n"<<char(190)<<" "<<a<<":\n    NRs "<<a*0.93<<"\n    RS "<<a*0.58<<"\n    $ "<<a*0.009;
        cout<<"\n    "<<char(156)<<a*0.0067<<"\n    "<<char(128)<<a*0.0076<<"\n    "<<char(190)<<a;
        break;
        default:
        cout<<"\a\nWrong choice\n";
        break;
        }
        cout<<"\a\nDo you want to convert for same unit or different [y/n] ";
        cin>>c2;
        }
    break;
    case 4:
        while(c2=='y')
        {
        cout<<"\nSelect the unit for conversion";
        cout<<"\n1->MIllISECONDS 2->SECONDS 3->MINUTES 4->HOURS 5->DAYS 6->WEEKS 7->MONTHS 8->YEARS \n";
        cin>>ch2;
        switch(ch2)
        {
        case 1:
        cout<<"Enter unit in (ms): ";
        cin>>a;
        cout<<endl<<a<<" ms:\n"<<a<<" ms\n    "<<a/100<<" sec\n    "<<a/6000<<" min\n    ";
        cout<<a/360000<<" hrs\n    "<<a/8640000<<" days\n    "<<a/60480000<<" weeks\n    ";
        cout<<a/10800000<<" months\n    "<<a/129600000<<" years\n";
        break;
        case 2:
        cout<<"Enter unit in (sec): ";
        cin>>a;
        cout<<endl<<a<<" sec:\n"<<a*100<<" ms\n    "<<a<<" sec\n    "<<a/60<<" min\n    ";
        cout<<a/3600<<" hrs\n    "<<a/86400<<" days\n    "<<a/6048000<<" weeks\n    ";
        cout<<a/108000<<" months\n    "<<a/1296000<<" years\n";
        break;
        case 3:
        cout<<"Enter unit in (min): ";
        cin>>a;
        cout<<endl<<a<<" min:\n"<<a*6000<<" ms\n    "<<a*60<<" sec\n    "<<a<<" min\n    ";
        cout<<a/60<<" hrs\n    "<<a/1440<<" days\n    "<<a/10080<<" weeks\n    ";
        cout<<a/43200<<" months\n    "<<a/518400<<" years\n";
        break;
        case 4:
        cout<<"Enter unit in (hrs): ";
        cin>>a;
        cout<<endl<<a<<" hrs:\n"<<a*360000<<" ms\n    "<<a*3600<<" sec\n    "<<a*60<<" min\n    ";
        cout<<a<<" hrs\n    "<<a/24<<" days\n    "<<a/168<<" weeks\n    ";
        cout<<a/720<<" months\n    "<<a/8640<<" years\n";
        break;
        case 5:
        cout<<"Enter unit in (days): ";
        cin>>a;
        cout<<endl<<a<<" days:\n"<<a*840000<<" ms\n    "<<a*86400<<" sec\n    "<<a*1440<<" min\n    ";
        cout<<a*24<<" hrs\n    "<<a<<" days\n    "<<a/7<<" weeks\n    ";
        cout<<a/30<<" months\n    "<<a/365<<" years\n";
        break;
        case 6:
        cout<<"Enter unit in (weeks): ";
        cin>>a;
        cout<<endl<<a<<" weeks:\n"<<a*60480000<<" ms\n    "<<a*6048000<<" sec\n    "<<a*100800<<" min\n    ";
        cout<<a*168<<" hrs\n    "<<a*7<<" days\n    "<<a<<" weeks\n    ";
        cout<<a/4<<" months\n    "<<a/51<<" years\n";
        break;
        case 7:
        cout<<"Enter unit in (months): ";
        cin>>a;
        cout<<endl<<a<<" months:\n"<<a*259200000<<" ms\n    "<<a*2592000<<" sec\n    "<<a*43200<<" min\n    ";
        cout<<a*720<<" hrs\n    "<<a*30<<" days\n    "<<a*4<<" weeks\n    ";
        cout<<a<<" months\n    "<<a/12<<" years\n";
        break;
        case 8:
        cout<<"Enter unit in (years): ";
        cin>>a;
        cout<<endl<<a<<" year:\n"<<a*3110400000<<" ms\n    "<<a*31104000<<" sec\n    "<<a*518400<<" min\n    ";
        cout<<a*8640<<" hrs\n    "<<a*365<<" days\n    "<<a*51<<" weeks\n    ";
        cout<<a<<" months\n    "<<a<<" years\n";
        break;
        default:
        cout<<"\a\nWrong choice\n";
        break;
        }
        cout<<"\a\nDo you want to convert for same unit or different [y/n] ";
        cin>>c2;
        }
    break;
    default:
    cout<<"\a\nWrong choice\n";
    break;
    }
    cout<<"\a\nDo you want to run conversion again [y/n] ";
    cin>>c1;
}
getch();
return 0;
}
