
/* WARNING: Removing unreachable block (ram,0x015bc9e0) */

void FUN_015bc998(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (((*(long *)PTR_DAT_04bb2200 == 0) ||
      (lVar1 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar1 == 0)) ||
     (lVar1 = *(long *)(lVar1 + 0x118), lVar1 == 0)) {
    return;
  }
  FUN_015bca00(lVar1,param_1,param_2,param_3,1,1);
  return;
}

