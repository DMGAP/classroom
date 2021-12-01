#include <stdio.h>  
/* function to heapify a subtree. Here 'i' is the   
index of root node in array a[], and 'n' is the size of heap. */   
void heap(int a[], int n, int i)  
{  
    int largest = i; // Initialize largest as root  
    int left = 2 * i + 1; // left child  
    int right = 2 * i + 2; // right child  
    // If left child is larger than root  
    if (left < n && a[left] > a[largest])  
        largest = left;  
    // If right child is larger than root  
    if (right < n && a[right] > a[largest])  
        largest = right;  
    // If root is not largest  
    if (largest != i) {  
        // swap a[i] with a[largest]  
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;  
          
        heap(a, n, largest);  
    }  
}  
/*Function to implement the heap sort*/  
void heapSort(int a[], int n)  
{  
    for (int i = n / 2 - 1; i >= 0; i--)  
        heap(a, n, i);  
    // One by one extract an element from heap  
    for (int i = n - 1; i >= 0; i--) {  
        /* Move current root element to end*/  
        // swap a[0] with a[i]  
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
          
        heap(a, i, 0);  
    }  
}  
  
int main (){  
    int a[] = {31081,155092,
        467550,
        222637,
        353663,
        169358,
        188870,
        94714,
        442544,
        213737,
        223292,
        376044,
        380827,
        57335,
        388057,
        464775,
        229222,
        284001,
        376041,
        177954,
        101844,
        364895,
        227377,
        316829,
        372890,
        465846,
        418380,
        462978,
        220457,
        352657,
        152792,
        272185,
        28395,
        120341,
        494823,
        382059,
        289700,
        183692,
        497420,
        252890,
        418076,
        220711,
        128933,
        298902,
        298693,
        16990,
        284323,
        27914,
        321638,
        181010,
        205868,
        423482,
        66551,
        453893,
        260957,
        439442,
        440385,
        179336,
        402419,
        160842,
        31993,
        75857,
        433027,
        81035,
        196198,
        448496,
        463094,
        6544,
        152834,
        481160,
        259434,
        70909,
        222518,
        409015,
        390458,
        21210,
        426005,
        195427,
        69772,
        268289,
        376438,
        296287,
        191770,
        463636,
        250179,
        452727,
        403077,
        190564,
        152710,
        326142,
        351406,
        205350,
        401999,
        305079,
        286385,
        98197,
        253575,
        270126,
        104741,
        406409,
        251285,
        384823,
        497966,
        473803,
        293837,
        388423,
        15660,
        240488,
        83850,
        85432,
        8776,
        480935,
        381719,
        200546,
        444570,
        152545,
        173919,
        368294,
        363756,
        326629,
        194435,
        235808,
        31978,
        96434,
        40886,
        318364,
        194631,
        315108,
        88489,
        320019,
        221517,
        339774,
        204841,
        240129,
        334224,
        498678,
        128551,
        349884,
        259812,
        233048,
        435316,
        268588,
        234629,
        337681,
        489781,
        199846,
        490226,
        163700,
        68139,
        353981,
        490329,
        262574,
        89788};  
    int n = sizeof(a) / sizeof(a[0]);   
    heapSort(a, n);    
    for (int i = 0 ; i < n ; i++){
        printf("%d\n",a[i]);
    }  
}  