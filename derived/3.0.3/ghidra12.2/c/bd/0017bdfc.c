
void FUN_0017bdfc(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long local_8;
  
  if ((param_1 != 0) && (lVar3 = *(long *)(param_1 + 8), lVar3 != 0)) {
    local_8 = 0;
    uVar1 = nnsslConnectionGetConnectionId(lVar3,&local_8);
    uVar2 = nnResultIsFailure(uVar1);
    if (((uVar2 & 1) == 0) && (local_8 != 0)) {
      uVar1 = nnsslConnectionDestroy(lVar3);
      nnResultIsFailure(uVar1);
    }
  }
  return;
}

