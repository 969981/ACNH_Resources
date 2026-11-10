
void FUN_0034d0e0(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  
  (**(code **)PTR_DAT_04bcf610)();
  (**(code **)PTR_DAT_04bcf620)(param_1,*param_2);
  uVar1 = (ulong)(uint)param_2[1];
  if (*(ulong *)(param_2 + 4) != 0) {
    uVar1 = *(ulong *)(param_2 + 4);
  }
                    /* WARNING: Could not recover jumptable at 0x0034d144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_04c61f88)(param_1,*(undefined8 *)(param_2 + 2),uVar1);
  return;
}

