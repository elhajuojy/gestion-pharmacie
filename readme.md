# Projet Fin SAS Gestion de Pharmacie 📁

l’application de gestion de pharmacie  est une application console. Qui a pour but de gérer les produits pharmaceutiques (ajouter, rechercher, supprimer et afficher un produit …)

## base de données

| Produit     | acheter           |
| :---        |    :----:         |
| code        | code_achate       | 
| nom         | code_proudit      |
| prix        | code_client       |
| prix_ttc    | date_achate       |
| quantite    | qt_achate         |


**Contexte du projet :**

L’application doit avoir un menu qui vous permet de :

- Ajouter un nouveau produit: un produit est identifié par : son code, son nom, sa quantité, et son prix.
- Ajouter plusieurs nouveaux produits: un produit est identifié par :son code, son nom, sa quantité, et son prix.
- Lister tous les produits (Nom, prix, prix TTC):
    - lister tous les produits selon l’ordre alphabétique  croissant du nom.
    - lister tous les produits selon l’ordre  décroissant du prix.

        **N.B :  chaque produit à un Prix TTC = Prix + 15% du prix**

- Acheter produit : permet de mettre à jour la quantité après avoir introduit le code produit et la quantité à déduire

      **N.B :Pour chaque produit acheté, vous devez enregistrer le prix TTC et la date d’achat.**

- Rechercher les produits Par :
- Code
- Quantité.
- Etat du stock: permet d’afficher les produits dont la quantité est inférieure à 3.
- Alimenter le stock: permet de mettre à jour la quantité après avoir introduit le code produit et la quantité à ajouter.
- Supprimer les produits par:
- Code
- Statistique de vente:

Afficher le total des prix des produits vendus en journée courante

Afficher la moyenne des prix des produits vendus en journée courante

Afficher le Max des prix des produits vendus en journée courante

Afficher le Min des prix des produits vendus en journée courante

**Bonus:**

Vous pouvez utiliser les fichiers afin d’enregistrer les informations du produit.

**N.B: L’utilisateur doit retourner au menu principal après chaque opération**

*Implémenter les fonctionnalités citées au menu principal. Utiliser les algorithmes de recherche et de tri qui vous conviennent.*
