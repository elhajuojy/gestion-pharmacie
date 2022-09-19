#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <math.h>
#include <time.h>
#include<windows.h>
//* structs ***🧑‍🦰🧑‍🦰

typedef struct
{
    int jour;
    int mois;
    int annee;

} date;
// Produit struct
typedef struct
{
    long long int code;
    char nom[20];
    float prix;
    float prix_ttc;
    int quantite;

} Produit;
// acheter struct
typedef struct
{
    int code_achate;
    long long int code_proudit;
    // float *cin_client;
    // Produit produit;
    date date_achate;
    int qt_achate;

} Achat;

typedef struct 
{
    char *cin;
    char *nom;
    char *prenom;
} client;


int main();

//* global varibales 🧾🧾
//! arrays 
Achat ListAchat[1000];
Produit ListProudit[1000];

//! enums and ints  
enum sort {ascending , descending}; 
int lengthListProduit =20;

//random Data

void listProduitdeTest(){
    Produit c1 = {6118000060154 ,"GLUCOR",200,230,20};
    Produit c2 = {6118000241324 ,"REVOCIR",100,115,10};
    Produit c3 = {6118000070573 ,"LISASPIN",140,230,20};
    Produit c4 = {6118000061106 ,"ASPEGIC ENF",200,340,4};
    Produit c5 = {6118000060857 ,"SURGAM",20,25,10};
    Produit c6 = {6118000061243 ,"EXACYL",10,12,50};
    Produit c7 = {6118001141357 ,"ZENTEL",340.34,30,11};
    Produit c8 = {6118000022251 ,"ZYLORIC",30,33,1};
    Produit c9 = {6118001081288 ,"XATRAL",222,250,2};
    Produit c10 ={6118001182657 ,"AMIKLIN",230,280,2};
    Produit c11 ={6118000071136 ,"DIPICOR",123,140,100};
    Produit c12 ={6118000180043 ,"AMODEX",222,234,45};
    Produit c13 ={6118000030102 ,"AXIMYCINE",33,44,7};
    Produit c14 ={6118000161059 ,"CLAMOXYL",44,50,23};
    Produit c15 ={6118000161189 ,"PENAMOX",23,44,4};
    Produit c16 ={6118000160038 ,"AMOXIL",44,66,11};
    Produit c17 ={6118000160359 ,"CLAMOXYL",66,88,99};
    Produit c18 ={6118000160724 ,"PENAMOX",210,230,30};
    Produit c19 ={6118000031161 ,"AXIMYCINE",122,255,37};
    Produit c20 ={6118001200818 ,"FUCITHALMIC",140,160,55};
    
    ListProudit[0] = c1;
    ListProudit[1] = c2;
    ListProudit[2] = c3;
    ListProudit[3] = c4;
    ListProudit[4] = c5;
    ListProudit[5] = c6;
    ListProudit[6] = c7;
    ListProudit[7] = c8;
    ListProudit[8] = c9;
    ListProudit[9] = c10;
    ListProudit[10] = c11;
    ListProudit[11] = c12;
    ListProudit[12] = c13;
    ListProudit[13] = c14;
    ListProudit[14] = c15;
    ListProudit[15] = c16;
    ListProudit[16] = c17;
    ListProudit[17] = c18;
    ListProudit[18] = c19;
    ListProudit[19] = c20;
};
void listAchatDeTest(){


   date d1 = {17,9,2022};
   date d2 = {17,9,2022};
   date d3 = {17,9,2022};
   date d4 = {17,9,2022};
   date d5 = {17,9,2022};
   date d6 = {17,9,2022};

   Achat a1 = {1,6118000061106,d1,5};
   Achat a2 = {2,6118000180043,d2,3};
   Achat a3 = {3,6118000031161,d3,2};
   Achat a4 = {4,6118000061106,d1,4};
   Achat a5 = {5,6118000180043,d1,1};
   Achat a6 = {6,6118000160038,d6,4};
   Achat a7 = {7,6118000060154,d6,2};
   Achat a8 = {8,6118000241324,d5,1};
   Achat a9 ={9,6118001200818,d5,3};

   ListAchat[0]=a1;
   ListAchat[1]=a2;
   ListAchat[2]=a3;
   ListAchat[3]=a4;
   ListAchat[4]=a5;
   ListAchat[5]=a6;
   ListAchat[6]=a7;
   ListAchat[7]=a8;
   ListAchat[8]=a9;
//    ListAchat[9]=a10;
}
//constants 

// ** function  Produits 
void AfficheUnProduit(long long int codePr){
    int found =0;
    int posOfTheProudit=-1;
    for (int i = 0; i < 20 ; i++)
    {
        if (ListProudit[i].code==codePr)
        {
            found = 1;
            posOfTheProudit =i;
            break;
        }
        
        
    }
    if(found==1){

        printf("code :%lld || nom : %s  || prix : %.2f || prix ttc : %.2f || quantite :  %d \n",ListProudit[posOfTheProudit].code,ListProudit[posOfTheProudit].nom,ListProudit[posOfTheProudit].prix,ListProudit[posOfTheProudit].prix_ttc,ListProudit[posOfTheProudit].quantite);
    }
    else{
        printf("the proudct is not exits");
    }
}

