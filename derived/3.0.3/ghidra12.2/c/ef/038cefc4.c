
uint FUN_038cefc4(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((DAT_05ae76c0 == (uint *)0x0) || ((char)DAT_05ae76c0[8] == '\0')) {
    iVar1 = FUN_038ceb30();
    iVar2 = FUN_038ced70();
    uVar3 = iVar1 + iVar2 * 6;
    uVar4 = (ulong)uVar3;
    if (0x41 < uVar3) {
      uVar4 = 0;
    }
    if ((char)(&DAT_0419b5db)[uVar4] < '\0') {
      if (iVar1 - 1U < 5) {
        iVar2 = *(int *)(&DAT_0419b620 + (long)(int)(iVar1 - 1U) * 4);
      }
      else {
        iVar2 = 0;
      }
      uVar3 = iVar1 + iVar2 * 6;
      uVar4 = (ulong)uVar3;
      if (0x41 < uVar3) {
        uVar4 = 0;
      }
      uVar3 = (int)(char)(&DAT_0419b5db)[uVar4] &
              ((int)(char)(&DAT_0419b5db)[uVar4] >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar3 = (uint)(byte)(&DAT_0419b5db)[uVar4];
    }
  }
  else {
    uVar3 = *DAT_05ae76c0;
  }
  return uVar3;
}

