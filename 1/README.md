# Question 1
1. Affichage d’un message d’accueil, suivi d’un prompt simple. Par exemple :
<img width="704" height="89" alt="image" src="https://github.com/user-attachments/assets/39af0d6c-8cbb-4720-a8f2-ee99fb3d2258" />

## Réalisation
On cherche à ne pas utiliser printf, donc on créer notre propre fonction my_printf qui prend comme arguments une châine de caractère.

Le code consiste à utiliser la fonction *write* qui possède 3 arguments :  
_int fd  
_const void *buf  
_size_t count  
  
Pour nous fd = 1, d'où la création de la variable int stout = 1 ;  

<img width="879" height="307" alt="image" src="https://github.com/user-attachments/assets/4da4ffc4-624a-4e64-a40f-6c47e6107270" />

