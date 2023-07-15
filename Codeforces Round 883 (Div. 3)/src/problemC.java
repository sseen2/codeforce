// https://codeforces.com/contest/1846/problem/C

import java.util.*;
import java.io.*;
public class problemC {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(in.readLine());
		while (num-- > 0) {
			String[] s = in.readLine().split(" ");
			int n = Integer.parseInt(s[0]); // 참가자 수
			int m = Integer.parseInt(s[1]); // 문제 수
			int h = Integer.parseInt(s[2]); // 총 시간
			int[][] time = new int[n][m]; // 참가자들이 문제 푸는데 걸리는 시간 저장
			int[][] score = new int[n][2];

			for (int i = 0; i < n; i++) {
				String[] s1 = in.readLine().split(" ");
				for (int j = 0; j < m; j++) {
					time[i][j] = Integer.parseInt(s1[j]);
				}
			}
			
			// 혼자 참여한 경우 1 출력 후 continue
			if (n == 1) {
				System.out.println(1);
				continue;
			}
			
			// 적게 걸리는 시간순으로 정렬 (오름차순)
			for (int i = 0; i < n; i++) {
				Arrays.sort(time[i]);
			}

//			배열 출력
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < m; j++) {
//					System.out.print(time[i][j] + " ");
//				}
//				System.out.println();
//			}
//			System.out.println();
			
			for (int i = 0; i < n; i++) {
				int timesum = 0;
				for (int j = 0; j < m; j++) {
					if (timesum + time[i][j] > h) {
						break;
					}
					timesum += time[i][j];
					score[i][0] += timesum; // 패널티
					score[i][1] += 1;		// 푼 문제 수
				}
			}
			
//			점수 출력
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < 2; j++) {
//					System.out.print(score[i][j] + " ");
//				}
//				System.out.println();
//			}
//			System.out.println();
			
			int rank = 1;
			for (int i = 1; i < n; i++) {
				// [][0] -> 패널티		[][1] -> 푼 문제 수
				if ((score[0][1] == score[i][1] && score[0][0] > score[i][0]) 
					|| score[0][1] < score[i][1]) {
					rank++;
				}
			}
			
			System.out.println(rank);
		}
		in.close();
	}
}