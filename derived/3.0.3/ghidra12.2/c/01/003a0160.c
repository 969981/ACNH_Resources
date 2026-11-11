
bool FUN_003a0160(long param_1,long *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar11 = (ulong)*(byte *)(param_1 + 0xea);
  uVar2 = *(byte *)(param_1 + 0xeb) + uVar11;
  puVar12 = *(uint **)(param_1 + 0x90);
  uVar4 = *(ushort *)(param_1 + 0xe8);
  uVar13 = uVar2 * uVar4;
  if (uVar13 < uVar2) {
    puVar17 = puVar12;
  }
  else if (*(byte *)(param_1 + 0xea) == 0) {
    puVar14 = puVar12 + (uVar4 >> 1) * uVar2;
    uVar13 = (long)(puVar12 + uVar13) - (long)(puVar14 + uVar2) >> 2;
    puVar17 = puVar14 + uVar2;
    if (uVar2 <= uVar13) {
      uVar18 = 0;
      if (uVar2 != 0) {
        uVar18 = uVar13 / uVar2;
      }
      do {
        uVar13 = uVar18 >> 1;
        uVar18 = uVar18 + ~uVar13;
        puVar14 = puVar14 + uVar2 + uVar13 * uVar2;
      } while (uVar18 != 0);
      puVar17 = puVar14 + uVar2;
    }
  }
  else {
    lVar15 = uVar2 * 4;
    uVar16 = uVar11 - 1;
    uVar3 = *param_3;
    uVar18 = (ulong)uVar4;
    puVar14 = puVar12 + uVar13;
    do {
      while( true ) {
        uVar13 = uVar18 >> 1;
        uVar19 = uVar13 * uVar2;
        puVar17 = puVar12 + uVar19;
        uVar7 = *puVar17;
        if (uVar7 != uVar3) break;
        uVar10 = 0;
        do {
          if (uVar16 == uVar10) goto LAB_003a0228;
          uVar1 = uVar10 + 1;
          uVar8 = *(uint *)((long)puVar12 + uVar10 * 4 + lVar15 * uVar13 + 4);
          lVar5 = uVar10 + 1;
          uVar10 = uVar1;
        } while (uVar8 == param_3[lVar5]);
        uVar9 = param_3[lVar5];
        if (uVar1 < uVar11) goto LAB_003a0220;
LAB_003a0228:
        if (uVar7 == uVar3) {
          uVar18 = 0;
          do {
            if (uVar16 == uVar18) goto LAB_003a0298;
            uVar10 = uVar18 + 1;
            lVar5 = uVar18 + 1;
            uVar7 = *(uint *)((long)puVar12 + uVar18 * 4 + lVar15 * uVar13 + 4);
            uVar18 = uVar10;
          } while (param_3[lVar5] == uVar7);
          bVar6 = uVar10 < uVar11;
          uVar8 = param_3[lVar5];
        }
        else {
          bVar6 = true;
          uVar8 = uVar3;
        }
        if ((!bVar6) || (uVar7 <= uVar8)) {
LAB_003a0298:
          if (uVar19 < uVar2) goto LAB_003a02a0;
          uVar13 = 0;
          if (uVar2 != 0) {
            uVar13 = uVar19 / uVar2;
          }
          goto LAB_003a03c8;
        }
        uVar18 = uVar13;
        puVar14 = puVar17;
        puVar17 = puVar12;
        if (uVar13 == 0) goto LAB_003a0390;
      }
      uVar8 = uVar7;
      uVar9 = uVar3;
LAB_003a0220:
      if (uVar9 <= uVar8) goto LAB_003a0228;
      puVar12 = puVar17 + uVar2;
      uVar18 = uVar18 + ~uVar13;
      puVar17 = puVar12;
    } while (uVar18 != 0);
  }
  goto LAB_003a0390;
LAB_003a03c8:
  do {
    uVar18 = uVar13 >> 1;
    uVar7 = puVar12[uVar18 * uVar2];
    if (uVar7 == uVar3) {
      uVar19 = 0;
      do {
        if (uVar16 == uVar19) goto LAB_003a03c0;
        uVar10 = uVar19 + 1;
        uVar7 = *(uint *)((long)puVar12 + uVar19 * 4 + lVar15 * uVar18 + 4);
        lVar5 = uVar19 + 1;
        uVar19 = uVar10;
      } while (uVar7 == param_3[lVar5]);
      uVar8 = param_3[lVar5];
      if (uVar10 < uVar11) goto LAB_003a042c;
    }
    else {
      uVar8 = uVar3;
LAB_003a042c:
      if (uVar7 < uVar8) {
        puVar12 = puVar12 + uVar18 * uVar2 + uVar2;
        uVar18 = uVar13 + ~uVar18;
      }
    }
LAB_003a03c0:
    uVar13 = uVar18;
  } while (uVar18 != 0);
LAB_003a02a0:
  puVar17 = puVar17 + uVar2;
  uVar13 = (long)puVar14 - (long)puVar17 >> 2;
  if (uVar2 <= uVar13) {
    uVar18 = 0;
    if (uVar2 != 0) {
      uVar18 = uVar13 / uVar2;
    }
    do {
      uVar13 = uVar18 >> 1;
      uVar7 = puVar17[uVar13 * uVar2];
      if (uVar3 == uVar7) {
        uVar19 = 0;
        do {
          if (uVar16 == uVar19) goto LAB_003a02c0;
          uVar10 = uVar19 + 1;
          lVar5 = uVar19 + 1;
          uVar7 = *(uint *)((long)puVar17 + uVar19 * 4 + lVar15 * uVar13 + 4);
          uVar19 = uVar10;
        } while (param_3[lVar5] == uVar7);
        uVar8 = param_3[lVar5];
        if (uVar10 < uVar11) goto LAB_003a033c;
LAB_003a02c0:
        puVar17 = puVar17 + uVar13 * uVar2 + uVar2;
        uVar13 = uVar18 + ~uVar13;
      }
      else {
        uVar8 = uVar3;
LAB_003a033c:
        if (uVar7 <= uVar8) goto LAB_003a02c0;
      }
      uVar18 = uVar13;
    } while (uVar13 != 0);
  }
LAB_003a0390:
  *param_2 = (long)(puVar12 + uVar11);
  param_2[1] = (long)(puVar17 + uVar11);
  return puVar12 != puVar17;
}

