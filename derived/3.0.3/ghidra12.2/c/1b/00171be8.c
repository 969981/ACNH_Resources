
int FUN_00171be8(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_001726f0();
  if ((((lVar3 == 0) || ((*(byte *)(lVar3 + 0xe4) >> 1 & 1) != 0)) || (*(int *)(lVar3 + 0xdc) == 5))
     || (iVar1 = FUN_00172b1c(lVar3), iVar1 == 0)) {
    iVar1 = -0x1f5;
  }
  else {
    iVar2 = FUN_00172af0(lVar3,8);
    iVar1 = 0;
    if (iVar2 < -900) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}

