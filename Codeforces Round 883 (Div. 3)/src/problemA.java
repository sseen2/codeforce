// https://codeforces.com/contest/1846/problem/A

import java.util.*;
import java.io.*;
public class problemA {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(in.readLine());
		while (t-- > 0) {
			int n = Integer.parseInt(in.readLine());
			int[][] rope = new int[n][2];
			int count = 0;
			
			for (int i = 0; i < rope.length; i++) {
				String[] s = in.readLine().split(" ");
				int a = Integer.parseInt(s[0]);
				int b = Integer.parseInt(s[1]);
				// 나사의 높이 보다 줄의 길이가 짧으면 줄을 자름
				if (a > b)
					count++;
				rope[i][0] = Integer.parseInt(s[0]);
				rope[i][1] = Integer.parseInt(s[1]);
			}
			
			System.out.println(count);
			
//			첫 풀이
//			int tempI = 0;
//			int tempJ = 0;
//			for (int i = 0; i < rope.length - 1; i++) {
//				if (rope[i][0] > rope[i + 1][0]) {
//					tempI = rope[i][0];
//					tempJ = rope[i][1];
//					rope[i][0] = rope[i+1][0];
//					rope[i][1] = rope[i+1][1];
//					rope[i+1][0] = tempI;
//					rope[i+1][1] = tempJ;
//				}
//			}
//			
//			for (int i = 0; i < rope.length; i++) {
//				if (rope[i][0] > rope[i][1]) {
//					count++;
//				}
//			}
		}
		in.close();
	}
}