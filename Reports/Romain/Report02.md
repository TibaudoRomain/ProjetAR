# **Séance 2 - 21/11/2023**
## Travail réalisé :

Lors de cette première séance, j'ai commencé à écrire des programmes simples pour pouvoir faire tourner les moteurs un à un. J'ai tout d'abord réfléchit à comment on allait s'y prendre pour controller la vitesse des moteurs. Pour cela, on utilisera une carte Arduino Mega dont j'ai trouvé la documentation sur la disposition des pins. Là voici :

![](https://duino4projects.com/wp-content/uploads/2013/04/ardunio_mega_pinout.jpg)

Grâce à cela j'ai déterminé que les pins sur lesquels un moteur peut être branché sont les pins 2 à 13 et les pins 44 à 46, donc un total de 15 pins. Je suis parti du principe que les moteurs allaient être branché sur les ports 2 à 7.
J'ai ensuite créer un fichier .ino dans lequel j'ai implémenté les fonctions permettants de changer la vitesse de chaque moteur avec pour but que ces fonctions prennent plus tard pour argument les attributs publiques d'une class qui sera controlée par la carte Nvidia Jetson.

Après m'être occupé de créer ce début de programme, j'ai discuté avec mon binôme des dimensions de la boîte étanche qui servira à maintenir les cartes électroniques au sec ainsi que de la façon dont on allait attacher les composants qui seront à l'extèrieur de la boîte.

On a finalement choisi de partir sur un cylindre en plexiglass avec des bouchons étanches d'une dimension adaptée trouvés sur internet.
