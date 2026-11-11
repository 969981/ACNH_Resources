
undefined8 FUN_0049e340(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0043a2d0(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  iVar2 = (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30)) - (int)uVar3;
  if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
    FUN_0049e150(param_1,iVar1 - iVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    iVar2 = (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30)) - (int)uVar3;
  }
  if (iVar2 < iVar1) {
    return 0;
  }
  iVar2 = FUN_0043a230(uVar3,param_2,iVar1);
  if (iVar2 != 0) {
    return 0;
  }
  if (iVar1 <= (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x30)) -
               (int)*(long *)(param_1 + 0x20)) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (long)iVar1;
  }
  return 1;
}