void AfficheProduitDansPosition(int posOfTheProudit){
    printf("code :%lld || nom : %s  || prix : %.2f || prix ttc : %.2f || quantite :  %d \n",ListProudit[posOfTheProudit].code,ListProudit[posOfTheProudit].nom,ListProudit[posOfTheProudit].prix,ListProudit[posOfTheProudit].prix_ttc,ListProudit[posOfTheProudit].quantite);
}

long long int RechercheUnProduit(long long int codePr){
    int found =0;
    int posOfTheProudit=-1;
    for (int i = 0; i < 20 ; i++)
    {
        if (ListProudit[i].code==codePr)
        {
            found = 1;
            return posOfTheProudit =i;
            break;
        }
        
        
    }
    return 0;
    
}

void ModiferUnProduit(long long int codePr,int qtn ){
   int posOfThePr=  RechercheUnProduit(codePr);
   ListProudit[posOfThePr].quantite =ListProudit[posOfThePr].quantite+qtn; 
   if (posOfThePr==0)
   {
    printf("Produit is not exit ");
   }else{
        AfficheProduitDansPosition(posOfThePr);
   }
   

}

void AfficheToutLesProduit(){ 
    printf("-------------------------- list des proudit ---------------------------- \n");
    for (int i = 0; i < lengthListProduit; i++)
    {
        printf(" code :%lld || nom : %s  || prix : %.2f || prix ttc : %.2f || quantite :  %d \n",ListProudit[i].code,ListProudit[i].nom,ListProudit[i].prix,ListProudit[i].prix_ttc,ListProudit[i].quantite);
    }
     printf("--------------------------------------------------------\n");
}
//affiche Tout les Poudit As table 
void AfficheToutLesProduitAsTable(){ 
    printf("code \t\t nom \t\t prix \t\t\t quantite\n");
    printf("-------------------------------------------------------------------\n");
    for (int i = 0; i < lengthListProduit; i++)
    {
        // printf(" code :%lld || nom : %s  || prix : %.2f || prix ttc : %.2f || quantite :  %d \n",ListProudit[i].code,ListProudit[i].nom,ListProudit[i].prix,ListProudit[i].prix_ttc,ListProudit[i].quantite);
        printf("%lld \t %s \t %.2f DH \t\t %d \n",ListProudit[i].code,ListProudit[i].nom,ListProudit[i].prix,ListProudit[i].quantite);
        printf("-------------------------------------------------------------------\n");
    }
}

void supprimerUnProduit(long long int codePrSupprimer){
    int posCodePrSupprimer = RechercheUnProduit(codePrSupprimer);
    for (int i = posCodePrSupprimer; i < lengthListProduit; i++)
    {
        ListProudit[i] = ListProudit[i+1];
    }
    printf("======================================\n");
    AfficheToutLesProduit();
}


//account sort  function 
void triProduitParPrix(){
    
        int posmin = 0;
        Produit temp ;
        for (int j = 0; j < lengthListProduit; j++)
            {
                for (int i = 1; i < lengthListProduit; i++)
                {
                    if (ListProudit[i].prix>ListProudit[i-1].prix)
                    {
                        temp = ListProudit[i];
                        ListProudit[i] = ListProudit[i-1];
                        ListProudit[i-1] = temp;
                    }
                }
            }

    
}

void triParOrderAphabetiqueCroissant(){
        char C;
        int counter =0;
        Produit temp;
        for (C = 'A'; C <= 'Z'; ++C)
        {
            
            for (int i = 0; i < 20; i++)
            {
                char cc = C;
                char firstword =ListProudit[i].nom[0];
                if (cc==firstword )
                {
                    temp = ListProudit[i];
                    ListProudit[i] = ListProudit[counter];
                    ListProudit[counter] = temp;
                    counter++; 
                }
                
            
        }
    }
}
//menu 

void minMax(){
    float max_prix = ListProudit[0].prix;
    int max_pos  =0;
    float min_prix = ListProudit[0].prix;
    int min_pos  =0;
    for (int i = 0; i < 20; i++)
    {
        if (min_prix>ListProudit[i].prix)
        {
            min_prix = ListProudit[i].prix;
            min_pos = i;

        }
        
        if (max_prix<ListProudit[i].prix)
        {
            max_prix = ListProudit[i].prix;
            max_pos = i;
        }
    }
    // printf("les pos min %d les pos max %d",min_pos,max_pos);
    printf("max prix est  %s =>%.2f DH \n",ListProudit[max_pos].nom,max_prix);
    printf("min prix est %s =>%.2f DH \n ",ListProudit[min_pos].nom,min_prix);
}

