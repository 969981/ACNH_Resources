
void FUN_036a3834(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = FUN_036a2470(param_1,param_3,0,&local_14,&local_18);
  if ((uVar1 & 1) != 0) {
    (**(code **)*param_2)(param_2,local_14,local_18);
  }
  local_14 = 0;
  uVar1 = FUN_036a2470(param_1,param_3,1,&local_14,&local_18);
  if ((uVar1 & 1) != 0) {
    (**(code **)*param_2)(param_2,local_14,local_18);
  }
  local_14 = 0;
  uVar1 = FUN_036a2470(param_1,param_3,2,&local_14,&local_18);
  if ((uVar1 & 1) != 0) {
    (**(code **)*param_2)(param_2,local_14,local_18);
  }
  local_14 = 0;
  uVar1 = FUN_036a2470(param_1,param_3,3,&local_14,&local_18);
  if ((uVar1 & 1) != 0) {
    (**(code **)*param_2)(param_2,local_14,local_18);
  }
  local_14 = 0;
  uVar1 = FUN_036a2470(param_1,param_3,4,&local_14,&local_18);
  if ((uVar1 & 1) != 0) {
    (**(code **)*param_2)(param_2,local_14,local_18);
  }
  local_14 = 0;
  uVar1 = FUN_036a2470(param_1,param_3,5,&local_14,&local_18);
  if ((uVar1 & 1) != 0) {
    (**(code **)*param_2)(param_2,local_14,local_18);
  }
  local_14 = 0;
  uVar1 = FUN_036a2470(param_1,param_3,6,&local_14,&local_18);
  if ((uVar1 & 1) != 0) {
    (**(code **)*param_2)(param_2,local_14,local_18);
  }
  local_14 = 0;
  uVar1 = FUN_036a2470(param_1,param_3,7,&local_14,&local_18);
  if ((uVar1 & 1) != 0) {
    (**(code **)*param_2)(param_2,local_14,local_18);
  }
  local_14 = 0;
  uVar1 = FUN_036a2470(param_1,param_3,8,&local_14,&local_18);
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x036a3a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2,local_14,local_18);
  return;
}

