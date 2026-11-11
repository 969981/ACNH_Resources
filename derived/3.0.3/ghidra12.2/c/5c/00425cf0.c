
long * FUN_00425cf0(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (int)param_1[1];
  iVar4 = iVar2 + -2;
  if (1 < iVar2) {
    uVar3 = 0;
    do {
      if (0x20 < *(byte *)(*param_1 + (long)iVar4) ||
          (1L << ((ulong)*(byte *)(*param_1 + (long)iVar4) & 0x3f) & 0x100002600U) == 0) {
        if (uVar3 == 0) {
          return param_1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -1;
    } while ((int)uVar3 < iVar2 + -1);
    uVar3 = iVar2 + ~uVar3 & ((int)(iVar2 + ~uVar3) >> 0x1f ^ 0xffffffffU);
    iVar4 = uVar3 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= (int)uVar3) {
      lVar1 = FUN_00426720(PTR_DAT_048607c0,iVar4,1,*param_1);
      iVar2 = (int)param_1[1];
      *param_1 = lVar1;
    }
    if ((iVar2 <= (int)uVar3) || (iVar4 < iVar2)) {
      *(int *)(param_1 + 1) = iVar4;
    }
    *(undefined1 *)(*param_1 + (ulong)uVar3) = 0;
  }
  return param_1;
}

