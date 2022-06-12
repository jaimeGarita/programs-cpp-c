
#ifndef TALLER_H
#define TALLER_H

#include std::string

class Taller
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Taller();

  /**
   * Empty Destructor
   */
  virtual ~Taller();



  /**
   * @return bool
   * @param  vehicle
   */
  bool meter_vehiculo(vehiculo vehicle)
  {
  }


  /**
   * @return bool
   */
  bool arreglar_vehiculo()
  {
  }

private:
  // Private attributes
  //  

  unsigned int max_vehiculo;
  unsigned int num_vehiculos;
  vehiculo nuevo_atributo;

  // Private attribute accessor methods
  //  


  /**
   * Set the value of max_vehiculo
   * @param value the new value of max_vehiculo
   */
  void setMax_vehiculo(unsigned int value)
  {
    max_vehiculo = value;
  }

  /**
   * Get the value of max_vehiculo
   * @return the value of max_vehiculo
   */
  unsigned int getMax_vehiculo()
  {
    return max_vehiculo;
  }

  /**
   * Set the value of num_vehiculos
   * @param value the new value of num_vehiculos
   */
  void setNum_vehiculos(unsigned int value)
  {
    num_vehiculos = value;
  }

  /**
   * Get the value of num_vehiculos
   * @return the value of num_vehiculos
   */
  unsigned int getNum_vehiculos()
  {
    return num_vehiculos;
  }

  /**
   * Set the value of nuevo_atributo
   * @param value the new value of nuevo_atributo
   */
  void setNuevo_atributo(vehiculo value)
  {
    nuevo_atributo = value;
  }

  /**
   * Get the value of nuevo_atributo
   * @return the value of nuevo_atributo
   */
  vehiculo getNuevo_atributo()
  {
    return nuevo_atributo;
  }

  void initAttributes();

};

#endif // TALLER_H
