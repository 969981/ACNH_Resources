
long * FUN_004237e0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    FUN_0043aa30(*param_1,*param_1 + (long)param_2,(long)param_3);
  }
  iVar1 = param_3 + 1;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= param_3) {
    lVar2 = FUN_00426720(PTR_DAT_048607c0,iVar1,1,*param_1,(int)param_1[1]);
    *param_1 = lVar2;
  }
  if (((int)param_1[1] <= param_3) || (iVar1 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar1;
  }
  *(undefined1 *)(*param_1 + (long)param_3) = 0;
  return param_1;
}

