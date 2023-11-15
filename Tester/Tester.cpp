// P015_Batalla Pokémon_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//by julio
// Se hizo una batalla pokémon 

#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>


int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    bool start = false;
    std::string name;
    int i;
    int opc = 0;
    int opc1 = 0;
    std::string rival;
    int HP;
    std::string poki;
    std::string poki1;


    std::cout << "Hola entrenador pokémon\n vamos a vivir una aventura increible, pero primero\ ¿Como te llamas entrenador?\n";
    getline(std::cin, name);
    std::cout << "Muy bien " << name << " ¿estas listo?\n";
    std::cout << "1.- SI \n 0.- NO \n";
    std::cin >> start;
    while (start == true)
    {
        do
        {
            std::cout << name << " elije a tu starter:\n ";
            std::cout << "1.- CHARMANDER\n";
            std::cout << "2.- SQUIRTLE\n";
            std::cout << "3.- BULBASAUR\n";
            std::cin >> opc;
            switch (opc)
            {
            case 1:
                if (opc == 1)
                {

                    std::cout << Beep(500, 100);
                    std::cout << "\nHas elejido a Charmander\n";
                    std::cout << "STATS: \n";
                    std::cout << "\n-------------------------\n";
                    std::cout << "\n---      HP: 50       ---\n";
                    std::cout << "\n---       FIRE        ---\n";
                    std::cout << "\n-------------------------\n";
                }
                break;
            case 2:
                if (opc == 2)
                {

                    std::cout << Beep(500, 100);
                    std::cout << "\nHas elejido a Squirtle\n";
                    std::cout << "STATS: \n";
                    std::cout << "\n-------------------------\n";
                    std::cout << "\n---      HP: 50       ---\n";
                    std::cout << "\n---       WATER       ---\n";
                    std::cout << "\n-------------------------\n";
                }
                break;
            case 3:
                if (opc == 3)
                {

                    std::cout << Beep(500, 100);
                    std::cout << "\nHas elejido a Bulbasaur\n";
                    std::cout << "STATS: \n";
                    std::cout << "\n-------------------------\n";
                    std::cout << "\n---      HP: 50      ---\n";
                    std::cout << "\n---       PLANT       ---\n";
                    std::cout << "\n-------------------------\n";
                }
                break;
            default:
                std::cout << "No hay mas pokemones\n";
                std::cout << "Vuelve a elegir, presiona 0 para continuar\n ";
                std::cout << "O\n";
                std::cout << "Presiona 1 si quieres iniciar tu historia pokémon con el pokémon ya definido CHARMANDER";
                std::cout << "\n";
                std::cin >> start;
            }
        } while (start == false);
        std::string pna;
        std::cout << "Ponle un nombre a tu pokémon: ";
        std::cin >> pna;

        std::cout << "\n\n????:  Entonces yo escogeré a este \n ";
        if (opc == 1)
        {

            std::cout << Beep(100, 300);
            std::cout << "(????) escogio a Bulbasaur \n";
            std::cout << "STATS: \n";
            std::cout << "\n-------------------------\n";
            std::cout << "\n---      HP: 50       ---\n";
            std::cout << "\n---       PLANT       ---\n";
            std::cout << "\n-------------------------\n";

        }
        if (opc == 2)
        {
            std::cout << Beep(100, 300);
            std::cout << "(????) escogio a Charmander\n";
            std::cout << "STATS: \n";
            std::cout << "\n-------------------------\n";
            std::cout << "\n---      HP: 50       ---\n";
            std::cout << "\n---       FIRE        ---\n";
            std::cout << "\n-------------------------\n";

        }
        if (opc == 3)
        {

            std::cout << Beep(100, 300);
            std::cout << "(????) escogio a Squirtle\n";
            std::cout << "STATS: \n";
            std::cout << "\n-------------------------\n";
            std::cout << "\n---      HP: 50       ---\n";
            std::cout << "\n---      WATER        ---\n";
            std::cout << "\n-------------------------\n";
            ;
        }

        std::cout << "TU: ¿Y tu eres?\n";
        std::cout << "Ponle un nombre a tu rival de toda la vida: ";
        std::cin >> rival;
        std::cout << "Yo soy " << rival << " tu rival de toda la vida\n";
        std::cout << "Y me vengare de ti por ser mi rival de toda la vida\n";
        std::cout << Beep(300, 300);
        std::cout << Beep(300, 300);
        std::cout << Beep(300, 300);
        std::cout << Beep(300, 300);



        std::cout << "Turno de " << name << "\n";

        std::cout << "\n--------------------------------------------------------\n";
        std::cout << "\n-------    *|1.- FIGHT|*           *|2.- BAG|*     -----\n";
        std::cout << "\n-------  *|3.- DO NOTHING|*        *|4.- RUN|*     -----\n";
        std::cout << "\n--------------------------------------------------------\n";

        std::cout << "¿Que haces " << name << "?\n";

        int q = 0;
        int q1 = 0;

        std::cin >> q;
        if (q == 1)
        {
            std::cout << "\n-------------------------------------------------------------------\n";
            std::cout << "\n-------     *|1.- PUNCH|*           *|2.- SPECIAL ATTACK|*    -----\n";
            std::cout << "\n-------               *|3.- DEFFENSE|*                        -----\n";
            std::cout << "\n-------------------------------------------------------------------\n";
            std::cin >> q1;
            if (q1 == 1)
            {
                std::cout << Beep(400, 300);
                std::cout << Beep(400, 300);
                std::cout << pna << " le da un uppercut y le baja 20 de vida al pokémon de " << rival;
                std::cout << "\n";
                std::cout << "Pokémon de " << rival;
                std::cout << Beep(600, 300);
                std::cout << "\n-------------------------\n";
                std::cout << "\n---      HP: 30       ---\n";
                std::cout << "\n-------------------------\n";
                std::cout << "EL pokémon de " << rival << " decide atacar y logra acertarle un golpe fuerte a " << pna << " bajandole 30 de vida\n";
                std::cout << Beep(400, 300);
                std::cout << Beep(400, 300);
                std::cout << "\n";
                std::cout << pna;
                std::cout << "\n-------------------------\n";
                std::cout << "\n---      HP: 20       ---\n";
                std::cout << "\n-------------------------\n";

                std::cout << "Turno de " << name << "\n";

                std::cout << "\n--------------------------------------------------------\n";
                std::cout << "\n-------    *|1.- FIGHT|*           *|2.- BAG|*     -----\n";
                std::cout << "\n-------  *|3.- DO NOTHING|*        *|4.- RUN|*     -----\n";
                std::cout << "\n--------------------------------------------------------\n";

                std::cout << "¿Que haces " << name << "?\n";

                int s1 = 0;
                std::cin >> s1;
                if (s1 == 1)
                {
                    int m = 0;
                    std::cout << "\n-------------------------------------------------------------------\n";
                    std::cout << "\n-------     *|1.- PUNCH|*           *|2.- SPECIAL ATTACK|*    -----\n";
                    std::cout << "\n-------------------------------------------------------------------\n";
                    std::cin >> m;

                    std::cout << Beep(400, 300);
                    std::cout << Beep(400, 300);
                    std::cout << pna << " le acierta un buen golpe y lo termina haciendo un knockout";
                }
                if (s1 == 2)
                {
                    int sino1;
                    std::cout << "En la bolsa solo tienes una paleta que acabas de comprar\n Obviamente no ibas a tener curas buenas, acabas de iniciar y estas en tu primera pelea con" << rival << "\n¿Quieres usarla en" << pna << "?";
                    std::cin >> sino1;
                    if (sino1 == 1)
                    {
                        std::cout << "Le diste la paleta a " << pna << " la cual termina siendo el motivo de su muerte\n Resulta que no sabias que no se le puede dar comida humana a los pokemones\n" << pna << " se termino intoxicando y su vida bajo a 0";
                    }
                    else
                    {
                        std::cout << "No decidiste hacer nada y pierdes un turno asi por nomas";
                        std::cout << "El pokémon de " << rival << " termina haciendo otro ataque especial, pero esta vez no falla y por alguna razon te hace insta kill";
                    }

                }
                if (s1 == 3)
                {
                    std::cout << pna << " duda mucho sobre la decision de su entrenador pero aun asi lo obedece";
                    std::cout << pna << " recive un gran golpe del pokemon de " << rival << " y le baja 30 puntos de vida OMG";
                    std::cout << Beep(400, 300);
                    std::cout << Beep(400, 300);
                    std::cout << "\n";
                    std::cout << pna;
                    std::cout << "\n-------------------------\n";
                    std::cout << "\n---      HP: 0       ---\n";
                    std::cout << "\n-------------------------\n";
                }
                if (s1 == 4)
                {
                    std::cout << "Logras escapar pero dejas a " << pna << " atras y " << rival << " se queda con el.\n";
                    std::cout << "Todos en el pueblo te vieron huir despavorido y asustado por \nlo cual se burlaron de ti y por lo cual te genero un trauma hacia los pokemones\n y ya nunca fuiste entrenador pokémon\n";

                }

            }
            if (q1 == 2)
            {
                std::cout << pna << " decide golpear con su ataque especial y logra hacer literalmente nada porque el pokémon de " << rival << " lo esquiva";
                std::cout << "EL pokémon de" << rival << "ataca con su ataque especial pero solamente te hace 10 de daño";
                std::cout << Beep(100, 300);
                std::cout << Beep(100, 300);
                std::cout << "\n";
                std::cout << pna;
                std::cout << "\n-------------------------\n";
                std::cout << "\n---      HP: 40       ---\n";
                std::cout << "\n-------------------------\n";

                std::cout << "Turno de " << name << "\n";

                std::cout << "\n--------------------------------------------------------\n";
                std::cout << "\n-------    *|1.- FIGHT|*           *|2.- BAG|*     -----\n";
                std::cout << "\n-------  *|3.- DO NOTHING|*        *|4.- RUN|*     -----\n";
                std::cout << "\n--------------------------------------------------------\n";

                int p1 = 0;
                std::cout << "¿Que haces " << name << "?\n";
                std::cin >> p1;

                if (p1 == 1)
                {
                    int m = 0;
                    std::cout << "\n-------------------------------------------------------------------\n";
                    std::cout << "\n-------     *|1.- PUNCH|*           *|2.- SPECIAL ATTACK|*    -----\n";
                    std::cout << "\n-------------------------------------------------------------------\n";
                    std::cin >> m;

                    std::cout << Beep(400, 300);
                    std::cout << Beep(400, 300);
                    std::cout << pna << " le acierta un buen golpe y lo termina haciendo un knockout";
                }
                if (p1 == 2)
                {
                    int sino;
                    std::cout << "En la bolsa solo tienes una paleta que acabas de comprar\n Obviamente no ibas a tener curas buenas, acabas de iniciar y estas en tu primera pelea con" << rival << "\n¿Quieres usarla en" << pna << "?";
                    std::cin >> sino;
                    if (sino == 1)
                    {
                        std::cout << "Le diste la paleta a " << pna << " la cual termina siendo el motivo de su muerte\n Resulta que no sabias que no se le puede dar comida humana a los pokemones\n" << pna << " se termino intoxicando y su vida bajo a 0";
                    }
                    else
                    {
                        std::cout << "No decidiste hacer nada y pierdes un turno asi por nomas";
                        std::cout << "El pokémon de " << rival << " termina haciendo otro ataque especial, pero esta vez no falla y por alguna razon te hace insta kill";
                    }

                }
                if (p1 == 3)
                {
                    std::cout << pna << " duda mucho sobre la decision de su entrenador pero aun asi lo obedece";
                    std::cout << pna << " recive un gran golpe del pokemon de " << rival << " y le baja 30 puntos de vida OMG";
                    std::cout << Beep(400, 300);
                    std::cout << Beep(400, 300);
                    std::cout << "\n";
                    std::cout << pna;
                    std::cout << "\n-------------------------\n";
                    std::cout << "\n---      HP: 0       ---\n";
                    std::cout << "\n-------------------------\n";
                }
                if (p1 == 4)
                {
                    std::cout << "Logras escapar pero dejas a " << pna << " atras y " << rival << " se queda con el.\n";
                    std::cout << "Todos en el pueblo te vieron huir despavorido y asustado por \nlo cual se burlaron de ti y por lo cual te genero un trauma hacia los pokemones\n y ya nunca fuiste entrenador pokémon\n";

                }


            }
            if (q1 == 3)
            {
                std::cout << pna << " se prepara para defender en el proximo ataque";
                std::cout << "El pokémon de " << rival << " se queda stunneado por el bloqueo de " << pna << "\n";
                std::cout << "Por lo cual " << pna << " por instinto golpea al pokémon de " << rival << " dejandolo fuera de juego";

            }

        }
        if (q == 2)
        {
            std::cout << "Aun no puedes usar esto";

            std::cout << "EL pokémon de " << rival << " decide atacar y logra acertarle un golpe fuerte a " << pna << " bajandole 30 de vida\n";
            std::cout << Beep(400, 300);
            std::cout << Beep(400, 300);
            std::cout << "\n";
            std::cout << pna;
            std::cout << "\n-------------------------\n";
            std::cout << "\n---      HP: 20       ---\n";
            std::cout << "\n-------------------------\n";

            std::cout << "Turno de " << name << "\n";

            std::cout << "\n--------------------------------------------------------\n";
            std::cout << "\n-------    *|1.- FIGHT|*           *|2.- BAG|*     -----\n";
            std::cout << "\n-------  *|3.- DO NOTHING|*        *|4.- RUN|*     -----\n";
            std::cout << "\n--------------------------------------------------------\n";

            std::cout << "¿Que haces " << name << "?\n";

            int s2 = 0;
            std::cin >> s2;
            if (s2 == 1)
            {
                int mm = 0;
                std::cout << "\n-------------------------------------------------------------------\n";
                std::cout << "\n-------     *|1.- PUNCH|*           *|2.- SPECIAL ATTACK|*    -----\n";
                std::cout << "\n-------------------------------------------------------------------\n";
                std::cin >> mm;

                std::cout << Beep(400, 300);
                std::cout << Beep(400, 300);
                std::cout << pna << " le acierta un buen golpe y lo termina haciendo un knockout";
            }
            if (s2 == 2)
            {
                int sino2;
                std::cout << "En la bolsa solo tienes una paleta que acabas de comprar\n Obviamente no ibas a tener curas buenas, acabas de iniciar y estas en tu primera pelea con" << rival << "\n¿Quieres usarla en" << pna << "?";
                std::cin >> sino2;
                if (sino2 == 1)
                {
                    std::cout << "Le diste la paleta a " << pna << " la cual termina siendo el motivo de su muerte\n Resulta que no sabias que no se le puede dar comida humana a los pokemones\n" << pna << " se termino intoxicando y su vida bajo a 0";
                }
                else
                {
                    std::cout << "No decidiste hacer nada y pierdes un turno asi por nomas";
                    std::cout << "El pokémon de " << rival << " termina haciendo otro ataque especial, pero esta vez no falla y por alguna razon te hace insta kill";
                }

            }
            if (s2 == 3)
            {
                std::cout << pna << " duda mucho sobre la decision de su entrenador pero aun asi lo obedece";
                std::cout << pna << " recive un gran golpe del pokemon de " << rival << " y le baja 30 puntos de vida OMG";
                std::cout << Beep(400, 300);
                std::cout << Beep(400, 300);
                std::cout << "\n";
                std::cout << pna;
                std::cout << "\n-------------------------\n";
                std::cout << "\n---      HP: 0       ---\n";
                std::cout << "\n-------------------------\n";
            }
            if (s2 == 4)
            {
                std::cout << "Logras escapar pero dejas a " << pna << " atras y " << rival << " se queda con el.\n";
                std::cout << "Todos en el pueblo te vieron huir despavorido y asustado por \nlo cual se burlaron de ti y por lo cual te genero un trauma hacia los pokemones\n y ya nunca fuiste entrenador pokémon\n";

            }
        }
        if (q == 3)
        {
            int q3 = 0;
            std::cout << pna << " duda mucho sobre la decision de su entrenador pero aun asi lo obedece";
            std::cout << pna << " recive un gran golpe del pokemon de " << rival << " y le baja 30 puntos de vida OMG";
            std::cout << Beep(400, 300);
            std::cout << Beep(400, 300);
            std::cout << "\n";
            std::cout << pna;
            std::cout << "\n-------------------------\n";
            std::cout << "\n---      HP: 20       ---\n";
            std::cout << "\n-------------------------\n";

            std::cout << "Turno de " << name << "\n";

            std::cout << "\n--------------------------------------------------------\n";
            std::cout << "\n-------    *|1.- FIGHT|*           *|2.- BAG|*     -----\n";
            std::cout << "\n-------  *|3.- DO NOTHING|*        *|4.- RUN|*     -----\n";
            std::cout << "\n--------------------------------------------------------\n";

            std::cout << "¿Que haces " << name << "?\n";
            std::cin >> q3;
            if (q3 == 1)
            {
                std::cout << pna << " pega y logra hacer 20 de daño ";
                std::cout << Beep(400, 300);
                std::cout << Beep(400, 300);
                std::cout << "\n";
                std::cout << "Pokémon de " << rival;
                std::cout << "\n-------------------------\n";
                std::cout << "\n---      HP: 30       ---\n";
                std::cout << "\n-------------------------\n";
                std::cout << "El pokemon rival decide atacar con su poder especial...........\n ¡Pero falla!\n";
                std::cout << "¿Que haces?\n";
                std::cout << "\n--------------------------------------------------------\n";
                std::cout << "\n-------    *|1.- FIGHT|*           *|2.- BAG|*     -----\n";
                std::cout << "\n-------  *|3.- DO NOTHING|*        *|4.- RUN|*     -----\n";
                std::cout << "\n--------------------------------------------------------\n";
                int p = 0;
                std::cin >> p;
                if (p == 1)
                {
                    std::cout << Beep(400, 300);
                    std::cout << Beep(400, 300);
                    std::cout << pna << " le acierta un buen golpe y lo termina haciendo un knockout por dos golpes fuertes concecutivos";
                }
                if (p == 2)
                {
                    int sino;
                    std::cout << "En la bolsa solo tienes una paleta que acabas de comprar\n Obviamente no ibas a tener curas buenas, acabas de iniciar y estas en tu primera pelea con" << rival << "\n¿Quieres usarla en" << pna << "?";
                    std::cin >> sino;
                    if (sino == 1)
                    {
                        std::cout << "Le diste la paleta a " << pna << " la cual termina siendo el motivo de su muerte\n Resulta que no sabias que no se le puede dar comida humana a los pokemones\n" << pna << " se termino intoxicando y su vida bajo a 0";
                    }
                    else
                    {
                        std::cout << "No decidiste hacer nada y pierdes un turno asi por nomas";
                        std::cout << "El pokémon de " << rival << " termina haciendo otro ataque especial, pero esta vez no falla y por alguna razon te hace insta kill";
                    }

                }
                if (p == 3)
                {
                    std::cout << pna << " duda mucho sobre la decision de su entrenador pero aun asi lo obedece";
                    std::cout << pna << " recive un gran golpe del pokemon de " << rival << " y le baja 30 puntos de vida OMG";
                    std::cout << Beep(400, 300);
                    std::cout << Beep(400, 300);
                    std::cout << "\n";
                    std::cout << pna;
                    std::cout << "\n-------------------------\n";
                    std::cout << "\n---      HP: 0       ---\n";
                    std::cout << "\n-------------------------\n";
                }
                if (p == 4)
                {
                    std::cout << "Logras escapar pero dejas a " << pna << " atras y " << rival << " se queda con el.\n";
                    std::cout << "Todos en el pueblo te vieron huir despavorido y asustado por \nlo cual se burlaron de ti y por lo cual te genero un trauma hacia los pokemones\n y ya nunca fuiste entrenador pokémon\n";

                }


            }
            if (q3 == 2)
            {
                int sino;
                std::cout << "En la bolsa solo tienes una paleta que acabas de comprar\n Obviamente no ibas a tener curas buenas, acabas de iniciar y estas en tu primera pelea con" << rival << "\n¿Quieres usarla en" << pna << "?";
                std::cin >> sino;
                if (sino == 1)
                {
                    std::cout << "Le diste la paleta a " << pna << " la cual termina siendo el motivo de su muerte\n Resulta que no sabias que no se le puede dar comida humana a los pokemones\n" << pna << " se termino intoxicando y su vida bajo a 0";
                }
            }
            if (q3 == 3)
            {
                std::cout << pna << " duda mucho sobre la decision de su entrenador pero aun asi lo obedece";
                std::cout << pna << " recive un gran golpe del pokemon de " << rival << " y le baja 30 puntos de vida OMG";
                std::cout << Beep(400, 300);
                std::cout << Beep(400, 300);
                std::cout << "\n";
                std::cout << pna;
                std::cout << "\n-------------------------\n";
                std::cout << "\n---      HP: 0       ---\n";
                std::cout << "\n-------------------------\n";
            }
            if (q3 == 4)
            {
                std::cout << "Logras escapar pero dejas a " << pna << " atras y " << rival << " se queda con el.\n";
                std::cout << "Todos en el pueblo te vieron huir despavorido y asustado por \nlo cual se burlaron de ti y por lo cual te genero un trauma hacia los pokemones\n y ya nunca fuiste entrenador pokémon\n";
            }


        }
        if (q == 4)
        {
            std::cout << "Logras escapar pero dejas a " << pna << " atras y " << rival << " se queda con el.\n";
            std::cout << "Todos en el pueblo te vieron huir despavorido y asustado por \nlo cual se burlaron de ti y por lo cual te genero un trauma hacia los pokemones\n y ya nunca fuiste entrenador pokémon\n";
        }



        std::cout << Beep(300, 3000);
        for (i = 10; i <= 100; i++)
        {
            std::cout << "---------------------------------GAME OVER---------------------------------------------";
        }
        std::cout << Beep(300, 3000);
        {

        }
        std::cout << "¿Quieres volver a intentar " << name << "?\n";
        std::cin >> start;


    }
}