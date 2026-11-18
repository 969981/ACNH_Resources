
void FUN_03442c78(undefined2 *param_1,long param_2,long *param_3,float *param_4,float *param_5)

{
  float fVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  float local_98;
  float fStack_94;
  undefined **local_90;
  undefined4 local_88;
  
  *param_1 = 0;
  if (param_3 == (long *)0x0) {
    return;
  }
  local_88 = 0x2c;
  local_90 = &PTR_LAB_04a3ee98;
  (**(code **)(*param_3 + 0x20))(param_3,&local_90);
  (**(code **)(param_3[3] + 0x2e0))(&local_98,param_3[1]);
  fVar6 = *(float *)(param_2 + 200);
  fVar7 = param_4[1];
  local_90 = &PTR_LAB_04a3ee98;
  local_88 = 8;
  fVar9 = *(float *)(param_2 + 0xc4) - *param_4;
  fVar8 = local_98 * 0.5;
  fVar1 = -fVar9;
  if (0.0 <= fVar9) {
    fVar1 = fVar9;
  }
  (**(code **)(*param_3 + 0x20))(param_3,&local_90);
  puVar2 = (undefined8 *)(**(code **)(param_3[3] + 0xa0))(param_3[1]);
  local_a0 = *(undefined4 *)(puVar2 + 1);
  local_90 = &PTR_LAB_04a3ee98;
  local_88 = 8;
  fVar5 = fVar8;
  if (fVar9 <= fVar8) {
    fVar5 = fVar9;
  }
  fVar4 = -(local_98 * 0.5);
  if (-(local_98 * 0.5) <= fVar9) {
    fVar4 = fVar5;
  }
  _local_a8 = CONCAT44((int)((ulong)*puVar2 >> 0x20),fVar4);
  (**(code **)(*param_3 + 0x18))(param_3,&local_90);
  (**(code **)(param_3[3] + 0x98))(param_3[1],&local_a8);
  if (fVar1 - fVar8 <= param_5[1]) {
    fVar6 = fVar6 - fVar7;
    fVar7 = -fVar6;
    if (0.0 <= fVar6) {
      fVar7 = fVar6;
    }
    fVar7 = fVar7 + fStack_94 * -0.5;
    if (fVar7 <= param_5[3]) {
      if (*param_5 <= fVar1 - fVar8) {
        return;
      }
      if (param_5[2] <= fVar7) {
        return;
      }
      uVar3 = 1;
      goto LAB_03442de4;
    }
  }
  uVar3 = 0;
LAB_03442de4:
  *(undefined1 *)((long)param_1 + 1) = uVar3;
  *(undefined1 *)param_1 = 1;
  return;
}

