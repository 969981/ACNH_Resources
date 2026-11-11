
long * FUN_00423740(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  if (0 < (int)param_2) {
    iVar4 = (int)param_1[1];
    uVar2 = iVar4 + ~param_2 & ((int)(iVar4 + ~param_2) >> 0x1f ^ 0xffffffffU);
    iVar1 = uVar2 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= (int)uVar2) {
      lVar3 = FUN_00426720(PTR_DAT_048607c0,iVar1,1,*param_1);
      iVar4 = (int)param_1[1];
      *param_1 = lVar3;
    }
    if (iVar4 <= (int)uVar2 || iVar1 < iVar4) {
      *(int *)(param_1 + 1) = iVar1;
    }
    *(undefined1 *)(*param_1 + (ulong)uVar2) = 0;
  }
  return param_1;
}

