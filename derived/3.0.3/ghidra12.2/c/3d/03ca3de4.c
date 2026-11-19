
void FUN_03ca3de4(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined **local_30;
  undefined8 *puStack_28;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = param_1 + 5;
  param_1[7] = 0;
  param_1[4] = param_2;
  param_1[5] = param_1 + 5;
  *param_1 = &PTR_LAB_04b89400;
  uVar6 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x400) + 8);
  FUN_00385350(param_1 + 8);
  param_1[10] = uVar6;
  param_1[0xb] = param_1 + 0xb;
  param_1[0xc] = param_1 + 0xb;
  param_1[0xd] = param_1 + 0xd;
  param_1[0xe] = param_1 + 0xd;
  param_1[0xf] = param_1 + 0xf;
  param_1[0x10] = param_1 + 0xf;
  param_1[0x11] = param_1;
  param_1[8] = &PTR_LAB_04b89470;
  param_1[9] = 0;
  param_1[0x14] = param_1 + 0x13;
  param_1[0x15] = 0x800000000;
  param_1[0x12] = 0;
  param_1[0x13] = param_1 + 0x13;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_04b89538;
  param_1[0x17] = &PTR_LAB_048f9770;
  puVar2 = PTR_DAT_04bb2120;
  *(undefined1 *)((long)param_1 + 0xce) = 0;
  param_1[0x18] = puVar2;
  local_30 = &PTR_LAB_048f9770;
  puStack_28 = &DAT_0407ebb1;
  FUN_03c5a110(param_1 + 0x17,&local_30,0xffffffff,1);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  lVar3 = *(long *)param_1[4];
  plVar1 = (long *)((long)*(int *)(lVar3 + 0x1c) + (long)param_1);
  plVar5 = (long *)(lVar3 + 8);
  lVar4 = *plVar5;
  *plVar5 = (long)plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)plVar5;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  return;
}

