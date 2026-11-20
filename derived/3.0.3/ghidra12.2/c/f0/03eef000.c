
void FUN_03eef000(long param_1,int param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x30))) {
    FUN_03ef2c1c(&local_6c,param_1);
    fVar5 = fStack_60;
    fVar4 = local_64;
    fVar3 = fStack_68;
    fVar2 = local_6c;
    *(int *)(param_1 + 0x28) = param_2;
    FUN_03ef2c1c(&local_6c,param_1);
    fVar13 = fVar2 * fVar2 + fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4;
    if (fVar13 <= 1.1920929e-07) {
      fVar15 = fVar5;
      fVar14 = fVar2;
      fVar16 = fVar4;
      fVar13 = fVar3;
    }
    else {
      fVar13 = 1.0 / fVar13;
      fVar15 = fVar5 * fVar13;
      fVar14 = fVar2 * fVar13;
      fVar16 = fVar4 * fVar13;
      fVar13 = fVar3 * fVar13;
    }
    fVar13 = -fVar13;
    fVar16 = -fVar16;
    fVar14 = -fVar14;
    fVar18 = local_6c * local_6c + fStack_60 * fStack_60 + fStack_68 * fStack_68 +
             local_64 * local_64;
    if (fVar18 <= 1.1920929e-07) {
      uVar12 = *(uint *)(param_1 + 0x70);
      fVar17 = local_6c;
      fVar20 = fStack_68;
      fVar18 = local_64;
      fVar19 = fStack_60;
    }
    else {
      fVar18 = 1.0 / fVar18;
      fVar19 = fStack_60 * fVar18;
      fVar17 = local_6c * fVar18;
      fVar20 = fStack_68 * fVar18;
      fVar18 = local_64 * fVar18;
      uVar12 = *(uint *)(param_1 + 0x70);
    }
    if (uVar12 != 0) {
      fVar20 = -fVar20;
      fVar18 = -fVar18;
      fVar17 = -fVar17;
      lVar7 = *(long *)(param_1 + 0x78);
      uVar8 = 0;
      do {
        uVar11 = (ulong)uVar8;
        uVar8 = uVar8 + 1;
        lVar9 = lVar7 + ((long)(uVar11 << 0x20) >> 0x1a);
        fVar21 = *(float *)(lVar9 + 0x10);
        fVar22 = *(float *)(lVar9 + 0x14);
        fVar25 = *(float *)(lVar9 + 0x18);
        fVar24 = *(float *)(lVar9 + 0x1c);
        fVar23 = fVar21 * -fVar2 + fVar24 * fVar5 + fVar22 * -fVar3 + fVar25 * -fVar4;
        fVar27 = fVar2 * fVar24 + fVar21 * fVar5 + fVar25 * fVar3 + fVar22 * -fVar4;
        fVar26 = fVar25 * -fVar2 + fVar22 * fVar5 + fVar24 * fVar3 + fVar21 * fVar4;
        fVar22 = fVar2 * fVar22 + fVar25 * fVar5 + fVar21 * -fVar3 + fVar24 * fVar4;
        fVar24 = ((-(fVar27 * fVar14) + fVar15 * fVar23) - fVar13 * fVar26) - fVar16 * fVar22;
        fVar25 = (fVar15 * fVar27 + fVar14 * fVar23 + fVar16 * fVar26) - fVar13 * fVar22;
        fVar21 = -(fVar27 * fVar16) + fVar13 * fVar23 + fVar15 * fVar26 + fVar14 * fVar22;
        fVar22 = ((fVar13 * fVar27 + fVar16 * fVar23) - fVar14 * fVar26) + fVar15 * fVar22;
        fVar27 = fVar17 * fVar24 + fVar25 * fVar19 + fVar22 * fVar20 + fVar21 * -fVar18;
        fVar23 = fVar25 * -fVar17 + fVar24 * fVar19 + fVar21 * -fVar20 + fVar22 * -fVar18;
        fVar26 = fVar22 * -fVar17 + fVar21 * fVar19 + fVar24 * fVar20 + fVar25 * fVar18;
        fVar21 = fVar17 * fVar21 + fVar22 * fVar19 + fVar25 * -fVar20 + fVar24 * fVar18;
        *(float *)(lVar9 + 0x10) =
             (fStack_60 * fVar27 + local_6c * fVar23 + local_64 * fVar26) - fStack_68 * fVar21;
        *(float *)(lVar9 + 0x14) =
             -(fVar27 * local_64) + fStack_68 * fVar23 + fStack_60 * fVar26 + local_6c * fVar21;
        *(float *)(lVar9 + 0x18) =
             ((fStack_68 * fVar27 + local_64 * fVar23) - local_6c * fVar26) + fStack_60 * fVar21;
        *(float *)(lVar9 + 0x1c) =
             ((-(fVar27 * local_6c) + fStack_60 * fVar23) - fStack_68 * fVar26) - local_64 * fVar21;
      } while (uVar12 != uVar8);
    }
    uVar12 = *(uint *)(param_1 + 0x28);
    if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(param_1 + 0x30))) {
      if (*(uint *)(param_1 + 0x90) <= uVar12) {
        uVar12 = 0;
      }
      uVar8 = *(uint *)(param_1 + 0x70);
      lVar9 = *(long *)(*(long *)(param_1 + 0x98) + (ulong)uVar12 * 0x88 + 0x80);
      lVar7 = *(long *)(param_1 + 0x78);
      if (lVar9 == 0) {
        if (uVar8 != 0) {
          uVar12 = 0;
          do {
            *(undefined8 *)(lVar7 + ((long)((ulong)uVar12 << 0x20) >> 0x1a) + 0x38) = 0;
            uVar12 = uVar12 + 1;
          } while (uVar8 != uVar12);
        }
      }
      else if (uVar8 != 0) {
        lVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
        do {
          lVar1 = *(long *)(lVar9 + 0x750) + lVar10;
          bVar6 = *(uint *)(lVar9 + 0x748) <= uVar11;
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 0x140;
          if (bVar6) {
            lVar1 = 0;
          }
          *(long *)(lVar7 + ((long)((ulong)uVar12 << 0x20) >> 0x1a) + 0x38) = lVar1;
          uVar12 = uVar12 + 1;
        } while (lVar1 != 0 && uVar8 != uVar12);
      }
    }
  }
  return;
}

