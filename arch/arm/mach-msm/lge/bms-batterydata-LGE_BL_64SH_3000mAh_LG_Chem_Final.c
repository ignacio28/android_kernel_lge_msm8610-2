#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2962, 3010, 3003, 2985, 2956},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{1333, 300, 100, 83, 82},
				{1347, 300, 101, 85, 83},
				{1347, 301, 102, 85, 83},
				{1371, 309, 104, 87, 84},
				{1441, 313, 110, 90, 86},
				{1368, 340, 118, 94, 88},
				{1376, 303, 124, 98, 91},
				{1373, 290, 130, 108, 97},
				{1390, 292, 104, 89, 86},
				{1430, 289, 102, 87, 85},
				{1478, 291, 104, 88, 86},
				{1535, 294, 106, 91, 89},
				{1605, 294, 109, 93, 87},
				{1691, 290, 109, 89, 86},
				{1911, 291, 105, 88, 86},
				{2645, 310, 100, 86, 86},
				{4236, 361, 105, 89, 87},
				{6202, 429, 137, 111, 103},
				{8259, 483, 157, 122, 113},
				{10024, 479, 169, 128, 119},
				{11044, 444, 163, 133, 122},
				{11332, 475, 176, 139, 127},
				{12859, 511, 193, 149, 134},
				{15207, 560, 214, 161, 141},
				{17680, 627, 237, 172, 147},
				{21246, 722, 259, 185, 155},
				{25950, 859, 286, 201, 166},
				{32279, 1072, 324, 222, 183},
				{37982, 1601, 412, 263, 213},
				{43482, 2909, 542, 349, 288},
					}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4332, 4332, 4328, 4323, 4315},
				{4227, 4256, 4262, 4261, 4257},
				{4162, 4201, 4208, 4208, 4205},
				{4108, 4151, 4157, 4157, 4155},
				{4071, 4102, 4108, 4108, 4106},
				{3961, 4064, 4069, 4062, 4060},
				{3912, 3972, 4004, 4011, 4016},
				{3866, 3922, 3958, 3970, 3971},
				{3834, 3895, 3911, 3915, 3918},
				{3813, 3864, 3876, 3880, 3882},
				{3792, 3837, 3849, 3853, 3854},
				{3771, 3812, 3825, 3829, 3830},
				{3748, 3786, 3803, 3804, 3800},
				{3717, 3759, 3779, 3776, 3767},
				{3680, 3734, 3744, 3741, 3731},
				{3627, 3712, 3698, 3694, 3690},
				{3553, 3689, 3687, 3681, 3671},
				{3489, 3641, 3657, 3652, 3638},
				{3436, 3582, 3610, 3607, 3593},
				{3396, 3533, 3566, 3564, 3552},
				{3372, 3505, 3537, 3538, 3527},
				{3350, 3476, 3510, 3510, 3501},
				{3327, 3446, 3483, 3483, 3474},
				{3307, 3417, 3456, 3457, 3450},
				{3289, 3390, 3430, 3431, 3424},
				{3270, 3359, 3400, 3401, 3394},
				{3249, 3325, 3364, 3365, 3357},
				{3226, 3284, 3317, 3318, 3309},
				{3173, 3234, 3256, 3253, 3243},
				{3096, 3153, 3164, 3156, 3147},
				{3000, 3000, 3000, 3000, 3000}
	}
};

struct bms_battery_data LGE_BL_64SH_3000mAh_LG_Chem_data = {
	.fcc				= 3000,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 136
};
