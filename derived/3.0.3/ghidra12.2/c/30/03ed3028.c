
undefined8 FUN_03ed3028(undefined8 param_1,long param_2,long *param_3,float *param_4)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  
  param_4[0] = 0.0;
  param_4[1] = 0.0;
  plVar1 = (long *)*param_3;
  if (plVar1 == (long *)0x0) {
    fVar4 = 0.0;
    fVar5 = 0.0;
    plVar1 = (long *)param_3[1];
  }
  else {
    local_28 = 0xbf80000000000000;
    lVar2 = param_3[5];
    *(undefined4 *)(lVar2 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,lVar2,&local_28);
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar3 = *(float *)(lVar2 + 0x48);
    if (0.0 <= (float)local_28) {
      *param_4 = *param_4 + fVar3 * (float)local_28;
      fVar5 = fVar3 + 0.0;
    }
    if (0.0 <= local_28._4_4_) {
      param_4[1] = param_4[1] + fVar3 * local_28._4_4_;
      fVar4 = fVar3 + 0.0;
    }
    plVar1 = (long *)param_3[1];
  }
  if (plVar1 != (long *)0x0) {
    local_28 = 0xbf80000000000000;
    lVar2 = param_3[6];
    *(undefined4 *)(lVar2 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,lVar2,&local_28);
    fVar3 = *(float *)(lVar2 + 0x48);
    if (0.0 <= (float)local_28) {
      fVar5 = fVar5 + fVar3;
      *param_4 = *param_4 + fVar3 * (float)local_28;
    }
    if (0.0 <= local_28._4_4_) {
      fVar4 = fVar4 + fVar3;
      param_4[1] = param_4[1] + fVar3 * local_28._4_4_;
    }
  }
  plVar1 = (long *)param_3[2];
  if (plVar1 != (long *)0x0) {
    local_28 = 0xbf80000000000000;
    lVar2 = param_3[7];
    *(undefined4 *)(lVar2 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,lVar2,&local_28);
    fVar3 = *(float *)(lVar2 + 0x48);
    if (0.0 <= (float)local_28) {
      fVar5 = fVar5 + fVar3;
      *param_4 = *param_4 + fVar3 * (float)local_28;
    }
    if (0.0 <= local_28._4_4_) {
      fVar4 = fVar4 + fVar3;
      param_4[1] = param_4[1] + fVar3 * local_28._4_4_;
    }
  }
  plVar1 = (long *)param_3[3];
  if (plVar1 != (long *)0x0) {
    local_28 = 0xbf80000000000000;
    lVar2 = param_3[8];
    *(undefined4 *)(lVar2 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,lVar2,&local_28);
    fVar3 = *(float *)(lVar2 + 0x48);
    if (0.0 <= (float)local_28) {
      fVar5 = fVar5 + fVar3;
      *param_4 = *param_4 + fVar3 * (float)local_28;
    }
    if (0.0 <= local_28._4_4_) {
      fVar4 = fVar4 + fVar3;
      param_4[1] = param_4[1] + fVar3 * local_28._4_4_;
    }
  }
  if (0.0 < fVar5) {
    *param_4 = *param_4 / fVar5;
  }
  if (0.0 < fVar4) {
    param_4[1] = param_4[1] / fVar4;
  }
  return 1;
}

