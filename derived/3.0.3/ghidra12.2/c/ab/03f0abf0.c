
void FUN_03f0abf0(float param_1,long param_2,long param_3,float *param_4,float *param_5,long param_6
                 ,byte param_7)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  
  if (param_3 == 0) {
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  else {
    *(long *)(param_2 + 0x50) = param_6;
    *(long *)(param_2 + 0x58) = param_3;
    fVar18 = 1.0;
    fVar7 = 0.0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    fVar17 = *(float *)(param_3 + 0xe0);
    fVar19 = *(float *)(param_3 + 0xc0);
    fVar8 = param_4[1] + param_5[1];
    fVar6 = *param_4 + *param_5;
    fVar11 = param_4[2] + param_5[2];
    fVar13 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar11 * fVar11);
    fVar14 = 1.0 / fVar13;
    if (0.0 < fVar13) {
      fVar11 = fVar11 * fVar14;
      fVar8 = fVar8 * fVar14;
      fVar6 = fVar6 * fVar14;
    }
    *(float *)(param_2 + 0x34) = fVar6;
    *(float *)(param_2 + 0x38) = fVar8;
    *(float *)(param_2 + 0x3c) = fVar11;
    *(float *)(param_2 + 0x40) = fVar13;
    fVar11 = *(float *)(param_3 + 0x188);
    fVar6 = fVar13 * param_1 * 2.0 + 0.1;
    fVar8 = 1.0;
    if (fVar6 <= 1.0) {
      fVar8 = fVar6;
    }
    fVar13 = 0.0;
    if (0.0 <= fVar6) {
      fVar13 = fVar8;
    }
    puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar2 = puVar3[3];
    uVar1 = *puVar3 ^ *puVar3 << 0xb;
    *puVar3 = puVar3[1];
    puVar3[1] = puVar3[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar1;
    *(float *)(param_2 + 0x20) = fVar19;
    fVar8 = (float)(uVar1 >> 9 | 0x3f800000) + -1.0;
    fVar8 = fVar8 + fVar8 + -1.0 + 1.0;
    uVar1 = *(int *)(param_2 + 0x48) + (int)(fVar11 * param_1 * fVar8 * 4.2949673e+09);
    *(int *)(param_2 + 0x44) =
         *(int *)(param_2 + 0x44) + (int)(fVar17 * param_1 * fVar13 * fVar8 * 4.2949673e+09);
    *(uint *)(param_2 + 0x48) = uVar1;
    fVar14 = *(float *)(param_3 + 0x140);
    fVar11 = *(float *)(param_3 + 0x144);
    fVar6 = *(float *)(param_3 + 0x148);
    fVar8 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar6 * fVar6);
    if (0.0 < fVar8) {
      fVar17 = 1.0 / fVar8;
      fVar14 = fVar14 * fVar17;
      fVar11 = fVar11 * fVar17;
      fVar6 = fVar6 * fVar17;
    }
    if (fVar8 != 0.0) {
      fVar9 = *(float *)(param_3 + 0x168);
      fVar17 = 0.0;
      fVar7 = 1.0;
      if (fVar9 <= 1.0) {
        fVar7 = fVar9;
      }
      fVar15 = 0.0;
      if (0.0 <= fVar9) {
        fVar15 = fVar7;
      }
      fVar9 = (float)(&DAT_04199798)[(ulong)(uVar1 >> 0x18) * 4] +
              (float)(&DAT_0419979c)[(ulong)(uVar1 >> 0x18) * 4] * (float)(uVar1 & 0xffffff) *
              5.9604645e-08;
      fVar7 = 0.0;
      if (0.0 <= fVar9) {
        fVar7 = fVar9;
      }
      fVar7 = powf(fVar7,8.0);
      fVar7 = fVar7 * fVar8 * ((1.0 - fVar15) + fVar15 * fVar13);
      if (fVar7 != 0.0) {
        if (*(long *)(param_6 + 0x50) == 0) {
          fVar13 = 0.0;
          fVar10 = 0.0;
          fVar9 = 1.0;
          fVar8 = 0.0;
          fVar12 = 0.0;
          fVar15 = 1.0;
          fVar16 = 0.0;
        }
        else {
          lVar5 = *(long *)(*(long *)(param_6 + 0x50) + 0x28);
          fVar9 = 1.0;
          fVar15 = 1.0;
          fVar16 = 0.0;
          fVar12 = 0.0;
          fVar8 = 0.0;
          fVar10 = 0.0;
          fVar13 = 0.0;
          if (lVar5 != 0) {
            plVar4 = *(long **)**(undefined8 **)(lVar5 + 0x38);
            (**(code **)(*plVar4 + 0x70))(plVar4,&local_a0,0);
            fVar9 = fStack_8c;
            fVar15 = local_a0;
            fVar17 = fStack_7c;
            fVar18 = local_78;
            fVar16 = fStack_9c;
            fVar12 = local_98;
            fVar8 = local_90;
            fVar10 = local_88;
            fVar13 = local_80;
          }
        }
        fVar8 = fVar14 * fVar8;
        fVar17 = fVar11 * fVar17;
        fVar13 = fVar14 * fVar13;
        fVar14 = fVar11 * fVar16 + fVar14 * fVar15 + fVar6 * fVar12;
        fVar11 = fVar11 * fVar9 + fVar8 + fVar6 * fVar10;
        fVar6 = fVar17 + fVar13 + fVar6 * fVar18;
      }
    }
    *(byte *)(param_2 + 0x11) = param_7 & 1;
    *(float *)(param_2 + 0x24) = fVar14 * fVar7;
    *(float *)(param_2 + 0x28) = fVar11 * fVar7;
    fVar8 = fVar19 * fVar7 * param_1 * DAT_04c4bac0;
    *(float *)(param_2 + 0x2c) = fVar6 * fVar7;
    *(float *)(param_2 + 0x30) = fVar8;
  }
  return;
}

