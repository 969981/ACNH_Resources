
void FUN_00201ac8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  
  param_2[1] = *param_2;
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  iVar3 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
  *(long *)(param_1 + 0x18) = lVar2 + 4;
  if (iVar3 != 0) {
    FUN_001a3250(param_2,iVar3);
    uVar4 = FUN_00197494(param_1,*param_2,iVar3);
    if ((uVar4 & 1) == 0) {
      param_2[1] = *param_2;
    }
  }
  return;
}

