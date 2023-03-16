#include <queue>
#include <valarray>
#include "iostream"
#include "map"
#include "bitset"



int main(int argv, char* argc[]) {
    std::string command;
    if (argv < 2) {
        std::cout << "For paragraph (b) enter -b\n"
                  << "For paragraph (b) enter -f\n"
                  << std::endl;
    } else {
        command = argc[1];
    }
    std::map<int, std::string> states = {
            {0, "AT"},
            {1, "BEL"},
            {2, "BE"},
            {3, "BG"},
            {4, "BA"},
            {5, "VA"},
            {6, "GB"},
            {7, "HU"},
            {8, "DE"},
            {9, "GR"},
            {10, "DK"},
            {11, "IE"},
            {12, "IS"},
            {13, "ES"},
            {14, "IT"},
            {15, "LV"},
            {16, "LT"},
            {17, "LI"},
            {18, "LU"},
            {19, "MK"},
            {20, "MD"},
            {21, "NL"},
            {22, "NO"},
            {23, "PL"},
            {24, "PT"},
            {25, "RU"},
            {26, "RO"},
            {27, "RS"},
            {28, "SK"},
            {29, "SI"},
            {30, "UA"},
            {31, "FI"},
            {32, "FR"},
            {33, "HR"},
            {34, "ME"},
            {35, "CZ"},
            {36, "CH"},
            {37, "SE"},
            {38, "EE"},
            {39, "TR"},
            {40, "AL"}
    };

    int e [41][41];
    for (int i = 0; i < 41; ++i) {
        for (int j = 0; j < 41; ++j) {
            e[i][j] = 0;
        }
    }

    e[6][11] = 1; e[11][6] = 1;
    e[24][13] = 644; e[13][24] = 644;
    e[13][32] = 1260; e[32][13] = 1260;
    e[32][2] = 290; e[2][32] = 290;
    e[32][18] = 292; e[18][32] = 292;
    e[32][36] = 436; e[36][32] = 436;
    e[32][8] = 1100; e[8][32] = 1100;
    e[2][21] = 198; e[21][2] = 198;
    e[21][8] = 685; e[8][21] = 685;
    e[2][8] = 789; e[8][2] = 789;
    e[8][10] = 461; e[10][8] = 461;
    e[36][17] = 160; e[17][36] = 160;
    e[36][14] = 690; e[14][36] = 690;
    e[14][5] = 3; e[5][14] = 3;
    e[14][29] = 489; e[29][14] = 489;
    e[17][0] = 527; e[0][17] = 527;
    e[29][0] = 277; e[0][29] = 277;
    e[36][8] = 752; e[8][36] = 752;
    e[29][33] = 381; e[33][29] = 381;
    e[0][35] = 303; e[35][0] = 303;
    e[8][35] = 348; e[35][8] = 348;
    e[8][23] = 590; e[8][23] = 590;
    e[23][35] = 631; e[35][23] = 631;
    e[28][35] = 291; e[35][28] = 291;
    e[28][23] = 533; e[23][28] = 533;
    e[7][33] = 301; e[33][7] = 301;
    e[33][4] = 288; e[4][33] = 288;
    e[4][34] = 173; e[34][4] = 173;
    e[4][27] = 199; e[27][4] = 199;
    e[27][34] = 282; e[34][27] = 282;
    e[27][19] = 323; e[19][27] = 323;
    e[34][40] = 132; e[40][34] = 132;
    e[40][19] = 153; e[19][40] = 153;
    e[19][9] = 488; e[9][19] = 488;
    e[9][39] = 644; e[39][9] = 644;
    e[9][3] = 524; e[3][9] = 524;
    e[39][3] = 997; e[3][39] = 997;
    e[3][19] = 174; e[19][3] = 174;
    e[3][26] = 427; e[26][3] = 427;
    e[26][7] = 886; e[7][26] = 886;
    e[7][28] = 163; e[28][7] = 163;
    e[28][23] = 533; e[23][28] = 533;
    e[26][20] = 358; e[20][26] = 358;
    e[26][30] = 747; e[30][26] = 747;
    e[20][30] = 401; e[30][20] = 401;
    e[28][30] = 1007; e[30][28] = 1007;
    e[30][23] = 795; e[23][30] = 795;
    e[30][25] = 434; e[25][30] = 434;
    e[23][1] = 477; e[1][23] = 477;
    e[1][25] = 678; e[25][1] = 678;
    e[23][16] = 394; e[16][23] = 394;
    e[16][1] = 173; e[1][16] = 173;
    e[16][15] = 262; e[15][16] = 262;
    e[15][1] = 403; e[1][15] = 403;
    e[15][38] = 278; e[38][15] = 278;
    e[15][25] = 845; e[25][15] = 845;
    e[38][25] = 870; e[25][38] = 870;
    e[25][31] = 1141; e[31][25] = 1141;
    e[25][22] = 2065; e[22][25] = 2065;
    e[22][31] = 792; e[31][22] = 792;
    e[22][37] = 554; e[37][22] = 554;
    e[37][31] = 360; e[31][37] = 360;
    e[0][14] = 761; e[14][0] = 761;
    e[7][27] = 395; e[27][7] = 395;
    e[7][29] = 381; e[29][7] = 381;
    e[1][18] = 169; e[18][1] = 169;
    e[32][14] = 1105; e[14][32] = 1105;


if (command == "-b") {
    int exc[42];
    for (int i = 0; i < 41; ++i) {
        exc[i] = 0;
    }

    for (int j = 0; j < 41; ++j) {
        int dist[41];
        bool used[41];
        std::queue<int> q;
        for (int k = 0; k < 41; ++k) {
            dist[k] = -1;
            used[k] = false;
        }
        dist[j] = 0;
        used[j] = true;
        q.push(j);
        int buf;
        while (!q.empty()) {
            buf = q.front();
            for (int i = 0; i < 41; ++i) {
                if (e[buf][i] >= 1 && !used[i]) {
                    if (dist[i] == -1 || dist[buf] + 1 < dist[i]) {
                        dist[i] = dist[buf] + 1;
                    }
                    used[i] = true;
                    q.push(i);
                }
            }
            q.pop();
        }
        int max = -1;
        for (int i = 0; i < 41; ++i) {
            if (dist[i] > max) {
                max = dist[i];
            }
        }
        exc[j] = max;
    }

    for (int i = 0; i < 41; ++i) {
        std::cout << states[i]  << " - eccentricity: " << exc[i] << std::endl;
    }

    std::cout << "Center: ";
    for (int i = 0; i < 41; ++i) {
        if (exc[i] == 5) {
            std::cout << states[i] << " ";
        }
    }
}

//    std::vector<int> v;
//    v.push_back(22);
//    std::vector< std::array<int, 3> > q;
//    for (int i = 0; i < 40; ++i) {
//        if (e[22][i] > 1) {
//            q.push_back({e[22][i], 22, i});
//        }
//    }
//    std::sort(q.begin(), q.end());
//    while(v.size() < 38) {
//        for (int i = 0; i < q.size(); ++i) {
//            if (e[q[i][2]])
//        }
//    }

if (command == "-f") {
    int polinom = 0;
    int Max_c = 0;
    std::string answ;
    int pow = std::pow(2, 41);
    for (int i = 0; i < pow; ++i) {
        std::string binary = std::bitset<41>(polinom).to_string();
        polinom++;
        if (binary[6] == '1') {//GB
            continue;
        }
        if (binary[5] == '0') {//VA
            continue;
        }
        if (binary[11] == '1') {//IE
            continue;
        }
        if (binary[22] == '0') {//NO
            continue;
        }
        if (binary[31] == '1') {//FI
            continue;
        }
        if (binary[37] == '1') {//SE
            continue;
        }
        if (binary[10] == '0') { //DK
            continue;
        }
        if (binary[24] == '0') {//PT
            continue;
        }
        if (binary[12] == '1') {//IS
            continue;
        }
        if (binary[32] == '1') {//FR
            continue;
        }
        if (binary[25] == '1') {//RU
            continue;
        }
        if (binary[8] == '1') {//DE
            continue;
        }
        if (binary[7] == '1') { //HU
            continue;
        }
        bool independ = true;
        for (int j = 40; j > 0; --j) {
            if (binary[j] == '1') {
                for (int k = 0; k < 41; ++k) {
                    if (binary[k] == '1' && e[j][k] == 1) {
                        independ = false;
                        break;
                    }
                }
            }
        }
        if (independ) {
            int b = 0;
            for (int j = 0; j < 41; ++j) {
                if (binary[j] == '1') {
                    b++;
                }
            }
            if (b > Max_c) {
                Max_c = b;
                answ = binary;
            }
        }
    }
    std::cout << Max_c;
    std::cout << answ;
}

}