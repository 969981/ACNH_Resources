
void FUN_01899768(long param_1)

{
  int iVar1;
  
  FUN_01a0f5b0(param_1 + 0x458);
  iVar1 = (**(code **)(*(long *)(param_1 + 0x428) + (ulong)*(byte *)(param_1 + 0x43c) * 8))
                    (param_1 + 0x428);
  *(int *)(param_1 + 0x430) = iVar1;
  if (iVar1 == *(int *)(param_1 + 0x438) && *(int *)(param_1 + 0x280) != 1) {
    FUN_03ebb160(param_1 + 0x278,1);
    return;
  }
  return;
}

