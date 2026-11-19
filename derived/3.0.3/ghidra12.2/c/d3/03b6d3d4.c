
void FUN_03b6d3d4(undefined8 *param_1)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  
  if (param_1[1] != 0) {
    FUN_03b6d9c0();
  }
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_03b6d9c0(**(undefined8 **)*param_1);
  FUN_03b6d9c0(*(undefined8 *)(*(long *)*param_1 + 8));
  FUN_03b6d9c0(*(undefined8 *)(*(long *)*param_1 + 0x10));
  puVar1 = PTR_DAT_04bc3ee8;
  fVar2 = *(float *)(param_1 + 6);
  if (*(float *)(param_1 + 5) != fVar2) {
    *(float *)(param_1 + 5) = *(float *)((long)param_1 + 0x2c);
    fVar3 = *(float *)((long)param_1 + 0x2c) +
            *(float *)(*(long *)(*(long *)puVar1 + 0x10) + 0x1c) * *(float *)((long)param_1 + 0x34);
    if (0.0 <= *(float *)((long)param_1 + 0x34)) {
      if (fVar2 < fVar3) goto LAB_03b6d468;
    }
    else if (fVar3 < fVar2) {
LAB_03b6d468:
      fVar3 = fVar2;
    }
    *(float *)((long)param_1 + 0x2c) = fVar3;
  }
  fVar2 = *(float *)(param_1 + 9);
  if (*(float *)(param_1 + 8) == fVar2) {
    return;
  }
  *(float *)(param_1 + 8) = *(float *)((long)param_1 + 0x44);
  fVar3 = *(float *)((long)param_1 + 0x44) +
          *(float *)(*(long *)(*(long *)puVar1 + 0x10) + 0x1c) * *(float *)((long)param_1 + 0x4c);
  if (0.0 <= *(float *)((long)param_1 + 0x4c)) {
    if (fVar3 <= fVar2) goto LAB_03b6d4b0;
  }
  else if (fVar2 <= fVar3) goto LAB_03b6d4b0;
  fVar3 = fVar2;
LAB_03b6d4b0:
  *(float *)((long)param_1 + 0x44) = fVar3;
  return;
}

