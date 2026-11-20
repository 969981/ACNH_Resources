
ulong FUN_03ffc238(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar14;
  short sVar15;
  long lVar12;
  short sVar16;
  long lVar13;
  long lVar17;
  short sVar19;
  short sVar20;
  long lVar18;
  short sVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  lVar13 = *param_1;
  lVar17 = param_1[0x8d];
  lVar12 = param_1[0x8c];
  lVar22 = param_1[0x8f];
  lVar18 = param_1[0x8e];
  *param_1 = param_1[1] + lVar13;
  uVar5 = lVar13 * 0x4000 + 0x200000000000 >> 0x1f;
  uVar3 = uVar5 + 0x3ff;
  if (-1 < (long)uVar5) {
    uVar3 = uVar5;
  }
  iVar4 = (int)(uVar3 >> 10) * 0x20 - (int)param_1[2];
  puVar1 = (undefined8 *)((long)param_1 + (ulong)(iVar4 + 0x10) * 2 + 0x20);
  puVar2 = (undefined8 *)((long)param_1 + (ulong)(iVar4 + 0x30) * 2 + 0x20);
  uVar24 = puVar1[1];
  uVar23 = *puVar1;
  uVar26 = puVar1[3];
  uVar25 = puVar1[2];
  uVar28 = puVar2[1];
  uVar27 = *puVar2;
  uVar30 = puVar2[3];
  uVar29 = puVar2[2];
  sVar19 = (short)((ulong)lVar18 >> 0x10);
  sVar20 = (short)((ulong)lVar18 >> 0x20);
  sVar21 = (short)((ulong)lVar18 >> 0x30);
  sVar6 = (short)((ulong)lVar22 >> 0x10);
  sVar8 = (short)((ulong)lVar22 >> 0x20);
  sVar10 = (short)((ulong)lVar22 >> 0x30);
  sVar14 = (short)((ulong)lVar12 >> 0x10);
  sVar15 = (short)((ulong)lVar12 >> 0x20);
  sVar16 = (short)((ulong)lVar12 >> 0x30);
  sVar7 = (short)((ulong)lVar17 >> 0x10);
  sVar9 = (short)((ulong)lVar17 >> 0x20);
  sVar11 = (short)((ulong)lVar17 >> 0x30);
  lVar13 = (long)((int)(short)lVar12 * (int)(short)uVar23 + (int)(short)lVar17 * (int)(short)uVar24)
           + (long)((int)sVar15 * (int)(short)((ulong)uVar23 >> 0x20) +
                   (int)sVar9 * (int)(short)((ulong)uVar24 >> 0x20)) +
           (long)((int)sVar20 * (int)(short)((ulong)uVar25 >> 0x20) +
                 (int)sVar8 * (int)(short)((ulong)uVar26 >> 0x20)) +
           (long)((int)(short)lVar18 * (int)(short)uVar25 + (int)(short)lVar22 * (int)(short)uVar26)
           + (long)((int)sVar14 * (int)(short)((ulong)uVar23 >> 0x10) +
                   (int)sVar7 * (int)(short)((ulong)uVar24 >> 0x10)) +
             (long)((int)sVar16 * (int)(short)((ulong)uVar23 >> 0x30) +
                   (int)sVar11 * (int)(short)((ulong)uVar24 >> 0x30)) +
             (long)((int)sVar21 * (int)(short)((ulong)uVar25 >> 0x30) +
                   (int)sVar10 * (int)(short)((ulong)uVar26 >> 0x30)) +
             (long)((int)sVar19 * (int)(short)((ulong)uVar25 >> 0x10) +
                   (int)sVar6 * (int)(short)((ulong)uVar26 >> 0x10));
  uVar5 = ((((long)((int)sVar14 * (int)(short)((ulong)uVar27 >> 0x10) +
                   (int)sVar7 * (int)(short)((ulong)uVar28 >> 0x10)) +
             (long)((int)sVar16 * (int)(short)((ulong)uVar27 >> 0x30) +
                   (int)sVar11 * (int)(short)((ulong)uVar28 >> 0x30)) +
             (long)((int)sVar21 * (int)(short)((ulong)uVar29 >> 0x30) +
                   (int)sVar10 * (int)(short)((ulong)uVar30 >> 0x30)) +
            (long)((int)sVar19 * (int)(short)((ulong)uVar29 >> 0x10) +
                  (int)sVar6 * (int)(short)((ulong)uVar30 >> 0x10))) - lVar13) +
          (long)((int)(short)lVar12 * (int)(short)uVar27 + (int)(short)lVar17 * (int)(short)uVar28)
          + (long)((int)sVar15 * (int)(short)((ulong)uVar27 >> 0x20) +
                  (int)sVar9 * (int)(short)((ulong)uVar28 >> 0x20)) +
          (long)((int)sVar20 * (int)(short)((ulong)uVar29 >> 0x20) +
                (int)sVar8 * (int)(short)((ulong)uVar30 >> 0x20)) +
          (long)((int)(short)lVar18 * (int)(short)uVar29 + (int)(short)lVar22 * (int)(short)uVar30))
          * (uVar5 & 0x3ff);
  uVar3 = uVar5 + 0x3ff;
  if (-1 < (long)uVar5) {
    uVar3 = uVar5;
  }
  return lVar13 + (uVar3 >> 10) >> 0xf;
}

