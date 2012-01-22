/*
 * Program for finding winner of
 * game of elemination.
 */

import java.*;

public class Game {
        int[] g;
        Game(int max)
        {
            g = new int[max];
            for (int i = 0; i < max; i++)
            {
                g[i] = 1;
            }
        }
        public int winner()
        {
            int j;
            for (j = 0; j < g.length; j++)
            {
                if (g[j] == 1)
                {
                    return j;
                }
            }
            return -1;

        }
    
    public static void main(String[] args) {
      
            //Enter total number of players:
            int m = Integer.parseInt(args[0]);
  
			//Eenter value of N :
            int n = Integer.parseInt(args[1]);
            
			System.out.print("Total no. of player is:"+m+"\n");
            System.out.print("Random no N is:"+n+"\n");
            
			Game g1 = new Game(m);
            int count = 1;
            int incr = n, c = m;
            g1.g[n - 1] = 0;
            count = n - 1;      //pointer in array
            while (c > 2)
            {
                int p = 0;
                while (p < incr)
                {
                    count++;
                    if (count >= m)
                    {
                        count = count % m;
                    }
                    if (g1.g[count] == 1)
                    {
                        p++;
                    }
                }
                g1.g[count] = 0;
                c--;
            }
            System.out.print("winner is :" + (g1.winner() + 1));
        }
    }

