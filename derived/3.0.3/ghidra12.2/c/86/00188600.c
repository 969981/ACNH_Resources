
void FUN_00188600(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcbd18;
  (**(code **)(*(long *)PTR_DAT_04bcbd18 + 0x10))(PTR_DAT_04bcbd18);
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
                    /* WARNING: Could not recover jumptable at 0x00188644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)puVar1 + 0x20))(puVar1);
  return;
}

