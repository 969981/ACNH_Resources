
void FUN_00347dbc(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_0034cdb0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00347e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf118)(uVar2,uVar1,param_4,param_3);
  return;
}

