#Actuadores de un robot
class Actuador:
    def __init__(self, nombre : str = "", est = False):
        if  not isinstance(nombre, str):
            raise TypeError("Los argumentos del objeto no son los indicados. Por favor verificarlos")

        if not nombre.strip():
            raise ValueError("El nombre está vacio. Por favor ingresar un nombre válido")


        self.__nombre = nombre
        self._estado = est

    def activar(self,*args, **kwargs):
        self._estado = True 
        return "Actuador activado"

    def desactivar(self,*args, **kwargs):
        self._estado = False 
        return "Actuador desactivado"

    def estado(self,*args, **kwargs):
        if self._estado:
            return "Actuador activo"
        else: return "Actuador inactivo"

    @property
    def nombre(self):
        return self.__nombre   

    @nombre.setter
    def nombre(self, nuevo_nombre : str):
        if  not isinstance(nuevo_nombre, str):
            print("El nuevo nombre debería ser un caracter")
        else: self.__nombre = nuevo_nombre

        

class Motor(Actuador):
    def __init__(self, nombre, est=False, giro = False):
        self.giro = giro
        super().__init__(nombre, est) 

    def girar(self,*args, **kwargs):
        Motor.activar(self)
        return "Motor girando a 100 RPM" 

    def detener(self,*args, **kwargs):
        Motor.desactivar(self)
        return "Motor deteniendose"
        

class Servo(Actuador):
    def __init__(self, nombre, est=False):
        super().__init__(nombre, est)

    def mover_angulo(self, angulo :  float,*args, **kwargs):
        if self._estado:
            return f"Servo movido a {angulo}°"
        else: return "Debes encender el motor para que el servo poeda moverse"


actGeneral = Actuador("Cilindro giratorio")



#ZONA DE PRUEBAS

#Probamos los métodos con la clase general Actuador
actGeneral = Actuador("Cilindro rotatorio")
print(actGeneral.estado())
print(actGeneral.activar())
print(actGeneral.estado())
print(actGeneral.desactivar())
print(actGeneral.estado())
print(actGeneral.nombre)
actGeneral.nombre = "Cilindro y ya"
print(actGeneral.nombre)
print("\n")

#Probamos los métodos con la clase hija Motor
miMotor = Motor("Taladro")
print(miMotor.girar())
print(miMotor.estado())
print(miMotor.detener(34))
print(miMotor.estado())
print(miMotor.nombre)
print("\n")

#Probamos los métodos con la clase hija Servo
miServo = Servo("Extremidad")
print(miServo.nombre)
miServo.nombre = "Mi brazo robótico"
print(miServo.nombre)
print(miServo.estado())
print(miServo.activar())
print(miServo.mover_angulo(100))
print(miServo.activar())











        