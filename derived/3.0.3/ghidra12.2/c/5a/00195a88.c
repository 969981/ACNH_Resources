
void FUN_00195a88(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bcc050 + 0x10);
  plVar1 = (long *)FUN_00185a6c(0x38);
  if (plVar1 != (long *)0x0) {
    *plVar1 = (long)(PTR_DAT_04bcbc48 + 0x10);
    *(undefined4 *)(plVar1 + 1) = 1;
    *(undefined1 *)((long)plVar1 + 0xc) = 0;
    plVar1[5] = 0;
    *(undefined1 *)(plVar1 + 6) = 0;
    *plVar1 = (long)&PTR_FUN_048393d8;
    lVar2 = DAT_04be21f8;
    plVar1[3] = 0;
    plVar1[4] = lVar2;
    lVar2 = FUN_00196a4c(plVar1);
    plVar1[2] = lVar2;
    *(undefined2 *)((long)plVar1 + 0x31) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 7;
  param_1[2] = (long)plVar1;
  param_1[3] = 0;
  return;
}

