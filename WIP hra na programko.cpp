#include <iostream>
#include <ctime>
#include <string>
using namespace std;
//nahodne cislo generator
void Randomizer(){
srand(time(0));
}
//kolik enemies
int generovaniEnemies(){
    int sance = rand()% 3 + 1;
}

void vesniceGenerovani(float &zivotyx, float mxzivotyx,string invntar[5], float &penizze){
    int volba, volba2
    do{
    do{
    cout << "Vitej ve vesnici! \n";
    cout << "1 - Doplnit zivoty (zdarma) \n";
    cout << "2 - Jit do obchodu \n";
    cout << "3 - Odejit \n";
    cin >> volba;
    }while(!(volba == 1 || volba == 2 || volba == 3));

    switch(volba){
case 1 :
    zivotyx = mxzivotyx;
    cout << "Vsechny zivoty byli obnoveny \n";
    break;
case 2:
    do{
        cout << "1 - Susenka: +? HP \n";
        cout << "2 - Revive: ozivi te kdybys zemrel \n";
        cout << "3 - Alkohol: +? many \n";
        cout << "4 - Magicky potion: +? HP a +? many \n";
        cout << "5 - Nic: nic to nedela, tohle nekupuj pls \n";
        cin >> volba2;
    }while(!(volba >= 1 && volba 2 <= 5));
    switch(volba2){
    case: 1
        //doplnim jsem lazy
        }

    }
}
}

bool GameOver(int &zzivoty, string Inventar[5],int mxxziovty){
     for (int i = 0; i < 5; i++){
        if(Inventar[i] == "Revive"){
            cout << "Jste oziveny";
            zzivoty = mxxziovty;
            return false;
        }
        else{
            cout << "Sorry, nemas zadny revives";
            return true;
        }
     }
}
//jestli strom se objevi
bool StromAppearance(){
int sance = rand() % 100 + 1;
return sance < 20;
}
//co spadne ze stromu
void stromFall(int &zzivoty,string Inventar[5]){
int sance = rand() % 100 + 1;

if(sance < 70){
    cout << "Nic nespadlo ze stromu sorry broski. \n";
}
else if(sance < 90){
    cout << "Spadlo jablko yipee!!\n";
    bool pridano = false;
    for (int i = 0; i < 5; i++){
        if(Inventar[i].empty()){
            Inventar[i] = "Jablko";
            cout << "Jablko pridano na pozici: " << i + 1 << ".\n";
            pridano = true;
            break;
        }
    }
    if(!pridano){
        cout << "Inventar je plny!! :/.\n";
    }
}
else{
    cout << "Spadl vceli ul, -2 zivoty rip..\n";
    zzivoty -= 2;
    if(zzivoty < 0){
        zzivoty = 0;
    }
}

}
//gen level

void generujLevel(int Level, float &Zivoty, string Inventar[5], float mxzivoty){
    cout << "Level: " << Level << "\n";

    //game over
    if(Zivoty <= 0){
        Zivoty = 0;
        GameOver(Zivoty, Inventar, mxziovty);
        if (GameOver){
            cout << "Sorry prohral jsi";
        }

    }

    //vesnice
    if(Level == 3 || Level == 6 || Level == 11 || Level == 13 || Level == 15 || Level == 19){
       vesniceGenerovani();

    }

    //gen stromu
    if(StromAppearance()){
        cout << "Nasel si strom! Mozna neco z neho dostanes.. \n";
        string decision22;
        cout << "Chces k nemu pristoupit? (a/n): ";
        cin >> decision22;
        if (decision22 == "a" || decision22 == "A"){
            cout << "Pristupujes ke stromu..\n";
            stromFall(Zivoty, Inventar);
        }
        else{
            cout << "Asi nemas rad stromy..\n";
        }
    }
    else{}
}
// crappy utok wip
void utok(int &utocnik,int &cil){
float poskozeni = rand();
//cout << jmeno << "zpusobil" << poskozeni << "poskozeni"<< endl;
//cout << enemyname << "m� te�" << nepritelzivoty << endl;}
}
//void udersvetlem
//oziveni
void oziveni(float &zivoty, int mxzivoty, int &mana){
    if(mana < 1){
        cout << "Nemas dostatek many";
    }
    else if (zivoty < mxzivoty){
            zivoty =+ 1;
            mana =- 1;
        cout << "Pridal sis jeden zivot yipee!";}
    else{
        cout << "Mas plne zivoty broski";
    }
    }
//void smriticisip
//void past
//void krvavyritual
//void kletba
//void ohnivakoule
//void magickabariera
//vesnice = dokoupit itemy :3


