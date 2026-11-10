
undefined8 FUN_0031e094(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_2 != 1) &&
     ((param_2 != 2 || (*(char *)(param_1 + 9) == '\0' && *(char *)(param_1 + 10) == '\0')))) {
    return 0;
  }
  *(undefined2 *)(param_1 + 9) = 0;
  iVar1 = *(int *)(param_1 + 0x30) + 1;
  iVar2 = *(int *)**(undefined8 **)(param_1 + 0x4d0);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar1 / iVar2;
  }
  uVar3 = iVar1 - iVar4 * iVar2;
  *(uint *)(param_1 + 0x30) = uVar3;
  *(ulong *)(param_1 + 0xc0) = param_1 + (ulong)uVar3 * 0x58 + 200;
  return 1;
}

