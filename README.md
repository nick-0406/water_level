# Surveillance de niveau d'eau – Arduino + LCD

## Présentation
Ce projet est un petit prototype expérimental permettant de mesurer le niveau d’eau à l’aide d’un capteur de niveau connecté à une carte Arduino.  
La valeur mesurée est affichée en temps réel sur un écran LCD utilisant une interface I2C.

L’objectif principal de ce projet était de tester le matériel et de mettre en place une chaîne simple d’acquisition et d’affichage de données.

## Fonctionnalités
- Mesure du niveau d’eau avec un capteur dédié  
- Affichage en temps réel sur écran LCD (I2C)  
- Lecture continue des données via la boucle Arduino  

## Matériel utilisé
- Carte Arduino  
- Capteur de niveau d’eau  
- Écran LCD avec module I2C  
- Breadboard et câbles de connexion  

## Principe de fonctionnement
Le capteur détecte le niveau d’eau et envoie une valeur analogique à l’Arduino.  
L’Arduino lit cette valeur et l’affiche directement sur l’écran LCD.

## Évolutions possibles
Ce prototype peut servir de base pour des systèmes plus avancés comme :
- surveillance de réservoir d’eau  
- système d’irrigation automatisé  
- contrôle de pompe ou de moteur  

## Statut
Prototype – Version 1  
Projet réalisé dans un objectif d’exploration et de prise en main du matériel.