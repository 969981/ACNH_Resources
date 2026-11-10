
int FUN_0017b11c(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  int local_28;
  undefined1 local_24 [4];
  
  local_28 = 0;
  if (param_1 == 0) {
    iVar3 = 0x62;
  }
  else {
    local_24[0] = 0;
    uVar1 = nnsslConnectionPeek(*(undefined8 *)(param_1 + 0x298),local_24,&local_28,1);
    uVar2 = nnResultIsFailure(uVar1);
    if ((uVar2 & 1) == 0) {
      iVar3 = 1;
      if (local_28 < 1) {
        iVar3 = -(uint)(local_28 != 0);
      }
    }
    else {
      uVar2 = FUN_0017b2a8(uVar1,0x1987b);
      iVar3 = -1;
      if ((uVar2 & 1) != 0) {
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}

