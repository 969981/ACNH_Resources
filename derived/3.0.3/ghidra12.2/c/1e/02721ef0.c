
void FUN_02721ef0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar2 != 0) {
      param_1[4] = lVar2;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_04a89af0;
  lVar2 = param_1[2];
  lVar3 = param_1[3];
  param_1[3] = param_1 + 7;
  plVar7 = param_1 + 10;
  *plVar7 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = lVar2;
  if (lVar3 != 0) {
    param_1[0xb] = lVar3;
  }
  memset(param_1 + 0xe,0,0x2bc0);
  lVar3 = 100;
  puVar1 = PTR_DAT_04bc30c8 + 0x10;
  plVar6 = param_1 + 0x15;
  do {
    *(undefined1 *)(plVar6 + -1) = 0;
    lVar3 = lVar3 + -2;
    plVar6[0xe] = (long)puVar1;
    plVar6[-3] = 0;
    plVar6[-2] = 0;
    *(undefined1 *)(plVar6 + 6) = 0;
    plVar6[0xc] = 0;
    *(undefined1 *)(plVar6 + 0xd) = 0;
    *(undefined1 *)(plVar6 + 0x14) = 0;
    plVar6[0xf] = 0;
    plVar6[7] = (long)&PTR_LAB_04a89b50;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[-5] = 0;
    plVar6[-4] = (long)plVar6;
    *plVar6 = (long)puVar1;
    plVar6[1] = 0;
    plVar6[-7] = (long)&PTR_LAB_04a89b50;
    plVar6[-6] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = (long)(plVar6 + 0xe);
    plVar6[0x12] = 0;
    plVar6[0x13] = 0;
    plVar6[0x10] = 0;
    plVar6[0x11] = 0;
    plVar6 = plVar6 + 0x1c;
  } while (lVar3 != 0);
  lVar3 = 0;
  iVar8 = 0;
  param_1[7] = &PTR_LAB_04a89b20;
  do {
    lVar4 = *plVar7;
    puVar5 = param_1 + 0xe + (long)iVar8 * 0xe;
    *plVar7 = (long)puVar5;
    if (lVar4 != 0) {
      puVar5[4] = lVar4;
    }
    puVar5[2] = lVar2 + lVar3 + puVar5[2];
    FUN_026400e0();
    lVar3 = lVar3 + 1;
    iVar8 = iVar8 + 1;
  } while (lVar3 != 100);
  lVar2 = param_1[2];
  lVar3 = param_1[3];
  param_1[0x587] = 0;
  param_1[0x589] = 0;
  param_1[0x58a] = 0;
  param_1[0x58b] = 0;
  *(undefined1 *)(param_1 + 0x58c) = 0;
  param_1[3] = param_1 + 0x586;
  param_1[0x588] = lVar2 + 100;
  if (lVar3 != 0) {
    param_1[0x58a] = lVar3;
  }
  memset(param_1 + 0x58d,0,0x2bc0);
  puVar5 = param_1 + 0x5a3;
  lVar3 = 100;
  puVar1 = PTR_DAT_04bc30c8 + 0x10;
  do {
    *(undefined1 *)(puVar5 + -0x10) = 0;
    lVar3 = lVar3 + -2;
    puVar5[-0xf] = puVar1;
    puVar5[-0x14] = 0;
    puVar5[-0x13] = puVar5 + -0xf;
    puVar5[-1] = puVar1;
    puVar5[-10] = 0;
    *(undefined1 *)(puVar5 + -9) = 0;
    *(undefined1 *)(puVar5 + -2) = 0;
    *(undefined1 *)(puVar5 + 5) = 0;
    *puVar5 = 0;
    puVar5[-0x12] = 0;
    puVar5[-0x11] = 0;
    puVar5[-0xe] = 0;
    puVar5[-0xd] = 0;
    puVar5[-0xc] = 0;
    puVar5[-0xb] = 0;
    puVar5[-0x16] = &PTR_LAB_04a89b50;
    puVar5[-0x15] = 0;
    puVar5[-6] = 0;
    puVar5[-5] = 0;
    puVar5[-5] = puVar5 + -1;
    puVar5[-4] = 0;
    puVar5[-3] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[-8] = &PTR_LAB_04a89b50;
    puVar5[-7] = 0;
    puVar5 = puVar5 + 0x1c;
  } while (lVar3 != 0);
  lVar3 = 0;
  iVar8 = 0;
  param_1[0x586] = &PTR_LAB_04a89b20;
  do {
    lVar4 = param_1[0x589];
    puVar5 = param_1 + 0x58d + (long)iVar8 * 0xe;
    param_1[0x589] = puVar5;
    if (lVar4 != 0) {
      puVar5[4] = lVar4;
    }
    puVar5[2] = lVar2 + 100 + lVar3 + puVar5[2];
    FUN_026400e0();
    lVar3 = lVar3 + 1;
    iVar8 = iVar8 + 1;
  } while (lVar3 != 100);
  return;
}

