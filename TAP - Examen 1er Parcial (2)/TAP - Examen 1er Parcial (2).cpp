/**
 * @version 0.1
 * @date 08/06/2023
 * @autor Uriel Aguilar Carlos
 * @title Conversor de Segundos a Hrs/Min/Seg
 */

#include <iostream>

using namespace std;

/**
 * @brief Calcula y muestra los segundos en hrs, min, seg
 * @param Ningun parametro
 * @return void
 * @code
    void SegundosAHrsMinSeg()
    {
        cout<<"               BIENVENIDO                 "<<endl<<endl;
        
        cout<<"Cantidad de segundos que desea convertir: ";
        cin>>seg; //3,601 seg
        
        while(seg>=60)
        {
            seg -= 60;
            m += 1;
        }
        
        while(m>=60)
        {
            m -= 60;
            hrs += 1;
        }
        
        cout<<"\nSu tiempo en hrs/min/seg es: "<<hrs<<"hrs "<<m<<"min "<<seg<<"seg"<<endl;
        
        
    }
 * @endcode;    
 */
void SegundosAHrsMinSeg();

/**
 * @brief Almacena los segundos.
 */
int seg = 0;

/**
 * @brief Almacena los minutos.
 */
int m = 0;

/**
 * @brief Almacena las horas.
 */
int hrs = 0;


/**
 * @brief Se llama a la funcion SegundosAHrsMinSeg();
 * @param Ningun parametro
 * @return 0;
 * @code
    int main()
    {
        SegundosAHrsMinSeg();
        
        
        return 0;
    } 
 * @endcode;    
 */
int main()
{
    SegundosAHrsMinSeg();

    return 0;
}

void SegundosAHrsMinSeg()
{
    cout<<"               BIENVENIDO                 "<<endl<<endl;
    
    cout<<"Cantidad de segundos que desea convertir: ";
    cin>>seg; //3,601 seg
    
    while(seg>=60)
    {
        seg -= 60;
        m += 1;
    }
    
    while(m>=60)
    {
        m -= 60;
        hrs += 1;
    }
    
    cout<<"\nSu tiempo en hrs/min/seg es: "<<hrs<<"hrs "<<m<<"min "<<seg<<"seg"<<endl;
    
    
}