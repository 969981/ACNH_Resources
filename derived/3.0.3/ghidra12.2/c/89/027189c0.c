
void FUN_027189c0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar3 != 0) {
      param_1[4] = lVar3;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_04a8dac0;
  lVar3 = param_1[2];
  lVar6 = param_1[3];
  param_1[3] = param_1 + 7;
  plVar5 = param_1 + 10;
  *plVar5 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = lVar3;
  if (lVar6 != 0) {
    param_1[0xb] = lVar6;
  }
  memset(param_1 + 0xe,0,0xe00);
  puVar1 = PTR_DAT_04bc30e8 + 0x10;
  lVar6 = 0;
  do {
    lVar4 = lVar6 + 0x70;
    *(undefined1 *)((long)param_1 + lVar6 + 0xa0) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x90) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x98) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0xd8) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x88) = 0;
    *(undefined **)((long)param_1 + lVar6 + 0x70) = puVar1;
    *(undefined8 *)((long)param_1 + lVar6 + 0x78) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0xb8) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0xc0) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 200) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0xd0) = 0;
    *(undefined **)((long)param_1 + lVar6 + 0xa8) = puVar1;
    *(undefined8 *)((long)param_1 + lVar6 + 0xb0) = 0;
    lVar6 = lVar4;
  } while (lVar4 != 0xe00);
  lVar6 = 0;
  iVar7 = 0;
  param_1[7] = &PTR_LAB_04a8daf0;
  do {
    lVar4 = *plVar5;
    puVar2 = param_1 + 0xe + (long)iVar7 * 7;
    *plVar5 = (long)puVar2;
    if (lVar4 != 0) {
      puVar2[4] = lVar4;
    }
    puVar2[2] = lVar3 + lVar6 + puVar2[2];
    FUN_026400e0();
    lVar6 = lVar6 + 8;
    iVar7 = iVar7 + 1;
  } while (lVar6 != 0x200);
  FUN_02717b08(param_1 + 0x1ce,param_1,param_1[2] + 0x200);
  FUN_02717b08(param_1 + 0x245,param_1,param_1[2] + 0x280);
  return;
}

