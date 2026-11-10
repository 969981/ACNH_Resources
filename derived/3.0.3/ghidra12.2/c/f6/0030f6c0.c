
void FUN_0030f6c0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  FUN_00318ba0();
  *param_1 = (long)(PTR_DAT_04bceb88 + 0x10);
  FUN_00316404(param_1 + 0x28,0x6d);
  param_1[0x3a] = 0;
  plVar1 = (long *)FUN_00185a6c(0x150);
  if (plVar1 == (long *)0x0) {
    thunk_FUN_00319100(param_1,0);
    plVar1 = (long *)FUN_00185a6c(0xd8);
  }
  else {
    FUN_003137a4();
    uVar2 = thunk_FUN_00319100(param_1,plVar1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    plVar1 = (long *)FUN_00185a6c(0xd8);
  }
  if (plVar1 == (long *)0x0) {
    thunk_FUN_00319100(param_1,0);
    return;
  }
  FUN_0031430c();
  uVar2 = thunk_FUN_00319100(param_1,plVar1);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0030f794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}

