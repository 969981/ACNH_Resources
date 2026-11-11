
void FUN_0067b620(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  uVar2 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (1 < (int)uVar2) {
    iVar4 = 0;
    uVar3 = (ulong)(uVar2 >> 1);
    lVar5 = *(long *)(param_1 + 0x50) + (long)*(int *)(param_1 + 0x60) * 2 + 2;
    iVar6 = 0;
    do {
      iVar1 = *(int *)(lVar5 + -2);
      iVar6 = iVar1 - iVar6;
      if (iVar4 < iVar6) {
        *(int *)(param_1 + 0xc0) = iVar6;
        iVar4 = iVar6;
      }
      uVar3 = uVar3 - 1;
      lVar5 = lVar5 + 4;
      iVar6 = iVar1;
    } while (uVar3 != 0);
  }
  return;
}

