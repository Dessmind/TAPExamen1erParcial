/**
 * @version 0.1
 * @date 08/06/2023
 * @autor Uriel Aguilar Carlos
 * @title Conversor de Millas Marinas a Metros
 */

#include <iostream>

using namespace std;

/**
 * @brief Solicita las millas que se desean transformar a metros.
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
void SolicitarMillas();

/**
 * @brief Calcula las millas marinas introducidas por el usuario a metros.
 * @param Ningun parametro
 * @return void
 * @code
    void MillasMarinasAMetros()
    {
        millasMarinasMetros = millasMarinas * 1852;
    }
 * @endcode;    
 */
void MillasMarinasAMetros();

/**
 * @brief Muestra las millas transformadas en metros.
 * @param Ningun parametro
 * @return void
 * @code
    void MostrarMetros()
    {
        cout<<"\nSus "<<millasMarinas<<" millas marinas equivalen a "<<millasMarinasMetros<<"m"<<endl;
    }
 * @endcode;    
 */
 void MostrarMetros();
 
/**
 * @brief Almacena las millas marinas introducidas por el usuario.
 */
float millasMarinas = 0;

/**
 * @brief Almacena las millas marinas introducidas por el usuario convertidas a metros.
 */
float millasMarinasMetros = 0;

/**
 * @brief Se llaman a las funciones necesarias para la conversion en orden;
 * @param Ningun parametro
 * @return 0;
 * @code
    int main()
    {
        SolicitarMillas();
        MillasMarinasAMetros();
        MostrarMetros();
        
        
        return 0;
    } 
 * @endcode;    
 */
int main()
{
    SolicitarMillas();
    MillasMarinasAMetros();
    MostrarMetros();
    
    
    return 0;
} 

void SolicitarMillas()
{
    cout<<"\tBIENVENIDO"<<endl<<endl;
    
    cout<<"Introduzca sus millas marinas: ";
    cin>>millasMarinas;
}

void MillasMarinasAMetros()
{
    millasMarinasMetros = millasMarinas * 1852;
}

void MostrarMetros()
{
    cout<<"\nSus "<<millasMarinas<<" millas marinas equivalen a "<<millasMarinasMetros<<"m"<<endl;
}