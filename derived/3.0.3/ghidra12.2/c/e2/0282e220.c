
int FUN_0282e220(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    uVar1 = FUN_02828794(param_1 + (long)iVar3 * 0x2b8);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + ((uVar1 ^ 0xffffffff) & 1);
  } while (iVar3 != 0x1e);
  return iVar2;
}

