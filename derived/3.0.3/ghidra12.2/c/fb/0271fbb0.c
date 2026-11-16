
void FUN_0271fbb0(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
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
  param_1[0x1d] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  plVar4 = param_1 + 0x1c;
  *plVar4 = 0;
  plVar5 = param_1 + 0x15;
  *plVar5 = 0;
  plVar6 = param_1 + 0xe;
  *plVar6 = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar1 = PTR_DAT_04bb4c40 + 0x10;
  *plVar5 = (long)puVar1;
  *plVar4 = (long)puVar1;
  plVar2 = param_1 + 7;
  *plVar2 = (long)puVar1;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *plVar6 = (long)puVar1;
  param_1[0x23] = puVar1;
  param_1[0x24] = 0;
  *param_1 = &PTR_LAB_04a8ea60;
  lVar3 = param_1[3];
  param_1[3] = plVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (lVar3 != 0) {
    param_1[0xb] = lVar3;
  }
  param_1[9] = param_3;
  FUN_026400e0(plVar2,param_3);
  lVar3 = param_1[3];
  param_1[3] = plVar6;
  if (lVar3 != 0) {
    param_1[0x12] = lVar3;
  }
  param_1[0x10] = param_1[0x10] + param_3 + 1;
  FUN_026400e0(plVar6);
  lVar3 = param_1[3];
  param_1[3] = plVar5;
  if (lVar3 != 0) {
    param_1[0x19] = lVar3;
  }
  param_1[0x17] = param_1[0x17] + param_3 + 2;
  FUN_026400e0(plVar5);
  lVar3 = param_1[3];
  param_1[3] = plVar4;
  if (lVar3 != 0) {
    param_1[0x20] = lVar3;
  }
  param_1[0x1e] = param_1[0x1e] + param_3 + 3;
  FUN_026400e0(plVar4);
  lVar3 = param_1[3];
  param_1[3] = param_1 + 0x23;
  if (lVar3 != 0) {
    param_1[0x27] = lVar3;
  }
  param_1[0x25] = param_1[0x25] + param_3 + 4;
  FUN_026400e0(param_1 + 0x23);
  return;
}

