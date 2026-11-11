
int FUN_004468c0(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  iVar1 = 0;
  while ((uVar2 & 0xfffffffffffffffc) != 0) {
    uVar2 = *(ulong *)((uVar2 & 0xfffffffffffffffc) + 8);
    if ((uVar2 & 3) == 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

