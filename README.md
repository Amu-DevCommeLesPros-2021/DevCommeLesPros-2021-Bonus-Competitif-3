# L'entretien chez Google, ça commence maintenant

L'entreprise Google a des moyens quelque peu particuliers pour dénicher de bons programmeurs.
Une méthode particulière est de reconnaître que vos recherches sur google.com posent des questions poussées dans certains domaines ou langages de programmation.
Une fois reconnu·e, vous êtes invité·e à participer à une série de défis.

Ces défis ont la particularité de ne mettre en évidence que quelques tests et gardent d'autres tests secrets.
Du fait, avant de soumettre votre solution pour évaluation, il faut que vous soyez bien sûr de votre code.
Si vous n'avez pas envisagé toutes les possibilités, votre soumission est refusée et il vous faut la modifier.

Voici un de ces défis.

## Énoncé

Panique à la centrale solaire !
Le réacteur principal est défaillant et affecte l'efficacité de nos panneaux solaires.
Il faut le réparer.
Pour ce faire, il faut éteindre une partie de l'ensemble de nos panneaux solaires mais attention : on ne peut pas les éteindre tous à la fois de crainte de ne pas pouvoir redémarrer le réacteur.
Il faut se garder un maximum de puissance disponible.
Nous avons toute une matrice de panneaux solaires et il faudra l'analyser rangée par rangée pour savoir quels panneaux désactiver.

Il s'agira donc d'implémenter une fonction qui, donnée un ensemble de valeurs représentant chacune la puissance d'un panneau solaire, renvoie le **produit** maximum d'un sous-ensemble non vide de ces valeurs.

Deux exemples :

- `f([2, 0, 2, 2, 0]) == 8`
- `f([-2, -3, 4, -5]) == 60`

Chaque ensemble de panneaux solaires contient au moins un panneau et au plus 10 panneaux.
Chaque panneau a une puissance variant de -10 à 10.
En effet, certains panneaux sont si affectés qu'ils drainent de la puissance !
Mais, en bon ingénieur, vous avez trouvé comment combiner deux panneaux à puissance négative pour en tirer une puissance positive égale au produit de leurs valeurs.

## Objectif

Implémentez dans le fichier `main.c` le corps de la fonction `maximum_power` de sorte qu'elle implémente correctement tous les cas possibles.

Comprenez que les tests que vous voyez dans le fichier `main.c` ne sont que les tests les plus évidents.
Votre code devra passer aussi *12* autres tests secrets.
Ce ne sont pas des tests invalides ou des attrape-nigauds sans fondement.
Ces tests secrets existent pour tester tous les cas spéciaux du problème et confirmer que vous avez bien envisagé toutes les subtilités.

Si vous croyez avoir du code qui répond à toutes les exigences, contactez-moi vite !
Je vous ferai part du nombre de tests secrets que votre programme passe avec succès.

Dans le cas où votre programme ne passe pas à 100% les tests secrets, *vous devrez attendre 24 heures avant de me re-soumettre une solution.*
Soyez sûr de vous !
