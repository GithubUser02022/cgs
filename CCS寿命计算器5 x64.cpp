#include <iostream>
#include <string>
using namespace std;

int a[] = { 0,3,2,1,-12,-7,-2,-2,-2,-2,-5,2,2,1,7,-4,-2,-2,-2,1,-5,-0.5,1.5,2,3,-1,1,2,-1,4,2,1,-3,-2,-2,-2,-1 };
string b[] = { "0", "每周锻炼至少3次","爱吃果蔬" ,"养宠物","每天抽烟超过2包","每天抽烟1~2包","每天抽烟20支以下（若不抽选否）","总是睡眠超10小时或不足5小时","肥胖","经常做不良姿势","已有慢性病或经常得小病","多数时间感觉快乐、满足","乐观","有分担烦恼的朋友","信仰坚定","自卑","固执" ,"爱冒险（如开快车）","抑郁","已婚","离婚并独居","不生育或40岁后无子女","是专业研究人员","60岁仍工作","65岁仍工作","在大城市工作（或度过大半生）","在城郊乡镇工作（或度过大半生）","居住的地方视野开阔","长时间受噪音污染", "的母亲活到80岁以上","的父亲活到80岁以上","的祖父祖母活到80岁以上","的直系亲属中有人50岁前死于心脏病","的直系亲属中有人死于胃癌","有女性近亲死于乳腺癌","有近亲60岁前死于自杀或其他疾病" };
int c[] = { 0,10,18,21,26,28,35 };
long long now, ans = 0;
string x;
bool run = true;

void end()
{
    if (run == false) return;
    cout << "*******************";
    cout << "正在使用AI编译...\n";
    cout << " 正在使用AI生成...\n";
    cout << " 正在使用AI模拟...\n";
    cout << " 正在使用AI判断...\n";
    cout << " 正在使用AI计算...\n";
    cout << " 正在使用AI思考...\n";
    cout << " 正在准备就绪...\n";
    cout << " 正在完成...\n";
    cout << "*******************";
    if (ans >= now) cout << " 您的估计寿命为:" << ans << "岁" << endl;
    else cout << " 您的估计寿命为:" << now << "岁" << endl;
    cout << " :)      祝您长命百岁！\n";
    char a;
    cout << "按任意键+回车键结束本程序";
    cin >> a;
}

void init()
{
    int cnt = 0;
    string tmmp;
    string str1 = "感谢您使用CCS寿命计算器！\n您需要同意CChenSoft的使用条款之后才能使用CCS寿命计算器\n我们不会收集您的任何信息，上传至服务器\n因为我们没钱交服务器租金(doge)\n";
    string str2 = "CChenSoft 是值得信赖的！\n";
    string str = str1 + str2;
    cout << "*******************************************************************" << endl;
    cout << "** CCS寿命计算器  版本[5.0.1.221209.1] Release x64\n";
    cout << "** CChenSoft 荣誉出品\n** 永远相信美好的事情即将发生\n";
    cout << "** Copyright(c) 2022-2023 CCenSoft Corporation,All Rights Reserved.\n";
    cout << "*******************************************************************\n\n\n";
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "使用条款：\n" << str << endl;
    cout << "您同意CCS使用条款吗?\n1.是 2.否";
    cin >> tmmp;
    while (tmmp != "1" && tmmp != "2" && cnt <= 5)
    {
        cout << "输入有误，请重新输入:";
        cin >> tmmp;
        cnt++;
    }
    if (cnt > 5)
    {
        cout << "遇到错误" << endl;
        run = false;
    }
    if (tmmp == "2") run = false;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    if (run == false) return;
    cout << "欢迎使用CCS寿命计算器\n";
    cout << "请输入您的目前年龄(20-150岁)：";
    cin >> now;
    while ((now < 20 || now > 150) && cnt <= 5)
    {
        cout << "输入有误，请重新输入:";
        cin >> now;
        cnt++;
    }
    if (cnt > 5)
    {
        cout << "遇到错误" << endl;
        run = false;
        return;
    }
    cout << "请输入您的性别编号  1.男 2.女 ";
    cin >> x;
    cnt = 0;
    while (x != "1" && x != "2" && cnt <= 5)
    {
        cout << "输入有误，请重新输入:";
        cin >> x;
        cnt++;
    }
    if (cnt > 5)
    {
        cout << "遇到错误" << endl;
        run = false;
        return;
    }
    if (x == "1")
    {
        if (now < 30) ans = 73;
        else if (now < 40) ans = 74;
        else if (now < 50) ans = 75;
        else if (now < 60) ans = 77;
        else if (now < 70) ans = 79;
        else if (now >= 70) ans = 85;
    }
    else
    {
        if (now < 30) ans = 79;
        else if (now < 40) ans = 80;
        else if (now < 50) ans = 81;
        else if (now < 60) ans = 81;
        else if (now < 70) ans = 83;
        else if (now >= 70) ans = 89;
    }

}

void start(int x1, int y1)
{
    if (run == false) return;
    for (int i = x1; i <= y1; i++)
    {
        if (run == false) continue;
        if (i == 34 && x == "1") continue;
        cout << "问题" << i << ":" << endl;
        int cnt = 0;
        string temp;
        cout << "你" << b[i] << "吗？1.是 2.否      ";
        cin >> temp;
        while (temp != "1" && temp != "2" && cnt <= 5)
        {
            cout << "输入有误，请重新输入:" << endl;
            cin >> temp;
            cnt++;
        }
        if (cnt > 5)
        {
            cout << "遇到严重错误" << endl;
            run = false;
            return;
        }
        if (temp == "1") ans += a[i];
        if (i == 4 && temp == "1") i += 2;
        else if (i == 5 && temp == "1") i += 1;
        else if (i == 19 && temp == "1") i += 1;
        else if (i == 20 && x == "1") ans -= 4;
        else if (i == 25 && temp == "1") i += 1;
    }
}

int main()
{
    if (run == false) return 0;
    init();
    for (int i = 1; i <= 6; i++)
    {
        if (run == false) continue;
        cout << "\n \n \n***************************************" << endl;
        cout << "**       Part  " << i << ":\n";
        cout << "***************************************" << endl;
        start(c[i - 1] + 1, c[i]);
    }
    cout << "\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n ";
    end();
    return 0;
}