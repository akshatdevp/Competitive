import java.util.*;
import java.io.*;
class NPerformStringShifts {
	public String stringShift(String s, int[][] shift) {
		int start=0;
		for(int i[]:shift)
		{
			int change=i[1]%s.length();
			if(i[0]==1)
			{
				start=start-change;
				if(start<0)
					start=s.length()+start;
			}
			else
			{
				start+=change;
				if(start>s.length()-1)
					start=start%s.length();
			}
			//System.out.print(start);
		}
		return s.substring(start)+s.substring(0,start);
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		int x=sc.nextInt(),y=2;
		int shiftarr[][]=new int[x][y];
		for(int i=0;i<x;i++)
			for(int j=0;j<y;j++)
				shiftarr[i][j]=sc.nextInt();
		NPerformStringShifts np=new NPerformStringShifts();
		System.out.println(np.stringShift(s,shiftarr));

	}
}
