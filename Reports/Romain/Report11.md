# **Séance 11 - 06/03/2024**
## Travail réalisé :
J'ai commencé la séance en travaillant sur le sonnar. Celui-ci me donnant des valeurs pas stables et peu précises, ce qui peut empiéter sur le déplacement du robot et lui faire détecter des obstacles qui n'existent pas. Le premier problème que j'ai voulu régler est la stabilité de la mesure en effet quand j'essaie de faire des mesures avec le sonnar je me retrouve avec des suites de valeurs contenant des valeurs isolés qui différencient fortement du reste.

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/148a839a-5d84-46f3-b201-47ead988842b)

Pour régler ce problème, j'ai décidé de prendre plus de mesures (avec une fréquence plus grande) de les séparer en groupe de 11 mesures puis de renvoyer la médiane de ces mesures. Pour ce faire j'ai choisi d'ajouter les 11 premières valeurs dans une liste à 11 éléments puis d'ordonner la liste en utilisant un tri par insertion et de renvoyer le 6ème élément de la liste, de même pour les 11 prochaines valeures et ainsi de suite. Cependant, après avoir recherché comment le tri fonctionnait je n'ai pas réussi à l'implémenter, la liste initialisée comme une liste de 11 zéros n'acceptait pas les valeures par lesquels j'essaiyait de changer les zéros.

Cependant pour ne pas perdre de temps je me suis mis à régler l'autre problème du sonnar, les distances qu'il renvoie ne sont pas assez précise, à une distance de 1m le sonnar renvoyait une distance de 93.5cm. 

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/34d91b14-1b05-4086-b7eb-28777f8b06be)

J'ai donc mesuré la différence de distance entre la réalité et ce que mon programme renvoyait pour pouvoir trouvé un facteur par lequel je peux multiplier la valeur du sonnar pour avoir des mesure plus précises.

![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/135d390d-8421-4ecd-8f76-bb9a93006ea6)


![image](https://github.com/TibaudoRomain/ProjetAR/assets/146826729/80fafc83-caf7-4421-ac6e-676069d25e08)


## Objectifs pour les prochaines scéances :
- Faire un programme permettant au robot de se déplacer
- Programmer l'évitement d'obstacles
