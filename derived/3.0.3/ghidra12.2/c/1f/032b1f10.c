
void FUN_032b1f10(float param_1,float param_2,long *param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 <= 0.0) {
    return;
  }
  if (*(int *)((long)param_3 + 0xac) == 0) {
    return;
  }
  uVar1 = (**(code **)(*param_3 + 0x80))(param_3);
  if ((uVar1 & 1) != 0) {
    param_1 = (float)(**(code **)(*param_3 + 0x50))(param_1,param_3);
  }
  if ((int)param_3[1] == 0) {
    *(undefined4 *)((long)param_3 + 0x94) = *(undefined4 *)((long)param_3 + 0x2c);
  }
  else {
    if ((int)param_3[1] != 1) {
      param_1 = *(float *)(param_3 + 0x13);
      goto LAB_032b1fa0;
    }
    *(float *)((long)param_3 + 0x94) = param_1;
    param_1 = *(float *)(param_3 + 6);
  }
  *(float *)(param_3 + 0x13) = param_1;
LAB_032b1fa0:
  fVar4 = -*(float *)(param_3 + 0x17);
  if ((param_1 < fVar4) ||
     (fVar4 = *(float *)((long)param_3 + 0xbc) +
              ((*(float *)(param_3 + 5) - *(float *)(param_3 + 4)) -
              (*(float *)(param_3 + 8) - *(float *)(param_3 + 7))), fVar4 < param_1)) {
    *(float *)(param_3 + 0x13) = fVar4;
    param_1 = fVar4;
  }
  fVar5 = *(float *)((long)param_3 + 0x94);
  fVar4 = -*(float *)(param_3 + 0x18);
  if ((fVar5 < -*(float *)(param_3 + 0x18)) ||
     (fVar4 = *(float *)((long)param_3 + 0xc4) +
              ((*(float *)((long)param_3 + 0x24) - *(float *)((long)param_3 + 0x1c)) -
              (*(float *)((long)param_3 + 0x3c) - *(float *)((long)param_3 + 0x34))), fVar4 < fVar5)
     ) {
    fVar5 = fVar4;
    *(float *)((long)param_3 + 0x94) = fVar5;
  }
  *(float *)((long)param_3 + 0xa4) = param_2;
  *(float *)((long)param_3 + 0xc) = (1.0 / param_2) * (fVar5 - *(float *)((long)param_3 + 0x2c));
  *(float *)(param_3 + 2) = (1.0 / param_2) * (param_1 - *(float *)(param_3 + 6));
  if ((long *)param_3[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_3[0x1a] + 8))();
  }
  plVar2 = *(long **)(param_4 + 8);
  lVar3 = 0;
  if (plVar2 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3 + 0x1b);
  }
  param_3[0x1a] = lVar3;
  *(undefined4 *)(param_3 + 0x15) = 0;
  *(undefined4 *)((long)param_3 + 0x9c) = *(undefined4 *)((long)param_3 + 0x2c);
  *(int *)(param_3 + 0x14) = (int)param_3[6];
  if ((*(int *)((long)param_3 + 0xac) != 0) && (*(int *)((long)param_3 + 0xac) != 5)) {
    plVar2 = (long *)param_3[0x20];
    *(undefined4 *)((long)param_3 + 0xac) = 5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_3);
    }
  }
  return;
}

