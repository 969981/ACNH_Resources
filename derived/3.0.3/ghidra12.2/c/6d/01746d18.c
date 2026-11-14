
float FUN_01746d18(long param_1,float *param_2,undefined1 *param_3)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
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
  undefined8 local_a0;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_74;
  float local_64;
  
  lVar6 = *(long *)(param_1 + 0x68);
  fVar13 = *(float *)(lVar6 + 0x278);
  fVar15 = *(float *)(lVar6 + 0x27c);
  fVar14 = *(float *)(lVar6 + 0x280);
  fVar9 = fVar15;
  fVar12 = fVar13;
  fVar10 = fVar14;
  if ((long)*(short *)(param_1 + 0x3a8) != -1) {
    if (*(short *)(param_1 + 0x3aa) != -1) {
      plVar4 = (long *)**(undefined8 **)
                         (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x1150) + 0x38) +
                         (long)*(short *)(param_1 + 0x3a8) * 8);
      (**(code **)(*plVar4 + 0x70))(plVar4,&local_90,(int)*(short *)(param_1 + 0x3aa));
      lVar6 = *(long *)(param_1 + 0x68);
      fVar14 = local_64;
      fVar15 = local_74;
      fVar13 = local_84;
      fVar12 = *(float *)(lVar6 + 0x278);
      fVar9 = *(float *)(lVar6 + 0x27c);
      fVar10 = *(float *)(lVar6 + 0x280);
    }
  }
  if ((long)*(short *)(param_1 + 0x3a4) != -1) {
    if (*(short *)(param_1 + 0x3a6) != -1) {
      plVar4 = (long *)**(undefined8 **)
                         (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x1150) + 0x38) +
                         (long)*(short *)(param_1 + 0x3a4) * 8);
      (**(code **)(*plVar4 + 0x70))(plVar4,&local_90,(int)*(short *)(param_1 + 0x3a6));
      fVar9 = local_74;
      fVar12 = local_84;
      fVar10 = local_64;
    }
  }
  local_90 = fVar13;
  fStack_8c = fVar15;
  local_88 = fVar14;
  pfVar1 = &local_90;
  if (param_2 != (float *)0x0) {
    pfVar1 = param_2;
  }
  local_a0 = *(undefined8 *)pfVar1;
  local_98 = pfVar1[2];
  fVar16 = 0.0;
  uVar5 = FUN_016ebc50(0,&local_a0);
  if ((uVar5 & 1) == 0) {
    fVar7 = fVar12 - fVar13;
    fVar8 = fVar10 - fVar14;
    fVar11 = SQRT(fVar7 * fVar7 + 0.0 + fVar8 * fVar8);
    if (0.0 < fVar11) {
      fVar11 = 1.0 / fVar11;
      fVar7 = fVar7 * fVar11;
      fVar8 = fVar8 * fVar11;
      fVar16 = fVar11 * 0.0 * 5.0;
    }
    fStack_8c = fVar15 + fVar16;
    local_90 = fVar13 + fVar7 * 5.0;
    local_88 = fVar14 + fVar8 * 5.0;
  }
  fVar7 = (float)FUN_016e37dc(&local_90);
  fVar9 = fVar15 - fVar9;
  fVar16 = -fVar9;
  if (0.0 <= fVar9) {
    fVar16 = fVar9;
  }
  if (0.5 <= fVar16) {
    fVar12 = fVar13 - fVar12;
    fVar10 = fVar14 - fVar10;
    fVar16 = SQRT(fVar9 * fVar9 + fVar12 * fVar12 + fVar10 * fVar10);
    if (0.0 < fVar16) {
      fVar16 = 1.0 / fVar16;
      fVar12 = fVar12 * fVar16;
      fVar9 = fVar9 * fVar16;
      fVar10 = fVar10 * fVar16;
    }
    fVar9 = fVar9 + fVar12 * 0.0 + fVar10 * 0.0;
    bVar2 = false;
    bVar3 = true;
    if (-1.1920929e-07 <= fVar9) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar9)) {
        bVar2 = fVar9 == 1.1920929e-07;
        bVar3 = 1.1920929e-07 <= fVar9;
      }
    }
    if (bVar3 && !bVar2) {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = fVar15 <= fStack_8c;
      }
      return fVar13 + fVar12 * (-((fVar15 + fVar13 * 0.0 + fVar14 * 0.0) -
                                 (fVar7 + fVar13 * 0.0 + fVar14 * 0.0)) / fVar9);
    }
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  return 0.0;
}

