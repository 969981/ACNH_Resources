
void FUN_00196bb8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  lVar1 = *(long *)(param_2 + 0x20);
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = lVar1;
  *param_1 = (long)&PTR_FUN_048393d8;
  lVar1 = FUN_00196a4c();
  lVar2 = *(long *)(param_2 + 0x18);
  param_1[5] = 0;
  param_1[2] = lVar1;
  param_1[3] = lVar2;
  FUN_00193c08(param_1,param_2);
  *(byte *)(param_1 + 6) = *(byte *)(param_2 + 0x30) & 0xfb;
  *(undefined2 *)((long)param_1 + 0x31) = *(undefined2 *)(param_2 + 0x31);
  return;
}

