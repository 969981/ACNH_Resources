
void FUN_002c6730(long *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = param_1 + 1;
  *param_1 = (long)(PTR_DAT_04bce290 + 0x10);
  if ((long *)param_1[2] != plVar1) {
    plVar3 = (long *)param_1[2];
    do {
      iVar2 = *(int *)((long)param_1 + 0x34);
      plVar4 = (long *)plVar3[1];
      *plVar3 = 0;
      plVar3[1] = 0;
      FUN_002236e0(param_1 + 4,param_1 + 4,(long)iVar2 + (long)plVar3);
      plVar3 = plVar4;
    } while (plVar4 != plVar1);
  }
  FUN_002236b0(plVar1);
  return;
}

