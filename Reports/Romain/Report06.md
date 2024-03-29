# **Séance 6 - 16/01/2024**
## Travail réalisé :
Dans un premier temps, j'ai travaillé sur la carte nvidia jetson nano. J'ai tout d'abord commencé par configurer Ubuntu qui est l'OS de la jetson. Ensuite pour faciliter l'accès à la jetson nano j'ai configuré la carte pour être accessible depuis mon ordinateur portable.
Pour ce faire, j'ai dû la rendre accessible via bureau à distance ce qui a nécessité l'installation de XRDP. Cependant, sur Linux Ubuntu, installer un logiciel comme celui-ci n'est pas aussi simple que juste chercher sur son navigateur internet, en effet tout ce fait par le terminal.

Après avoir installé xrdp, il me suffit d'ouvrir l'application nommée "Connexion bureau à distance sur mon pc portable" et de rentrer l'IP et le nom de la carte.


![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/bedc098d-1529-4034-a1ec-1ca174b5e058)

Enfin, j'ai pu accéder à la carte nvidia depuis mon pc portable me permettant ainsi d'utiliser la jetson sans clavier ou écran supplémentaires.

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/c3ac95ca-56ae-4e44-a823-84fd06194372)

Cependant, il reste quelques problèmes liés à cette méthode d'accès notamment un long temps de réponse de la jetson aux "imput" de mon pc portable.

## Objectifs pour les prochaines scéances :
- Corriger les problèmes d'accès à la jetson
- Établir une communication entre la jetson et la carte arduino uno
- Coder un asservissement sur l'angle du robot grâce à la centrale inertielle
