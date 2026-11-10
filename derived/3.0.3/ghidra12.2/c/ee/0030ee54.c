
void FUN_0030ee54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_38 [24];
  undefined4 local_14;
  
  uVar1 = FUN_001fb7fc(param_2);
  if ((uVar1 & 0x7fff) - 8 < 0xfffffff9) {
    local_14 = 0x80010002;
    FUN_0018aa70(auStack_38,&local_14);
    thunk_FUN_0018a158(auStack_38);
  }
  else if (*(code **)(PTR_DAT_04bceb18 + (ulong)((uVar1 & 0x7fff) - 1) * 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030eecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(PTR_DAT_04bceb18 + (ulong)((uVar1 & 0x7fff) - 1) * 8))(param_2,param_3);
    return;
  }
  return;
}

