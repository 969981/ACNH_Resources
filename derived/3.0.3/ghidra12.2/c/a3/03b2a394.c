
void FUN_03b2a394(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[4] = 0;
  param_1[5] = param_1 + 5;
  param_1[6] = param_1 + 5;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  param_1[0xc] = 0;
  param_1[8] = 0x2201f;
  param_1[9] = 0;
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_LAB_04b74998;
  param_1[1] = param_1 + 1;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  FUN_03b227e0();
  lVar1 = *(long *)(*(long *)(param_2 + 0x70) + 0x60);
  lVar1 = FUN_03b185ec(param_3,lVar1 + (ulong)*(uint *)(lVar1 + 0xc),1);
  param_1[0xe] = lVar1;
  *(byte *)(lVar1 + 0x57) = *(byte *)(lVar1 + 0x57) | 0x10;
  *(byte *)(param_1[0xe] + 0x57) = *(byte *)(param_1[0xe] + 0x57) & 0xdf;
  return;
}

