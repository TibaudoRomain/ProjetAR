# Utilisation du modèle de NVIDIA pour la détection du nombre de doigts :

## Contexte initial : 

Nous avons utilisé le modèle de détection de doigts de NVIDIA fourni avec le Docker.

## Fonctionnalité du modèle : 

Ce modèle de détection de doigts constitue une ressource importante pour notre projet, permettant d'identifier et de suivre les doigts dans des scènes vidéo néanmoins, Il reste peu précis et nécessite beaucoup d'entraînement.

## Problèmes rencontrés lors de l'entraînement :

Malgré ses fonctionnalités, nous avons rencontré des problèmes lors de l'entraînement du modèle.


# Répétition de l'entraînement :

## Tentatives répétées d'entraînement : 

Nous avons effectué plusieurs tentatives pour entraîner le modèle, dans l'espoir de résoudre les problèmes rencontrés.

## Problème de persistance des entraînements : 

Cependant, nous avons constaté qu'à chaque relance du conteneur Docker, les progrès réalisés dans l'entraînement semblaient être perdus.

## Sauvegarde des modèles : 

Bien que nous ayons pris soin de sauvegarder le modèle, il semble y avoir des obstacles à maintenir la progression de l'entraînement entre les sessions.


# Problèmes techniques supplémentaires :

## Problème de communication I2C : 

En parallèle des problèmes d'entraînement, nous avons rencontré des difficultés avec la communication I2C.

## Difficultés avec la librairie SMBus : 

Nous avons également rencontré des obstacles dans l'installation de la librairie SMBus.

Ces difficultés soulignent l'importance de résoudre les problèmes techniques rencontrés lors de l'entraînement du modèle de détection de doigts, ainsi que de garantir une communication fluide avec les périphériques matériels nécessaires à son fonctionnement.
