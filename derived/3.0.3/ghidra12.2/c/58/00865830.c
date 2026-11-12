
void FUN_00865830(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar1 = *(long *)(param_1 + 0x70) + 0x278;
  }
  iVar2 = *(int *)(lVar1 + 0xc);
  if (iVar2 == 0) {
    iVar3 = *(int *)(param_1 + 0x2a4);
    *(int *)(param_1 + 0x278) = iVar3;
    iVar2 = *(int *)(lVar1 + 0xc);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x278);
  }
  if (iVar3 + -1 <= iVar2) {
    iVar2 = FUN_008658d0(param_1);
    lVar1 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar1 = *(long *)(param_1 + 0x70) + 0x278;
    }
    if (*(int *)(lVar1 + 8) != iVar2) {
      FUN_03ebb160(lVar1,iVar2);
      *(int *)(param_1 + 0x274) = iVar2;
    }
  }
  return;
}