// Etat du stock: permet d’afficher les produits dont la quantité est inférieure à 3. 
void etatStock(int infarieureA){
    for (int i = 0; i < 20; i++)
    {
        if(ListProudit[i].quantite<infarieureA){
            AfficheProduitDansPosition(i);
        }
    }
    
}


void AjouterProduit(int NbrProduit){
    Produit pr ; 
    int c = 0;
    printf("***********Ajouter Produit**************\n");
    for (int i = 0; i < NbrProduit; i++)
    {
        printf("veuillez entrer le code du produit : ");
        scanf("%lld",&pr.code );
        printf("veuillez entrer le nom du produit : ");
        scanf("%s",&pr.nom );
        printf("veuillez entrer le prix du produit : ");
        scanf("%f",&pr.prix );
        // printf("veuillez entrer le prix ttc du produit : ");
        pr.prix_ttc = pr.prix +pr.prix*15/100;
        // scanf("%f",&pr.prix_ttc );
        printf("veuillez entrer le quantite du produit : ");
        scanf("%d",&pr.quantite );
        printf("bien Ajouter \n");
        printf("\n");
        ListProudit[lengthListProduit] = pr;
        lengthListProduit ++;

    }
    AfficheProduitDansPosition(lengthListProduit);
    while (c != 10)
    {
        printf("🔃🔃");
        c++;
        Sleep(500);
    }
    AfficheToutLesProduitAsTable();
    printf("\n");
    Sleep(20000);
    system("cls");
    // main();

}

void menu(){

}



//******  main function 🎁🎁
int main(){
    //start the projet 

    
    


    // AfficheUnProduit(6118000060857);
    // ModiferUnProduit(6118000060857,100);
    // supprimerUnProduit(6118000060857);
    // printf("before \n");
    // AfficheToutLesProduit();
    // printf("after \n");
    // AfficheToutLesProduit();
    // AfficheToutLesProduitAsTable();
    // triParOrderAphabetiqueCroissant();
    // triProduitParPrix();
    // AfficheToutLesProduitAsTable();
    // minMax();
    // etatStock(3);
    // AjouterProduit(1);

    // AjouterProduit(1);
    
    int nbr ;
    printf("\t\t\t1-Ajouter un nouveau produit.\n\n");
    // Sleep(200);
    printf("\t\t\t2-Ajouter plusieurs nouveaux produits.\n\n");
    // Sleep(200);
    printf("\t\t\t3-Lister tous les produits.\n\n");
    // Sleep(200);
    printf("\t\t\t4-Acheter produits.\n\n");
    // Sleep(200);
    printf("\t\t\t5-Recherche les produits.\n\n");
    // Sleep(200);
    printf("\t\t\t6-Etat du stock.\n\n");
    // Sleep(200);
    printf("\t\t\t7-Alimenter le stock.\n\n");
    // Sleep(200);
    printf("\t\t\t8-Supprimer les produits par code.\n\n");
    // Sleep(200);
    printf("\t\t\t9-Stasitique de vente.\n\n");
    // Sleep(200);
    printf("\t\t\t10-Exit.\n\n");
    // Sleep(200);
    printf("\t\t\tchoisi une service: ");
    // Sleep(200);
    scanf(" %d",&nbr);
    system("cls");
    
    switch (nbr)
    {
    case 1:
            AjouterProduit(1);
            main();

        break;
    case 2:
            printf("Entre les number de produit ");
            int nbrPr ;
            scanf("%d",&nbrPr);
            AjouterProduit(nbr);
           
            break;
    case 3:
            // AfficheToutLesProduit();
            // AfficheToutLesProduitAsTable();
            printf("\t\t 1-lister tous les produits selon lordre alphabétique  croissant du nom \n");
            printf("\t\t 2-lister tous les produits selon lordre  décroissant du prix. \n");
            printf("\t\t 3-retour au menu \n");

            int choixlister ;
            printf("\t\t");
            scanf("%d",&choixlister);
            if (choixlister==1)
            {
                listProduitdeTest();
                triParOrderAphabetiqueCroissant();
                AfficheToutLesProduitAsTable();
                
            }
            else if (choixlister==1)
            {
                triProduitParPrix();
                listProduitdeTest();
                AfficheToutLesProduitAsTable();
            }
            else{
                system("cls");
                main();
                
            }
            
            
            break;

    case 4:
            break;
    case 5:
            printf("Recherche les produits donner les number svp : ");
            long long  int codePr ;
            scanf("%lld",&codePr);
            // RechercheUnProduit(codePr);
            AfficheUnProduit(codePr);
            break;
    case 6:
            etatStock(3);
            break;
    case 7:
        //    ModiferUnProduit();
            break;
    case 8:
        //    supprimerUnProduit();
            break;
    case 9:
        //    9-Stasitique de vente
            break;
    case 10: 
            exit(0);
            break;
    default:
    printf("entrer correct choix.");
        break;

    }
}


void backTomenu(){
    char re;
    printf("return y/n");
    scanf("%d",&re);
    if (re=='y')
    {
        system("cls");
        main();
    }
    
}