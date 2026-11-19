
void FUN_038e7760(undefined8 *param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_1[2] = 0xff7fffffff7fffff;
  puVar3 = PTR_DAT_04bd0ea8;
  *param_1 = &PTR_LAB_04b65888;
  param_1[1] = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x3f80000000000000;
  uVar1 = *(uint *)puVar3;
  *(uint *)(param_1 + 3) = uVar1;
  if (uVar1 < 6) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x39U) == 0) {
      fVar5 = *(float *)(param_2 + 8);
      fVar4 = *(float *)(param_2 + 0xc);
    }
    else {
      fVar4 = *(float *)(param_2 + 8);
      fVar5 = *(float *)(param_2 + 0xc);
    }
    fVar7 = fVar4;
    fVar2 = 0.0;
    if (fVar4 <= 0.0) {
      fVar7 = 0.0;
      fVar2 = fVar4;
    }
    fVar6 = fVar5;
    fVar4 = 0.0;
    if (fVar5 <= 0.0) {
      fVar6 = 0.0;
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 1) = fVar2;
    *(float *)((long)param_1 + 0xc) = fVar4;
    *(float *)(param_1 + 2) = fVar7;
    *(float *)((long)param_1 + 0x14) = fVar6;
  }
  return;
}

