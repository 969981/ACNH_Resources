
int FUN_01af1514(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  iVar2 = FUN_01aed730();
  uVar4 = (ulong)(long)(iVar2 * 0x5a) / 100;
  iVar5 = (int)((uVar4 & 0xffffffff) / 100);
  iVar1 = iVar5 * 100;
  iVar3 = (int)uVar4;
  iVar2 = iVar1 + 100;
  if ((uint)(iVar3 + iVar5 * -100) < 0x32) {
    iVar2 = iVar1;
  }
  iVar5 = (iVar3 / 10) * 10;
  iVar1 = iVar5 + 10;
  if (iVar3 % 10 < 5) {
    iVar1 = iVar5;
  }
  if (iVar3 < 1000) {
    iVar2 = iVar1;
  }
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  return iVar2 >> 1;
}

