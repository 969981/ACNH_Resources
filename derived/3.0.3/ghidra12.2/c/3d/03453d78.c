
void FUN_03453d78(undefined8 param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  bVar1 = false;
  if ((*(float *)(param_3 + 0x13) < *(float *)(param_2 + 0x14)) &&
     (bVar1 = false, !NAN(*(float *)(param_2 + 0x13)) && !NAN(*(float *)(param_3 + 0x14)))) {
    bVar1 = *(float *)(param_2 + 0x13) < *(float *)(param_3 + 0x14);
  }
  if (!bVar1) {
    return;
  }
  fVar6 = *(float *)((long)param_2 + 0xa4);
  bVar1 = false;
  if ((*(float *)((long)param_3 + 0x9c) < fVar6) &&
     (bVar1 = false,
     !NAN(*(float *)((long)param_2 + 0x9c)) && !NAN(*(float *)((long)param_3 + 0xa4)))) {
    bVar1 = *(float *)((long)param_2 + 0x9c) < *(float *)((long)param_3 + 0xa4);
  }
  if (!bVar1) {
    return;
  }
  fVar4 = (float)(**(code **)(*param_2 + 0x28))(param_2);
  fVar7 = fVar6;
  fVar5 = (float)(**(code **)(*param_3 + 0x28))(param_3);
  if (*(float *)((long)param_2 + 0x5c) < *(float *)((long)param_3 + 0x5c)) {
LAB_03453e10:
    *(int *)(param_2 + 10) = (int)param_2[10] + 1;
    plVar2 = param_3 + 9;
LAB_03453e3c:
    *(int *)plVar2 = (int)*plVar2 + 1;
  }
  else {
    if (*(float *)((long)param_3 + 0x5c) < *(float *)((long)param_2 + 0x5c)) {
LAB_03453e2c:
      *(int *)(param_2 + 9) = (int)param_2[9] + 1;
      plVar2 = param_3 + 10;
      goto LAB_03453e3c;
    }
    if (fVar4 < fVar5) goto LAB_03453e10;
    if (fVar5 < fVar4) goto LAB_03453e2c;
  }
  if (*(float *)(param_2 + 0xc) < *(float *)(param_3 + 0xc)) {
LAB_03453e68:
    *(int *)((long)param_2 + 0x54) = *(int *)((long)param_2 + 0x54) + 1;
    piVar3 = (int *)((long)param_3 + 0x4c);
  }
  else {
    if (*(float *)(param_2 + 0xc) <= *(float *)(param_3 + 0xc)) {
      if (fVar6 < fVar7) goto LAB_03453e68;
      if (fVar6 <= fVar7) {
        return;
      }
    }
    *(int *)((long)param_2 + 0x4c) = *(int *)((long)param_2 + 0x4c) + 1;
    piVar3 = (int *)((long)param_3 + 0x54);
  }
  *piVar3 = *piVar3 + 1;
  return;
}

