/**
 * @version 0.1
 * @date 08/06/2023
 * @autor Uriel Aguilar Carlos
 * @title Conversor de Millas Marinas a Metros
 */

#include <iostream>

using namespace std;

/**
 * @brief Calcula y muestra las millas marinas introducidas por el usuario en metros.
 * @param Ningun parametro
 * @return void
 * @code
    void MillasMarinasAMetros()
    {
        cout<<"\tBIENVENIDO"<<endl<<endl;
        cout<<"Introduzca sus millas marinas: ";
        cin>>millasMarinas;
        
        millasMarinasMetros = millasMarinas * 1852;
        
        cout<<"\nSus "<<millasMarinas<<" millas marinas equivalen a "<<millasMarinasMetros<<"m"<<endl;
    }
 * @endcode;    
 */
void MillasMarinasAMetros();

/**
 * @brief Almacena las millas marinas introducidas por el usuario.
 */
float millasMarinas = 0;

/**
 * @brief Almacena las millas marinas introducidas por el usuario convertidas a metros.
 */
float millasMarinasMetros = 0;

/**
 * @brief Se llama a la funcion MillasMarinasAMetros();
 * @param Ningun parametro
 * @return 0;
 * @code
    int main()
    {
        MillasMarinasAMetros();
        
        
        return 0;
    } 
 * @endcode;    
 */
int main()
{
    MillasMarinasAMetros();
    
    
    return 0;
} 

void MillasMarinasAMetros()
{
    cout<<"\tBIENVENIDO"<<endl<<endl;
    cout<<"Introduzca sus millas marinas: ";
    cin>>millasMarinas;
    
    millasMarinasMetros = millasMarinas * 1852;
    
    cout<<"\nSus "<<millasMarinas<<" millas marinas equivalen a "<<millasMarinasMetros<<"m"<<endl;
}