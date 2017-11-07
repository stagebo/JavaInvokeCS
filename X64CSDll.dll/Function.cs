using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace X64CSDll
{
    public class Function
    {
        public int add(int a, int b)
        {
            return a + b;
        }
        public string getString(string a, string b)
        {
            return a + " [c# connector] " + b;
        }
    }
}
