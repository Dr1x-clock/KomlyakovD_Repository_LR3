using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KomlyakovD_LR3_project
{
    public class Program
    {
        static void Main(string[] args)
        {
            //Комляков Д.
            while (true)
            {
                Console.Clear();
                Console.WriteLine("Выберите задание:");
                Console.WriteLine("1: Введение натурального числа X");
                Console.WriteLine("2: Введение цифры N (которая меньше числа разрядов числа X)");
                Console.WriteLine("3: Определение произведения первых N цифр натурального числа X");
                Console.WriteLine("4: Определение суммы цифр введенного числа X");
                Console.WriteLine("0: Выход из программы");
                Console.Write("Введите ваш выбор: ");

                string choice = Console.ReadLine();

                if (choice == "0")
                {
                    break;
                }

                switch (choice)
                {
                    case "1":
                        Zadanie1();
                        break;
                    case "2":
                        Zadanie2();
                        break;
                    case "3":
                        Zadanie3();
                        break;
                    case "4":
                        Zadanie4();
                        break;
                    default:
                        Console.WriteLine("Некорректный выбор! Введите число от 0 до 3");
                        Console.WriteLine("Нажмите любую клавишу для продолжения...");
                        Console.ReadKey();
                        break;
                }
            }
        }

        static void Zadanie1()
        {
            Console.Clear();
        
        }

        static void Zadanie2()
        {
            Console.Clear();
            
        }

        static void Zadanie3()
        {
            Console.Clear();
            
        }

        static void Zadanie4()
        {
            Console.Clear();
        }
    }
}