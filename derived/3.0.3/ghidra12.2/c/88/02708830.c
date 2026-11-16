
void FUN_02708830(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  
  param_1[2] = param_3;
  plVar8 = param_1 + 3;
  *plVar8 = 0;
  puVar1 = PTR_DAT_04bc35c8;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar3 != 0) {
      param_1[4] = lVar3;
    }
  }
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(param_1 + 7,0,0x5780);
  lVar3 = 100;
  lVar4 = 0;
  do {
    lVar3 = lVar3 + -1;
    *(undefined1 *)((long)param_1 + lVar4 + 0x68) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x40) = 0;
    puVar5 = (undefined8 *)((long)param_1 + lVar4 + 0xe0);
    *puVar5 = &DAT_04a8f030;
    *(undefined8 *)((long)param_1 + lVar4 + 0x98) = 0;
    puVar6 = (undefined8 *)((long)param_1 + lVar4 + 0x70);
    *puVar6 = &DAT_04a8f8a0;
    puVar7 = (undefined8 *)((long)param_1 + lVar4 + 0xa8);
    *puVar7 = &PTR_LAB_04a8f8d0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x58) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x60) = 0;
    *(undefined1 *)((long)param_1 + lVar4 + 0xa0) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0xd0) = 0;
    *(undefined1 *)((long)param_1 + lVar4 + 0xd8) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x108) = 0;
    *(undefined1 *)((long)param_1 + lVar4 + 0x110) = 0;
    *(undefined ***)((long)param_1 + lVar4 + 0x38) = &PTR_LAB_04a8f870;
    *(undefined8 *)((long)param_1 + lVar4 + 0x48) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x50) = 0;
    *(undefined8 **)((long)param_1 + lVar4 + 0x50) = puVar7;
    *(undefined8 *)((long)param_1 + lVar4 + 0x78) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x88) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x90) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0xb0) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0xb8) = 8;
    *(undefined8 *)((long)param_1 + lVar4 + 0xe8) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0xf0) = 8;
    *(undefined8 *)((long)param_1 + lVar4 + 0xf8) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x100) = 0;
    *(undefined8 **)((long)param_1 + lVar4 + 0xc0) = puVar5;
    *(undefined8 **)((long)param_1 + lVar4 + 200) = puVar6;
    lVar4 = lVar4 + 0xe0;
  } while (lVar3 != 0);
  lVar3 = 0;
  iVar9 = 0;
  *param_1 = (long)&PTR_LAB_04a8f840;
  do {
    lVar4 = *plVar8;
    plVar2 = param_1 + 7 + (long)iVar9 * 0x1c;
    *plVar8 = (long)plVar2;
    if (lVar4 != 0) {
      plVar2[4] = lVar4;
    }
    plVar2[2] = param_3 + lVar3 + plVar2[2];
    FUN_026400e0();
    lVar3 = lVar3 + 0x10;
    iVar9 = iVar9 + 1;
  } while (lVar3 != 0x640);
  return;
}

