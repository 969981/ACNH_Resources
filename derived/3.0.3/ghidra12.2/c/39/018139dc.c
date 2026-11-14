
void FUN_018139dc(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*(long *)param_1[0x60] + 0x140))((long *)param_1[0x60],param_2,1);
  uVar1 = *(undefined4 *)(param_1[0x60] + 0x280);
  *(undefined8 *)((long)param_1 + 0x334) = *(undefined8 *)(param_1[0x60] + 0x278);
  *(undefined4 *)((long)param_1 + 0x33c) = uVar1;
  *(float *)((long)param_1 + 0x334) = *(float *)((long)param_1 + 0x334) - *(float *)(param_1 + 0x68)
  ;
  *(float *)(param_1 + 0x67) = *(float *)(param_1 + 0x67) - *(float *)((long)param_1 + 0x344);
  *(float *)((long)param_1 + 0x33c) = *(float *)((long)param_1 + 0x33c) - *(float *)(param_1 + 0x69)
  ;
                    /* WARNING: Could not recover jumptable at 0x01813a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x298))(param_1);
  return;
}

