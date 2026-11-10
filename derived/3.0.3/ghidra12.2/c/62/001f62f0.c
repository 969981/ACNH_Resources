
bool FUN_001f62f0(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x21) == '\0') {
    return false;
  }
  iVar1 = FUN_001f6570(*(undefined8 *)(param_1 + 0x80));
  if ((iVar1 == 0) || (iVar1 = FUN_001f6570(*(undefined8 *)(param_1 + 0x88)), iVar1 == 0)) {
    return true;
  }
  return *(long *)(param_1 + 0x78) != 0;
}

