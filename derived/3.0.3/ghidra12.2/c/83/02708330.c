
void FUN_02708330(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
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
  *param_1 = &PTR_LAB_04a8f6f0;
  lVar3 = param_1[2];
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = lVar3;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[7] = &DAT_04a8f720;
  param_1[0xf] = 0;
  param_1[0x10] = lVar3 + 0x100;
  lVar5 = lVar3 + 0x400;
  param_1[0x12] = param_1 + 7;
  param_1[0x13] = 0;
  param_1[0x1c] = &DAT_04a8f720;
  param_1[0xe] = &DAT_04a8f720;
  param_1[0x16] = 0;
  param_1[0x17] = lVar3 + 0x200;
  param_1[0x15] = &DAT_04a8f720;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[3] = param_1 + 0x23;
  param_1[0x19] = param_1 + 0xe;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar3 + 0x300;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = param_1 + 0x15;
  param_1[0x24] = 0;
  param_1[0x25] = lVar5;
  param_1[0x27] = param_1 + 0x1c;
  param_1[0x28] = 0;
  plVar6 = param_1 + 0x26;
  *plVar6 = 0;
  memset(param_1 + 0x2a,0,0x1c000);
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 0x70;
    *(undefined1 *)((long)param_1 + lVar3 + 0x180) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x170) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x178) = 0;
    *(undefined1 *)((long)param_1 + lVar3 + 0x1b8) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x160) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x168) = 0;
    *(undefined **)((long)param_1 + lVar3 + 0x150) = &DAT_04a8f390;
    *(undefined8 *)((long)param_1 + lVar3 + 0x158) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x198) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x1a0) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x1a8) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x1b0) = 0;
    *(undefined **)((long)param_1 + lVar3 + 0x188) = &DAT_04a8f390;
    *(undefined8 *)((long)param_1 + lVar3 + 400) = 0;
    lVar3 = lVar1;
  } while (lVar1 != 0x1c000);
  param_1[0x23] = &PTR_LAB_04a8f750;
  iVar4 = 0;
  do {
    lVar3 = *plVar6;
    puVar2 = param_1 + 0x2a + (long)iVar4 * 7;
    *plVar6 = (long)puVar2;
    if (lVar3 != 0) {
      puVar2[4] = lVar3;
    }
    puVar2[2] = lVar5 + puVar2[2];
    FUN_026400e0(puVar2,lVar5);
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + 2;
  } while (iVar4 != 0x800);
  return;
}

