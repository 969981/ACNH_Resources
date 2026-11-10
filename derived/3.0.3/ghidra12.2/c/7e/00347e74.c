
void FUN_00347e74(long param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_0034cdb0(param_2);
  uVar2 = FUN_0034ce04(param_3);
  uVar3 = FUN_0034ce24(*param_4,param_4[1]);
                    /* WARNING: Could not recover jumptable at 0x00347ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf128)(uVar4,uVar1,uVar2,param_5,uVar3,param_6);
  return;
}

