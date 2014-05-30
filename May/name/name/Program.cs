using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace name
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] parent = new int[26];
            int[] child = new int[26];
            bool flag;
            int num, N, i, len1, len2;
            string papa, str, con_child;
            num = Convert.ToInt32(Console.ReadLine());
            while (num-- != 0)
            {
                flag = true; con_child = "";
                for (i = 0; i < 26; i++)
                    parent[i] = child[i] = 0;
                papa = Console.ReadLine();
                N = Convert.ToInt32(Console.ReadLine());
                for (i = 0; i < N; i++)
                {
                    str = Console.ReadLine();
                    con_child += str;
                }
                len1 = papa.Length;
                len2 = con_child.Length;
                for (i = 0; i < len1; i++)
                    if (papa[i] != ' ')
                        parent[(int)papa[i] - 97]++;
                for (i = 1; i < len2; i++)
                    child[(int)con_child[i] - 97]++;
                for (i = 0; i < 26; i++)
                {
                    if (child[i] != 0 || parent[i] != 0)
                    {
                        if (child[i] > parent[i])
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                if (flag)
                    Console.WriteLine("YES");
                else
                    Console.WriteLine("NO");
            }
        }
    }
}
