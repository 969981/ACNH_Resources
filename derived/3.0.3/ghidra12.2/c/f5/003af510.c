
undefined8 FUN_003af510(undefined8 param_1,long *param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ushort *puVar9;
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
  float fVar21;
  float fVar22;
  float fVar24;
  undefined8 uVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if ((param_2[8] != 0) && (lVar5 = *param_2, *(char *)(lVar5 + 0x5a) == '\0')) {
    lVar3 = *(long *)(lVar5 + 0x18);
    if ((int)param_4 < 1) {
      uVar6 = 0;
    }
    else {
      if (param_4 == 1) {
        uVar8 = 0;
        uVar6 = 0;
      }
      else {
        uVar8 = 0;
        uVar6 = 0;
        puVar9 = (ushort *)(lVar3 + 0x6c);
        do {
          uVar8 = uVar8 + 2;
          uVar6 = uVar6 + puVar9[-0x1c] + (uint)*puVar9;
          puVar9 = puVar9 + 0x38;
        } while (((ulong)param_4 & 0xfffffffe) != uVar8);
      }
      if ((param_4 & 1) != 0) {
        uVar6 = uVar6 + *(ushort *)(lVar3 + uVar8 * 0x38 + 0x34);
      }
    }
    uVar8 = (ulong)*(ushort *)(lVar3 + (long)(int)param_4 * 0x38 + 0x34);
    if (uVar8 != 0) {
      param_1 = 0;
      puVar4 = (undefined8 *)(param_2[8] + (ulong)uVar6 * 0x20 + 0x10);
      puVar2 = (undefined8 *)(*(long *)(param_3 + 0x20) + (ulong)*(ushort *)(lVar5 + 0x54) * 0x40);
      puVar7 = (undefined8 *)(*(long *)(lVar5 + 0x38) + (long)(int)(uVar6 + param_4) * 0x18 + 0x10);
      do {
        uVar8 = uVar8 - 1;
        fVar13 = *(float *)(puVar7 + -1);
        fVar14 = (float)puVar2[2];
        fVar10 = (float)*puVar2;
        fVar11 = (float)((ulong)*puVar2 >> 0x20);
        fVar16 = (float)((ulong)puVar2[2] >> 0x20);
        fVar26 = (float)puVar2[4];
        fVar27 = (float)((ulong)puVar2[4] >> 0x20);
        fVar12 = (float)puVar2[1];
        fVar18 = (float)puVar2[3];
        fVar21 = (float)puVar7[-2];
        fVar24 = (float)((ulong)puVar7[-2] >> 0x20);
        uVar23 = *puVar7;
        fVar28 = (float)puVar2[5];
        fVar22 = (float)uVar23;
        puVar1 = (undefined8 *)((long)puVar7 + -4);
        puVar7 = puVar7 + 3;
        fVar20 = (float)*puVar1;
        fVar25 = (float)((ulong)uVar23 >> 0x20);
        fVar15 = ABS(fVar10) * fVar20 + ABS(fVar14) * fVar22 + ABS(fVar26) * fVar25;
        fVar17 = ABS(fVar11) * fVar20 + ABS(fVar16) * fVar22 + ABS(fVar27) * fVar25;
        fVar19 = ABS(fVar12) * fVar20 + ABS(fVar18) * fVar22 + ABS(fVar28) * fVar25;
        fVar20 = fVar20 * 0.0 + fVar22 * 0.0 + fVar25 * 0.0;
        fVar10 = (float)puVar2[6] + fVar10 * fVar21 + fVar14 * fVar24 + fVar26 * fVar13;
        fVar11 = (float)((ulong)puVar2[6] >> 0x20) +
                 fVar11 * fVar21 + fVar16 * fVar24 + fVar27 * fVar13;
        fVar12 = (float)puVar2[7] + fVar12 * fVar21 + fVar18 * fVar24 + fVar28 * fVar13;
        fVar13 = (float)((ulong)puVar2[7] >> 0x20) +
                 (float)((ulong)puVar2[1] >> 0x20) * fVar21 +
                 (float)((ulong)puVar2[3] >> 0x20) * fVar24 +
                 (float)((ulong)puVar2[5] >> 0x20) * fVar13;
        puVar4[-1] = CONCAT44(fVar13 - fVar20,fVar12 - fVar19);
        puVar4[-2] = CONCAT44(fVar11 - fVar17,fVar10 - fVar15);
        puVar4[1] = CONCAT44(fVar13 + fVar20,fVar12 + fVar19);
        *puVar4 = CONCAT44(fVar11 + fVar17,fVar10 + fVar15);
        puVar4 = puVar4 + 4;
      } while (uVar8 != 0);
    }
  }
  return param_1;
}

