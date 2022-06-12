
#ifndef VEHICULO_H
#define VEHICULO_H

#include std::string

class vehiculo
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  vehiculo();

  /**
   * Empty Destructor
   */
  virtual ~vehiculo();



  /**
   */
  void repostar()
  {
  }


  /**
   */
  void acelerar()
  {
  }

private:
  // Private attributes
  //  

  cadena (string) color;
  cadena (string) modelo;

  // Private attribute accessor methods
  //  


  /**
   * Set the value of color
   * @param value the new value of color
   */
  void setColor(cadena (string) value)
  {
    color = value;
  }

  /**
   * Get the value of color
   * @return the value of color
   */
  cadena (string) getColor()
  {
    return color;
  }

  /**
   * Set the value of modelo
   * @param value the new value of modelo
   */
  void setModelo(cadena (string) value)
  {
    modelo = value;
  }

  /**
   * Get the value of modelo
   * @return the value of modelo
   */
  cadena (string) getModelo()
  {
    return modelo;
  }

  void initAttributes();

};

#endif // VEHICULO_H
