// https://codeforces.com/contest/1846/problem/C

import java.util.*;
import java.io.*;
public class problemC {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(in.readLine());
		while (num-- > 0) {
			String[] s = in.readLine().split(" ");
			int n = Integer.parseInt(s[0]); // ������ ��
			int m = Integer.parseInt(s[1]); // ���� ��
			int h = Integer.parseInt(s[2]); // �� �ð�
			int[][] time = new int[n][m]; // �����ڵ��� ���� Ǫ�µ� �ɸ��� �ð� ����
			int[][] score = new int[n][2];

			for (int i = 0; i < n; i++) {
				String[] s1 = in.readLine().split(" ");
				for (int j = 0; j < m; j++) {
					time[i][j] = Integer.parseInt(s1[j]);
				}
			}
			
			// ȥ�� ������ ��� 1 ��� �� continue
			if (n == 1) {
				System.out.println(1);
				continue;
			}
			
			// ���� �ɸ��� �ð������� ���� (��������)
			for (int i = 0; i < n; i++) {
				Arrays.sort(time[i]);
			}

//			�迭 ���
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
					score[i][0] += timesum; // �г�Ƽ
					score[i][1] += 1;		// Ǭ ���� ��
				}
			}
			
//			���� ���
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < 2; j++) {
//					System.out.print(score[i][j] + " ");
//				}
//				System.out.println();
//			}
//			System.out.println();
			
			int rank = 1;
			for (int i = 1; i < n; i++) {
				// [][0] -> �г�Ƽ		[][1] -> Ǭ ���� ��
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