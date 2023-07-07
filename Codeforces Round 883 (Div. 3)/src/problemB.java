// https://codeforces.com/contest/1846/problem/B

import java.util.*;
import java.io.*;
public class problemB {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(in.readLine());
		while (num-- > 0) {
			char[][] t = new char[3][3];

			// tic-tac-toe 저장
			for(int i = 0; i < 3; i++) {
				char[] c = in.readLine().toCharArray();
				for (int j = 0; j < 3; j++) {
					t[i][j] = c[j];
				}
			}

			boolean result = false;
			for (int i = 0; i < 3; i++) {
				if ((t[i][0] == t[i][1] && t[i][1] == t[i][2]) && t[i][0] != '.') {
					// 가로 
					System.out.println(t[i][0]);
					result = true;
					break;
				}
				else if (t[0][i] == t[1][i] && t[1][i] == t[2][i] && t[0][i] != '.') {
					// 세로
					System.out.println(t[0][i]);
					result = true;
					break;
				}
			}
			if ((t[0][0] == t[1][1] && t[1][1] == t[2][2] && t[0][0] != '.')
				|| (t[2][0] == t[1][1] && t[1][1] == t[0][2] && t[0][2] != '.')) {
				// 대각선
				System.out.println(t[1][1]);
				result = true;
			}
			
			if (!result) {
				// 비겼을 때
				System.out.println("DRAW");
			}
		}
		in.close();
	}
}