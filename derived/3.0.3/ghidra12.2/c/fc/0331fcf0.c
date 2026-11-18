
/* WARNING: Removing unreachable block (ram,0x0331fd58) */
/* WARNING: Removing unreachable block (ram,0x0331fd2c) */
/* WARNING: Removing unreachable block (ram,0x0331fd8c) */

void FUN_0331fcf0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  long lStack_30;
  undefined4 local_24;
  
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "LayoutKeyTopBase Heap";
  local_38 = 0;
  lStack_30 = 0;
  if (*param_2 != 0) {
    local_38 = FUN_038c6d48(0,&local_48,*param_2,8,1,1);
    local_24 = 0;
  }
  plVar1 = param_1 + 0x5c;
  param_1[0x5c] = local_38;
  param_1[0x5d] = lStack_30;
  FUN_0331f070(param_1);
  FUN_0331dda0(param_1);
  (**(code **)(*param_1 + 0x138))(param_1,plVar1);
  param_1[4] = (long)"KeyTopBase";
  FUN_0331c298(param_1,param_1 + 2);
  if (param_1[5] == 0) {
    param_1[6] = (long)(param_1 + 8);
    *(undefined4 *)(param_1 + 7) = 0xffffffff;
    plVar1 = (long *)*plVar1;
  }
  else {
    plVar1 = (long *)*plVar1;
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  if ((long *)param_1[0x5d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5d] + 0x28))();
  }
  return;
}

