# **Séance 4 - 12/12/2023**
## Travail réalisé :
Après avoir écrit l'image de la jetson nano sur la carte SD, je me suis penché sur la centrale inertielle MPU 6050 :
![](https://j6z7x9q7.rocketcdn.me/wp-content/uploads/2021/03/MPU-6050-3.jpg)

J'ai commencé par faire les branchements et souder connecteurs à la centrale inertielle.
[image ici]
Ensuite j'ai testé le programme exemple de l'IDE pour la MPU 6050 nommé MPU6050DMP6 en ayant installé au préalable les librairies MPU6050 et I2Cdev. Cependant le programme me renvoi le message d'erreur suivant :

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/6cba63ab-3d56-46d0-9116-43b6be100d2b)

N'ayant pas trouvé la solution, j'ai testé d'autres programme dont celui ci-dessous qui m'a renvoyer trois angles nuls qui ne changeaient pas peu importe comment je déplaçais la centrale inertielle.

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/2902d326-99ac-4d36-b74f-0004519b0ba7)

## Objectifs pour la semaine prochaine :



