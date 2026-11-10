
void FUN_00199260(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  
  *param_1 = (long)(PTR_DAT_04bcc098 + 0x10);
  if (DAT_04c58b68 == '\0') {
    FUN_0018aa4c(local_50);
    plVar1 = (long *)param_1[9];
    while (plVar1 != param_1 + 10) {
      plVar2 = (long *)plVar1[1];
      plVar4 = plVar1;
      if ((long *)plVar1[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar4[2];
          bVar3 = (long *)*plVar5 != plVar4;
          plVar4 = plVar5;
        } while (bVar3);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      FUN_00197e40(plVar1[5],4,local_38,1);
      plVar1 = plVar5;
    }
  }
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    FUN_00187e4c();
  }
  FUN_001a2a3c(param_1 + 0xc,param_1[0xd]);
  FUN_001a2a78(param_1 + 9,param_1[10]);
  *param_1 = (long)&PTR_FUN_048398b8;
  if (param_1[8] != 0) {
    param_1[8] = 0;
  }
  param_1[2] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0();
  *param_1 = (long)&PTR_LAB_04838fe8;
  return;
}

