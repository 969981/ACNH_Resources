
void FUN_027223b0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  
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
  *param_1 = &PTR_LAB_04a89be0;
  lVar4 = param_1[2];
  lVar7 = param_1[3];
  param_1[3] = param_1 + 7;
  plVar6 = param_1 + 10;
  *plVar6 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = lVar4;
  if (lVar7 != 0) {
    param_1[0xb] = lVar7;
  }
  memset(param_1 + 0xe,0,0x15e0);
  puVar2 = PTR_DAT_04bc30c8;
  puVar1 = PTR_DAT_04bc30c8 + 0x10;
  lVar7 = -0x15e0;
  do {
    lVar5 = lVar7 + 0x70;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1678) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1670) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1668) = 0;
    *(undefined1 *)((long)param_1 + lVar7 + 0x1680) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1660) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1658) = 0;
    *(undefined **)((long)param_1 + lVar7 + 0x1650) = puVar1;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1690) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1698) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x16a0) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x16a8) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x16b0) = 0;
    *(undefined1 *)((long)param_1 + lVar7 + 0x16b8) = 0;
    *(undefined **)((long)param_1 + lVar7 + 0x1688) = puVar1;
    lVar7 = lVar5;
  } while (lVar5 != 0);
  lVar7 = 0;
  iVar8 = 0;
  param_1[7] = &PTR_LAB_04a89c10;
  do {
    lVar5 = *plVar6;
    puVar3 = param_1 + 0xe + (long)iVar8 * 7;
    *plVar6 = (long)puVar3;
    if (lVar5 != 0) {
      puVar3[4] = lVar5;
    }
    puVar3[2] = lVar4 + lVar7 + puVar3[2];
    FUN_026400e0();
    lVar7 = lVar7 + 1;
    iVar8 = iVar8 + 1;
  } while (lVar7 != 100);
  lVar4 = param_1[2];
  lVar7 = param_1[3];
  param_1[0x2cb] = 0;
  param_1[0x2cd] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  param_1[3] = param_1 + 0x2ca;
  param_1[0x2cc] = lVar4 + 100;
  if (lVar7 != 0) {
    param_1[0x2ce] = lVar7;
  }
  memset(param_1 + 0x2d1,0,0x15e0);
  lVar7 = -0x15e0;
  do {
    lVar5 = lVar7 + 0x70;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2c90) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2c88) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2c80) = 0;
    *(undefined1 *)((long)param_1 + lVar7 + 0x2c98) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2c78) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2c70) = 0;
    *(undefined **)((long)param_1 + lVar7 + 0x2c68) = puVar2 + 0x10;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2ca8) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2cb0) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2cb8) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2cc0) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x2cc8) = 0;
    *(undefined1 *)((long)param_1 + lVar7 + 0x2cd0) = 0;
    *(undefined **)((long)param_1 + lVar7 + 0x2ca0) = puVar2 + 0x10;
    lVar7 = lVar5;
  } while (lVar5 != 0);
  lVar7 = 0;
  iVar8 = 0;
  param_1[0x2ca] = &PTR_LAB_04a89c10;
  do {
    lVar5 = param_1[0x2cd];
    puVar3 = param_1 + 0x2d1 + (long)iVar8 * 7;
    param_1[0x2cd] = puVar3;
    if (lVar5 != 0) {
      puVar3[4] = lVar5;
    }
    puVar3[2] = lVar4 + 100 + lVar7 + puVar3[2];
    FUN_026400e0();
    lVar7 = lVar7 + 1;
    iVar8 = iVar8 + 1;
  } while (lVar7 != 100);
  return;
}

