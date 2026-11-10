
void FUN_00277f2c(long *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xe];
  *param_1 = (long)(PTR_DAT_04bcdb48 + 0x10);
  if (piVar1 == (int *)0x0) goto LAB_00277f80;
  if (*piVar1 == 1) {
    FUN_00221064(piVar1);
    piVar1 = (int *)param_1[0xe];
    if (piVar1 != (int *)0x0) goto LAB_00277f6c;
  }
  else {
LAB_00277f6c:
    FUN_00220f6c(piVar1);
    FUN_00285dc0(piVar1);
  }
  param_1[0xe] = 0;
LAB_00277f80:
  thunk_FUN_00221120(param_1);
  return;
}

