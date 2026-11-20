
undefined4 * FUN_03ec34a4(long param_1,uint param_2)

{
  long lVar1;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [255];
  undefined1 local_25;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x18))) {
    if ((*(byte *)(param_1 + 0x1d09) >> 2 & 1) != 0) goto LAB_03ec3550;
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x10) + 0x28);
    if (lVar1 != 0) {
      return (undefined4 *)(lVar1 + 0xc);
    }
  }
  local_25 = 0;
  local_128 = 0x100;
  puStack_130 = local_124;
  local_124[0] = 0;
  local_138 = PTR_DAT_04bb21f8 + 0x10;
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x10) + 8);
  FUN_038d1270(&local_138,"%s.as",lVar1 + *(int *)(lVar1 + 0x24) + (long)*(int *)(lVar1 + 8));
LAB_03ec3550:
  return &DAT_0419b56c;
}

