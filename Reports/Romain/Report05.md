# **Séance 5 - 08/01/2024**
## Travail réalisé :
Dans un premier temps, j'ai recherché comment faire fonctionner la centrale inertielle. Après avoir essayé sans succés de faire fonctionner le programme exemple nommé MPU6050_dmp6, j'ai décidé d'utiliser d'autres librairies et d'utiliser un programme plus simple nommé "CentraleInertielleW" trouvable dans ProjetAR/Reports/Romain/Code.

J'ai tout d'abord changé le branchement de la centrale inertielle comme ceci : 

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/5392acbd-87e4-4bf8-b411-c4c01ae7ba72)

(Screenshot de https://www.youtube.com/watch?v=oqmbVeRlLgg&t=330s)
![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/8151c6c4-6d2b-4461-a123-cea145e03bf4)

Cependant, avant de faire marcher le code j'ai du résoudre plusieurs problème. Le premier était que l'IDE n'arrivait pas à upload le code sur la carte arduino, après avoir réinstallé le driver ch340 et redémarré mon pc plusieurs fois, le problème s'est résolu. Un autre problème que j'ai rencontré est un problème avec certaines libraries, en effet le programme exemple de l'IDE a besoin d'une library appelée Toxiclibs que je n'ai pas pu trouvé. C'est aussi pour cela que j'ai utilisé un autre programme.

Ces problèmes résolus, un autre est survenu, la centrale inertielle n'arrive pas à calibrer son accélération.

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/ef70a0e7-3cc7-4002-90c0-372653f189ea)

Cependant en posant la centrale inertielle à plat comme sur cette image :

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/f9c70966-0f35-4380-a7ca-f814cb1a8364)

J'obtiens ces résultats : 

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/ad9f7ce9-f30f-4ddc-a623-846c1cf91a9a)


