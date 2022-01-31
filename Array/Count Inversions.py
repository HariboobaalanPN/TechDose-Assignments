def merge(L, array, low, mid, high):
    i, j, k, inversions = low, mid + 1, low, 0
    while i <= mid and j <= high:
        if L[i] <= L[j]:
            array[k] = L[i]
            k += 1
            i += 1
        else:
            array[k] = L[j]
            inversions += mid - i + 1
            k += 1
            j += 1
    while i <= mid:
        array[k] = L[i]
        k += 1
        i += 1
    while j <= high:
        array[k] = L[i]
        k += 1
        j += 1
    for i in range(low, high + 1):
        L[i] = array[i]
    return inversions
    
def mergeSort(L, array, low, high):
    inversions = 0
    if low < high:
        mid = (low + high) // 2
        inversions += mergeSort(L, array, low, mid)
        inversions += mergeSort(L, array, mid+1, high)
        inversions += merge(L, array, low, mid, high)
    return inversions

def countInversions(L):
    N = len(L)
    array = [0] * N
    return mergeSort(L, array, 0, N-1)

L = [5,9,4,6,3,7,1,2,8]
print(countInversions(L))