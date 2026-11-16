
void FUN_027078e0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar4 != 0) {
      param_1[4] = lVar4;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_04a8f4b0;
  lVar4 = param_1[2];
  lVar5 = param_1[3];
  param_1[3] = param_1 + 7;
  plVar6 = param_1 + 10;
  *plVar6 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = lVar4;
  if (lVar5 != 0) {
    param_1[0xb] = lVar5;
  }
  memset(param_1 + 0xe,0,0x3800);
  puVar1 = PTR_DAT_04bb4c40 + 0x10;
  lVar5 = -0x3800;
  do {
    lVar2 = lVar5 + 0x70;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3898) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3890) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3888) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x38a0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3880) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x3878) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x3870) = puVar1;
    *(undefined8 *)((long)param_1 + lVar5 + 0x38b0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x38b8) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x38c0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x38c8) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x38d0) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x38d8) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x38a8) = puVar1;
    lVar5 = lVar2;
  } while (lVar2 != 0);
  param_1[7] = &PTR_LAB_04a8f4e0;
  iVar7 = 0;
  do {
    lVar5 = *plVar6;
    puVar3 = param_1 + 0xe + (long)iVar7 * 7;
    *plVar6 = (long)puVar3;
    if (lVar5 != 0) {
      puVar3[4] = lVar5;
    }
    puVar3[2] = lVar4 + puVar3[2];
    FUN_026400e0(puVar3,lVar4);
    iVar7 = iVar7 + 1;
    lVar4 = lVar4 + 1;
  } while (iVar7 != 0x100);
  FUN_02707bd0(param_1 + 0x70e,param_1,param_1[2] + 0x100);
  lVar5 = param_1[3];
  param_1[0x74e] = 0;
  param_1[0x750] = 0;
  param_1[0x751] = 0;
  param_1[0x752] = 0;
  lVar4 = param_1[2] + 0x108;
  *(undefined1 *)(param_1 + 0x753) = 0;
  param_1[3] = param_1 + 0x74d;
  param_1[0x74f] = lVar4;
  if (lVar5 != 0) {
    param_1[0x751] = lVar5;
  }
  memset(param_1 + 0x754,0,0x3800);
  lVar5 = -0x3800;
  do {
    lVar2 = lVar5 + 0x70;
    *(undefined8 *)((long)param_1 + lVar5 + 0x72c8) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x72c0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x72b8) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x72d0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x72b0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x72a8) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x72a0) = &DAT_04a8ee20;
    *(undefined8 *)((long)param_1 + lVar5 + 0x72e0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x72e8) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x72f0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x72f8) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x7300) = 0;
    *(undefined1 *)((long)param_1 + lVar5 + 0x7308) = 0;
    *(undefined **)((long)param_1 + lVar5 + 0x72d8) = &DAT_04a8ee20;
    lVar5 = lVar2;
  } while (lVar2 != 0);
  param_1[0x74d] = &PTR_LAB_04a8f540;
  iVar7 = 0;
  do {
    lVar5 = param_1[0x750];
    puVar3 = param_1 + 0x754 + (long)iVar7 * 7;
    param_1[0x750] = puVar3;
    if (lVar5 != 0) {
      puVar3[4] = lVar5;
    }
    puVar3[2] = lVar4 + puVar3[2];
    FUN_026400e0(puVar3,lVar4);
    iVar7 = iVar7 + 1;
    lVar4 = lVar4 + 1;
  } while (iVar7 != 0x100);
  return;
}

