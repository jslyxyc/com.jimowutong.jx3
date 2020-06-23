#include "homeland_pet.hpp"

std::string type[] = {"家具-摆灯", "家具-灯笼", "家具-挂墙", "家具-小玩意", "家具-用具", "景观-灌木",
                      "景观-庭灯", "景观-摆件", "景观-雕像", "景观-特效",   "景观-其他"};

std::map<std::string, Furniture> homeland_pet = {
    {"蓬莱", {"黄杨根灯檠", type[0], 0, 55, 258, 0, 55}},
    {"天策", {"北邙忆灯笼", type[1], 36, 172, 36, 0, 0}},
    {"千岛湖", {"臈缬宝相花灯笼", type[1], 39, 39, 88, 39, 39}},
    {"洛阳城北", {"榧木壁灯", type[1], 38, 0, 36, 132, 38}},
    {"纯阳", {"银平脱灯笼", type[1], 61, 0, 0, 184, 0}},
    {"经首道源岛", {"了无挂碍图", type[2], 51, 116, 51, 51, 51}},
    {"九寨沟", {"云山图", type[2], 12, 12, 0, 56, 0}},
    {"融天岭", {"蔓墙藤", type[2], 567, 121, 0, 121, 0}},
    {"无量山", {"苗石山羊头", type[2], 124, 0, 581, 0, 124}},
    {"黑戈壁", {"苗石鹿头", type[2], 0, 0, 581, 124, 124}},
    {"洛阳", {"铜镜", type[3], 0, 4, 4, 0, 21}},
    {"巴陵县", {"越窑香插", type[3], 4, 4, 4, 10, 4}},
    {"洛阳·战乱", {"越窑卷草纹卧炉", type[3], 4, 4, 4, 4, 11}},
    {"鲲鹏岛", {"兽面纹铜卧炉", type[3], 31, 0, 0, 0, 94}},
    {"扬州", {"九州港彩釉缸", type[3], 10, 4, 4, 4, 4}},
    {"成都", {"鸟巢", type[3], 4, 4, 11, 4, 4}},
    {"龙泉府", {"兽牙坠饰", type[3], 0, 0, 230, 76, 0}},
    {"丐帮", {"一坛老酒", type[4], 14, 66, 0, 0, 14}},
    {"七秀", {"蔑编竹篮·一", type[4], 1, 1, 1, 1, 1}},
    {"金水镇", {"瓠勺", type[4], 5, 12, 5, 5, 5}},
    {"枫华谷", {"一盆蓼蓝", type[4], 1, 1, 1, 1, 1}},
    {"瞿塘峡", {"苗疆菇群", type[5], 19, 19, 0, 66, 18}},
    {"龙门荒漠", {"歌朵兰漠仙人掌", type[5], 19, 19, 19, 19,44}},
    {"唐门", {"毛竹春笋", type[5], 19, 19, 0, 18, 66}},
    {"蔷薇列岛", {"琉球社灯檠", type[6], 73, 344, 0, 73, 0}},
    {"枫华谷·战乱", {"黍离悲", type[6], 78, 78, 177, 78, 78}},
    {"长安", {"孔方摆件", type[7], 71, 71, 71, 159, 71}},
    {"少林", {"七层浮屠", type[7], 166, 172, 172, 599, 0}},
    {"天策·战乱", {"陶药炉", type[7], 0, 333, 0, 0, 111}},
    {"明教", {"黄杨根药臼", type[7], 0, 832, 0, 0, 277}},
    {"昆仑", {"昆山焰晶", type[7], 1942, 0, 0, 416, 416}},
    {"五毒", {"苗疆铁质大药炉", type[7], 0, 310, 66, 66, 0}},
    {"苍云", {"海龟甲", type[7], 71, 71, 71, 71, 159}},
    {"侠客岛", {"东海珠蚌", type[7], 777, 166, 166, 0, 0}},
    {"五台山", {"天竺式香浮屠", type[7], 0, 166, 0, 166, 777}},
    {"马嵬驿", {"闲散客", type[7], 166, 0, 777, 166, 0}},
    {"长歌门", {"佳曲三弄", type[7], 416, 0, 0, 416, 1942}},
    {"霸刀山庄", {"青铜阔刀", type[7], 0, 66, 310, 0, 66}},
    {"寇岛", {"巨型毒伞菌", type[8], 193, 0, 0, 193, 904}},
    {"万花", {"日晷", type[8], 484, 1743, 500, 500, 0}},
    {"苍山洱海", {"山城玉象饰件", type[8], 2260, 484, 0, 0, 484}},
    {"白龙口", {"兽面纹黄铜鼎", type[8], 193, 200, 200, 697, 0}},
    {"黑龙沼", {"乌路蛇石像", type[8], 484, 500, 500, 1743}},
    {"太原", {"柳氏石柱", type[8], 201, 201, 453, 201, 201}},
    {"长安·战乱", {"堕凡尘", type[8], 484, 0, 0, 484, 2260}},
    {"藏剑山庄", {"西湖石剑", type[8], 0, 904, 193, 193, 0}},
    {"恶人谷", {"黄泉·一", type[9], 49, 0, 0, 148, 0}},
    {"浩气盟", {"黄泉·三", type[9], 49, 0, 0, 148, 0}},
    {"洛道", {"黄泉·七", type[9], 51, 0, 0, 155, 0}},
    {"凌雪阁", {"黄泉·八", type[9], 51, 0, 0, 155, 0}},
    {"洞天福地岛", {"东瀛文立牌", type[10], 0, 0, 0, 0, 0}},
    {"阴山大草原", {"青竹仿杓", type[10], 0, 0, 0, 0, 0}},
    {"长安内城", {"晾衣架·三", type[10], 0, 0, 0, 0, 0}},
    {"南屏山", {"黄杨根", type[10], 0, 0, 0, 0, 0}}
};

std::string homeland_pet_query(const std::string& map_msg) {
    std::stringstream msg;
    auto f = homeland_pet.lower_bound(map_msg)->second;
    msg << "器物谱·" << homeland_pet.lower_bound(map_msg)->first << '\n';
    msg << f.name << ' ' << f.type;
    if (f.guanshang) msg << '\n' << "观赏：" << f.guanshang;
    if (f.shiyong) msg << '\n' << "实用：" << f.shiyong;
    if (f.jiangu) msg << '\n' << "坚固：" << f.jiangu;
    if (f.fengshui) msg << '\n' << "风水：" << f.fengshui;
    if (f.quwei) msg << '\n' << "趣味：" << f.quwei;
    return msg.str();
}
