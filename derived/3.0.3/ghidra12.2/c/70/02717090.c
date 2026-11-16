
void FUN_02717090(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  param_1[2] = param_3;
  plVar6 = param_1 + 3;
  *plVar6 = 0;
  puVar3 = PTR_DAT_04bc35c8;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar5 != 0) {
      param_1[4] = lVar5;
    }
  }
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(param_1 + 7,0,0x6200);
  lVar5 = 0;
  do {
    lVar1 = lVar5 + 0x70;
    *(undefined1 *)((long)param_1 + lVar5 + 0x68) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x58) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x60) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0xa0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x48) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x50) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x38) = &DAT_04a8f030;
    *(undefined8 *)((long)param_1 + lVar5 + 0x40) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x88) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x90) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x98) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x70) = &DAT_04a8f030;
    *(undefined8 *)((long)param_1 + lVar5 + 0x78) = 0;
    lVar5 = lVar1;
  } while (lVar1 != 0xe00);
  lVar5 = 0xe38;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar5);
    lVar5 = lVar5 + 0x70;
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 0xd) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = &DAT_04a8f030;
    puVar2[1] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = &DAT_04a8f030;
    puVar2[8] = 0;
  } while (lVar5 != 0x1c38);
  lVar5 = -0xe00;
  do {
    lVar1 = lVar5 + 0x70;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a60) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a58) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a50) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x2a68) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a48) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a40) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x2a38) = &DAT_04a8f030;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a78) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a80) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a88) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a90) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x2a98) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x2aa0) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x2a70) = &DAT_04a8f030;
    lVar5 = lVar1;
  } while (lVar1 != 0);
  lVar5 = -0xe00;
  do {
    lVar1 = lVar5 + 0x70;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3860) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3858) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3850) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x3868) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3848) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3840) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x3838) = &DAT_04a8f030;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3878) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3880) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3888) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3890) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3898) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x38a0) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x3870) = &DAT_04a8f030;
    lVar5 = lVar1;
  } while (lVar1 != 0);
  lVar5 = -0xe00;
  do {
    lVar1 = lVar5 + 0x70;
    *(undefined8 *)((long)param_1 + lVar5 + 0x4660) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x4658) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 18000) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x4668) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x4648) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x4640) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x4638) = &DAT_04a8f030;
    *(undefined8 *)((long)param_1 + lVar5 + 0x4678) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x4680) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x4688) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x4690) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x4698) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x46a0) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x4670) = &DAT_04a8f030;
    lVar5 = lVar1;
  } while (lVar1 != 0);
  lVar5 = -0xe00;
  do {
    lVar1 = lVar5 + 0x70;
    *(undefined8 *)((long)param_1 + lVar5 + 0x5460) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x5458) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x5450) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x5468) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x5448) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x5440) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x5438) = &DAT_04a8f030;
    *(undefined8 *)((long)param_1 + lVar5 + 0x5478) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x5480) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x5488) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x5490) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x5498) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x54a0) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x5470) = &DAT_04a8f030;
    lVar5 = lVar1;
  } while (lVar1 != 0);
  lVar5 = -0xe00;
  do {
    lVar1 = lVar5 + 0x70;
    *(undefined8 *)((long)param_1 + lVar5 + 0x6260) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x6258) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x6250) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x6268) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x6248) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x6240) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x6238) = &DAT_04a8f030;
    *(undefined8 *)((long)param_1 + lVar5 + 0x6278) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x6280) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x6288) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x6290) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x6298) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x62a0) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x6270) = &DAT_04a8f030;
    lVar5 = lVar1;
  } while (lVar1 != 0);
  *param_1 = (long)&PTR_LAB_04a8d940;
  iVar7 = 0;
  do {
    lVar5 = *plVar6;
    plVar4 = param_1 + 7 + (long)iVar7 * 7;
    *plVar6 = (long)plVar4;
    if (lVar5 != 0) {
      plVar4[4] = lVar5;
    }
    plVar4[2] = plVar4[2] + param_3;
    FUN_026400e0(plVar4,param_3);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x40);
  iVar7 = 0;
  do {
    lVar5 = *plVar6;
    plVar4 = param_1 + (long)iVar7 * 7 + 0x1c7;
    *plVar6 = (long)plVar4;
    if (lVar5 != 0) {
      plVar4[4] = lVar5;
    }
    plVar4[2] = plVar4[2] + param_3 + 4;
    FUN_026400e0(plVar4,param_3 + 4);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x40);
  iVar7 = 0;
  do {
    lVar5 = *plVar6;
    plVar4 = param_1 + (long)iVar7 * 7 + 0x387;
    *plVar6 = (long)plVar4;
    if (lVar5 != 0) {
      plVar4[4] = lVar5;
    }
    plVar4[2] = plVar4[2] + param_3 + 8;
    FUN_026400e0(plVar4,param_3 + 8);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x40);
  iVar7 = 0;
  do {
    lVar5 = *plVar6;
    plVar4 = param_1 + (long)iVar7 * 7 + 0x547;
    *plVar6 = (long)plVar4;
    if (lVar5 != 0) {
      plVar4[4] = lVar5;
    }
    plVar4[2] = plVar4[2] + param_3 + 0xc;
    FUN_026400e0(plVar4,param_3 + 0xc);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x40);
  iVar7 = 0;
  do {
    lVar5 = *plVar6;
    plVar4 = param_1 + (long)iVar7 * 7 + 0x707;
    *plVar6 = (long)plVar4;
    if (lVar5 != 0) {
      plVar4[4] = lVar5;
    }
    plVar4[2] = plVar4[2] + param_3 + 0x10;
    FUN_026400e0(plVar4,param_3 + 0x10);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x40);
  iVar7 = 0;
  do {
    lVar5 = *plVar6;
    plVar4 = param_1 + (long)iVar7 * 7 + 0x8c7;
    *plVar6 = (long)plVar4;
    if (lVar5 != 0) {
      plVar4[4] = lVar5;
    }
    plVar4[2] = plVar4[2] + param_3 + 0x14;
    FUN_026400e0(plVar4,param_3 + 0x14);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x40);
  iVar7 = 0;
  do {
    lVar5 = *plVar6;
    plVar4 = param_1 + (long)iVar7 * 7 + 0xa87;
    *plVar6 = (long)plVar4;
    if (lVar5 != 0) {
      plVar4[4] = lVar5;
    }
    plVar4[2] = plVar4[2] + param_3 + 0x18;
    FUN_026400e0(plVar4,param_3 + 0x18);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x40);
  return;
}

