
void FUN_00939880(undefined8 *param_1)

{
  undefined4 local_5c;
  undefined **local_58;
  char *pcStack_50;
  undefined **local_48;
  undefined *puStack_40;
  undefined **local_38;
  undefined8 *puStack_30;
  undefined4 local_28;
  
  *param_1 = &PTR_FUN_04928e68;
  FUN_038e1da0(param_1 + 1);
  param_1[0x14] = &PTR_LAB_04928f08;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0x13] = 0;
  param_1[0x19] = 0;
  param_1[10] = param_1 + 9;
  param_1[0xb] = 0xffffffff00000000;
  param_1[9] = param_1 + 9;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x17] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = "ColBgAttributeColorParams";
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_28 = 0;
  local_58 = &PTR_LAB_048f9770;
  pcStack_50 = "mColorArray";
  local_48 = &PTR_LAB_048f9770;
  puStack_40 = &DAT_0409b421;
  local_38 = &PTR_LAB_048f9770;
  puStack_30 = &DAT_0407ebb1;
  local_5c = 0xff;
  FUN_0094c090(param_1 + 0x1a,&local_58,&local_5c,param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x224) = 0;
  param_1[0x227] = 0x800000000;
  param_1[0x22a] = 0x800000000;
  param_1[0x226] = param_1 + 0x225;
  param_1[0x225] = param_1 + 0x225;
  *(undefined2 *)(param_1 + 0x22b) = 0;
  param_1[0x22d] = 0;
  param_1[0x229] = param_1 + 0x228;
  param_1[0x228] = param_1 + 0x228;
  *(undefined8 *)((long)param_1 + 0x115c) = 0;
  *(undefined1 *)(param_1 + 0x22e) = 0;
  param_1[0x231] = 0;
  param_1[0x22f] = &PTR_FUN_0498d548;
  param_1[0x233] = 0;
  param_1[0x230] = &DAT_048f9750;
  param_1[0x232] = &DAT_048f9750;
  *(undefined4 *)((long)param_1 + 0x5c) = 8;
  return;
}

