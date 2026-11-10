
void FUN_0033732c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 int param_5,int param_6)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_40;
  ulong uStack_38;
  undefined8 local_30;
  ulong uStack_28;
  undefined8 local_20;
  ulong uStack_18;
  
  fVar6 = (float)param_1;
  if (param_5 == 0) {
    local_20 = *param_4;
    pfVar2 = (float *)param_4[6];
    pfVar5 = *(float **)(pfVar2 + 0xc);
    fVar10 = (float)param_4[1];
    uStack_18 = param_4[1] & 0xffffffff;
    local_30 = *(undefined8 *)pfVar2;
    auVar1 = *(undefined1 (*) [16])(pfVar2 + 4);
    uStack_28 = (ulong)(uint)pfVar2[2];
    fVar7 = (float)((ulong)local_20 >> 0x20);
    local_50 = CONCAT44((pfVar5[1] - fVar7) * 0.5,(*pfVar5 - (float)local_20) * 0.5);
    uStack_48 = (ulong)(uint)((pfVar5[2] - fVar10) * 0.5);
    auVar13 = NEON_fmov(0x3e800000,4);
    local_40 = CONCAT44(((pfVar2[1] - fVar7) +
                        (pfVar2[1] - (float)((ulong)*(undefined8 *)pfVar5 >> 0x20))) * auVar13._4_4_
                        ,((*pfVar2 - (float)local_20) + (*pfVar2 - (float)*(undefined8 *)pfVar5)) *
                         auVar13._0_4_);
    fVar7 = 1.0 - fVar6;
    fVar8 = *(float *)(param_4 + 2) * fVar7;
    fVar9 = *(float *)((long)param_4 + 0x14) * fVar7;
    fVar11 = *(float *)(param_4 + 3) * fVar7;
    fVar7 = *(float *)((long)param_4 + 0x1c) * fVar7;
    auVar14._0_4_ = auVar1._0_4_ * fVar6;
    auVar14._4_4_ = auVar1._4_4_ * fVar6;
    auVar14._8_4_ = auVar1._8_4_ * fVar6;
    auVar14._12_4_ = auVar1._12_4_ * fVar6;
    uStack_38 = (ulong)(uint)(((pfVar2[2] - fVar10) +
                              (pfVar2[2] - (float)*(undefined8 *)(pfVar5 + 2))) * auVar13._8_4_);
  }
  else {
    if (param_6 + -1 == param_5) {
      pfVar2 = (float *)param_4[7];
      pauVar3 = *(undefined1 (**) [16])(pfVar2 + 0xe);
      local_20 = *(undefined8 *)pfVar2;
      auVar1 = *(undefined1 (*) [16])(pfVar2 + 4);
      local_30 = *param_4;
      fVar7 = (float)param_4[1];
      uStack_18 = (ulong)(uint)pfVar2[2];
      uStack_28 = param_4[1] & 0xffffffff;
      fVar6 = (float)((ulong)local_30 >> 0x20);
      local_40 = CONCAT44((fVar6 - *(float *)(*pauVar3 + 4)) * 0.5,
                          ((float)local_30 - *(float *)*pauVar3) * 0.5);
      uStack_38 = (ulong)(uint)((fVar7 - *(float *)(*pauVar3 + 8)) * 0.5);
      auVar14 = *pauVar3;
      auVar13 = NEON_fmov(0xbe800000,4);
      local_50 = CONCAT44(((pfVar2[1] - fVar6) + (pfVar2[1] - auVar14._4_4_)) * auVar13._4_4_,
                          ((*pfVar2 - (float)local_30) + (*pfVar2 - auVar14._0_4_)) * auVar13._0_4_)
      ;
      uVar15 = CONCAT44(auVar1._4_4_ * 0.0 + (float)((ulong)param_4[2] >> 0x20),
                        auVar1._0_4_ * 0.0 + (float)param_4[2]);
      uVar12 = CONCAT44(auVar1._12_4_ * 0.0 + (float)((ulong)param_4[3] >> 0x20),
                        auVar1._8_4_ * 0.0 + (float)param_4[3]);
      param_1 = 0x3f800000;
      uStack_48 = (ulong)(uint)(((pfVar2[2] - fVar7) + (pfVar2[2] - auVar14._8_4_)) * auVar13._8_4_)
      ;
      goto LAB_003375d4;
    }
    pfVar2 = (float *)param_4[6];
    if (param_6 + -2 == param_5) {
      puVar4 = *(undefined8 **)(pfVar2 + 0xe);
      pfVar5 = (float *)puVar4[7];
      local_20 = *puVar4;
      uStack_18 = puVar4[1] & 0xffffffff;
      local_30 = *(undefined8 *)pfVar2;
      auVar1 = *(undefined1 (*) [16])(pfVar2 + 4);
      uStack_28 = *(ulong *)(pfVar2 + 2) & 0xffffffff;
      local_40 = CONCAT44(((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) - pfVar5[1]) * 0.5,
                          ((float)*(undefined8 *)pfVar2 - *pfVar5) * 0.5);
      uStack_38 = (ulong)(uint)(((float)*(undefined8 *)(pfVar2 + 2) - pfVar5[2]) * 0.5);
      fVar7 = (float)*puVar4;
      fVar8 = (float)((ulong)*puVar4 >> 0x20);
      auVar13 = NEON_fmov(0xbe800000,4);
      local_50 = CONCAT44(((fVar8 - pfVar2[1]) +
                          (fVar8 - (float)((ulong)*(undefined8 *)pfVar5 >> 0x20))) * auVar13._4_4_,
                          ((fVar7 - *pfVar2) + (fVar7 - (float)*(undefined8 *)pfVar5)) *
                          auVar13._0_4_);
      fVar7 = 1.0 - fVar6;
      fVar8 = *(float *)(puVar4 + 2) * fVar7;
      fVar9 = *(float *)((long)puVar4 + 0x14) * fVar7;
      fVar11 = *(float *)(puVar4 + 3) * fVar7;
      fVar7 = *(float *)((long)puVar4 + 0x1c) * fVar7;
      auVar14._0_4_ = auVar1._0_4_ * fVar6;
      auVar14._4_4_ = auVar1._4_4_ * fVar6;
      auVar14._8_4_ = auVar1._8_4_ * fVar6;
      auVar14._12_4_ = auVar1._12_4_ * fVar6;
      uStack_48 = (ulong)(uint)((((float)puVar4[1] - pfVar2[2]) +
                                ((float)puVar4[1] - (float)*(undefined8 *)(pfVar5 + 2))) *
                               auVar13._8_4_);
    }
    else {
      local_20 = *param_4;
      uStack_18 = param_4[1] & 0xffffffff;
      local_30 = *(undefined8 *)pfVar2;
      auVar1 = *(undefined1 (*) [16])(pfVar2 + 4);
      uStack_28 = (ulong)(uint)pfVar2[2];
      uVar15 = *(undefined8 *)param_4[7];
      pfVar5 = *(float **)(pfVar2 + 0xc);
      local_40 = CONCAT44((pfVar2[1] - (float)((ulong)uVar15 >> 0x20)) * 0.5,
                          (*pfVar2 - (float)uVar15) * 0.5);
      uStack_38 = (ulong)(uint)((pfVar2[2] - (float)((undefined8 *)param_4[7])[1]) * 0.5);
      local_50 = CONCAT44((pfVar5[1] - (float)((ulong)local_20 >> 0x20)) * 0.5,
                          (*pfVar5 - (float)local_20) * 0.5);
      fVar7 = 1.0 - fVar6;
      fVar8 = *(float *)(param_4 + 2) * fVar7;
      fVar9 = *(float *)((long)param_4 + 0x14) * fVar7;
      fVar11 = *(float *)(param_4 + 3) * fVar7;
      fVar7 = *(float *)((long)param_4 + 0x1c) * fVar7;
      auVar14._0_4_ = auVar1._0_4_ * fVar6;
      auVar14._4_4_ = auVar1._4_4_ * fVar6;
      auVar14._8_4_ = auVar1._8_4_ * fVar6;
      auVar14._12_4_ = auVar1._12_4_ * fVar6;
      uStack_48 = (ulong)(uint)((pfVar5[2] - (float)param_4[1]) * 0.5);
    }
  }
  uVar15 = CONCAT44(fVar9 + auVar14._4_4_,fVar8 + auVar14._0_4_);
  uVar12 = CONCAT44(fVar7 + auVar14._12_4_,fVar11 + auVar14._8_4_);
LAB_003375d4:
  param_3[1] = uVar12;
  *param_3 = uVar15;
  FUN_0032c610(param_1,param_2,&local_20,&local_40,&local_30,&local_50);
  return;
}

