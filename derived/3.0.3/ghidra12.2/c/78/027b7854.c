
void FUN_027b7854(long param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  long local_30;
  long local_28;
  
  iVar1 = FUN_027b78b0(param_1,param_3);
  if (((iVar1 != -1) && (FUN_03ea9348(&local_30,param_1 + 8,iVar1), param_2 != (long *)0x0)) &&
     (local_30 != 0)) {
    *param_2 = local_30;
    param_2[1] = local_28;
  }
  return;
}

