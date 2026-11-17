
void FUN_02eb85b8(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  undefined *local_3f8;
  undefined8 *puStack_3f0;
  undefined *local_3e8;
  char *local_3e0;
  undefined *puStack_3d8;
  undefined2 local_3d0;
  undefined8 local_3cc;
  undefined4 local_3c4;
  undefined *local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined1 local_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined *local_390;
  undefined1 *puStack_388;
  undefined4 local_380;
  undefined1 local_37c [63];
  undefined1 local_33d;
  undefined *local_338;
  undefined1 *puStack_330;
  undefined4 local_328;
  undefined1 local_324 [63];
  undefined1 local_2e5;
  undefined8 local_2e0;
  undefined *local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined1 local_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0;
  undefined *local_2a8;
  undefined1 *puStack_2a0;
  undefined4 local_298;
  undefined1 local_294 [63];
  undefined1 local_255;
  undefined *local_250;
  undefined1 *puStack_248;
  undefined4 local_240;
  undefined1 local_23c [63];
  undefined1 local_1fd;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined *local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [63];
  undefined1 local_16d;
  undefined *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined1 local_154 [63];
  undefined1 local_115;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [63];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [63];
  undefined1 local_4d;
  undefined *local_48;
  int local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  
  lVar2 = *(long *)(*param_1 + 0x12d8);
  if ((int)param_2 < 2) {
    plVar1 = (long *)(lVar2 + 0x580) + param_2;
    if (1 < param_2) {
      plVar1 = (long *)(lVar2 + 0x580);
    }
    lVar2 = *plVar1;
  }
  else if (param_2 < 10) {
    lVar2 = *(long *)(lVar2 + (ulong)(param_2 - 2) * 8 + 0x590);
  }
  else {
    if (param_2 != 10) {
      return;
    }
    lVar2 = *(long *)(lVar2 + 0x5d0);
  }
  if ((lVar2 != 0) && (lVar2 = **(long **)(lVar2 + 0x2e0), lVar2 != 0)) {
    local_3cc = 0;
    local_3d0 = 0x100;
    local_3c4 = 0;
    local_3b0 = 0;
    puStack_388 = local_37c;
    local_3ac = 0;
    local_398 = 0xffffffff;
    local_380 = 0x40;
    local_33d = 0;
    local_3a8 = 0xffffffff;
    uStack_3a0 = 0xffffffff00000000;
    local_390 = PTR_DAT_04bb2bc0 + 0x10;
    local_37c[0] = 0;
    local_328 = 0x40;
    local_2e5 = 0;
    local_324[0] = 0;
    puStack_330 = local_324;
    local_3c0 = PTR_DAT_04bb2e00 + 0x10;
    local_2b0 = 0xffffffff;
    puStack_248 = local_23c;
    local_23c[0] = 0;
    puStack_2a0 = local_294;
    local_294[0] = 0;
    local_1d8 = 0xffffffff;
    local_1c8 = 0xffffffff;
    local_1d0 = 0xffffffff00000000;
    local_2c8 = 0;
    local_2c4 = 0;
    local_298 = 0x40;
    local_255 = 0;
    local_240 = 0x40;
    local_1fd = 0;
    local_2e0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 0;
    local_1b0 = 0x40;
    local_16d = 0;
    local_158 = 0x40;
    local_115 = 0;
    local_1f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_e8 = 0x40;
    local_a5 = 0;
    local_90 = 0x40;
    local_4d = 0;
    local_2c0 = 0xffffffff;
    uStack_2b8 = 0xffffffff00000000;
    local_f0 = local_e4;
    local_e4[0] = 0;
    local_98 = local_8c;
    local_8c[0] = 0;
    local_1b8 = local_1ac;
    local_1ac[0] = 0;
    local_160 = local_154;
    local_154[0] = 0;
    uStack_3b8 = 0;
    uStack_2d0 = 0;
    local_40 = *(int *)PTR_DAT_04bc0b30;
    local_3c = 0;
    *(int *)PTR_DAT_04bc0b30 = local_40 + 1;
    local_48 = PTR_DAT_04bc0a78 + 0x10;
    puStack_3d8 = PTR_DAT_04bc0bf0 + 0x10;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_3f8 = PTR_DAT_04bb2020 + 0x10;
    local_3e0 = "Report";
    if ((param_2 - 10 < 0xfffffff8) || (7 < param_2 - 2)) {
      puStack_3f0 = &DAT_0407ebb1;
    }
    else {
      puStack_3f0 = (undefined8 *)(&PTR_DAT_04adc798)[(int)(param_2 - 2)];
    }
    local_3e8 = local_3f8;
    local_338 = local_390;
    local_2d8 = local_3c0;
    local_2a8 = local_390;
    local_250 = local_390;
    local_1f0 = local_3c0;
    local_1c0 = local_390;
    local_168 = local_390;
    local_f8 = local_390;
    local_a0 = local_390;
    FUN_01bea210(&puStack_3d8,lVar2,&local_3e8,&local_3f8);
    FUN_01bea9c8(&puStack_3d8);
    FUN_01be9eb8(&puStack_3d8);
  }
  return;
}

