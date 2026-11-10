
void FUN_00348cdc(long param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_0034cdc0(param_3);
  uVar2 = FUN_0034ce24(*param_4,param_4[1]);
                    /* WARNING: Could not recover jumptable at 0x00348d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf2e8)(uVar3,uVar1,param_2,uVar2,param_5);
  return;
}

