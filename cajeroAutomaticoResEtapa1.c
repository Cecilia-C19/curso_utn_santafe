#include <stdio.h>
#include <stdlib.h>

const int MAX_CLIENTES = 10;
const int MAX_OPERACIONES = 10;

int cuentas[10];
int pass[10];
float saldos[10];
int estados[10];

// prototipos de la funciones
void cargarClientes();
void mostrarMenu();
int iniciarSesion();
void realizarDeposito(int indiceCliente);
void realizarExtraccion(int indiceCliente);
void consultarSaldo(int indiceCliente);
void realizarTransferencia(int indiceCliente);
void mostrarOperacionesYSaldo(int indiceCliente, int cantOperaciones);

int main()
{
    cargarClientes(); // llamamos a la funcion que carga los datos de los clientes en los arreglos

    int indiceClienteActual = -1; // en esta variable vamos a almacenar el indice del cliente que inició sesión
                                  // la inicializamos en un valor de índice inválido
                                  //(recordar que los arreglos comienzan con indice 0)
    int cantidadOperaciones = 0;  // en esta variable vamos a ir contando la cantidad de operaciones
                                  // que realiza el cliente que inició sesión

    int estadoCajero = 1; // esta variable la vamos a utilizar para que el cajero siga activo aunque no
                          // haya ningún cliente operandolo

    while (estadoCajero == 1) // hacemos un bucle infinito para que el cajero siga activo, que este disponible
                              // siempre para que un cliente opere
    {
        system("cls"); // función que llamamos para limpiar la consola, para que no quede información del cliente anterior
        printf("Bienvenido al cajero =)\n");

        cantidadOperaciones = 0; // inicializamos en 0 cada vez que el cajero queda disponible para operar con otro cliente

        indiceClienteActual = iniciarSesion();
        if (indiceClienteActual != -1)
        {
            int opcion;
            do
            {
                mostrarMenu(); // llamamos a la función que muestra el menú en la consola
                scanf("%d", &opcion);
                switch (opcion)
                {
                case 1:
                    realizarDeposito(indiceClienteActual);
                    cantidadOperaciones++; //incremento en 1 la cantidad de operaciones realizadas
                    break;
                case 2:
                    realizarExtraccion(indiceClienteActual);
                    cantidadOperaciones++; //incremento en 1 la cantidad de operaciones realizadas
                    break;
                case 3:
                    consultarSaldo(indiceClienteActual);
                    cantidadOperaciones++; //incremento en 1 la cantidad de operaciones realizadas
                    break;
                case 4:
                    realizarTransferencia(indiceClienteActual);
                    cantidadOperaciones++; //incremento en 1 la cantidad de operaciones realizadas
                    break;
                case 5:
                    mostrarOperacionesYSaldo(indiceClienteActual, cantidadOperaciones);
                    //esta acción segun el enunciado no cuenta como operación realizada
                    break;
                case 6:
                    printf("Sesión finalizada. Gracias.\n\n");
                    break;
                default:
                    printf("Opción inválida. Por favor, ingrese una opción válida.\n");
                    break;
                }
            } while (opcion != 6 && cantidadOperaciones < MAX_OPERACIONES);
            //el menu se repite mientras el cliente no ingrese 5 y la cantidad de operaciones sea menor a la MAX_OPERACIONES (esta variable esta iniclaizada en 0) 
            
            if (cantidadOperaciones >= MAX_OPERACIONES)
            {
                printf("Ha alcanzado el límite de operaciones. Gracias.\n");
            }
        }

        system("pause");
    }

    return 0;
}

void cargarClientes()
{
    // cargamos cada arreglo con los datos de cada cliente
    cuentas[0] = 111;
    cuentas[1] = 222;
    cuentas[2] = 333;
    cuentas[3] = 444;
    cuentas[4] = 555;
    cuentas[5] = 666;
    cuentas[6] = 777;
    cuentas[7] = 888;
    cuentas[8] = 999;
    cuentas[9] = 123;

    pass[0] = 1234;
    pass[1] = 2345;
    pass[2] = 1111;
    pass[3] = 2587;
    pass[4] = 3698;
    pass[5] = 2569;
    pass[6] = 2541;
    pass[7] = 2387;
    pass[8] = 4987;
    pass[9] = 1458;

    saldos[0] = 177000.0;
    saldos[1] = 562000.0;
    saldos[2] = 300000.0;
    saldos[3] = 94000.0;
    saldos[4] = 599000.0;
    saldos[5] = 654000.0;
    saldos[6] = 5000.0;
    saldos[7] = 89000.0;
    saldos[8] = 90000.0;
    saldos[9] = 10000.0;

    estados[0] = 1; // 1 activo, 0 bloqueado
    estados[1] = 1;
    estados[2] = 1;
    estados[3] = 1;
    estados[4] = 0;
    estados[5] = 1;
    estados[6] = 1;
    estados[7] = 0;
    estados[8] = 1;
    estados[9] = 1;
}

