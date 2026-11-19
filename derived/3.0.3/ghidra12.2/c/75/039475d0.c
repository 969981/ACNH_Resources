
void FUN_039475d0(undefined4 param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 uint param_5)

{
  float *pfVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  
  puVar3 = PTR_DAT_04bb2d00;
  if (param_5 != 0) {
    uVar2 = 0;
    if (param_5 != 0) {
      uVar2 = 0xffffffff / param_5;
    }
    iVar4 = 0;
    local_8c = param_3[3] + param_3[1] * 0.0 + *param_3 * 0.5 + param_3[2] * 0.0;
    fStack_88 = param_3[7] + param_3[5] * 0.0 + param_3[4] * 0.5 + param_3[6] * 0.0;
    local_84 = param_3[0xb] + param_3[9] * 0.0 + param_3[8] * 0.5 + param_3[10] * 0.0;
    do {
      iVar4 = iVar4 + 1;
      fVar5 = (float)(iVar4 * uVar2 & 0xffffff);
      pfVar1 = (float *)(puVar3 + (ulong)(iVar4 * uVar2 >> 0x18) * 0x10);
      fVar6 = (pfVar1[2] + pfVar1[3] * fVar5 * 5.9604645e-08) * 0.5;
      fVar5 = (*pfVar1 + pfVar1[1] * fVar5 * 5.9604645e-08) * 0.5;
      fVar7 = param_3[3] + param_3[1] * fVar5 + fVar6 * *param_3 + param_3[2] * 0.0;
      fVar8 = param_3[7] + fVar5 * param_3[5] + fVar6 * param_3[4] + param_3[6] * 0.0;
      fVar5 = param_3[0xb] + fVar5 * param_3[9] + fVar6 * param_3[8] + param_3[10] * 0.0;
      local_98 = fVar7;
      fStack_94 = fVar8;
      local_90 = fVar5;
      FUN_039427b0(param_1,param_2,&local_8c,&local_98,param_4);
      param_5 = param_5 - 1;
      local_8c = fVar7;
      fStack_88 = fVar8;
      local_84 = fVar5;
    } while (param_5 != 0);
  }
  return;
}

