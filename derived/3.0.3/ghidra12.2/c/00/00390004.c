
void FUN_00390004(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  puVar1 = PTR_DAT_04bd0930 + 0x10;
  param_1[3] = param_3;
  param_1[4] = param_2;
  *param_1 = (long)puVar1;
  param_1[1] = 0x3f80000000000000;
  param_1[5] = 0;
  param_1[6] = (long)&DAT_3f8000003f800000;
  if ((1 < *(ushort *)(param_2 + 0x38)) || (1 < *(ushort *)(param_2 + 0x48))) {
    *(undefined1 *)((long)param_1 + 0x14) = 1;
  }
  return;
}

