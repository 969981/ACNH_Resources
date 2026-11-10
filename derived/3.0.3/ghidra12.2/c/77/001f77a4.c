
void FUN_001f77a4(undefined8 param_1,long param_2)

{
  long lVar1;
  short local_14 [2];
  
  local_14[0] = 0;
  if (*(long *)(param_2 + 0x20) != *(long *)(param_2 + 0x18)) {
    local_14[0] = (short)*(long *)(param_2 + 0x20) - (short)*(long *)(param_2 + 0x18);
  }
  FUN_00197478(param_1,local_14,2);
  lVar1 = *(long *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != lVar1) {
    FUN_00197478(param_1,lVar1,(long)((int)*(long *)(param_2 + 0x20) - (int)lVar1));
  }
  return;
}

