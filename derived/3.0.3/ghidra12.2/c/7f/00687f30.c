
long FUN_00687f30(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  
  if ((param_2 == 0) || (lVar3 = *(long *)(param_1 + 0x40), lVar3 == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(lVar3 + 0x28) & 0xfffffffffffffffe;
  if (uVar1 != 0) {
    iVar2 = FUN_0043a240(uVar1,param_2);
    lVar3 = *(long *)(param_1 + 0x40);
    if (iVar2 == 0) {
      return lVar3;
    }
  }
  lVar3 = FUN_00688570(lVar3,param_2);
  return lVar3;
}

