#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2398, 2374, 2385, 2382, 2365},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 31,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.sf		= {
				{583, 192, 100, 89, 85},
				{583, 192, 100, 89, 85},
				{593, 197, 102, 91, 85},
				{598, 203, 106, 93, 87},
				{607, 205, 110, 96, 88},
				{587, 203, 116, 98, 91},
				{589, 195, 120, 103, 94},
				{589, 192, 119, 108, 97},
				{592, 192, 109, 103, 97},
				{601, 195, 105, 95, 91},
				{623, 197, 106, 96, 90},
				{658, 200, 109, 98, 93},
				{700, 202, 112, 101, 96},
				{747, 208, 114, 103, 97},
				{808, 219, 114, 102, 96},
				{887, 234, 114, 101, 95},
				{985, 250, 116, 103, 97},
				{1067, 260, 118, 104, 98},
				{1108, 275, 117, 103, 97},
				{1229, 303, 120, 104, 98},
				{1309, 327, 123, 107, 99},
				{1473, 358, 127, 110, 101},
				{1751, 398, 133, 113, 103},
				{2126, 454, 139, 118, 107},
				{2712, 526, 143, 120, 108},
				{3575, 625, 147, 120, 108},
				{5023, 796, 155, 124, 109},
				{7528, 1090, 173, 129, 112},
				{12408, 1761, 209, 143, 122},
				{25828, 3582, 482, 188, 151},
				{96525, 22348, 18748, 5443, 12631}
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4324, 4320, 4311, 4311, 4298},
				{4223, 4246, 4244, 4243, 4235},
				{4153, 4186, 4186, 4185, 4178},
				{4090, 4128, 4131, 4129, 4124},
				{4034, 4072, 4078, 4077, 4072},
				{3966, 4014, 4029, 4028, 4024},
				{3918, 3958, 3982, 3983, 3980},
				{3874, 3916, 3936, 3940, 3938},
				{3836, 3879, 3890, 3895, 3895},
				{3804, 3848, 3854, 3855, 3854},
				{3784, 3821, 3828, 3827, 3825},
				{3770, 3799, 3806, 3806, 3804},
				{3758, 3781, 3789, 3789, 3787},
				{3746, 3768, 3775, 3774, 3771},
				{3733, 3759, 3762, 3756, 3749},
				{3719, 3746, 3746, 3736, 3724},
				{3703, 3728, 3724, 3715, 3703},
				{3686, 3704, 3701, 3693, 3681},
				{3669, 3688, 3683, 3675, 3663},
				{3653, 3678, 3677, 3670, 3658},
				{3642, 3674, 3673, 3667, 3656},
				{3631, 3669, 3669, 3663, 3652},
				{3618, 3662, 3662, 3656, 3645},
				{3600, 3653, 3650, 3642, 3633},
				{3578, 3636, 3626, 3617, 3609},
				{3548, 3605, 3588, 3580, 3572},
				{3506, 3559, 3539, 3532, 3524},
				{3448, 3499, 3477, 3470, 3464},
				{3359, 3416, 3394, 3388, 3384},
				{3222, 3291, 3267, 3265, 3266},
				{3000, 3000, 3000, 3000, 3000}
	}
};

static struct sf_lut pc_sf = {
	.rows		= 1,
	.cols		= 1,
	.row_entries		= {0},
	.percent	= {100},
	.sf			= {
				{100},
	}
};

struct bms_battery_data ztemt_2300mAh_data = {
	.fcc				= 2300,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.pc_sf_lut				= &pc_sf,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 181
};
