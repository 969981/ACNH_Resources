
void FUN_00294b20(long *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[0x1d];
  *param_1 = (long)(PTR_DAT_04bcdf10 + 0x10);
  if (lVar4 == 0) goto LAB_00294bb0;
  if (param_1[0x1b] == 0) {
LAB_00294b9c:
    FUN_00285e00(lVar4);
    FUN_00285dc0(lVar4);
  }
  else {
    plVar1 = param_1 + 0x15;
    if ((long *)param_1[0x16] != plVar1) {
      plVar3 = (long *)param_1[0x16];
      do {
        iVar2 = *(int *)((long)param_1 + 0xd4);
        plVar5 = (long *)plVar3[1];
        *plVar3 = 0;
        plVar3[1] = 0;
        FUN_002236e0(param_1 + 0x18,param_1 + 0x18,(long)iVar2 + (long)plVar3);
        plVar3 = plVar5;
      } while (plVar5 != plVar1);
    }
    FUN_002236b0(plVar1);
    lVar4 = param_1[0x1d];
    if (lVar4 != 0) goto LAB_00294b9c;
  }
  param_1[0x1d] = 0;
LAB_00294bb0:
  FUN_00220f6c(param_1 + 0xc);
  thunk_FUN_00221120(param_1);
  return;
}

