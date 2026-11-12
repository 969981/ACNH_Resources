
undefined8 FUN_00a7b798(long param_1,byte *param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte *pbVar8;
  long *plVar9;
  byte *pbVar10;
  long *plVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  byte bVar22;
  
  bVar1 = *(byte *)(param_1 + 0x260) < 8;
  bVar12 = *(long *)(param_1 + 0x268) != -1;
  if (bVar1 && bVar12) {
    bVar21 = *param_2;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    if (*(byte *)(param_1 + 0x260) == bVar21 && *(long *)(param_1 + 0x268) == param_3) {
      return 1;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x270) < 8;
  bVar13 = *(long *)(param_1 + 0x278) != -1;
  if (bVar2 && bVar13) {
    bVar21 = *param_2;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    if ((*(byte *)(param_1 + 0x270) == bVar21) && (*(long *)(param_1 + 0x278) == param_3)) {
      return 1;
    }
  }
  bVar3 = *(byte *)(param_1 + 0x280) < 8;
  bVar14 = *(long *)(param_1 + 0x288) != -1;
  if (bVar3 && bVar14) {
    bVar21 = *param_2;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    if ((*(byte *)(param_1 + 0x280) == bVar21) && (*(long *)(param_1 + 0x288) == param_3)) {
      return 1;
    }
  }
  bVar4 = *(byte *)(param_1 + 0x290) < 8;
  bVar15 = *(long *)(param_1 + 0x298) != -1;
  if (bVar4 && bVar15) {
    bVar21 = *param_2;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    if ((*(byte *)(param_1 + 0x290) == bVar21) && (*(long *)(param_1 + 0x298) == param_3)) {
      return 1;
    }
  }
  bVar5 = *(byte *)(param_1 + 0x2a0) < 8;
  bVar16 = *(long *)(param_1 + 0x2a8) != -1;
  if (bVar5 && bVar16) {
    bVar21 = *param_2;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    if ((*(byte *)(param_1 + 0x2a0) == bVar21) && (*(long *)(param_1 + 0x2a8) == param_3)) {
      return 1;
    }
  }
  bVar6 = *(byte *)(param_1 + 0x2b0) < 8;
  bVar17 = *(long *)(param_1 + 0x2b8) != -1;
  if (bVar6 && bVar17) {
    bVar21 = *param_2;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    if ((*(byte *)(param_1 + 0x2b0) == bVar21) && (*(long *)(param_1 + 0x2b8) == param_3)) {
      return 1;
    }
  }
  bVar7 = *(byte *)(param_1 + 0x2c0) < 8;
  bVar18 = *(long *)(param_1 + 0x2c8) != -1;
  if (bVar7 && bVar18) {
    bVar21 = *param_2;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    if ((*(byte *)(param_1 + 0x2c0) == bVar21) && (*(long *)(param_1 + 0x2c8) == param_3)) {
      return 1;
    }
  }
  bVar21 = *(byte *)(param_1 + 0x2d0);
  lVar20 = *(long *)(param_1 + 0x2d8);
  if (bVar21 < 8 && lVar20 != -1) {
    bVar22 = *param_2;
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if ((bVar21 == bVar22) && (lVar20 == param_3)) {
      return 1;
    }
  }
  uVar19 = FUN_00a7b4fc(param_1,param_3);
  if (((uVar19 & 1) != 0) ||
     ((((((bVar1 && bVar12) && (bVar2 && bVar13)) && (bVar3 && bVar14)) &&
       ((bVar4 && bVar15) && (bVar5 && bVar16))) && ((bVar6 && bVar17) && (bVar7 && bVar18))) &&
      (bVar21 < 8 && lVar20 != -1))) {
    return 0;
  }
  pbVar8 = (byte *)(param_1 + 0x270);
  plVar11 = (long *)(param_1 + 0x278);
  if (bVar2 && bVar13) {
    pbVar8 = (byte *)(param_1 + 0x280);
    plVar11 = (long *)(param_1 + 0x288);
  }
  pbVar10 = (byte *)(param_1 + 0x260);
  plVar9 = (long *)(param_1 + 0x268);
  if (bVar1 && bVar12) {
    pbVar10 = pbVar8;
    plVar9 = plVar11;
  }
  pbVar8 = (byte *)(param_1 + 0x290);
  plVar11 = (long *)(param_1 + 0x298);
  if (bVar4 && bVar15) {
    pbVar8 = (byte *)(param_1 + 0x2a0);
    plVar11 = (long *)(param_1 + 0x2a8);
  }
  if (((bVar1 && bVar12) && (bVar2 && bVar13)) && (bVar3 && bVar14)) {
    plVar9 = plVar11;
  }
  if (((bVar1 && bVar12) && (bVar2 && bVar13)) && (bVar3 && bVar14)) {
    pbVar10 = pbVar8;
  }
  pbVar8 = (byte *)(param_1 + 0x2b0);
  plVar11 = (long *)(param_1 + 0x2b8);
  if (bVar6 && bVar17) {
    pbVar8 = (byte *)(param_1 + 0x2c0);
    plVar11 = (long *)(param_1 + 0x2c8);
  }
  if ((((bVar1 && bVar12) && (bVar2 && bVar13)) && (bVar3 && bVar14)) &&
      ((bVar4 && bVar15) && (bVar5 && bVar16))) {
    plVar9 = plVar11;
  }
  if ((((bVar1 && bVar12) && (bVar2 && bVar13)) && (bVar3 && bVar14)) &&
      ((bVar4 && bVar15) && (bVar5 && bVar16))) {
    pbVar10 = pbVar8;
  }
  if (((((bVar1 && bVar12) && (bVar2 && bVar13)) && (bVar3 && bVar14)) &&
      ((bVar4 && bVar15) && (bVar5 && bVar16))) && ((bVar6 && bVar17) && (bVar7 && bVar18))) {
    plVar9 = (long *)(param_1 + 0x2d8);
  }
  bVar21 = *param_2;
  *plVar9 = param_3;
  if (((((bVar1 && bVar12) && (bVar2 && bVar13)) && (bVar3 && bVar14)) &&
      ((bVar4 && bVar15) && (bVar5 && bVar16))) && ((bVar6 && bVar17) && (bVar7 && bVar18))) {
    pbVar10 = (byte *)(param_1 + 0x2d0);
  }
  if (7 < bVar21) {
    bVar21 = 0xff;
  }
  *pbVar10 = bVar21;
  return 1;
}

