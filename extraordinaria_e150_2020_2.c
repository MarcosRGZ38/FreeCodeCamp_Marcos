#include<stdio.h>

int main(void)
{
    int i=0, contador=0;
    char texto[] = "ABOUT TWO-THIRDS OF THE MASS OF THE HUMAN BRAIN IS IN THE CEREBRAL CORTEX, DEVOTED TO INTUITION AND REASON. HUMANS HAVE EVOLVED GREGARIOUSLY. WE DELIGHT IN EACH OTHER’S COMPANY; WE CARE FOR ONE ANOTHER. WE COOPERATE. ALTRUISM IS BUILT INTO US. WE HAVE BRILLIANTLY DECIPHERED SOME OF THE PATTERNS OF NATURE. WE HAVE SUFFICIENT MOTIVATION TO WORK TOGETHER AND THE ABILITY TO FIGURE OUT HOW TO DO IT. IF WE ARE WILLING TO CONTEMPLATE NUCLEAR WAR AND THE WHOLESALE DESTRUCTION OF OUR EMERGING GLOBAL SOCIETY, SHOULD WE NOT ALSO BE WILLING TO CONTEMPLATE A WHOLESALE RESTRUCTURING OF OUR SOCIETIES? FROM AN EXTRATERRESTRIAL PERSPECTIVE, OUR GLOBAL CIVILIZATION IS CLEARLY ON THE EDGE OF FAILURE IN THE MOST IMPORTANT TASK IT FACES: TO PRESERVE THE LIVES AND WELL BEING OF THE CITIZENS OF THE PLANET. SHOULD WE NOT THEN BE WILLING TO EXPLORE VIGOROUSLY, IN EVERY NATION, MAJOR CHANGES IN THE TRADITIONAL WAYS OF DOING THINGS, A FUNDAMENTAL REDESIGN OF ECONOMIC, POLITICAL, SOCIAL AND RELIGIOUS INSTITUTIONS?";
    while(texto[i] != '\0')
    {
        contador++;
        i++;
    }
    for(i=0;i<contador;i++)
    {
        if(texto[i] >= 'A' && texto[i] <= 'Z' && texto[i-1] != ' ')
        {
            texto[i]+='a'-'A';
        }
    }
    for(i=0;i<contador;i++)
    {
        if(texto[i] == 'a')
        {
            texto[i] = '@';
        }
        if(texto[i] == 'e')
        {
            texto[i] = '3';
        }
        if(texto[i] == 'o')
        {
            texto[i] = '0';
        }
        if(texto[i] == 'i')
        {
            texto[i] = '!';
        }
        if(texto[i] == 'u')
        {
            texto[i] = '#';
        }
    }

    printf("%s", texto);

    return 0;
}
