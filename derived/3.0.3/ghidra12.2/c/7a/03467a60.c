
undefined8
FUN_03467a60(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,long *param_4,long *param_5,
            long *param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *local_b0 [4];
  undefined *local_90 [4];
  undefined *local_70 [4];
  
  local_b0[0] = PTR_DAT_04bbba70 + 0x10;
  local_90[0] = local_b0[0];
  local_70[0] = local_b0[0];
  (**(code **)(*param_4 + 0x10))(param_4,local_90);
  (**(code **)(*param_5 + 0x10))(param_5,local_70);
  (**(code **)(*param_6 + 0x10))(param_6,local_b0);
  if ((*(int *)((long)param_1 + 0x94) == 3) &&
     (uVar1 = (**(code **)*param_2)(param_2), (uVar1 & 1) != 0)) {
    plVar2 = (long *)param_2[4];
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1 + 2);
      param_1[4] = uVar3;
    }
    *(undefined4 *)(param_1 + 0x12) = param_3;
    (**(code **)(local_b0[0] + 0x10))(local_b0,param_1 + 6);
    (**(code **)(local_90[0] + 0x10))(local_90,param_1 + 10);
    (**(code **)(local_70[0] + 0x10))(local_70,param_1 + 0xe);
    uVar1 = (**(code **)*param_1)(param_1);
    if ((uVar1 & 1) != 0) {
      (*(code *)**(undefined8 **)param_1[4])();
    }
    *(undefined4 *)((long)param_1 + 0x94) = 0;
    (**(code **)param_1[6])(param_1 + 6);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

