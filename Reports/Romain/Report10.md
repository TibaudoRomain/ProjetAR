# **Séance 10 - 21/02/2024**
## Travail réalisé :
J'ai commencé la séance en codant un programme qui fait varier la vitesse des moteur en fonction de l'angle du robot. Pour cela, j'ai simplement créer une fonction qui prend en paramètre la sortie du PID (une position angulaire, 3 angles)
et qui donne une vitesse aux moteurs correspondants en fonction de la différence entre les angles de en consignes et les angles données par la centrale inertielle.
Ensuite, j'ai réparé et testé mon programme pour donné une vitesse aux différents moteurs en effet j'ai remarqué que les ESC étaient mal initialisés.
Enfin j'ai pu programmé notre sonar qui servirra à l'évitement d'obstacle. Pour l'instant je me contente de récupérer la distance sans l'utiliser.

## Objectifs pour les prochaines scéances :
- Faire un programme permettant au robot de se déplacer
- Programmer l'évitement d'obstacles
