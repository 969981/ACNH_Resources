
void FUN_007e9bd0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
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
  param_1[0xc] = 0;
  *param_1 = &PTR_LAB_04916f20;
  lVar3 = param_1[2];
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = lVar3;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  param_1[0xe] = &PTR_LAB_04916f50;
  param_1[7] = &PTR_LAB_04916ec0;
  param_1[0x12] = param_1 + 7;
  param_1[0x13] = 0;
  lVar1 = lVar3 + 0x78;
  param_1[0xf] = 0;
  param_1[0x10] = lVar3 + 4;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = &PTR_LAB_04916fb0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = lVar1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[3] = param_1 + 0x15;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x18] = param_1 + 0x1c;
  param_1[0x19] = param_1 + 0xe;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  plVar5 = param_1 + 0x1f;
  *plVar5 = 0;
  memset(param_1 + 0x23,0,0x9d8);
  lVar3 = 400;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar3);
    lVar3 = lVar3 + 0xa8;
    *(undefined1 *)(puVar2 + -9) = 0;
    puVar2[-0xb] = 0;
    puVar2[-10] = 0;
    *(undefined1 *)(puVar2 + -2) = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2[-1] = &PTR_LAB_04916e90;
    puVar2[-0xd] = 0;
    puVar2[-0xc] = 0;
    puVar2[-0xf] = &PTR_LAB_04916e90;
    puVar2[-0xe] = 0;
    puVar2[-6] = 0;
    puVar2[-5] = 0;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-8] = &PTR_LAB_04916e90;
    puVar2[-7] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  } while (lVar3 != 0xb68);
  lVar3 = 0;
  iVar6 = 0;
  param_1[0x1c] = &PTR_LAB_04916fe0;
  do {
    lVar4 = *plVar5;
    puVar2 = param_1 + 0x23 + (long)iVar6 * 7;
    *plVar5 = (long)puVar2;
    if (lVar4 != 0) {
      puVar2[4] = lVar4;
    }
    puVar2[2] = lVar1 + lVar3 + puVar2[2];
    FUN_026400e0();
    lVar3 = lVar3 + 1;
    iVar6 = iVar6 + 1;
  } while (lVar3 != 0x2d);
  lVar3 = param_1[3];
  param_1[0x15] = &PTR_LAB_04916f80;
  param_1[0x15f] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  *(undefined1 *)(param_1 + 0x164) = 0;
  param_1[3] = param_1 + 0x15e;
  param_1[0x160] = param_1[2] + 0x8a5;
  if (lVar3 != 0) {
    param_1[0x162] = lVar3;
  }
  param_1[0x15e] = &PTR_LAB_04916e90;
  return;
}

