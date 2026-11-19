
void FUN_038e574c(long param_1,float *param_2,undefined1 (*param_3) [12],undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  
  uVar5 = *(undefined8 *)(*param_3 + 8);
  fVar10 = (float)uVar5;
  fVar11 = (float)((ulong)uVar5 >> 0x20);
  uVar4 = *(undefined8 *)*param_3;
  auVar3 = *param_3;
  auVar2 = *param_3;
  fVar8 = (float)uVar4;
  fVar9 = (float)((ulong)uVar4 >> 0x20);
  *(undefined8 *)(param_2 + 2) = uVar5;
  *(undefined8 *)param_2 = uVar4;
  uVar18 = *(undefined8 *)param_3[2];
  uVar15 = *(undefined8 *)(param_3[1] + 4);
  *(undefined8 *)(param_2 + 6) = uVar18;
  *(undefined8 *)(param_2 + 4) = uVar15;
  uVar5 = *(undefined8 *)(param_3[3] + 4);
  uVar4 = *(undefined8 *)(param_3[2] + 8);
  *(undefined8 *)(param_2 + 10) = uVar5;
  *(undefined8 *)(param_2 + 8) = uVar4;
  uVar7 = *(undefined8 *)(param_3[4] + 8);
  uVar6 = *(undefined8 *)param_3[4];
  *(undefined8 *)(param_2 + 0xe) = uVar7;
  *(undefined8 *)(param_2 + 0xc) = uVar6;
  fVar16 = (float)((ulong)uVar15 >> 0x20);
  fVar17 = (float)uVar18;
  fVar14 = (float)uVar15;
  fVar12 = (float)((ulong)uVar18 >> 0x20);
  switch(param_4) {
  case 1:
    *param_2 = fVar14;
    param_2[1] = fVar16;
    param_2[2] = fVar17;
    param_2[3] = fVar12;
    param_2[4] = -fVar8;
    param_2[5] = -fVar9;
    param_2[6] = -fVar10;
    param_2[7] = -fVar11;
    break;
  case 2:
    param_2[4] = fVar8;
    param_2[7] = fVar11;
    *param_2 = -fVar14;
    param_2[3] = -fVar12;
    auVar13._12_4_ = fVar11;
    auVar13._0_12_ = auVar2;
    auVar1._12_4_ = fVar11;
    auVar1._0_12_ = auVar3;
    auVar13 = NEON_ext(auVar13,auVar1,4,1);
    param_2[2] = -fVar17;
    param_2[1] = -fVar16;
    *(long *)(param_2 + 5) = auVar13._0_8_;
    break;
  case 3:
    *param_2 = -fVar8;
    param_2[2] = -fVar10;
    param_2[4] = -fVar14;
    param_2[1] = -fVar9;
    param_2[3] = -fVar11;
    param_2[5] = -fVar16;
    param_2[6] = -fVar17;
    goto LAB_038e5890;
  case 4:
    *param_2 = -fVar8;
    param_2[1] = -fVar9;
    param_2[2] = -fVar10;
    param_2[3] = -fVar11;
    break;
  case 5:
    param_2[4] = -fVar14;
    param_2[5] = -fVar16;
    param_2[6] = -fVar17;
LAB_038e5890:
    param_2[7] = -fVar12;
  }
  param_2[8] = *(float *)(param_1 + 0x90) * (float)uVar4;
  param_2[9] = *(float *)(param_1 + 0x90) * (float)((ulong)uVar4 >> 0x20);
  param_2[10] = ((float)uVar5 + *(float *)(param_1 + 0x94) * (float)uVar7) *
                *(float *)(param_1 + 0x90);
  param_2[0xb] = *(float *)(param_1 + 0x94) * (float)((ulong)uVar7 >> 0x20) +
                 *(float *)(param_1 + 0x90) * (float)((ulong)uVar5 >> 0x20);
  return;
}

