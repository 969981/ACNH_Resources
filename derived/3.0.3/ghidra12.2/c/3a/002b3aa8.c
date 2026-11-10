
int FUN_002b3aa8(long param_1)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 8);
  iVar1 = uVar2 + 2;
  if ((uVar2 + 1 & 0x10000) == 0) {
    iVar1 = uVar2 + 1;
  }
  *(short *)(param_1 + 8) = (short)iVar1;
  return iVar1;
}

