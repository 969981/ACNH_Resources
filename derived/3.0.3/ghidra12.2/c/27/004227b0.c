
void FUN_004227b0(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = param_1 + 2;
  *param_1 = (long)plVar2;
  param_1[1] = -0x7fffff8000000000;
  if (param_1 != param_2) {
    iVar1 = (int)param_2[1];
    lVar3 = *param_2;
    if (0x80 < iVar1) {
      plVar2 = (long *)FUN_004267f0(PTR_DAT_048607c0,iVar1,1,plVar2,0,(long)param_1 + 0xc);
      *param_1 = (long)plVar2;
    }
    FUN_0043aa30(plVar2,lVar3,(long)iVar1);
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}

