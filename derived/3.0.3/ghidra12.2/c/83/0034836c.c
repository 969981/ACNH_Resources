
void FUN_0034836c(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_0034ce24(*param_3,param_3[1]);
                    /* WARNING: Could not recover jumptable at 0x003483b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf1e8)(uVar2,param_2,uVar1,param_5);
  return;
}

