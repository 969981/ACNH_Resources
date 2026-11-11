
void FUN_00390470(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 2) = 0;
  puVar1 = PTR_DAT_04bd0938;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[3] = param_3;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0x3f80000000000000;
  param_1[5] = 0;
  param_1[6] = (long)&DAT_3f8000003f800000;
  if (((1 < *(ushort *)(param_2 + 0x38)) || (1 < *(ushort *)(param_2 + 0x48))) ||
     (1 < *(ushort *)(param_2 + 0x58))) {
    *(undefined1 *)((long)param_1 + 0x14) = 1;
  }
  return;
}

