
long * FUN_0359e948(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    plVar1 = (long *)(**(code **)(*(long *)(*param_1 + 0x30) + 0xf0))();
    plVar2 = (long *)(**(code **)(*(long *)(param_1[1] + 0x30) + 0xf0))();
    if (*(float *)(param_1 + 4) <= *(float *)((long)param_1 + 0x1c)) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = *(float *)((long)param_1 + 0x1c) + 1.0;
      *(float *)((long)param_1 + 0x1c) = fVar5;
      fVar5 = (1.0 / *(float *)(param_1 + 4)) * fVar5;
    }
    uVar3 = (**(code **)(*plVar1 + 0x10))(fVar5,plVar1);
    uVar4 = (**(code **)(*plVar2 + 0x10))(fVar5,plVar2);
    *(undefined4 *)(param_1 + 2) = uVar3;
    *(undefined4 *)((long)param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 3) = uVar3;
  }
  return param_1 + 2;
}

