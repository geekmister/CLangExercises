#include <stdio.h>

// NOTE - To save phone number form input with data structure array
void savePhoneNumber () {
    int phoneNumber[11];

    printf("Please input phone numbner:\n");

    for (int index = 0; index < 11; index++) {
        scanf("%d", &phoneNumber[index]) ;
    }

    printf("Phone number is:");

    for (int index = 0; index < 11; index++) {
        printf("%d", phoneNumber[index]);
    }
    
    printf("\n");
}

// NOTE - To calulate the average of sources
void calcSource () {
    int avg, sum = 0; 
    int sources[10] = {12, 5, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        sum += sources[i];
    }

    avg = (float) sum / 10;

    printf("Average: %d\n", avg);
}

// NOTE - To print the queue of students
void queue() {
    int studentIdsA[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int studentIdsB[21] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};

    for (int i = 7; i < 21; i++) {
        printf("%d", studentIdsB[i]);
    }
}

void printSource() {
    int sources[3];

    printf("Please input yuwen, shuxue, yingyu source:\n");

    for (int i =0; i < 3; i++) {
        scanf("%d", &sources[i]);
    }

    printf("Yuwen: %d, shuxue: %d, yingyu: %d\n", sources[0], sources[1], sources[2]);
}

void shopList() {
    char life[] = "纸抽, 纸巾, 收纳箱, 水杯, 垃圾袋, 剪刀, 挂钩, 拖鞋, 小闹钟";
    char makeup[] = "保湿套装, 气垫cc, 隔离霜, 防晒霜, 眉粉, 眼影色盘, 睫毛膏";
    char sport[] = "运动服, 球鞋, 护腕, 护膝, 护掌, 排球, 瑜伽垫, 瑜伽球";
    char health[] = "蛋白粉, 口服液, 眼部按摩仪, 血压计, 脚底按摩器";
    int test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("淘宝购物车清单:\n");
    printf("====生活用品类:====\n");
    printf("%s\n", life);
    printf("====化妆品类:====\n");
    printf("%s\n", makeup);
    printf("====运动类商品:====\n");
    printf("%s\n", sport);
    printf("====保健类商品:====\n");
    printf("%s\n", health);
}

void sudoku() {
    int array[3][3];
    array[1][1] = 5;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Please input array[%d][%d] location number:\n", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    if (array[0][0] + array[0][1] + array[0][2] == 15 &&
        array[1][0] + array[1][1] + array[1][2] == 15 &&
        array[2][0] + array[2][1] + array[2][2] == 15 &&
        array[0][0] + array[1][0] + array[2][0] == 15 &&
        array[0][1] + array[1][1] + array[2][1] == 15 &&
        array[0][2] + array[1][2] + array[2][2] == 15 &&
        array[0][0] + array[1][1] + array[2][2] == 15 &&
        array[0][2] + array[1][1] + array[2][0] == 15) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    printf("The sudoku number: %d", array[i][j]);
                    if (j == 2) {
                        printf("\n");
                    }
                }
            }
    } else {
            printf("This is not a magic square.\n");
    }
}

// NOTE - Row convert to column
void rowConvertColumn() {
    int sourceArray[2][3] = {1, 2, 3, 4, 5, 6};
    int targetArray[3][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            targetArray[j][i] = sourceArray[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", targetArray[i][j]);
        }
        printf("\n");
    }
}

/* NOTE - 求每个人的科目平均分和每个科目的平均分
 *       宋小美 | 张大宝  | 高心心  | 彭果  | 邓丽
 * 数学 |  90   |   80   |   70   |  60  |  50
 * 语文 |  80   |   70   |   60   |  50  |  40
 * 英语 |  70   |   60   |   50   |  40  |  30
 */
void calulateAverage() {
    int source[3][5] = {
        {90, 80, 70, 60, 50},
        {80, 70, 60, 50, 40},
        {70, 60, 50, 40, 30}
    };

    float sonxiaomeiAvg = (float) (source[0][0] + source[1][0] + source[2][0]) / 3;
    printf("宋小美的平均分：%.2f\n", sonxiaomeiAvg);
    float zhangdaboAvg = (float) (source[0][1] + source[1][1] + source[2][1]) / 3;
    printf("张大宝的平均分：%.2f\n", zhangdaboAvg);
    float gaoxinxinAvg = (float) (source[0][2] + source[1][2] + source[2][2]) / 3;
    printf("高心心的平均分：%.2f\n", gaoxinxinAvg);
    float pengguoAvg = (float) (source[0][3] + source[1][3] + source[2][3]) / 3;
    printf("彭果的平均分：%.2f\n", pengguoAvg);
    float dengliAvg = (float) (source[0][4] + source[1][4] + source[2][4]) / 3;
    printf("邓丽的平均分：%.2f\n", dengliAvg);

    float mathAvg = (float) (source[0][0] + source[0][1] + source[0][2] + source[0][3] + source[0][4]) / 5;
    printf("数学的平均分：%.2f\n", mathAvg);
    float chineseAvg = (float) (source[1][0] + source[1][1] + source[1][2] + source[1][3] + source[1][4]) / 5;
    printf("语文的平均分：%.2f\n", chineseAvg);
    float englishAvg = (float) (source[2][0] + source[2][1] + source[2][2] + source[2][3] + source[2][4]) / 5;  
    printf("英语的平均分：%.2f\n", englishAvg);
    
}

// NOTE - 输出一条心灵鸡汤
void printChickenSoup() {
    char chickenSoupChar[] = {'E', 'v', 'e', 'r', 'y', 't', 'h', 'i', 'n', 'g', ' ', 'i', 's', ' ', 'p', 'o', 's', 's', 'i', 'b', 'l', 'e'};
    char chickenSoupString[] = {"Everything is possible"};

    int length = sizeof(chickenSoupChar) / sizeof(chickenSoupChar[0]);
    for (int i = 0; i < length; i++){
        printf("鸡汤字符数组：%c", chickenSoupChar[i]);
    }
    
    printf("鸡汤字符串：%s\n", chickenSoupString);
}

int main() {
    // savePhoneNumber();
    // calcSource();
    // queue();
    // printSource();
    // shopList();
    // sudoku();
    // rowConvertColumn();
    // calulateAverage();
    printChickenSoup();
    return 0;
}