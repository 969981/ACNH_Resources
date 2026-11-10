
void FUN_003615cc(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x100))();
  uVar1 = FUN_0036013c(param_2);
  if (param_4 < (int)(uVar1 & 0xffff)) {
    lVar2 = FUN_00360154(param_2);
    lVar2 = FUN_00367720(param_3,lVar2 + (long)param_4 * 0x24);
    (**(code **)(*param_1 + 0x58))(param_1,lVar2);
    param_1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00361664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
    return;
  }
  return;
}

