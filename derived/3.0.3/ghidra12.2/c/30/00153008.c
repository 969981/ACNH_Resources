
undefined8 FUN_00153008(long *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_1[0x9c] + param_1[0xa0] != 0) {
    return 0;
  }
  if (*param_1 == 0) {
    if (*(long *)(param_1[0x88] + 0x70) == 0) {
      uVar1 = FUN_00159114((int)param_1[0x4b],0xffffffff,0xffffffff,0);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    else {
      *param_1 = param_2;
      uVar2 = (**(code **)(param_1[0x88] + 0x70))(param_1,1);
      *param_1 = 0;
      if ((uVar2 & 1) == 0) goto LAB_00153030;
    }
    FUN_0014d430(param_2,"Connection %ld seems to be dead!\n",param_1[0xc]);
    FUN_0014ec4c(param_2,param_1,0);
    uVar1 = 1;
  }
  else {
LAB_00153030:
    uVar1 = 0;
  }
  return uVar1;
}

