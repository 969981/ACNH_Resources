
void FUN_038439d8(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  puVar1 = PTR_DAT_04bd2440;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03843a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

