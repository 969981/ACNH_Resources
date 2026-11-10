
undefined4 FUN_00158cf4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long local_30;
  long *local_28;
  
  local_30 = *(long *)(param_1 + 0x1138);
  if (local_30 == -1) {
    return 0xffffffff;
  }
  lVar1 = *(long *)(param_1 + 0xe0);
  if ((lVar1 != 0) || (lVar1 = *(long *)(param_1 + 0xd8), lVar1 != 0)) {
    local_28 = (long *)0x0;
    FUN_0014ed90(param_1,lVar1 + 0xf8,&local_30,&LAB_00158d84);
    if (local_28 != (long *)0x0) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = local_28;
        *local_28 = param_1;
      }
      return (int)local_28[0x4b];
    }
    *(undefined8 *)(param_1 + 0x1138) = 0xffffffffffffffff;
  }
  return 0xffffffff;
}

