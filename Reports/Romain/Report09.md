# **Séance 9 - 13/02/2024**
## Travail réalisé :
J'ai commencé la séance en réinstallant arduino ide sur la jetson nano. J'ai ensuite réecrit le programme pour communiquer entre l'arduino et la jetson dans l'ide, la vérification a fonctionnée cependant l'ide m'a renvoyé l'erreur suivante : 

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/4e3ca9d9-423c-4296-a648-13979ce71972)

J'ai ensuite passé une partie de la séance à chercher une solution, cependant les solutions que j'ai trouvées et essayées ne fonctionnaient pas.
J'ai donc décidé de travailler sur le PID me permettant de créer un asservissement sur la position angulaire du Seamoth et j'ai donc programmé un PID agissant sur les angles Yaw/Pitch/Roll (programme dans le dossier correspondant). 

## Objectifs pour les prochaines scéances :
- Faire un programme permettant de traduire la consigne angulaire donnée par le PID de la centrale inertielle en consigne de vitesse
- Tester le PID sur les moteurs
