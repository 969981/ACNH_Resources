
long * FUN_00423880(long *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if (param_2 != 0) {
    if (param_3 < 0) {
      param_3 = FUN_0043a2d0(param_2);
    }
    iVar4 = (int)param_1[1];
    lVar5 = (long)iVar4;
    iVar1 = (int)(lVar5 + -1) + param_3;
    iVar2 = iVar4 + param_3;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar1) {
      lVar3 = FUN_00426720(PTR_DAT_048607c0,iVar2,1,*param_1);
      iVar4 = (int)param_1[1];
      *param_1 = lVar3;
    }
    if (iVar4 <= iVar1 || iVar2 < iVar4) {
      *(int *)(param_1 + 1) = iVar2;
    }
    *(undefined1 *)(*param_1 + (long)iVar1) = 0;
    FUN_0043a4c0(*param_1 + lVar5 + -1,param_2,param_3);
  }
  return param_1;
}

