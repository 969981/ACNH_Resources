
undefined4 FUN_0014dc68(void)

{
  int iVar1;
  long lVar2;
  long *in_x3;
  undefined4 uVar3;
  
  lVar2 = nnsocketRecv();
  if (lVar2 == -1) {
    iVar1 = nnsocketGetLastErrno();
    uVar3 = 0x51;
    if (iVar1 != 4 && iVar1 != 0xb) {
      uVar3 = 0x38;
    }
  }
  else {
    uVar3 = 0;
    *in_x3 = lVar2;
  }
  return uVar3;
}

