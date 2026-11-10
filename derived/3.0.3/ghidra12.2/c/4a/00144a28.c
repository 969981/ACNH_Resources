
void FUN_00144a28(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00143f38(0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00144a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)PTR_PTR_04bcb710 + 0x78))(param_1,param_2);
    return;
  }
  return;
}

