
void FUN_0033a6c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 int param_5,int param_6)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  fVar4 = (float)param_1;
  if (param_5 == 0) {
    local_20 = *param_4;
    local_18 = param_4[1];
    pfVar2 = (float *)param_4[0xb];
    fVar12 = 1.0 - fVar4;
    pfVar3 = *(float **)(pfVar2 + 0x16);
    local_30 = *(undefined8 *)pfVar2;
    uStack_28 = *(undefined8 *)(pfVar2 + 2);
    fVar8 = (float)*param_4;
    fVar5 = (float)((ulong)*param_4 >> 0x20);
    fVar6 = (float)param_4[1];
    fVar7 = (float)((ulong)param_4[1] >> 0x20);
    uStack_48 = CONCAT44((pfVar3[3] - fVar7) * 0.5,(pfVar3[2] - fVar6) * 0.5);
    local_50 = CONCAT44((pfVar3[1] - fVar5) * 0.5,(*pfVar3 - fVar8) * 0.5);
    auVar11 = NEON_fmov(0x3e800000,4);
    local_40 = CONCAT44(((pfVar2[1] - fVar5) +
                        (pfVar2[1] - (float)((ulong)*(undefined8 *)pfVar3 >> 0x20))) * auVar11._4_4_
                        ,((*pfVar2 - fVar8) + (*pfVar2 - (float)*(undefined8 *)pfVar3)) *
                         auVar11._0_4_);
    uStack_38 = CONCAT44(((pfVar2[3] - fVar7) +
                         (pfVar2[3] - (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20))) *
                         auVar11._12_4_,
                         ((pfVar2[2] - fVar6) + (pfVar2[2] - (float)*(undefined8 *)(pfVar3 + 2))) *
                         auVar11._8_4_);
    uVar13 = CONCAT44((float)((ulong)param_4[4] >> 0x20) * fVar12 + pfVar2[9] * fVar4,
                      (float)param_4[4] * fVar12 + pfVar2[8] * fVar4);
    uVar14 = CONCAT44((float)((ulong)param_4[5] >> 0x20) * fVar12 + pfVar2[0xb] * fVar4,
                      (float)param_4[5] * fVar12 + pfVar2[10] * fVar4);
  }
  else if (param_6 + -1 == param_5) {
    puVar1 = (undefined8 *)param_4[0xc];
    local_30 = *param_4;
    uStack_28 = param_4[1];
    local_20 = *puVar1;
    local_18 = puVar1[1];
    pfVar2 = (float *)puVar1[0xc];
    fVar4 = (float)*param_4;
    fVar8 = (float)((ulong)*param_4 >> 0x20);
    fVar5 = (float)param_4[1];
    fVar6 = (float)((ulong)param_4[1] >> 0x20);
    local_40 = CONCAT44((fVar8 - (float)((ulong)*(undefined8 *)pfVar2 >> 0x20)) * 0.5,
                        (fVar4 - (float)*(undefined8 *)pfVar2) * 0.5);
    uStack_38 = CONCAT44((fVar6 - (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20)) * 0.5,
                         (fVar5 - (float)*(undefined8 *)(pfVar2 + 2)) * 0.5);
    fVar7 = (float)*puVar1;
    fVar12 = (float)((ulong)*puVar1 >> 0x20);
    fVar9 = (float)puVar1[1];
    fVar10 = (float)((ulong)puVar1[1] >> 0x20);
    auVar11 = NEON_fmov(0xbe800000,4);
    local_50 = CONCAT44(((fVar12 - fVar8) + (fVar12 - pfVar2[1])) * auVar11._4_4_,
                        ((fVar7 - fVar4) + (fVar7 - *pfVar2)) * auVar11._0_4_);
    uStack_48 = CONCAT44(((fVar10 - fVar6) + (fVar10 - pfVar2[3])) * auVar11._12_4_,
                         ((fVar9 - fVar5) + (fVar9 - pfVar2[2])) * auVar11._8_4_);
    auVar11 = *(undefined1 (*) [16])(param_4 + 4);
    uVar13 = CONCAT44(*(float *)((long)puVar1 + 0x24) * 0.0 + auVar11._4_4_,
                      *(float *)(puVar1 + 4) * 0.0 + auVar11._0_4_);
    uVar14 = CONCAT44(*(float *)((long)puVar1 + 0x2c) * 0.0 + auVar11._12_4_,
                      *(float *)(puVar1 + 5) * 0.0 + auVar11._8_4_);
    param_1 = 0x3f800000;
  }
  else {
    pfVar2 = (float *)param_4[0xb];
    if (param_6 + -2 == param_5) {
      puVar1 = *(undefined8 **)(pfVar2 + 0x18);
      local_18 = puVar1[1];
      pfVar3 = (float *)puVar1[0xc];
      local_20 = *puVar1;
      local_30 = *(undefined8 *)pfVar2;
      uStack_28 = *(undefined8 *)(pfVar2 + 2);
      local_40 = CONCAT44(((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) - pfVar3[1]) * 0.5,
                          ((float)*(undefined8 *)pfVar2 - *pfVar3) * 0.5);
      uStack_38 = CONCAT44(((float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20) - pfVar3[3]) * 0.5,
                           ((float)*(undefined8 *)(pfVar2 + 2) - pfVar3[2]) * 0.5);
      fVar8 = (float)*puVar1;
      fVar5 = (float)((ulong)*puVar1 >> 0x20);
      fVar6 = (float)puVar1[1];
      fVar7 = (float)((ulong)puVar1[1] >> 0x20);
      fVar12 = 1.0 - fVar4;
      auVar11 = NEON_fmov(0xbe800000,4);
      local_50 = CONCAT44(((fVar5 - pfVar2[1]) +
                          (fVar5 - (float)((ulong)*(undefined8 *)pfVar3 >> 0x20))) * auVar11._4_4_,
                          ((fVar8 - *pfVar2) + (fVar8 - (float)*(undefined8 *)pfVar3)) *
                          auVar11._0_4_);
      uStack_48 = CONCAT44(((fVar7 - pfVar2[3]) +
                           (fVar7 - (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20))) *
                           auVar11._12_4_,
                           ((fVar6 - pfVar2[2]) + (fVar6 - (float)*(undefined8 *)(pfVar3 + 2))) *
                           auVar11._8_4_);
      uVar13 = CONCAT44((float)((ulong)puVar1[4] >> 0x20) * fVar12 + pfVar2[9] * fVar4,
                        (float)puVar1[4] * fVar12 + pfVar2[8] * fVar4);
      uVar14 = CONCAT44((float)((ulong)puVar1[5] >> 0x20) * fVar12 + pfVar2[0xb] * fVar4,
                        (float)puVar1[5] * fVar12 + pfVar2[10] * fVar4);
    }
    else {
      local_20 = *param_4;
      local_18 = param_4[1];
      pfVar3 = (float *)param_4[0xc];
      local_30 = *(undefined8 *)pfVar2;
      uStack_28 = *(undefined8 *)(pfVar2 + 2);
      local_40 = CONCAT44(((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) - pfVar3[1]) * 0.5,
                          ((float)*(undefined8 *)pfVar2 - *pfVar3) * 0.5);
      uStack_38 = CONCAT44(((float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20) - pfVar3[3]) * 0.5,
                           ((float)*(undefined8 *)(pfVar2 + 2) - pfVar3[2]) * 0.5);
      fVar8 = 1.0 - fVar4;
      uVar14 = (*(undefined8 **)(pfVar2 + 0x16))[1];
      uVar13 = **(undefined8 **)(pfVar2 + 0x16);
      auVar11._0_8_ =
           CONCAT44(((float)((ulong)uVar13 >> 0x20) - (float)((ulong)*param_4 >> 0x20)) * 0.5,
                    ((float)uVar13 - (float)*param_4) * 0.5);
      auVar11._8_4_ = ((float)uVar14 - (float)param_4[1]) * 0.5;
      auVar11._12_4_ = ((float)((ulong)uVar14 >> 0x20) - (float)((ulong)param_4[1] >> 0x20)) * 0.5;
      uStack_48 = auVar11._8_8_;
      uVar13 = CONCAT44((float)((ulong)param_4[4] >> 0x20) * fVar8 +
                        (float)((ulong)*(undefined8 *)(pfVar2 + 8) >> 0x20) * fVar4,
                        (float)param_4[4] * fVar8 + (float)*(undefined8 *)(pfVar2 + 8) * fVar4);
      uVar14 = CONCAT44((float)((ulong)param_4[5] >> 0x20) * fVar8 +
                        (float)((ulong)*(undefined8 *)(pfVar2 + 10) >> 0x20) * fVar4,
                        (float)param_4[5] * fVar8 + (float)*(undefined8 *)(pfVar2 + 10) * fVar4);
      local_50 = auVar11._0_8_;
    }
  }
  param_3[1] = uVar14;
  *param_3 = uVar13;
  FUN_0032c610(param_1,param_2,&local_20,&local_40,&local_30,&local_50);
  return;
}

