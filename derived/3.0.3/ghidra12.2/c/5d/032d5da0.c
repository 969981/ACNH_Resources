
void FUN_032d5da0(float *param_1,long param_2,float *param_3,uint *param_4,int param_5,byte param_6,
                 int param_7,int param_8)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
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
  float fVar20;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  
  if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    return;
  }
  fVar8 = *(float *)(param_2 + 0x30);
  fVar9 = *(float *)(param_2 + 0x34);
  fVar6 = *(float *)(param_2 + 0x48);
  fVar7 = *(float *)(param_2 + 0x4c);
  lVar3 = *(long *)(param_2 + 0x18);
  fVar10 = fVar9;
  fVar16 = fVar8;
  if (param_5 - 2U < 2) {
    bVar2 = *(byte *)(param_2 + 0x5b);
    if ((bVar2 & 3) != 0) {
      if ((bVar2 & 3) == 1) {
        fVar16 = *(float *)(param_2 + 0x50);
        fVar12 = 0.5;
      }
      else {
        fVar16 = *(float *)(param_2 + 0x50);
        fVar12 = -0.5;
      }
      fVar16 = fVar8 + fVar6 * fVar16 * fVar12;
    }
    bVar2 = bVar2 >> 4 & 3;
    if (bVar2 == 2) {
      fVar12 = *(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x50);
      fVar14 = -0.5;
    }
    else {
      if (bVar2 != 1) goto LAB_032d5f64;
      fVar12 = *(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x50);
      fVar14 = 0.5;
    }
    fVar16 = fVar16 + fVar12 * fVar14;
    goto LAB_032d5f64;
  }
  if (param_5 == 1) {
    bVar2 = *(byte *)(param_2 + 0x5b) >> 2 & 3;
    if (bVar2 != 0) {
      if (bVar2 == 2) {
        fVar10 = *(float *)(param_2 + 0x54);
        fVar12 = -0.5;
      }
      else {
        fVar10 = *(float *)(param_2 + 0x54);
        fVar12 = 0.5;
      }
      fVar10 = fVar9 + fVar7 * fVar10 * fVar12;
    }
    bVar2 = *(byte *)(param_2 + 0x5b) >> 6;
    if (bVar2 != 2) {
      if (bVar2 != 1) {
LAB_032d5f60:
        goto LAB_032d5f64;
      }
      goto LAB_032d5f2c;
    }
LAB_032d5f40:
    fVar12 = *(float *)(lVar3 + 0x4c) * *(float *)(lVar3 + 0x54);
    fVar14 = 0.5;
  }
  else {
    if (param_5 != 0) goto LAB_032d5f64;
    bVar2 = *(byte *)(param_2 + 0x5b) >> 2 & 3;
    if (bVar2 != 0) {
      if (bVar2 == 2) {
        fVar10 = *(float *)(param_2 + 0x54);
        fVar12 = 0.5;
      }
      else {
        fVar10 = *(float *)(param_2 + 0x54);
        fVar12 = -0.5;
      }
      fVar10 = fVar9 + fVar7 * fVar10 * fVar12;
    }
    bVar2 = *(byte *)(param_2 + 0x5b) >> 6;
    if (bVar2 != 2) {
      if (bVar2 != 1) goto LAB_032d5f60;
      goto LAB_032d5f40;
    }
LAB_032d5f2c:
    fVar12 = *(float *)(lVar3 + 0x4c) * *(float *)(lVar3 + 0x54);
    fVar14 = -0.5;
  }
  fVar10 = fVar10 + fVar12 * fVar14;
LAB_032d5f64:
  uVar1 = *param_4;
  uVar4 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    plVar5 = *(long **)(param_4 + 2);
    do {
      if (*plVar5 == param_2) {
        lVar3 = param_2;
        goto LAB_032d5fa4;
      }
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  lVar3 = 0;
LAB_032d5fa4:
  if ((uVar1 == 0) || (((lVar3 != 0 ^ param_6) & 1) != 0)) {
    fVar12 = *param_3;
    fVar14 = param_3[1];
    fVar13 = param_3[3];
    fVar15 = fVar14 * 0.0 + fVar6 * fVar12;
    fVar17 = fVar7 * fVar14 + fVar12 * 0.0;
    fVar12 = param_3[2] + fVar10 * fVar14 + fVar16 * fVar12;
    fVar14 = param_3[4];
    fVar11 = *(float *)(param_2 + 0x50);
    fVar19 = fVar14 * 0.0 + fVar6 * fVar13;
    fVar20 = fVar7 * fVar14 + fVar13 * 0.0;
    fVar14 = param_3[5] + fVar10 * fVar14 + fVar16 * fVar13;
    fVar18 = 0.0 - fVar11 * 0.5;
    fVar16 = 0.0 - *(float *)(param_2 + 0x54) * 0.5;
    fVar13 = *(float *)(param_2 + 0x54) + fVar16;
    fVar10 = fVar12 + fVar17 * fVar16 + fVar18 * fVar15;
    *param_1 = fVar10;
    fVar12 = fVar12 + fVar17 * fVar13 + (fVar11 + fVar18) * fVar15;
    fVar16 = fVar14 + fVar20 * fVar16 + fVar10 * fVar19;
    param_1[2] = fVar12;
    param_1[1] = fVar16;
    fVar14 = fVar14 + fVar20 * fVar13 + fVar12 * fVar19;
    param_1[3] = fVar14;
  }
  else {
    fVar16 = 0.0;
    fVar14 = 0.0;
    fVar10 = 0.0;
    fVar12 = 0.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
  }
  if ((param_7 < 0) || (param_8 < param_7)) {
    fVar11 = *param_3;
    fVar13 = param_3[1];
    fVar17 = param_3[4];
    fVar15 = param_3[3];
    lVar3 = *(long *)(param_2 + 0x28);
    local_88 = fVar13 * 0.0 + fVar6 * fVar11;
    fStack_84 = fVar7 * fVar13 + fVar11 * 0.0;
    fStack_7c = fVar17 * 0.0 + fVar6 * fVar15;
    local_78 = fVar7 * fVar17 + fVar15 * 0.0;
    local_80 = param_3[2] + fVar9 * fVar13 + fVar8 * fVar11;
    fStack_74 = param_3[5] + fVar9 * fVar17 + fVar8 * fVar15;
    if (lVar3 != param_2 + 0x20) {
      do {
        FUN_032d5da0(&local_98,lVar3 + -8,&local_88,param_4,param_5,param_6 & 1,param_7,param_8 + 1)
        ;
        if (local_90 - local_98 != 0.0) {
          if (local_8c - local_94 != 0.0) {
            fVar6 = local_90;
            fVar7 = local_98;
            fVar8 = local_8c;
            fVar9 = local_94;
            if ((fVar12 - fVar10 != 0.0) && (fVar14 - fVar16 != 0.0)) {
              if (fVar10 <= local_98) {
                fVar7 = fVar10;
              }
              if (fVar16 <= local_94) {
                fVar9 = fVar16;
              }
              if (local_90 <= fVar12) {
                fVar6 = fVar12;
              }
              if (local_8c <= fVar14) {
                fVar8 = fVar14;
              }
            }
            *param_1 = fVar7;
            param_1[1] = fVar9;
            param_1[2] = fVar6;
            param_1[3] = fVar8;
            fVar10 = fVar7;
            fVar12 = fVar6;
            fVar14 = fVar8;
            fVar16 = fVar9;
          }
        }
        lVar3 = *(long *)(lVar3 + 8);
      } while (lVar3 != param_2 + 0x20);
    }
  }
  return;
}

