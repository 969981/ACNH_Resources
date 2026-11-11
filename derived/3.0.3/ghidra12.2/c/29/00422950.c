
void FUN_00422950(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = param_2 + 1;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= param_2) {
    lVar2 = FUN_00426720(PTR_DAT_048607c0,iVar1,1,*param_1,(int)param_1[1]);
    *param_1 = lVar2;
  }
  if (((int)param_1[1] <= param_2) || (iVar1 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar1;
  }
  *(undefined1 *)(*param_1 + (long)param_2) = 0;
  return;
}

