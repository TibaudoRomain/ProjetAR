# **Séance 13**
## *19-03-2024* 
## Travail réalisé : 
Pour cette séance, j'ai commencé par fixer les pièces imprimées de la séance précédente sur notre structure en bois.

![](https://github.com/TibaudoRomain/ProjetAR/blob/main/Reports/Anas/Images/WhatsApp%20Image%202024-03-20%20at%2015.42.54.jpeg?raw=true)
J'ai ensuite modélisé les fixations des moteurs qui seront fixées sur les plaques latérales, et je les ai lancées en impression.
Ensuite, j'ai connecté la carte Jetson Nano à un moniteur, branché la caméra, et initialisé celle-ci. Enfin, j'ai testé la caméra à l'aide d'un code Python.
![](https://github.com/TibaudoRomain/ProjetAR/blob/main/Reports/Anas/Images/WhatsApp%20Image%202024-03-20%20at%2015.42.55%20(1).jpeg?raw=true)

Ensuite, j'ai écrit un code Python qui permet de détecter les contours des objets sur la vidéo fournie par la caméra, ce qui nous donne ceci :

![](https://github.com/TibaudoRomain/ProjetAR/blob/main/Reports/Anas/Images/WhatsApp%20Image%202024-03-20%20at%2015.42.55.jpeg?raw=true)

Je travaille sur l'optimisation de ce code afin de pouvoir détecter les obstacles sous l'eau et ainsi nous guider.

Dans la même optique d'aider à éviter les obstacles sous l'eau, j'ai également essayé un code qui permet de changer les couleurs de la vidéo. En effet, sous l'eau, tout est bleu. Donc, si nous parvenons à détecter toute autre couleur que le bleu, nous pourrions supposer que c'est un obstacle. Cependant, cela reste peu avancé et je devrais l'essayer sous l'eau afin de l'améliorer.
![](https://github.com/TibaudoRomain/ProjetAR/blob/main/Reports/Anas/Images/WhatsApp%20Image%202024-03-20%20at%2015.42.55%20(2).jpeg?raw=true)

Comme c'était presque la fin de la séance et que je n'avais pas de moniteur chez moi pour la carte Jetson, j'ai cherché un moyen de la piloter à distance à l'aide de mon PC. Donc, avec l'aide du VNC Viewer, j'ai créé un bureau à distance de ma carte Jetson sur mon ordinateur.

![](https://github.com/TibaudoRomain/ProjetAR/blob/main/Reports/Anas/Images/WhatsApp%20Image%202024-03-20%20at%2015.42.55%20(3).jpeg?raw=true)



