
int FUN_00388f00(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x110) != 0) {
    iVar1 = *(ushort *)(param_1 + 0x110) - 1;
  }
  return iVar1;
}

