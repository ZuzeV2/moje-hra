#include <iostream>
using namespace std;

void utok(int &utocnik,int &cil){
int poskozeni = rand();
//cout << jmeno << "zpusobil" << poskozeni << "poskozeni"<< endl;
//cout << enemyname << "má teï" << nepritelzivoty << endl;}
}
//void udersvetlem
//void oziveni
//void vceliul
//void smriticisip
//void past
//void krvavyritual
//void kletba
//void ohnivakoule
//void magickabariera
//tree = random sance na appearance = 50% nic 40% jablko -> jablko healuje, 10% vceli -> ul utoci a ubere zivoty
//vesnice = dokoupit itemy :3
//inventar 5 mist


int main(){
    string jmeno, enemyname, enemyname2, enemyname3, decision2 = "Ne", specialmove1, specialmove2; //takhle psat utoky je trosku dlouhe ale neco figuretnu out :"3
    float maxzivoty, zivoty, maxenergie, energie, penize, utok, nepritelzivoty;
    int level, decision1, prachy;
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
    cout << "Magicka bariera – Na 1 kolo zcela pohlti prvni utok, ktery by zasahl Maga (stoji 2 many)" << endl;

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
//Min. poèet monster: 16
//Min. poèet mini-bossù: 2
//Min. poèet hlavních bossù: 1
//Min. poèet vesnic: 2

//Min. jedenkrát musí hráè bojovat proti: 1 monstru v jednom setkání.
//Min. jedenkrát musí hráè bojovat proti: 2 monstrùm v jednom setkání.
//Min. jedenkrát musí hráè bojovat proti: 3 monstrùm v jednom setkání.
 }while (!(decision2 == "Ano"));
}
