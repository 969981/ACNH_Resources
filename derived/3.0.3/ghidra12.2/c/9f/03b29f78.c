
void FUN_03b29f78(long *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[4] = 0;
  param_1[5] = (long)(param_1 + 5);
  param_1[6] = (long)(param_1 + 5);
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 8) = 0x2201f;
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_04bd1a40 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  uVar1 = *(undefined1 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  FUN_03b227e0();
  lVar2 = *(long *)(*(long *)(param_2 + 0x70) + 0x60);
  lVar2 = FUN_03b185ec(param_3,lVar2 + (ulong)*(uint *)(lVar2 + 0xc),1);
  param_1[0xe] = lVar2;
  *(byte *)(lVar2 + 0x57) = *(byte *)(lVar2 + 0x57) | 0x10;
  *(byte *)(param_1[0xe] + 0x57) = *(byte *)(param_1[0xe] + 0x57) & 0xdf;
  *param_1 = (long)&PTR_LAB_04b74830;
  return;
}

