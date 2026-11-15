
bool FUN_02194914(long param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0x1b30) < 1) {
    uVar1 = *(uint *)(param_1 + 0x3658);
    puVar2 = &DAT_053fd568;
    if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x10) <= (int)uVar1)) goto LAB_0219496c;
    plVar3 = (long *)(param_1 + 0x18);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x365c);
    puVar2 = &DAT_053fd568;
    if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x1b30) <= (int)uVar1)) goto LAB_0219496c;
    plVar3 = (long *)(param_1 + 0x1b38);
  }
  puVar2 = *(undefined4 **)(*plVar3 + (ulong)uVar1 * 8);
LAB_0219496c:
  if (puVar2[0x19] == 2) {
    return false;
  }
  if ((*(byte *)(param_1 + 0x366c) & 3) == 0) {
    return (*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0xad5a) & 4) == 0;
  }
  return false;
}

