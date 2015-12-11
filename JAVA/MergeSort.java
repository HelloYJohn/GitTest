public class MergeSort {
	private static void  merge(int[] a, int s, int m, int t) {
		int[] tmp = new int[t - s + 1];
		int i = s, j = m, k = 0;
		while(i < m && j <= t) {
			if(a[i] <= a[j]) {
				tmp[k] = a[i];
				k++;
				i++;
			} else {
				tmp[k]= a[j];
				k++;
				j++;
			}
		}
		while(i < m)
		{
			tmp[k] = a[i];
			i++;
			k++;
		}
		while(j <= t)
		{
			tmp[k] = a[j];
			j++;
			k++;
		}
		System.arraycopy(tmp, 0, a, s, tmp.length);
	}

	public static void  mergeSort(int[] a, int s, int len) {
		int size = a.length;
		int mid = size / (len << 1);
		int c = size & ((len << 1) - 1);

		if(mid == 0)
			return;
		for(int i = 0; i < mid; i++)
		{
			s = i * 2 * len;
			merge(a,  s, s + len, (len << 1) + s - 1);
		}

		if(c != 0)
			merge(a,  size - c - 2 * len, size - c, size -1);

		mergeSort(a, 0,  2 * len);
	}

	public static void main(String[] args) {
		int[] a = new int[] { 4, 3, 6, 1, 2, 5 , 5};
		mergeSort(a,  0,  1);
		for (int i : a) {
			System.out.println(i + " " );
		}
	}
}
