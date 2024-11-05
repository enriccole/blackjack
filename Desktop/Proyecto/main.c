#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_PREGUNTAS 6 // Número total de preguntas por categoría

// Funciones para preguntar sobre los años de las series
void preguntarAnysComedia() {
    char respuesta;
    printf("¿De qué año se inventó la comedia? (a) 500 a.C. (b) 1000 d.C. (c) 1500 d.C.\n");
    printf("Respuesta: ");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        printf("¡Correcto! La comedia se remonta a 500 a.C.\n");
    } else {
        printf("Incorrecto. La respuesta correcta es (a) 500 a.C.\n");
    }
}

void preguntarAnysAccion() {
    char respuesta;
    printf("¿Qué año se estrenó la serie 'Juego de Tronos'? (a) 2011 (b) 2015 (c) 2019\n");
    printf("Respuesta: ");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        printf("¡Correcto! 'Juego de Tronos' se estrenó en 2011.\n");
    } else {
        printf("Incorrecto. La respuesta correcta es (a) 2011.\n");
    }
}

void preguntarAnysDrama() {
    char respuesta;
    printf("¿En qué año se lanzó 'Breaking Bad'? (a) 2008 (b) 2010 (c) 2012\n");
    printf("Respuesta: ");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        printf("¡Correcto! 'Breaking Bad' se lanzó en 2008.\n");
    } else {
        printf("Incorrecto. La respuesta correcta es (a) 2008.\n");
    }
}

void preguntarAnysRomantica() {
    char respuesta;
    printf("¿Cuál es la serie romántica basada en un libro de Diana Gabaldon? (a) Outlander (b) Bridgerton (c) Gossip Girl\n");
    printf("Respuesta: ");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        printf("¡Correcto! 'Outlander' está basado en el libro de Diana Gabaldon.\n");
    } else {
        printf("Incorrecto. La respuesta correcta es (a) Outlander.\n");
    }
}

void preguntarAnysThriller() {
    char respuesta;
    printf("¿Qué serie de thriller sigue a un asesino en serie que es un agente de la ley? (a) You (b) Mindhunter (c) Ozark\n");
    printf("Respuesta: ");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        printf("¡Correcto! 'You' sigue a un asesino en serie que es un agente de la ley.\n");
    } else {
        printf("Incorrecto. La respuesta correcta es (a) You.\n");
    }
}

void preguntarAnysCienciaFiccion() {
    char respuesta;
    printf("¿En qué año se lanzó 'Stranger Things'? (a) 2015 (b) 2016 (c) 2017\n");
    printf("Respuesta: ");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        printf("¡Correcto! 'Stranger Things' se lanzó en 2015.\n");
    } else {
        printf("Incorrecto. La respuesta correcta es (a) 2015.\n");
    }
}

// Función para hacer preguntas iniciales sobre el tipo de serie
void preguntesInicials(int usadas[]) {
    char respuesta;
    int random;

    for (int i = 0; i < NUM_PREGUNTAS; i++) {
        // Genera un número aleatorio entre 0 y 5 para seleccionar la pregunta
        do {
            random = rand() % 6;
        } while (usadas[random] == 1); // Repetir si la pregunta ya ha sido utilizada

        // Preguntas aleatorias
        switch (random) {
            case 0: // Comedia
                printf("La serie que estás pensando es de comedia? (s/n)\n");
                scanf(" %c", &respuesta);
                if (respuesta == 's') {
                    preguntarAnysComedia();
                }
                break;
            case 1: // Acción
                printf("La serie que estás pensando es de acción? (s/n)\n");
                scanf(" %c", &respuesta);
                if (respuesta == 's') {
                    preguntarAnysAccion();
                }
                break;
            case 2: // Drama
                printf("La serie que estás pensando es un drama? (s/n)\n");
                scanf(" %c", &respuesta);
                if (respuesta == 's') {
                    preguntarAnysDrama();
                }
                break;
            case 3: // Romántica
                printf("La serie tiene una trama romántica? (s/n)\n");
                scanf(" %c", &respuesta);
                if (respuesta == 's') {
                    preguntarAnysRomantica();
                }
                break;
            case 4: // Thriller
                printf("La serie es un thriller? (s/n)\n");
                scanf(" %c", &respuesta);
                if (respuesta == 's') {
                    preguntarAnysThriller();
                }
                break;
            case 5: // Ciencia Ficción
                printf("La serie incluye temas de ciencia-ficción? (s/n)\n");
                scanf(" %c", &respuesta);
                if (respuesta == 's') {
                    preguntarAnysCienciaFiccion();
                }
                break;
        }
        
        // Marcar la pregunta como utilizada
        usadas[random] = 1; // Marcar como utilizada

        // Verificar si todas las preguntas han sido utilizadas
        int todasUsadas = 1;
        for (int j = 0; j < 6; j++) {
            if (usadas[j] == 0) {
                todasUsadas = 0;
                break;
            }
        }
        
        if (todasUsadas) {
            printf("¡Todas las preguntas de este tipo han sido utilizadas!\n");
            break;
        }
    }
}

int main()
{

    srand(time(NULL));

    const char* preguntes[] = {
        "La serie que estas pensant es de comedia?",
        "La serie que estas pensant es d'accio?",
        "La serie que estas pensant es un drama?",
        "La serie te una trama romantica?",
        "La serie inclou temes de ciencia-ficcio?",
        "La serie es un thriller?"};

    printf("Comedia:\n");
    printf("The Office (US)\n");
    printf("Brooklyn Nine-Nine\n");
    printf("La que se avecina\n");
    printf("Aqui no hay quien viva\n");
    printf("Los simpsons\n");
    printf("Big bang theory\n\n");

    printf("Acción:\n");
    printf("Juego de tronos\n");
    printf("The boys\n");
    printf("The Punisher\n");
    printf("Vikings\n");
    printf("The Mandalorian\n");
    printf("Los hermanos grimm\n\n");

    printf("Drama:\n");
    printf("Breaking Bad\n");
    printf("The Crown\n");
    printf("Peaky Blinders\n");
    printf("Succession\n");
    printf("Better Call Saul\n");
    printf("Los soprano\n\n");

    printf("Romántica:\n");
    printf("Outlander\n");
    printf("Anatomía de grey\n");
    printf("Bridgerton\n");
    printf("Love\n");
    printf("Gossip Girl\n");
    printf("Normal People\n\n");

    printf("Thriller:\n");
    printf("Mindhunter\n");
    printf("Ozark\n");
    printf("The Fall\n");
    printf("You\n");
    printf("Narcos\n");
    printf("Dahmer\n\n");

    printf("Ciencia Ficción:\n");
    printf("Stranger Things\n");
    printf("Ricky y Morty\n");
    printf("Black Mirror\n");
    printf("The walking dead\n");
    printf("Loki\n");
    printf("Andor\n");

    int usadas[NUM_PREGUNTAS] = {0}; 
    preguntesInicials(usadas); 

}