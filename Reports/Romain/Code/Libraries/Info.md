# Tibaudo Romain et Malhouq Anas - Projet Informatique - Détection du nombre de doigts 


## Introduction

### Contexte initial : 

Nous avons entrainé à la détection de doigts le modèle de NVIDIA fourni avec le Docker pour envoyer sa prédiction vers l'arduino qui se charge de l'afficher sur un écran LCD. 

### Fonctionnalité du modèle : 

Ce modèle de détection de doigts constitue une ressource importante pour notre projet, permettant d'identifier et de suivre les doigts dans des scènes vidéo néanmoins, Il reste peu précis et nécessite beaucoup d'entraînement.


## Problèmes rencontrés lors de l'entraînement :

Malgrés ses fonctionnalités, nous avons rencontré des problèmes lors de l'entraînement du modèle, comme la lenteur du training ainsi que son imprécision.

### Tentatives répétées d'entraînement : 

Nous avons effectué plusieurs tentatives pour entraîner le modèle, dans l'espoir de résoudre les problèmes rencontrés.

### Problème de persistance des entraînements : 

Cependant, nous avons constaté qu'à chaque relance du conteneur Docker, les progrès réalisés dans l'entraînement semblaient être perdus.

### Sauvegarde des modèles : 

Bien que nous ayons pris soin de sauvegarder le modèle, il semble y avoir des obstacles à maintenir la progression de l'entraînement entre les sessions.


## Problèmes techniques supplémentaires :

### Problème de communication I2C : 

En parallèle des problèmes d'entraînement, nous avons rencontré des difficultés avec la communication I2C.

### Difficultés avec la librairie SMBus : 

Nous avons également rencontré des obstacles dans l'installation de la librairie SMBus.

Ces difficultés soulignent l'importance de résoudre les problèmes techniques rencontrés lors de l'entraînement du modèle de détection de doigts, ainsi que de garantir une communication fluide avec les périphériques matériels nécessaires à son fonctionnement.

### Difficultés avec le programme master

Nous avons rencontrés des difficultés à récupérer la prédiction du modèle ainsi qu'à l'envoyer vers l'arduino avec la librairie SMBus

## Code Arduino

En pièce jointe commenté


##Schéma électrique 

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/b019c128-8cec-4bc2-91cd-29b02657eb2c)
