
ulong FUN_0018729c(uint *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_001872e0();
  iVar2 = (int)uVar3;
  if (iVar2 != 0) {
    uVar3 = 0x15fde20;
    if (-1 < iVar2) {
      iVar1 = 0x1600530;
      if ((*param_1 & 0x7ff0000) != 0x720000) {
        iVar1 = 0x15fde20;
      }
      uVar3 = (ulong)(uint)(iVar1 + iVar2);
    }
  }
  return uVar3;
}

