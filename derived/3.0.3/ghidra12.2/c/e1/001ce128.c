
bool FUN_001ce128(long param_1,long param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_001b8590(param_2);
    iVar1 = *(int *)(param_2 + 0x10);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x10);
  }
  if (iVar1 != 1) {
    return false;
  }
  sVar2 = *(short *)(param_1 + 0x1b8);
  if (sVar2 == 0) {
    return true;
  }
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_001b8590(param_2);
  }
  sVar3 = FUN_001e14f8(*(undefined8 *)(param_2 + 8));
  return sVar2 == sVar3;
}

