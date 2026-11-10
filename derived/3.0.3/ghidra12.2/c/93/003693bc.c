
undefined8 FUN_003693bc(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 1 || *(int *)PTR_DAT_04bd0830 < iVar1) {
    return 0;
  }
  return *(undefined8 *)(*param_1 + (ulong)(iVar1 - 1) * 8);
}

