
void FUN_03ef8e08(float param_1,long param_2,float *param_3,float *param_4,uint param_5,uint param_6
                 ,uint param_7)

{
  uint uVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_ac;
  float fStack_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  
  if (((param_6 & 1) == 0) || ((param_7 & 1) == 0)) {
    uVar1 = param_5;
    if (*(uint *)(param_2 + 8) <= param_5) {
      uVar1 = 0;
    }
    plVar2 = (long *)**(undefined8 **)
                       (*(long *)(*(long *)(param_2 + 0x28) + 0x38) +
                       (long)*(short *)(param_2 + 0x30) * 8);
    (**(code **)(*plVar2 + 0x60))
              (plVar2,&local_a0,&local_ac,
               (long)*(short *)(*(long *)(param_2 + 0x10) + (long)(int)uVar1 * 2));
    if ((param_6 & 1) == 0) {
      if ((param_7 & 1) != 0) {
        local_84 = param_3[5] + param_1 * (param_4[5] - param_3[5]);
        local_94 = param_3[4] + param_1 * (param_4[4] - param_3[4]);
        local_74 = param_3[6] + param_1 * (param_4[6] - param_3[6]);
      }
    }
    else {
      fVar3 = param_3[1] * param_4[1] + *param_4 * *param_3 + param_4[2] * param_3[2] +
              param_4[3] * param_3[3];
      local_ac = local_94;
      fStack_a8 = local_84;
      local_a4 = local_74;
      fVar6 = 1.0;
      if ((fVar3 <= 1.0) && (fVar6 = fVar3, fVar3 < -1.0)) {
        fVar6 = -1.0;
      }
      fVar3 = fVar6;
      if (fVar6 < 0.0) {
        fVar3 = -fVar6;
      }
      fVar4 = acosf(fVar3);
      fVar5 = sinf(fVar4);
      fVar3 = -fVar5;
      if (0.0 <= fVar5) {
        fVar3 = fVar5;
      }
      if (1.1920929e-07 <= fVar3) {
        fVar3 = sinf(fVar4 - fVar4 * param_1);
        fVar3 = (1.0 / fVar5) * fVar3;
        param_1 = sinf(fVar4 * param_1);
        param_1 = (1.0 / fVar5) * param_1;
      }
      else {
        fVar3 = 1.0 - param_1;
      }
      if (fVar6 < 0.0) {
        param_1 = -param_1;
      }
      fVar4 = param_1 * *param_4 + *param_3 * fVar3;
      fVar5 = param_1 * param_4[1] + param_3[1] * fVar3;
      fVar7 = param_1 * param_4[2] + param_3[2] * fVar3;
      fVar6 = param_1 * param_4[3] + param_3[3] * fVar3;
      fVar3 = fVar4 + fVar4;
      fVar6 = fVar6 + fVar6;
      fVar8 = fVar5 * (fVar5 + fVar5);
      fStack_8c = fVar7 * (fVar7 + fVar7);
      fStack_7c = (fVar5 + fVar5) * fVar7;
      local_98 = fVar3 * fVar7 + fVar5 * fVar6;
      local_88 = fStack_7c - fVar4 * fVar6;
      local_80 = fVar3 * fVar7 - fVar5 * fVar6;
      fStack_7c = fStack_7c + fVar4 * fVar6;
      local_78 = 1.0 - fVar4 * fVar3;
      local_94 = local_ac;
      fStack_9c = fVar3 * fVar5 - fVar7 * fVar6;
      local_90 = fVar3 * fVar5 + fVar7 * fVar6;
      local_84 = fStack_a8;
      local_a0 = (1.0 - fVar8) - fStack_8c;
      fStack_8c = local_78 - fStack_8c;
      local_78 = local_78 - fVar8;
      local_74 = local_a4;
    }
  }
  else {
    fVar3 = param_3[1] * param_4[1] + *param_4 * *param_3 + param_4[2] * param_3[2] +
            param_4[3] * param_3[3];
    fVar6 = 1.0;
    if ((fVar3 <= 1.0) && (fVar6 = fVar3, fVar3 < -1.0)) {
      fVar6 = -1.0;
    }
    fVar3 = fVar6;
    if (fVar6 < 0.0) {
      fVar3 = -fVar6;
    }
    fVar4 = acosf(fVar3);
    fVar5 = sinf(fVar4);
    fVar3 = -fVar5;
    if (0.0 <= fVar5) {
      fVar3 = fVar5;
    }
    if (1.1920929e-07 <= fVar3) {
      fVar7 = sinf(fVar4 - fVar4 * param_1);
      fVar7 = (1.0 / fVar5) * fVar7;
      fVar3 = sinf(fVar4 * param_1);
      fVar3 = (1.0 / fVar5) * fVar3;
    }
    else {
      fVar7 = 1.0 - param_1;
      fVar3 = param_1;
    }
    if (fVar6 < 0.0) {
      fVar3 = -fVar3;
    }
    fVar5 = fVar3 * param_4[1] + param_3[1] * fVar7;
    fVar6 = fVar3 * param_4[3] + param_3[3] * fVar7;
    fVar4 = fVar3 * *param_4 + *param_3 * fVar7;
    fVar3 = fVar3 * param_4[2] + param_3[2] * fVar7;
    fVar7 = fVar4 + fVar4;
    fVar6 = fVar6 + fVar6;
    local_84 = param_3[5] + param_1 * (param_4[5] - param_3[5]);
    local_94 = param_3[4] + param_1 * (param_4[4] - param_3[4]);
    fVar8 = fVar5 * (fVar5 + fVar5);
    local_88 = (fVar5 + fVar5) * fVar3;
    fStack_8c = fVar3 * (fVar3 + fVar3);
    local_98 = fVar7 * fVar3 + fVar5 * fVar6;
    local_80 = fVar7 * fVar3 - fVar5 * fVar6;
    fStack_7c = local_88 + fVar4 * fVar6;
    local_88 = local_88 - fVar4 * fVar6;
    fStack_9c = fVar7 * fVar5 - fVar3 * fVar6;
    local_74 = param_3[6] + param_1 * (param_4[6] - param_3[6]);
    local_90 = fVar7 * fVar5 + fVar3 * fVar6;
    local_78 = 1.0 - fVar4 * fVar7;
    local_a0 = (1.0 - fVar8) - fStack_8c;
    fStack_8c = local_78 - fStack_8c;
    local_78 = local_78 - fVar8;
  }
  if (*(uint *)(param_2 + 8) <= param_5) {
    param_5 = 0;
  }
  plVar2 = (long *)**(undefined8 **)
                     (*(long *)(*(long *)(param_2 + 0x28) + 0x38) +
                     (long)*(short *)(param_2 + 0x30) * 8);
  (**(code **)(*plVar2 + 0x48))
            (plVar2,&local_a0,PTR_DAT_04bb2f78,
             (long)*(short *)(*(long *)(param_2 + 0x10) + (long)(int)param_5 * 2));
  return;
}

