
void FUN_03442940(undefined8 *param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_LAB_04b2a930;
  param_1[1] = 0;
  param_1[7] = 0x7f7fffff7f7fffff;
  param_1[8] = 0xff7fffffff7fffff;
  *(undefined8 *)((long)param_1 + 0x74) = 0x7f7fffff7f7fffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0xff7fffffff7fffff;
  param_1[0x11] = 0x7f7fffff7f7fffff;
  param_1[0x12] = 0xff7fffffff7fffff;
  param_1[0x13] = 0x7f7fffff7f7fffff;
  param_1[0x14] = 0xff7fffffff7fffff;
  param_1[0x15] = 0x7fc0000000000000;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_03442808();
  fVar5 = *(float *)((long)param_1 + 100);
  fVar3 = *(float *)(param_1 + 0xd);
  *param_1 = &PTR_LAB_04b2a970;
  fVar7 = *(float *)((long)param_1 + 0x9c) + fVar3;
  fVar9 = *(float *)((long)param_1 + 0xa4) + fVar3;
  *(float *)((long)param_1 + 0xbc) = *(float *)((long)param_1 + 0x9c);
  *(float *)((long)param_1 + 0xc4) = *(float *)((long)param_1 + 0xa4);
  fVar6 = *(float *)(param_1 + 0x13) + fVar5;
  fVar8 = *(float *)(param_1 + 0x14) + fVar5;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x17) = *(float *)(param_1 + 0x13);
  fVar4 = *(float *)(param_1 + 0x16);
  *(float *)((long)param_1 + 0x9c) = fVar7;
  *(float *)((long)param_1 + 0xa4) = fVar9;
  *(float *)(param_1 + 0x13) = fVar6;
  *(float *)(param_1 + 0x14) = fVar8;
  fVar1 = *(float *)((long)param_1 + 0xac);
  if (NAN(*(float *)((long)param_1 + 0xac))) {
    fVar4 = 0.0;
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0xc) = fVar4 + (float)(int)((fVar9 + fVar7) * 0.5);
  *(float *)((long)param_1 + 0x5c) = fVar1 + (float)(int)((fVar6 + fVar8) * 0.5);
  if (0.0 <= fVar5) {
    if (fVar5 <= 0.0) goto LAB_03442a4c;
    uVar2 = 0x10;
  }
  else {
    uVar2 = 0x20;
  }
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar2;
LAB_03442a4c:
  if (0.0 <= fVar3) {
    if (fVar3 <= 0.0) {
      return;
    }
    uVar2 = 4;
  }
  else {
    uVar2 = 8;
  }
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar2;
  return;
}

