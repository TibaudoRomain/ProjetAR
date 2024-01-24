# **Séance 7 - 23/01/2024**
## Travail réalisé :
L'objectif pour cette scéance était d'établir une communication entre la jetson nano et l'arduino.
Voici ce que j'ai du faire pour pouvoir établir cette communication : 
  - Installation de l'IDE arduino sur la jetson : la carte jetson fonctionnant sur l'architecture Ubuntu l'installation s'est révélée difficile. Tout d'abord j'ai essayer de simplement éxécuter les fichiers pour linux présents sur le site de l'IDE, ce qui n'a pas fonctionné, et après l'essai de plusieurs méthodes trouvées sur internet, je suis tombé sur cette méthode avec laquelle j'ai réussi à installer Arduino IDE 1, une version plus ancienne mais qui fonctionne tout aussi bien.  ![InstallationIDE](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/374af2b7-89c3-48b4-982f-76be1890f996)
  - Après avoir installé l'IDE j'ai utilisé terminal pour trouver sur quel port de la jetson l'arduino était branché.![RecherchePort](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/a5467d8d-d3a6-464f-8ef0-fe10f2543281)

  - Ensuite j'ai écrit le programme "PrgArduinoCentraleInertielle.ino" sur l'arduino pour tester la communication par Serial entre les deux cartes.

  - J'ai aussi du écrire un programme en python sur la jetson.![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/c44674a4-7aa1-4ed9-9027-bcec2757a3a0)

Même si l'objectif originel de cette scéance n'a pas été accompli, il ne reste plus qu'à installer un programme pour lire le python sur la jetson nano pour pouvoir s'assurer que la communication a bien été établie.   
## Objectifs pour les prochaines scéances :
- S'assurer que la communication a bien été établie
- Ecrire et tester le programme pour stabiliser le robot
