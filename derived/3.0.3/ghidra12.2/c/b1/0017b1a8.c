
byte FUN_0017b1a8(long param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  int local_14;
  
  local_14 = 0;
  bVar1 = 0;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + (long)param_2 * 0x18 + 0x298);
    bVar1 = 0;
    if (lVar3 != 0) {
      uVar2 = nnsslConnectionPending(lVar3,&local_14);
      bVar1 = nnResultIsSuccess(uVar2);
      bVar1 = bVar1 & 0 < local_14;
    }
  }
  return bVar1;
}

