
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01180950(long param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_60e0 [2];
  undefined1 auStack_60d0 [160];
  undefined *local_6030;
  undefined1 auStack_6028 [8];
  undefined1 *local_6020;
  undefined *local_3228;
  undefined1 auStack_3160 [8808];
  undefined *local_ef8;
  undefined1 local_ed2;
  undefined4 local_ed0;
  undefined *local_cf0;
  undefined *local_bd0;
  undefined *local_ab0;
  undefined *local_990;
  undefined *local_870;
  undefined *local_750;
  undefined *local_630;
  undefined *local_510;
  undefined *local_3f0;
  undefined *local_2d0;
  undefined **local_110;
  undefined *puStack_108;
  undefined1 *local_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  undefined8 local_58;
  undefined1 local_50;
  
  if (*(long *)PTR_DAT_04bb27c0 == 0) {
    iVar2 = _DAT_000005e8;
  }
  else {
    iVar2 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x5e8);
    if (iVar2 == 1) {
      return 0;
    }
  }
  if (1 < iVar2 - 3U) {
    lVar4 = *(long *)(param_1 + 0x1da0);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 8) == 3)) &&
       (lVar3 = *(long *)(lVar4 + 0xc0), lVar3 != lVar4 + 0xb8)) {
      lVar5 = lVar3 + -0x158;
      do {
        if ((*(int *)(param_2 + 0x20) == *(int *)(lVar5 + 8)) &&
           ((*(byte *)(lVar5 + 0x150) & 3) != 1)) {
          return 0;
        }
        lVar3 = *(long *)(lVar3 + 8);
        lVar5 = lVar3 + -0x158;
      } while (lVar5 != lVar4 + -0xa0);
    }
    if ((**(char **)(param_2 + 8) != '\0') && ((*(byte *)(param_1 + 0xe060) & 1) == 0)) {
      local_f8 = 0x40;
      local_b5 = 0;
      local_f4[0] = 0;
      local_a0 = 0x40;
      local_100 = local_f4;
      puStack_a8 = local_9c;
      local_5d = 0;
      puStack_108 = PTR_DAT_04bb2bc0 + 0x10;
      local_9c[0] = 0;
      local_110 = &PTR_LAB_049836a0;
      local_58 = 0;
      local_50 = 0xff;
      local_b0 = puStack_108;
      FUN_01184fd0(&local_110);
      local_58 = CONCAT44(local_58._4_4_,1);
      FUN_01181be0(local_60e0,*(undefined8 *)(param_1 + 8),param_1 + 0x10,&local_110);
      local_ed2 = 1;
      *(undefined ***)(param_1 + 0x1da8) = local_60e0;
      local_ed0 = param_3;
      FUN_011828b0(local_60e0);
      param_3 = local_ed0;
      local_ef8 = PTR_DAT_04bbb860;
      *(undefined8 *)(param_1 + 0x1da8) = 0;
      local_ef8 = local_ef8 + 0x10;
      local_cf0 = PTR_DAT_04bb2df8 + 0x10;
      local_60e0[0] = PTR_DAT_04bbb858 + 0x10;
      local_3228 = PTR_DAT_04bbb890 + 0x10;
      local_bd0 = local_cf0;
      local_ab0 = local_cf0;
      local_990 = local_cf0;
      local_870 = local_cf0;
      local_750 = local_cf0;
      local_630 = local_cf0;
      local_510 = local_cf0;
      local_3f0 = local_cf0;
      local_2d0 = local_cf0;
      FUN_01185508(auStack_3160);
      local_6030 = PTR_DAT_04bbb808 + 0x10;
      while (local_6020 != auStack_6028) {
        puVar1 = (undefined8 *)(local_6020 + -0x158);
        local_6020 = *(undefined1 **)(local_6020 + 8);
        (**(code **)*puVar1)();
      }
      FUN_01182210(auStack_60d0);
    }
  }
  return param_3;
}

