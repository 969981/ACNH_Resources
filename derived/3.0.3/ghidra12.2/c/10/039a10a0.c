
void FUN_039a10a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long local_110;
  byte *local_108;
  undefined *local_d8;
  byte *local_d0 [14];
  
  uVar10 = 0;
  do {
    local_d0[0xc] = (byte *)0x409e43e;
    local_d0[2] = (byte *)0x40ebedc;
    local_d0[4] = &DAT_040d1a55;
    local_d0[6] = (byte *)0x408eaeb;
    local_d0[8] = (byte *)0x4098e9e;
    local_d0[10] = (byte *)0x40fbf94;
    local_d8 = PTR_DAT_04bb2020 + 0x10;
    local_d0[0] = (byte *)0x407e6dc;
    local_d0[0] = local_d0[uVar10 * 2];
    uVar3 = 0;
    if (*(long *)PTR_DAT_04bd1140 != 0) {
      uVar3 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_d8);
    }
    lVar11 = param_1 + 0x290 + uVar10 * 0x48;
    *(undefined8 *)(lVar11 + 0x40) = uVar3;
    (**(code **)(local_d8 + 0x18))(&local_d8);
    uVar6 = (uint)*local_d0[0];
    if (*local_d0[0] != 0) {
      uVar7 = 0xffffffff;
      pbVar8 = local_d0[0];
      do {
        pbVar8 = pbVar8 + 1;
        uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
        uVar6 = (uint)*pbVar8;
      } while (uVar6 != 0);
      uVar6 = ~uVar7;
    }
    lVar9 = *(long *)(param_1 + 0x20);
    *(uint *)(lVar11 + 0x28) = uVar6;
    plVar1 = (long *)(param_1 + 0x18);
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 0x30);
    }
    *plVar1 = lVar11;
    *(long *)(param_1 + 0x20) = lVar11;
    *(long *)(lVar11 + 0x38) = param_1;
    plVar12 = (long *)(param_1 + 0x1e8 + uVar10 * 0x18);
    plVar4 = (long *)FUN_039a2760(uVar10 & 0xffffffff,0,param_2);
    lVar9 = plVar4[0xc];
    plVar1 = plVar4 + 9;
    plVar4[0x13] = param_1;
    plVar4[0x14] = (long)plVar12;
    if (lVar9 != 0) {
      plVar4[0xc] = 0;
      if (plVar4[9] != 0) {
        *(long *)(plVar4[9] + 8) = plVar4[10];
      }
      if ((long *)plVar4[10] != (long *)0x0) {
        *(long *)plVar4[10] = *plVar1;
      }
      *plVar1 = 0;
      plVar4[10] = 0;
      *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
    }
    plVar4[0xc] = (long)plVar12;
    lVar9 = *plVar12;
    *plVar12 = (long)plVar1;
    plVar4[9] = lVar9;
    plVar4[10] = (long)plVar12;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar1;
    }
    *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
    (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
    local_d0[0xc] = (byte *)0x409e43e;
    local_d0[0] = (byte *)0x407e6dc;
    local_d0[2] = (byte *)0x40ebedc;
    local_d0[4] = &DAT_040d1a55;
    local_d0[6] = (byte *)0x408eaeb;
    local_d0[8] = (byte *)0x4098e9e;
    local_d0[10] = (byte *)0x40fbf94;
    FUN_006d8678(&local_110,"%s_%d",local_d0[uVar10 * 2],0);
    lVar9 = 0;
    if (*(long *)PTR_DAT_04bd1140 != 0) {
      lVar9 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_110);
    }
    plVar4[8] = lVar9;
    (**(code **)(local_110 + 0x18))(&local_110);
    uVar6 = (uint)*local_108;
    if (*local_108 != 0) {
      uVar7 = 0xffffffff;
      pbVar8 = local_108;
      do {
        pbVar8 = pbVar8 + 1;
        uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
        uVar6 = (uint)*pbVar8;
      } while (uVar6 != 0);
      uVar6 = ~uVar7;
    }
    *(uint *)(plVar4 + 5) = uVar6;
    plVar1 = (long *)(lVar11 + 0x18);
    plVar2 = plVar1;
    if (*(long *)(lVar11 + 0x20) != 0) {
      plVar2 = (long *)(*(long *)(lVar11 + 0x20) + 0x30);
    }
    *plVar2 = (long)plVar4;
    *(long **)(lVar11 + 0x20) = plVar4;
    plVar4[7] = lVar11;
    plVar2 = (long *)(param_1 + 0x488 + uVar10 * 0x20);
    *plVar2 = (long)plVar4;
    plVar5 = (long *)FUN_039a2760(uVar10 & 0xffffffff,1,param_2);
    lVar9 = plVar5[0xc];
    plVar4 = plVar5 + 9;
    plVar5[0x13] = param_1;
    plVar5[0x14] = (long)plVar12;
    if (lVar9 != 0) {
      plVar5[0xc] = 0;
      if (plVar5[9] != 0) {
        *(long *)(plVar5[9] + 8) = plVar5[10];
      }
      if ((long *)plVar5[10] != (long *)0x0) {
        *(long *)plVar5[10] = *plVar4;
      }
      *plVar4 = 0;
      plVar5[10] = 0;
      *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
    }
    plVar5[0xc] = (long)plVar12;
    lVar9 = *plVar12;
    *plVar12 = (long)plVar4;
    plVar5[9] = lVar9;
    plVar5[10] = (long)plVar12;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar4;
    }
    *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
    (**(code **)(*plVar5 + 0x48))(plVar5,param_2);
    local_d0[0xc] = (byte *)0x409e43e;
    local_d0[0] = (byte *)0x407e6dc;
    local_d0[2] = (byte *)0x40ebedc;
    local_d0[4] = &DAT_040d1a55;
    local_d0[6] = (byte *)0x408eaeb;
    local_d0[8] = (byte *)0x4098e9e;
    local_d0[10] = (byte *)0x40fbf94;
    FUN_006d8678(&local_110,"%s_%d",local_d0[uVar10 * 2],1);
    lVar9 = 0;
    if (*(long *)PTR_DAT_04bd1140 != 0) {
      lVar9 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_110);
    }
    plVar5[8] = lVar9;
    (**(code **)(local_110 + 0x18))(&local_110);
    uVar6 = (uint)*local_108;
    if (*local_108 != 0) {
      uVar7 = 0xffffffff;
      pbVar8 = local_108;
      do {
        pbVar8 = pbVar8 + 1;
        uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
        uVar6 = (uint)*pbVar8;
      } while (uVar6 != 0);
      uVar6 = ~uVar7;
    }
    *(uint *)(plVar5 + 5) = uVar6;
    plVar4 = plVar1;
    if (*(long *)(lVar11 + 0x20) != 0) {
      plVar4 = (long *)(*(long *)(lVar11 + 0x20) + 0x30);
    }
    *plVar4 = (long)plVar5;
    *(long **)(lVar11 + 0x20) = plVar5;
    plVar5[7] = lVar11;
    plVar2[1] = (long)plVar5;
    plVar5 = (long *)FUN_039a2760(uVar10 & 0xffffffff,2,param_2);
    lVar9 = plVar5[0xc];
    plVar4 = plVar5 + 9;
    plVar5[0x13] = param_1;
    plVar5[0x14] = (long)plVar12;
    if (lVar9 != 0) {
      plVar5[0xc] = 0;
      if (plVar5[9] != 0) {
        *(long *)(plVar5[9] + 8) = plVar5[10];
      }
      if ((long *)plVar5[10] != (long *)0x0) {
        *(long *)plVar5[10] = *plVar4;
      }
      *plVar4 = 0;
      plVar5[10] = 0;
      *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
    }
    plVar5[0xc] = (long)plVar12;
    lVar9 = *plVar12;
    *plVar12 = (long)plVar4;
    plVar5[9] = lVar9;
    plVar5[10] = (long)plVar12;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar4;
    }
    *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
    (**(code **)(*plVar5 + 0x48))(plVar5,param_2);
    local_d0[0xc] = (byte *)0x409e43e;
    local_d0[0] = (byte *)0x407e6dc;
    local_d0[2] = (byte *)0x40ebedc;
    local_d0[4] = &DAT_040d1a55;
    local_d0[6] = (byte *)0x408eaeb;
    local_d0[8] = (byte *)0x4098e9e;
    local_d0[10] = (byte *)0x40fbf94;
    FUN_006d8678(&local_110,"%s_%d",local_d0[uVar10 * 2],2);
    lVar9 = 0;
    if (*(long *)PTR_DAT_04bd1140 != 0) {
      lVar9 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_110);
    }
    plVar5[8] = lVar9;
    (**(code **)(local_110 + 0x18))(&local_110);
    uVar6 = (uint)*local_108;
    if (*local_108 != 0) {
      uVar7 = 0xffffffff;
      pbVar8 = local_108;
      do {
        pbVar8 = pbVar8 + 1;
        uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
        uVar6 = (uint)*pbVar8;
      } while (uVar6 != 0);
      uVar6 = ~uVar7;
    }
    *(uint *)(plVar5 + 5) = uVar6;
    plVar4 = plVar1;
    if (*(long *)(lVar11 + 0x20) != 0) {
      plVar4 = (long *)(*(long *)(lVar11 + 0x20) + 0x30);
    }
    *plVar4 = (long)plVar5;
    *(long **)(lVar11 + 0x20) = plVar5;
    plVar5[7] = lVar11;
    plVar2[2] = (long)plVar5;
    plVar5 = (long *)FUN_039a2760(uVar10 & 0xffffffff,3,param_2);
    lVar9 = plVar5[0xc];
    plVar4 = plVar5 + 9;
    plVar5[0x13] = param_1;
    plVar5[0x14] = (long)plVar12;
    if (lVar9 != 0) {
      plVar5[0xc] = 0;
      if (plVar5[9] != 0) {
        *(long *)(plVar5[9] + 8) = plVar5[10];
      }
      if ((long *)plVar5[10] != (long *)0x0) {
        *(long *)plVar5[10] = *plVar4;
      }
      *plVar4 = 0;
      plVar5[10] = 0;
      *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
    }
    plVar5[0xc] = (long)plVar12;
    lVar9 = *plVar12;
    *plVar12 = (long)plVar4;
    plVar5[9] = lVar9;
    plVar5[10] = (long)plVar12;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar4;
    }
    *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
    (**(code **)(*plVar5 + 0x48))(plVar5,param_2);
    local_d0[0xc] = (byte *)0x409e43e;
    local_d0[0] = (byte *)0x407e6dc;
    local_d0[2] = (byte *)0x40ebedc;
    local_d0[4] = &DAT_040d1a55;
    local_d0[6] = (byte *)0x408eaeb;
    local_d0[8] = (byte *)0x4098e9e;
    local_d0[10] = (byte *)0x40fbf94;
    FUN_006d8678(&local_110,"%s_%d",local_d0[uVar10 * 2],3);
    lVar9 = 0;
    if (*(long *)PTR_DAT_04bd1140 != 0) {
      lVar9 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_110);
    }
    plVar5[8] = lVar9;
    (**(code **)(local_110 + 0x18))(&local_110);
    uVar7 = (uint)*local_108;
    uVar6 = 0;
    if (*local_108 != 0) {
      uVar6 = 0xffffffff;
      pbVar8 = local_108;
      do {
        pbVar8 = pbVar8 + 1;
        uVar6 = crc32b(uVar6,uVar7,0x4c11db7);
        uVar7 = (uint)*pbVar8;
      } while (uVar7 != 0);
      uVar6 = ~uVar6;
    }
    *(uint *)(plVar5 + 5) = uVar6;
    uVar10 = uVar10 + 1;
    if (*(long *)(lVar11 + 0x20) != 0) {
      plVar1 = (long *)(*(long *)(lVar11 + 0x20) + 0x30);
    }
    *plVar1 = (long)plVar5;
    *(long **)(lVar11 + 0x20) = plVar5;
    plVar5[7] = lVar11;
    plVar2[3] = (long)plVar5;
  } while (uVar10 != 7);
  FUN_039a5f70(param_1 + 0x7b0,0x80,param_2);
  local_d8 = PTR_DAT_04bb2020 + 0x10;
  local_d0[0] = (byte *)0x4079a17;
  uVar3 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar3 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_d8);
  }
  *(undefined8 *)(param_1 + 0x830) = uVar3;
  (**(code **)(local_d8 + 0x18))(&local_d8);
  uVar6 = (uint)*local_d0[0];
  if (*local_d0[0] != 0) {
    uVar7 = 0xffffffff;
    do {
      local_d0[0] = local_d0[0] + 1;
      uVar7 = crc32b(uVar7,uVar6,0x4c11db7);
      uVar6 = (uint)*local_d0[0];
    } while (uVar6 != 0);
    uVar6 = ~uVar7;
  }
  *(uint *)(param_1 + 0x824) = uVar6;
  plVar1 = (long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x20);
  }
  *plVar1 = param_1 + 0x808;
  *(long *)(param_1 + 0x10) = param_1 + 0x808;
  return;
}

