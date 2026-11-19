
void FUN_03acb67c(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  float local_3c;
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  local_3c = *param_2;
  fStack_38 = param_2[1];
  local_34 = param_2[2];
  fVar1 = SQRT(fStack_38 * fStack_38 + local_3c * local_3c + local_34 * local_34);
  fVar3 = fStack_38;
  fVar2 = local_3c;
  fVar4 = local_34;
  if (0.0 < fVar1) {
    fVar1 = 1.0 / fVar1;
    fVar2 = local_3c * fVar1;
    fVar3 = fStack_38 * fVar1;
    fVar4 = local_34 * fVar1;
  }
  local_30 = fVar4 * -0.0 + fVar3 * 0.0;
  local_28 = fVar2 * 0.0 - fVar3;
  local_2c = fVar4 + fVar2 * -0.0;
  fVar1 = SQRT(local_2c * local_2c + local_30 * local_30 + local_28 * local_28);
  if (0.0 < fVar1) {
    fVar5 = 1.0 / fVar1;
    local_30 = local_30 * fVar5;
    local_2c = local_2c * fVar5;
    local_28 = local_28 * fVar5;
  }
  if (1.1920929e-07 <= fVar1) {
    fVar1 = fVar3 * local_2c + fVar2 * local_30;
    fVar5 = fVar1 + fVar4 * local_28;
    fVar1 = -(local_28 * fVar4) - fVar1;
    if (0.0 <= fVar5) {
      fVar1 = fVar5;
    }
    if (fVar1 <= 0.9999999) goto LAB_03acb768;
  }
  local_30 = fVar3 + fVar4 * -0.0;
  local_2c = -fVar2 + fVar4 * 0.0;
  local_28 = fVar3 * -0.0 + fVar2 * 0.0;
LAB_03acb768:
  local_3c = local_3c + 0.0;
  fStack_38 = fStack_38 + 0.0;
  local_34 = local_34 + 0.0;
  uStack_60 = DAT_0419b4fc;
  local_58 = DAT_0419b504;
  uStack_70 = DAT_0419b4ec;
  local_68 = DAT_0419b4f4;
  uStack_50 = DAT_0419b50c;
  uStack_48 = 0;
  local_40 = 0;
  fVar2 = SQRT(local_2c * local_2c + local_30 * local_30 + local_28 * local_28);
  local_80 = &PTR_FUN_04b65548;
  local_78 = DAT_0419b4e4;
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    local_30 = local_30 * fVar2;
    local_2c = local_2c * fVar2;
    local_28 = local_28 * fVar2;
  }
  FUN_038e4634(&local_80,&local_78);
  param_1[6] = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0x3f80000000000000;
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x3f800000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xbf800000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[3] = uStack_60;
  param_1[2] = local_68;
  param_1[5] = uStack_50;
  param_1[4] = local_58;
  return;
}

