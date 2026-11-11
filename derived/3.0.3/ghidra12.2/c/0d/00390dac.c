
void FUN_00390dac(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  puVar1 = PTR_DAT_04bd0940 + 0x10;
  param_1[3] = param_3;
  param_1[4] = param_2;
  *param_1 = (long)puVar1;
  param_1[1] = 0x3f80000000000000;
  param_1[5] = 0;
  param_1[6] = 0x3dcccccd00000000;
  if ((((1 < *(ushort *)(param_2 + 0x50)) || (1 < *(ushort *)(param_2 + 0x60))) ||
      (1 < *(ushort *)(param_2 + 0x70))) ||
     ((1 < *(ushort *)(param_2 + 0x80) || (1 < *(ushort *)(param_2 + 0x90))))) {
    *(undefined1 *)((long)param_1 + 0x14) = 1;
  }
  return;
}

