
void FUN_001e7470(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_18;
  
  local_18 = 0;
  iVar1 = FUN_001e708c(param_1,*(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x28),
                       *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x28),&local_18,param_3,1);
  if (iVar1 == 0) {
    *(undefined8 *)(param_2 + 0x18) = local_18;
    return;
  }
  return;
}

