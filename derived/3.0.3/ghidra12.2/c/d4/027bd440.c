
ulong FUN_027bd440(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  iVar2 = FUN_027bd490();
  uVar4 = FUN_027bd8c0();
  iVar3 = (int)uVar4;
  if (iVar3 != 0) {
    uVar1 = 0;
    if (iVar3 != 0) {
      uVar1 = (iVar2 * 100) / iVar3;
    }
    uVar5 = uVar1;
    if (99 < (int)uVar1) {
      uVar5 = 100;
    }
    if ((int)uVar1 < 1 && 0 < iVar2) {
      uVar5 = 1;
    }
    uVar4 = (ulong)uVar5;
  }
  return uVar4;
}

