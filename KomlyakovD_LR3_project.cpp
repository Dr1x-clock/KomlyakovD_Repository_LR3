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
        Console.WriteLine("Задание 1: Введение натурального числа X");
        Console.Write("Введите натуральное число X: ");
        
        int X;
        // Проверка корректности ввода (натуральное число > 0)
        while (!int.TryParse(Console.ReadLine(), out X) || X <= 0)
        {
            Console.Write("Ошибка! Введите корректное натуральное число (целое положительное!): ");
        }
        
        Console.WriteLine($"\nВы ввели число: {X}");
        Console.WriteLine("\nНажмите любую клавишу для возврата в меню.");
        Console.ReadKey();
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