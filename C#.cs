using System;

namespace VietJackCsharp
{
    class TestCsharp
    {
        public static void Main()
        {

            int chk_year;
            Console.Write("\n\n");
            Console.Write("Nhap mot nam bat ky de kiem tra: ");
            chk_year = Convert.ToInt32(Console.ReadLine());

            if ((chk_year % 400) == 0)
                Console.WriteLine("{0} la nam nhuan.\n", chk_year);
            else if ((chk_year % 100) == 0)
                Console.WriteLine("{0} khong phai la nam nhuan.\n", chk_year);
            else if ((chk_year % 4) == 0)
                Console.WriteLine("{0} la nam nhuan.\n", chk_year);
            else
                Console.WriteLine("{0} khong phai la nam nhuan.\n", chk_year); 

            Console.ReadKey();
        } 
    }
}
