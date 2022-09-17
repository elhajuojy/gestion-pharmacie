# Projet Fin SAS Gestion de Pharmacie 📁

l’application de gestion de pharmacie  est une application console. Qui a pour but de gérer les produits pharmaceutiques (ajouter, rechercher, supprimer et afficher un produit …)

## base de données

|     Produit            |        acheter                  |     Client Text         |
|     :---               |           :----:                |              ---:       |
|     code               |        code_achate              |     cin                 |
|     nom                |        code_proudit             |     nom                 |
|     prix               |        code_client              |     prenom              |
|     prix_ttc           |        date_achate              |                         |
|     quantite           |        qt_achate                |                         |

## Liste de tâches

- [x] Ajouter Proudit

  - un Proudit
  - Plusieurs Proudit

- [x] Lister tous les produits

  - lister tous les produits selon l’ordre alphabétique  croissant du nom.
  - lister tous les produits selon l’ordre  décroissant du prix.

- [x] Acheter produit : permet de mettre à jour la quantité après avoir introduit le code produit et la quantité àdéduire
- [x] Rechercher les produits Par :
        - Code
        - Quantité.
  
- [x] Etat du stock: permet d’afficher les produits dont la quantité est inférieure à 3.

- [x] Alimenter le stock: permet de mettre à jour la quantité après avoir introduit le code produit et la quantité    ajouter.

 Supprimer les produits par:

    - Code

 Statistique de vente:

    -Afficher le total des prix des produits vendus en journée courante
    -Afficher la moyenne des prix des produits vendus en journée courante
    -Afficher le Max des prix des produits vendus en journée courante
    -Afficher le Min des prix des produits vendus en journée courante
