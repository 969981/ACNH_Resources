
void FUN_01dfe32c(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 1) = 1;
  *(uint *)((long)param_1 + 0xc) = param_2 & 0xffff;
  memset(param_1 + 4,0,0x19400);
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined1 *)((long)param_1 + 0x1948c) = 0;
  puVar1 = PTR_DAT_04bc39a0;
  *(undefined4 *)(param_1 + 0x3291) = 0x100;
  *(undefined1 *)((long)param_1 + 0x1958b) = 0;
  *(undefined4 *)(param_1 + 0x3286) = 0;
  param_1[0x3284] = puVar1 + 0x10;
  param_1[0x3285] = 0;
  param_1[0x328f] = &PTR_LAB_048f9a70;
  param_1[0x3290] = (undefined1 *)((long)param_1 + 0x1948c);
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  puVar1 = PTR_DAT_04bc3808;
  *(undefined4 *)(param_1 + 0x32b5) = 0xffffffff;
  param_1[0x32b2] = 0;
  *(undefined4 *)(param_1 + 0x32b3) = 0;
  param_1[0x32b4] = 0;
  param_1[0x32b6] = 0;
  param_1[0x32b7] = 0;
  param_1[0x3287] = puVar1 + 0x10;
  param_1[0x328b] = puVar1 + 0x10;
  *(uint *)(param_1 + 2) = (param_2 & 0x3ff) << 3 | 0x70000;
  param_1[0x32b8] = 0;
  param_1[0x32b9] = 0;
  param_1[0x32ba] = 0;
  param_1[0x32bb] = 0;
  param_1[0x32bc] = 0;
  param_1[0x32bd] = 0;
  *(undefined8 *)((long)param_1 + 0x195ef) = 0;
  FUN_0082f17c(param_1 + 2);
  return;
}

