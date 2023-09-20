/*
    จงเขียนโปรแกรมภาษาซีเพื่อเก็บข้อมูลเข้าไปในอาเรย์จำนวน N ค่า และแสดงผลลัพธ์ออกมาบนหน้าจอ (โดยหากกรอก -1 ให้หยุดกรอกค่าและแสดงผลทันที)
    
    Test case:
        Input [0] : 
            1
        Input [1] : 
            1
        Input [2] : 
            3
        Input [3] : 
            9
        Input [4] : 
            8
        Input [5] : 
            2
        Input [6] : 
            7
        Input [7] : 
            8
        Input [8] : 
            -1
    Output:
        Index = 0 1 2 3 4 5 6 7
        Array = 1 1 3 9 8 2 7 8

*/

#include <stdio.h>

int main() {
    int N, i ;
    
    printf( "ป้อนจำนวน N: " ) ;
    scanf( "%d" , &N ) ;

    int arr[N] ;

    for ( i = 0; i < N; i++ ) {
        printf( "Input [%d] : " , i ) ;
        scanf( "%d" , &arr[i] ) ;

        // ตรวจสอบว่าผู้ใช้ป้อนค่า -1 หรือไม่
        if ( arr[i] == -1 ) {
            N = i ; // ปรับขนาดของอาร์เรย์เพื่อไม่นับค่า -1
            break ; // ออกจากลูป
        }
    }
    printf( "Index = " ) ;
    for ( i = 0; i < N; i++ ) {
        printf( "%d " , i ) ;
    }
    printf( "\nArray = " ) ;
    for ( i = 0; i < N; i++ ) {
        printf( "%d " , arr[i] ) ;
    }
    printf( "\n" ) ;

    return 0 ;
}

