
void FUN_03acba34(float *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  
  if ((param_2 == (undefined8 *)0x0) || (*(char *)(param_1 + 0x1c) == '\0')) {
    if (param_2 != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)param_1;
      param_2[1] = *(undefined8 *)(param_1 + 2);
      *param_2 = uVar2;
      uVar2 = *(undefined8 *)(param_1 + 4);
      param_2[3] = *(undefined8 *)(param_1 + 6);
      param_2[2] = uVar2;
      uVar2 = *(undefined8 *)(param_1 + 8);
      param_2[5] = *(undefined8 *)(param_1 + 10);
      param_2[4] = uVar2;
    }
  }
  else {
    fVar1 = param_1[8];
    fVar3 = param_1[9];
    fVar4 = param_1[10];
    fVar6 = -fVar3;
    fVar7 = -fVar1;
    fVar5 = -fVar4;
    fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4);
    fStack_44 = fVar5;
    fStack_4c = fVar7;
    local_48 = fVar6;
    if (0.0 < fVar1) {
      fVar1 = 1.0 / fVar1;
      fStack_4c = fVar1 * fVar7;
      local_48 = fVar1 * fVar6;
      fStack_44 = fVar1 * fVar5;
    }
    fVar1 = param_1[3];
    fVar4 = param_1[0xb];
    fVar3 = param_1[7];
    local_78 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
    uStack_70 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
    local_58 = (-(param_1[4] * fVar3) - fVar1 * *param_1) + fVar4 * fVar7;
    fStack_54 = (-(param_1[5] * fVar3) - fVar1 * param_1[1]) + fVar4 * fVar6;
    local_50 = (-(param_1[6] * fVar3) - fVar1 * param_1[2]) + fVar4 * fVar5;
    fStack_4c = fStack_4c + local_58;
    local_68 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
    uStack_60 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
    local_48 = local_48 + fStack_54;
    fStack_44 = fStack_44 + local_50;
    local_88 = *(undefined8 *)PTR_DAT_04bb2f80;
    uStack_80 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
    local_40 = *param_4;
    fStack_3c = param_4[1];
    local_38 = param_4[2];
    local_90 = &PTR_FUN_04b65548;
    fVar1 = SQRT(fStack_3c * fStack_3c + local_40 * local_40 + local_38 * local_38);
    if (0.0 < fVar1) {
      fVar1 = 1.0 / fVar1;
      local_40 = local_40 * fVar1;
      fStack_3c = fStack_3c * fVar1;
      local_38 = local_38 * fVar1;
    }
    FUN_038e4634(&local_90,&local_88);
    param_2[1] = uStack_80;
    *param_2 = local_88;
    param_2[3] = uStack_70;
    param_2[2] = local_78;
    param_2[5] = uStack_60;
    param_2[4] = local_68;
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    param_3[1] = *(undefined8 *)(param_1 + 0xe);
    *param_3 = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    param_3[3] = *(undefined8 *)(param_1 + 0x12);
    param_3[2] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x14);
    param_3[5] = *(undefined8 *)(param_1 + 0x16);
    param_3[4] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    param_3[7] = *(undefined8 *)(param_1 + 0x1a);
    param_3[6] = uVar2;
  }
  return;
}