void mostrarMenu()
{
    printf("\nSeleccione una opción:\n");
    printf("1. Realizar un depósito\n");
    printf("2. Realizar una extracción\n");
    printf("3. Consultar el saldo de la cuenta\n");
    printf("4. Realizar una transferencia entre Cuentas\n");
    printf("5. Mostrar cantidad de operaciones realizadas y saldo actual\n");
    printf("6. Salir de la sesión\n");
    printf("Opción: ");
}

/// pide al cliente su usuario y contraseña, valida los intentos, bloquea al cliente si se agotan los intentos
/// devuelve el indice del cliente que inicia sesión o -1 en caso contrario
int iniciarSesion()
{
    int indiceCliente = -1;
    int numeroCuenta, contrasena;
    int intentosFallidos = 1;
    printf("Ingrese su número de cuenta: ");
    scanf("%d", &numeroCuenta); // el cliente ingresa un nro de cuenta
    int i = 0;
    while (indiceCliente == -1 && i < MAX_CLIENTES)
    {
        if (cuentas[i] == numeroCuenta)
        {

            if (estados[i] == 1) // si el usuario se encuetra activo
            {
                do
                {
                    printf("Ingrese su contraseña: ");
                    scanf("%d", &contrasena);
                    if (pass[i] == contrasena)
                    {
                        indiceCliente = i;
                    }
                    else
                    {
                        intentosFallidos++;
                        printf("Número de cuenta o contraseña incorrecta.\n"); // no le damos información al usuario de en qué se equivocó
                    }
                } while (pass[i] != contrasena && intentosFallidos <= 3);

                if (intentosFallidos > 3)
                {
                    estados[i] = 0; // Bloqueamos la cuenta del cliente
                    printf("No se permiten más intentos. Su cuenta ha sido bloqueada; comuníquese con la entidad bancaria.\n\n");
                    i = MAX_CLIENTES; // no sigo recorriendo las cuentas, fuerzo a salir del bloque while
                }
            }
            else
            {
                printf("Su cuenta se encuentra bloqueada; comuníquese con la entidad bancaria.\n\n");
                i = MAX_CLIENTES; // no sigo recorriendo las cuentas, fuerzo a salir del bloque while
            }
        }

        i++;
    }
    if (indiceCliente == -1 && i == MAX_CLIENTES) // si la i es igual a la maxima cantidad de clientes es porque el numero de cuenta no se encontro en el arreglo de cuentas
    {
        printf("Número de cuenta o contraseña incorrecta. Intente nuevamente.\n\n");
    }
    return indiceCliente;
}

void realizarDeposito(int indiceCliente)
{
    float monto;
    do
    {
        printf("Ingrese el monto a depositar: $");
        scanf("%f", &monto);
        if (monto <= 0)
        {
            printf("El monto debe ser positivo. Por favor, intente nuevamente.\n");
        }
    } while (monto <= 0);
    saldos[indiceCliente] += monto;
    printf("Depósito realizado. Nuevo saldo: $%.2f\n", saldos[indiceCliente]);
}

void realizarExtraccion(int indiceCliente)
{
    float monto;
    do
    {
        printf("Ingrese el monto a extraer: $");
        scanf("%f", &monto);
        if (monto <= 0)
        {
            printf("El monto debe ser positivo. Por favor, intente nuevamente.\n");
        }
    } while (monto <= 0);

    if (monto <= saldos[indiceCliente])
    {
        saldos[indiceCliente] -= monto;
        printf("Extracción realizada. Nuevo saldo: $%.2f\n", saldos[indiceCliente]);
    }
    else
    {
        printf("Monto de extracción excede el saldo disponible. Operación cancelada.\n");
    }
}

void consultarSaldo(int indiceCliente)
{
    printf("Su saldo actual es: $%.2f\n", saldos[indiceCliente]);
}

void realizarTransferencia(int indiceCliente)
{
    int numeroCuentaDestino;
    float monto;
    printf("Ingrese el número de cuenta destino: ");
    scanf("%d", &numeroCuentaDestino);
    int clienteDestinoIndex = -1;
    int i = 0;
    while (i < MAX_CLIENTES && clienteDestinoIndex == -1)
    {
        if (cuentas[i] == numeroCuentaDestino && estados[i] == 1)
        {
            clienteDestinoIndex = i;
        }
        i++;
    }

    if (clienteDestinoIndex != -1)
    {
        do
        {
            printf("Ingrese el monto a transferir: $");
            scanf("%f", &monto);
            if (monto <= 0)
            {
                printf("El monto debe ser positivo. Por favor, intente nuevamente.\n");
            }
        } while (monto <= 0);

        if (monto <= saldos[indiceCliente])
        {
            saldos[indiceCliente] -= monto;
            saldos[clienteDestinoIndex] += monto;
            printf("Transferencia realizada. Nuevo saldo: $%.2f\n", saldos[indiceCliente]);
        }
        else
        {
            printf("Monto de transferencia excede el saldo disponible. Operación cancelada.\n");
        }
    }
    else
    {
        printf("Número de cuenta destino incorrecto o cuenta destino bloqueada. Operación cancelada.\n");
    }
}

void mostrarOperacionesYSaldo(int indiceCliente, int cantOperaciones)
{
    printf("Cantidad de operaciones realizadas: %d\n", cantOperaciones);
    printf("Saldo actual: $%.2f\n", saldos[indiceCliente]);
}
