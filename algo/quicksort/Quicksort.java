package algo.quicksort;

public class Quicksort {
    public static void quickSort(int[] array, int begin, int end) {
        if (end<=begin) return;
        int pivot = partition(array, begin, end);
        quickSort(array, begin, pivot-1);
        quickSort(array, pivot+1, end);
    }

    static int partition(int[] a, int begin, int end) {
        // pivot: 标杆位置， counter：小于pivot的元素的个数
        int pivot = end, counter = begin;
        for (int i = begin; i< end; i++) {
            if(a[i]<a[pivot]) {
                int temp = a[counter]
            }
        }
    }
}
