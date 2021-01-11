enum acpm_dvfs_id {
	dvfs_mif = ACPM_VCLK_TYPE,
	dvfs_int,
	dvfs_cpucl0,
	dvfs_cpucl1,
	dvfs_g3d,
	dvfs_fsys,
	dvfs_cam,
	dvfs_disp,
	dvfs_aud,
	dvs_cp,
};

struct vclk acpm_vclk_list[] = {
	CMUCAL_ACPM_VCLK(dvfs_mif, NULL, 0, NULL, 0, NULL, NULL, MARGIN_MIF),
	CMUCAL_ACPM_VCLK(dvfs_int, NULL, 0, NULL, 0, NULL, NULL, MARGIN_INT),
	CMUCAL_ACPM_VCLK(dvfs_cpucl0, NULL, 0, NULL, 0, NULL, NULL, MARGIN_BIG),
	CMUCAL_ACPM_VCLK(dvfs_cpucl1, NULL, 0, NULL, 0, NULL, NULL, MARGIN_LIT),
	CMUCAL_ACPM_VCLK(dvfs_g3d, NULL, 0, NULL, 0, NULL, NULL, MARGIN_G3D),
	CMUCAL_ACPM_VCLK(dvfs_fsys, NULL, 0, NULL, 0, NULL, NULL, MARGIN_FSYS),
	CMUCAL_ACPM_VCLK(dvfs_cam, NULL, 0, NULL, 0, NULL, NULL, MARGIN_CAM),
	CMUCAL_ACPM_VCLK(dvfs_disp, NULL, 0, NULL, 0, NULL, NULL, MARGIN_DISP),
	CMUCAL_ACPM_VCLK(dvfs_aud, NULL, 0, NULL, 0, NULL, NULL, MARGIN_AUD),
	CMUCAL_ACPM_VCLK(dvs_cp, NULL, 0, NULL, 0, NULL, NULL, MARGIN_CP),
};

unsigned int acpm_vclk_size = 10;
