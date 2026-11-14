
void FUN_01896d84(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (**(code **)(*(long *)(param_1 + 0x428) + (ulong)*(byte *)(param_1 + 0x43c) * 8))
                    (param_1 + 0x428);
  iVar2 = *(int *)(param_1 + 0x438);
  *(int *)(param_1 + 0x430) = iVar4;
  iVar3 = *(int *)(param_1 + 0x434);
  iVar1 = iVar3;
  if (iVar3 <= iVar2) {
    iVar1 = iVar2;
    iVar2 = iVar3;
  }
  if (iVar4 < iVar1 && iVar2 < iVar4 || *(int *)(param_1 + 0x280) == 1) {
    return;
  }
  FUN_03ebb160(param_1 + 0x278,1);
  return;
}

