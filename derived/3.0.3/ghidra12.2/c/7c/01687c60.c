
uint FUN_01687c60(long param_1,undefined8 param_2,uint param_3,long param_4,uint param_5)

{
  long lVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined *local_20b0;
  undefined *puStack_20a8;
  int local_20a0;
  int iStack_209c;
  undefined *local_2098;
  int local_2090;
  int iStack_208c;
  undefined *local_2088;
  int local_2080;
  undefined4 uStack_207c;
  byte local_2078;
  undefined1 auStack_2070 [8];
  int local_2068;
  int iStack_2064;
  undefined **local_2060;
  uint local_2058 [1025];
  uint local_1054;
  undefined8 local_1050;
  undefined *local_1048;
  undefined8 local_1040;
  undefined *local_1038;
  undefined8 local_1030;
  
  local_2060 = &PTR_LAB_049bb2c8;
  lVar9 = param_1 + 0x14028 + (ulong)param_3 * 0x1008;
  if (0x1d < param_3) {
    lVar9 = param_1 + 0x14028;
  }
  local_1054 = param_3;
  memset(local_2058,0,0x1000);
  lVar8 = 0;
  do {
    puVar2 = (uint *)(lVar9 + 8 + lVar8);
    lVar1 = lVar8 + 8;
    uVar5 = puVar2[1];
    *(uint *)((long)local_2058 + lVar8 + 0x1008) = *puVar2 | *(uint *)((long)local_2058 + lVar8);
    *(uint *)((long)&local_1050 + lVar8 + 4) = uVar5 | *(uint *)((long)local_2058 + lVar8 + 4);
    lVar8 = lVar1;
  } while (lVar1 != 0x1000);
  memcpy(local_2058,&local_1050,0x1000);
  if ((param_5 & 1) != 0) {
    lVar9 = 0;
    do {
      puVar2 = (uint *)(param_1 + 0x2b0e8 + lVar9);
      lVar8 = lVar9 + 8;
      uVar5 = puVar2[1];
      *(uint *)((long)local_2058 + lVar9 + 0x1008) = *puVar2 & *(uint *)((long)local_2058 + lVar9);
      *(uint *)((long)&local_1050 + lVar9 + 4) = uVar5 & *(uint *)((long)local_2058 + lVar9 + 4);
      lVar9 = lVar8;
    } while (lVar8 != 0x1000);
    memcpy(local_2058,&local_1050,0x1000);
  }
  iVar7 = 0;
  lVar9 = 2;
  do {
    uVar5 = *(uint *)((long)&local_2060 + lVar9 * 4);
    lVar9 = lVar9 + 1;
    uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    iVar7 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + iVar7;
  } while (lVar9 != 0x402);
  if (iVar7 != 0) {
    FUN_01696be0(auStack_2070,&local_2060);
    puVar4 = PTR_DAT_04bbc1a0;
    puVar3 = PTR_DAT_04bb2010;
    local_1030 = 0;
    local_1040 = 0;
    local_1050 = PTR_DAT_04bbc1a0 + 0x10;
    local_1048 = PTR_DAT_04bb2010 + 0x10;
    local_1038 = local_1048;
    uVar6 = FUN_0277f02c(param_2,&local_1050);
    if (((uVar6 & 1) != 0) && ((int)local_1030 - (int)local_1040 == 1)) {
      local_2080 = local_1030._4_4_ - local_1040._4_4_;
      if (local_2080 == 1) {
        uStack_207c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
        local_2078 = FUN_017baf44();
        local_2078 = local_2078 & 1;
        local_2088 = PTR_DAT_04bb6268 + 0x10;
        uVar5 = FUN_011f3880(&local_2088,0,param_2,auStack_2070);
        if ((uVar5 & 1) != 0) {
          local_20b0 = puVar4 + 0x10;
          puStack_20a8 = puVar3 + 0x10;
          local_2090 = local_2068 + 1;
          iStack_208c = iStack_2064 + 1;
          local_20a0 = local_2068;
          iStack_209c = iStack_2064;
          local_2098 = puStack_20a8;
          FUN_01686550(param_1,&local_20b0);
          if (param_4 != 0) {
            *(int *)(param_4 + 8) = local_2068;
            *(int *)(param_4 + 0xc) = iStack_2064;
          }
        }
        goto LAB_01687ed0;
      }
    }
  }
  uVar5 = 0;
LAB_01687ed0:
  return uVar5 & 1;
}

