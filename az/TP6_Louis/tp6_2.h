int ecrire_deux_octets(int fd, uint16 val);

int ecrire_quatre_octets(int fd, uint32 val);

int ecrire_entete_fichier(int vers, entete_bmp *entete);

int ecrire_entete_bitmap(int vers, entete_bmp *entete);

int ecrire_entete(int vers, entete_bmp *entete);
