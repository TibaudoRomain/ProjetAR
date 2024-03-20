# **Séance 11 - 06/03/2024**
## Travail réalisé :
J'ai commencé la séance en imprimant en 3d des supports pour les moteurs qui manquait pour finir la structure externe du robot (externe au cylindre waterproof). 

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/5dc6c34f-602b-4669-afc1-a3d6b9ed010e)

Voici la structure du robot 

Ensuite, après avoir décidé de changer de sonnar, je me suis mis à chercher les capteurs qui nous manquaient, notament un PH-mètre et un capteur de pression.

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/bbc2f4ea-23b9-41a6-a3ae-a38b474d7573)

Cependant malgrés le fait que la distance soit supèrieur à 20cm les mesures étaient inconssistantes, en effet peu importe à quel point j'écartais le sonnar de l'obstacle la distance restait à environ 80cm. J'ai ensuite regardé la datasheet qui m'a indiqué que le sonnar est prévu pour fonctionner sur une portée de 20 à 600cm. 

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/b10ae711-92df-4588-b5fc-405eb14d2b63)


Or le son se déplace 4 fois plus vite dans l'eau que dans l'air donc une distance de 80cm serait logique.
J'ai ensuite essayé de tester le capteur pour une distance plus longue. 

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/14af167a-bfdb-43d0-a666-dfacb8b839b0)

Cependant du à l'angle de mesure de 75° le bassin utilisé était trop fin ce qui m'a empéché de faire des mesures. J'ai ensuite retenté en modifiant le programme ce qui m'a rendu la même chose. Ensuite j'ai aidé mon coéquipier à assembler une partie de la structure.

## Objectifs pour les prochaines scéances :
- Régler le problème de mesure à courtes distances du sonnar
- Faire un programme permettant au robot de se déplacer
- Programmer l'évitement d'obstacles
