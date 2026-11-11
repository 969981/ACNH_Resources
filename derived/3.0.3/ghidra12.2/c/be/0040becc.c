
void FUN_0040becc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_38 [24];
  undefined4 local_14;
  
  uVar1 = FUN_001fb7fc(param_2);
  if ((uVar1 & 0x7fff) == 1) {
    if (DAT_04c69f08 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040bf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_04c69f08)(param_2,param_3);
      return;
    }
  }
  else {
    local_14 = 0x80010002;
    FUN_0018aa70(auStack_38,&local_14);
    thunk_FUN_0018a158(auStack_38);
  }
  return;
}

