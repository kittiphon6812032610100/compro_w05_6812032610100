#include <stdio.h>

int main() {
    // กำหนดข้อมูลของผู้ใช้ทั้ง 3 คน 
    char name[3] = {'L', 'A', 'H'};     // ชื่อเล่น
    int age[3] = {20, 20, 19};          // อายุ
    float height[3] = {160.1, 167.1, 180.1};  // ส่วนสูง 
    float weight[3] = {52.0, 58.0, 62.9};     // น้ำหนัก 
    char grade[3] = {'A', 'A', 'B'};     // รหัสเกรด

    // แสดงหัวตาราง
    printf("| Name | Age | Height(cm) | Weight(kg) | Grade Code |\n");
    printf("|------|-----|------------|------------|------------|\n");

    // แสดงข้อมูลในรูปแบบตาราง
    for (int i = 0; i < 3; i++) {
        printf("|  %-3c | %-3d |    %6.1f   |    %6.1f   |     %-3c    |\n", 
            name[i], age[i], height[i], weight[i], grade[i]);
    }

    return 0;
}
