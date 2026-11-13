
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01180700(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_60d0 [2];
  undefined1 auStack_60c0 [160];
  undefined *local_6020;
  undefined1 auStack_6018 [8];
  undefined1 *local_6010;
  undefined *local_3218;
  undefined1 auStack_3150 [8808];
  undefined *local_ee8;
  undefined *local_ce0;
  undefined *local_bc0;
  undefined *local_aa0;
  undefined *local_980;
  undefined *local_860;
  undefined *local_740;
  undefined *local_620;
  undefined *local_500;
  undefined *local_3e0;
  undefined *local_2c0;
  undefined **local_100;
  undefined *puStack_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [63];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *puStack_98;
  undefined4 local_90;
  undefined1 local_8c [63];
  undefined1 local_4d;
  undefined8 local_48;
  undefined1 local_40;
  
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
    lVar3 = *(long *)(param_1 + 0x1da0);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 8) == 3)) &&
       (lVar4 = *(long *)(lVar3 + 0xc0), lVar4 != lVar3 + 0xb8)) {
      lVar5 = lVar4 + -0x158;
      do {
        if ((*(int *)(param_2 + 0x20) == *(int *)(lVar5 + 8)) &&
           ((*(byte *)(lVar5 + 0x150) & 3) != 1)) {
          return 0;
        }
        lVar4 = *(long *)(lVar4 + 8);
        lVar5 = lVar4 + -0x158;
      } while (lVar5 != lVar3 + -0xa0);
    }
    if (((**(char **)(param_2 + 8) != '\0') && ((*(byte *)(param_1 + 0xe060) & 1) == 0)) &&
       ((lVar3 == 0 || (*(int *)(lVar3 + 0x2ea4) != *(int *)(param_2 + 0x20))))) {
      local_e8 = 0x40;
      local_a5 = 0;
      local_90 = 0x40;
      local_f0 = local_e4;
      puStack_98 = local_8c;
      local_e4[0] = 0;
      local_4d = 0;
      puStack_f8 = PTR_DAT_04bb2bc0 + 0x10;
      local_8c[0] = 0;
      local_48 = 0;
      local_40 = 0xff;
      local_100 = &PTR_LAB_049836a0;
      local_a0 = puStack_f8;
      FUN_01184fd0(&local_100);
      local_48 = CONCAT44(local_48._4_4_,1);
      FUN_01181be0(local_60d0,*(undefined8 *)(param_1 + 8),param_1 + 0x10,&local_100);
      *(undefined ***)(param_1 + 0x1da8) = local_60d0;
      FUN_011828b0(local_60d0);
      *(undefined8 *)(param_1 + 0x1da8) = 0;
      local_ee8 = PTR_DAT_04bbb860 + 0x10;
      local_ce0 = PTR_DAT_04bb2df8 + 0x10;
      local_60d0[0] = PTR_DAT_04bbb858 + 0x10;
      local_3218 = PTR_DAT_04bbb890 + 0x10;
      local_bc0 = local_ce0;
      local_aa0 = local_ce0;
      local_980 = local_ce0;
      local_860 = local_ce0;
      local_740 = local_ce0;
      local_620 = local_ce0;
      local_500 = local_ce0;
      local_3e0 = local_ce0;
      local_2c0 = local_ce0;
      FUN_01185508(auStack_3150);
      local_6020 = PTR_DAT_04bbb808 + 0x10;
      while (local_6010 != auStack_6018) {
        puVar1 = (undefined8 *)(local_6010 + -0x158);
        local_6010 = *(undefined1 **)(local_6010 + 8);
        (**(code **)*puVar1)();
      }
      FUN_01182210(auStack_60c0);
      return 1;
    }
  }
  return 0;
}

