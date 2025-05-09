#include <iostream>
using namespace std;

void utok(int &utocnik,int &cil){
int poskozeni = rand();
//cout << jmeno << "zpusobil" << poskozeni << "poskozeni"<< endl;
//cout << enemyname << "má teï" << nepritelzivoty << endl;}
}

int main(){
    string jmeno, paladin, lovec, mag, warlock, enemyname, enemyname2, enemyname3, decision2 = "Ne", klasa, udersvetlem, oziveni, jablko, vceliul, smrticisip, past, krvavyritual, kletba, ohnivakoule, magickabariera, specialmove1, specialmove2; //takhle psat utoky je trosku dlouhe ale neco figuretnu out :"3
    float maxzivoty, zivoty, maxenergie, energie, penize, utok, nepritelzivoty;
    int level, decision1;
    float placeholderproutok;
    float klasyy[4][3]={
    {5, 3, 5}, //paladin
    {4, 4, 4}, //lovec
    {5, 3, 5}, //warlock
    {3, 2, 6} //mag
    };

    //hrac = {}

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
    klasa == paladin;
    maxzivoty = klasyy[0][0];
    utok = klasyy[0][1];
    energie = klasyy[0][2];
    specialmove1 = udersvetlem;
    specialmove2 = oziveni;
    } //nejspise vymazu paladin, warlock, mag a lovec ale uvidim :p
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
    klasa == lovec;
    maxzivoty = klasyy[1][0];
    utok = klasyy[1][1];
    energie = klasyy[1][2];
    specialmove1 = smrticisip;
    specialmove2 = past;}
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
    klasa == warlock;
    maxzivoty = klasyy[2][0];
    utok = klasyy[2][1];
    energie = klasyy[2][2];
    specialmove1 = krvavyritual;
    specialmove2 = kletba;}
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
    klasa == mag;
    maxzivoty = klasyy[3][0];
    utok = klasyy[3][1];
    energie = klasyy[3][2];
    specialmove1 = ohnivakoule;
    specialmove2 = magickabariera;}
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