int main(){
    Randomizer();
    string jmeno, enemyname, enemyname2, enemyname3, decision2 = "Ne", specialmove1, specialmove2; //takhle psat utoky je trosku dlouhe ale neco figuretnu out :"3
    float maxzivoty, zivoty, maxenergie, energie, penize, utok, nepritelzivoty;
    int decision1, prachy;
    float placeholderproutok;
    float klasyy[4][3]={
    {5, 3, 5}, //paladin
    {4, 4, 4}, //lovec
    {5, 3, 5}, //warlock
    {3, 2, 6} //mag
    };
    string inventar[5] = {};

    //hrac = {} mozna zbytecne lol

    cout << "Jak se chcete jmenovat?: ";
    cin >> jmeno;
do{
    cout << "Jakou klasu chcete? (1 - Paladin,2 - Lovec,3 - Warlock,4 - Mag): ";
    cin >> decision1;

    switch (decision1){
case 1:
    cout << "Zivoty: 5/5" << endl;
    cout << "Utok: 3" << endl;
    cout << "Mana: 5/5" << endl;
    cout << "Utok - Uder za 3 poskozeni" << endl;
    cout << "Uder svetlem - 1 poskozeni vsem nepratelum (stoji 2 many)" << endl;
    cout << "Oziveni - Hrac si prida 1 zivot (nesmi prekrocit jeho maximalni zivot)(stoji 1 manu)" << endl;
    cout << "Chcete si vybrat Paladina?";
    cin >> decision2;
    if(decision2 == "Ano"){
    maxzivoty = klasyy[0][0];
    utok = klasyy[0][1];
    energie = klasyy[0][2];
    //specialmove1 = udersvetlem;
    //specialmove2 = oziveni;
    cout << "Vybrali jste si Paladina.";
    }
    else {}
    break;
case 2:
    cout << "Zivoty: 4/4" << endl;
    cout << "Utok: 4" << endl;
    cout << "Mana: 4/4" << endl;
    cout << "Utok - Uder za 4 poskozeni" << endl;
    cout << "Smrtici sip - Zasahne jednoho nepritele za 5 poskozeni (stoji 2 many)" << endl;
    cout << "Past - Snizi utok vsech nepratel o 1 na jedno kolo (stoji 1 manu)" << endl;

    cout << "Chcete si vybrat Lovce?";
    cin >> decision2;
    if(decision2 == "Ano"){
    maxzivoty = klasyy[1][0];
    utok = klasyy[1][1];
    energie = klasyy[1][2];
    //specialmove1 = smrticisip;
    //specialmove2 = past;
     cout << "Vybrali jste si Lovce.";
     }
    else {}
    break;
case 3:
    cout << "Zivoty: 5/5" << endl;
    cout << "Utok: 3" << endl;
    cout << "Mana: 5/5" << endl;
    cout << "Utok - Temny zasah za 3 poskozeni" << endl;
    cout << "Krvavy ritual - Obetuje 1 zivot a doplni si 2 many" << endl;
    cout << "Kletba - Udeli nepriteli 4 poskozeni behem dvou kol (stoji 2 many)" << endl;

    cout << "Chcete si vybrat Warlocka?";
    cin >> decision2;
    if(decision2 == "Ano"){
    maxzivoty = klasyy[2][0];
    utok = klasyy[2][1];
    energie = klasyy[2][2];
    //specialmove1 = krvavyritual;
    //specialmove2 = kletba;
    cout << "Vybrali jste si Warlocka.";}
    else {}
    break;
case 4:
    cout << "Zivoty: 3/3" << endl;
    cout << "Utok: 2" << endl;
    cout << "Mana: 6/6" << endl;
    cout << "Utok - Magicksy projektil za 2 poskozeni" << endl;
    cout << "Ohniva koule - Zasahne jednoho nepritele za 6 poskozeni (stoji 3 many)" << endl;
    cout << "Magicka bariera � Na 1 kolo zcela pohlti prvni utok, ktery by zasahl Maga (stoji 2 many)" << endl;

    cout << "Chcete si vybrat Maga?";
    cin >> decision2;
    if(decision2 == "Ano"){
    maxzivoty = klasyy[3][0];
    utok = klasyy[3][1];
    energie = klasyy[3][2];
    //specialmove1 = ohnivakoule;
    //specialmove2 = magickabariera;
     cout << "Vybrali jste si Maga.";}
    else{}
    break;
default:
    cout << "spatne cislo bro";
    break;}
//Min. po�et monster: 16
//Min. po�et mini-boss�: 2
//Min. po�et hlavn�ch boss�: 1
//Min. po�et vesnic: 2

//Min. jedenkr�t mus� hr�� bojovat proti: 1 monstru v jednom setk�n�.
//Min. jedenkr�t mus� hr�� bojovat proti: 2 monstr�m v jednom setk�n�.
//Min. jedenkr�t mus� hr�� bojovat proti: 3 monstr�m v jednom setk�n�.
 }while (!(decision2 == "Ano"));

for(int level = 1; level <= 15; level++){

    generujLevel(level, zivoty, inventar, maxzivoty);

    cout << "\n";
}
}
