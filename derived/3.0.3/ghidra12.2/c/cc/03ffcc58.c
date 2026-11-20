
ulong FUN_03ffcc58(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar33;
  short sVar34;
  undefined8 uVar31;
  short sVar35;
  long lVar32;
  undefined8 uVar36;
  short sVar38;
  short sVar39;
  undefined8 uVar37;
  short sVar40;
  undefined8 uVar41;
  short sVar43;
  short sVar44;
  undefined8 uVar42;
  short sVar45;
  undefined8 uVar46;
  short sVar48;
  short sVar49;
  undefined8 uVar47;
  short sVar50;
  undefined8 uVar51;
  short sVar53;
  short sVar54;
  short sVar55;
  long lVar52;
  long lVar56;
  short sVar58;
  short sVar59;
  long lVar57;
  short sVar60;
  long lVar61;
  short sVar63;
  short sVar64;
  long lVar62;
  short sVar65;
  long lVar66;
  short sVar68;
  short sVar69;
  long lVar67;
  short sVar70;
  long lVar71;
  
  lVar52 = *param_1;
  lVar56 = param_1[0x8d];
  lVar32 = param_1[0x8c];
  lVar61 = param_1[0x8f];
  lVar57 = param_1[0x8e];
  lVar66 = param_1[0x91];
  lVar62 = param_1[0x90];
  *param_1 = param_1[1] + lVar52;
  lVar71 = param_1[0x93];
  lVar67 = param_1[0x92];
  uVar5 = lVar52 * 0x4000 + 0x200000000000 >> 0x1f;
  uVar3 = uVar5 + 0x3ff;
  if (-1 < (long)uVar5) {
    uVar3 = uVar5;
  }
  iVar4 = (int)(uVar3 >> 10) * 0x20 - (int)param_1[2];
  puVar1 = (undefined8 *)((long)param_1 + (ulong)(iVar4 + 0x30) * 2 + 0x20);
  puVar2 = (undefined8 *)((long)param_1 + (ulong)(iVar4 + 0x10) * 2 + 0x20);
  uVar46 = puVar1[1];
  uVar42 = *puVar1;
  uVar51 = puVar1[3];
  uVar47 = puVar1[2];
  uVar36 = puVar2[1];
  uVar31 = *puVar2;
  uVar41 = puVar2[3];
  uVar37 = puVar2[2];
  sVar58 = (short)((ulong)lVar57 >> 0x10);
  sVar59 = (short)((ulong)lVar57 >> 0x20);
  sVar60 = (short)((ulong)lVar57 >> 0x30);
  sVar38 = (short)((ulong)uVar37 >> 0x10);
  sVar39 = (short)((ulong)uVar37 >> 0x20);
  sVar40 = (short)((ulong)uVar37 >> 0x30);
  sVar48 = (short)((ulong)uVar47 >> 0x10);
  sVar49 = (short)((ulong)uVar47 >> 0x20);
  sVar50 = (short)((ulong)uVar47 >> 0x30);
  sVar7 = (short)((ulong)lVar61 >> 0x10);
  sVar11 = (short)((ulong)lVar61 >> 0x20);
  sVar15 = (short)((ulong)lVar61 >> 0x30);
  sVar19 = (short)((ulong)uVar41 >> 0x10);
  sVar23 = (short)((ulong)uVar41 >> 0x20);
  sVar27 = (short)((ulong)uVar41 >> 0x30);
  sVar20 = (short)((ulong)uVar51 >> 0x10);
  sVar24 = (short)((ulong)uVar51 >> 0x20);
  sVar28 = (short)((ulong)uVar51 >> 0x30);
  sVar53 = (short)((ulong)lVar32 >> 0x10);
  sVar54 = (short)((ulong)lVar32 >> 0x20);
  sVar55 = (short)((ulong)lVar32 >> 0x30);
  sVar43 = (short)((ulong)uVar42 >> 0x10);
  sVar44 = (short)((ulong)uVar42 >> 0x20);
  sVar45 = (short)((ulong)uVar42 >> 0x30);
  sVar33 = (short)((ulong)uVar31 >> 0x10);
  sVar34 = (short)((ulong)uVar31 >> 0x20);
  sVar35 = (short)((ulong)uVar31 >> 0x30);
  sVar8 = (short)((ulong)lVar56 >> 0x10);
  sVar12 = (short)((ulong)lVar56 >> 0x20);
  sVar16 = (short)((ulong)lVar56 >> 0x30);
  sVar21 = (short)((ulong)uVar46 >> 0x10);
  sVar25 = (short)((ulong)uVar46 >> 0x20);
  sVar29 = (short)((ulong)uVar46 >> 0x30);
  sVar22 = (short)((ulong)uVar36 >> 0x10);
  sVar26 = (short)((ulong)uVar36 >> 0x20);
  sVar30 = (short)((ulong)uVar36 >> 0x30);
  sVar68 = (short)((ulong)lVar67 >> 0x10);
  sVar69 = (short)((ulong)lVar67 >> 0x20);
  sVar70 = (short)((ulong)lVar67 >> 0x30);
  sVar9 = (short)((ulong)lVar71 >> 0x10);
  sVar13 = (short)((ulong)lVar71 >> 0x20);
  sVar17 = (short)((ulong)lVar71 >> 0x30);
  sVar63 = (short)((ulong)lVar62 >> 0x10);
  sVar64 = (short)((ulong)lVar62 >> 0x20);
  sVar65 = (short)((ulong)lVar62 >> 0x30);
  sVar10 = (short)((ulong)lVar66 >> 0x10);
  sVar14 = (short)((ulong)lVar66 >> 0x20);
  sVar18 = (short)((ulong)lVar66 >> 0x30);
  lVar52 = (long)((int)(short)lVar32 * (int)(short)uVar31 + (int)(short)lVar56 * (int)(short)uVar36)
           + (long)((int)sVar54 * (int)sVar34 + (int)sVar12 * (int)sVar26) +
           (long)((int)sVar59 * (int)sVar39 + (int)sVar11 * (int)sVar23) +
           (long)((int)(short)lVar57 * (int)(short)uVar37 + (int)(short)lVar61 * (int)(short)uVar41)
           + (long)((int)sVar53 * (int)sVar33 + (int)sVar8 * (int)sVar22) +
             (long)((int)sVar55 * (int)sVar35 + (int)sVar16 * (int)sVar30) +
             (long)((int)sVar60 * (int)sVar40 + (int)sVar15 * (int)sVar27) +
             (long)((int)sVar58 * (int)sVar38 + (int)sVar7 * (int)sVar19);
  uVar6 = ((((long)((int)sVar53 * (int)sVar43 + (int)sVar8 * (int)sVar21) +
             (long)((int)sVar55 * (int)sVar45 + (int)sVar16 * (int)sVar29) +
             (long)((int)sVar60 * (int)sVar50 + (int)sVar15 * (int)sVar28) +
            (long)((int)sVar58 * (int)sVar48 + (int)sVar7 * (int)sVar20)) - lVar52) +
          (long)((int)(short)lVar32 * (int)(short)uVar42 + (int)(short)lVar56 * (int)(short)uVar46)
          + (long)((int)sVar54 * (int)sVar44 + (int)sVar12 * (int)sVar25) +
          (long)((int)sVar59 * (int)sVar49 + (int)sVar11 * (int)sVar24) +
          (long)((int)(short)lVar57 * (int)(short)uVar47 + (int)(short)lVar61 * (int)(short)uVar51))
          * (uVar5 & 0x3ff);
  uVar3 = uVar6 + 0x3ff;
  if (-1 < (long)uVar6) {
    uVar3 = uVar6;
  }
  lVar32 = (long)((int)(short)lVar62 * (int)(short)uVar31 + (int)(short)lVar66 * (int)(short)uVar36)
           + (long)((int)sVar64 * (int)sVar34 + (int)sVar14 * (int)sVar26) +
           (long)((int)sVar69 * (int)sVar39 + (int)sVar13 * (int)sVar23) +
           (long)((int)(short)lVar67 * (int)(short)uVar37 + (int)(short)lVar71 * (int)(short)uVar41)
           + (long)((int)sVar63 * (int)sVar33 + (int)sVar10 * (int)sVar22) +
             (long)((int)sVar65 * (int)sVar35 + (int)sVar18 * (int)sVar30) +
             (long)((int)sVar70 * (int)sVar40 + (int)sVar17 * (int)sVar27) +
             (long)((int)sVar68 * (int)sVar38 + (int)sVar9 * (int)sVar19);
  uVar6 = ((((long)((int)sVar63 * (int)sVar43 + (int)sVar10 * (int)sVar21) +
             (long)((int)sVar65 * (int)sVar45 + (int)sVar18 * (int)sVar29) +
             (long)((int)sVar70 * (int)sVar50 + (int)sVar17 * (int)sVar28) +
            (long)((int)sVar68 * (int)sVar48 + (int)sVar9 * (int)sVar20)) - lVar32) +
          (long)((int)(short)lVar62 * (int)(short)uVar42 + (int)(short)lVar66 * (int)(short)uVar46)
          + (long)((int)sVar64 * (int)sVar44 + (int)sVar14 * (int)sVar25) +
          (long)((int)sVar69 * (int)sVar49 + (int)sVar13 * (int)sVar24) +
          (long)((int)(short)lVar67 * (int)(short)uVar47 + (int)(short)lVar71 * (int)(short)uVar51))
          * (uVar5 & 0x3ff);
  uVar5 = uVar6 + 0x3ff;
  if (-1 < (long)uVar6) {
    uVar5 = uVar6;
  }
  return (lVar32 + (uVar5 >> 10)) * 0x20000 & 0xffffffff00000000 |
         lVar52 + (uVar3 >> 10) >> 0xf & 0xffffffff;
}

