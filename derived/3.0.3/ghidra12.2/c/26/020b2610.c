
void FUN_020b2610(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  uint *puVar14;
  ulong *puVar15;
  uint *puVar16;
  int iVar17;
  long lVar18;
  byte *pbVar19;
  float fVar20;
  undefined **local_90;
  long lStack_88;
  
  piVar1 = (int *)(param_1 + 0x196c0);
  if (0 < *piVar1) {
    lVar18 = 0;
    do {
      iVar17 = (int)lVar18;
      iVar12 = iVar17 + 1;
      while( true ) {
        lVar10 = *(long *)(*(long *)(param_1 + 0x196c8) + lVar18 * 8);
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        iVar9 = *piVar1;
        puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x196c8) + lVar18 * 8);
        if (-1 < *(int *)((long)puVar13 + 4)) break;
        if (lVar18 < iVar9) {
          *puVar13 = *(undefined8 *)(param_1 + 0x196d0);
          *(undefined8 **)(param_1 + 0x196d0) = puVar13;
          iVar9 = *piVar1;
        }
        if ((-1 < iVar17) && (iVar17 < iVar9)) {
          if (iVar12 < iVar9) {
            memmove((void *)(*(long *)(param_1 + 0x196c8) + lVar18 * 8),
                    (void *)(*(long *)(param_1 + 0x196c8) + (long)iVar12 * 8),
                    -(ulong)((uint)(iVar9 - iVar12) >> 0x1f) & 0xfffffff800000000 |
                    (ulong)(uint)(iVar9 - iVar12) << 3);
            iVar9 = *piVar1;
          }
          iVar9 = iVar9 + -1;
          *piVar1 = iVar9;
        }
        if (iVar9 <= lVar18) goto LAB_020b26fc;
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < iVar9);
  }
LAB_020b26fc:
  FUN_02507c6c(&local_90,7,1,1,0);
  puVar4 = PTR_DAT_04bb5038;
  puVar3 = PTR_DAT_04bb4718;
  puVar2 = PTR_DAT_04bb3238;
  if (7 < (byte)local_90) {
LAB_020b2720:
    local_90 = &PTR_FUN_04a73198;
    if (*(int *)(param_1 + 0xb88) != 0) {
      lVar18 = (long)*(int *)(param_1 + 0xb88) << 3;
      puVar13 = *(undefined8 **)(param_1 + 0xb90);
      lStack_88 = param_1;
      do {
        (*(code *)*local_90)(&local_90,*puVar13);
        lVar18 = lVar18 + -8;
        puVar13 = puVar13 + 1;
      } while (lVar18 != 0);
    }
    return;
  }
LAB_020b27b0:
  fVar20 = (float)FUN_0251bf88(&local_90,0);
  bVar6 = false;
  bVar7 = true;
  if (-1.1920929e-07 <= fVar20) {
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar20)) {
      bVar6 = fVar20 == 1.1920929e-07;
      bVar7 = 1.1920929e-07 <= fVar20;
    }
  }
  if (!bVar7 || bVar6) {
    uVar11 = FUN_025320d0(&local_90);
    if ((uVar11 & 1) != 0) {
      puVar14 = (uint *)puVar2;
      if ((((ulong)local_90 & 0xff) < 8) && (lVar18 = *(long *)puVar3, lVar18 != 0)) {
        puVar14 = (uint *)(lVar18 + ((ulong)local_90 & 0xff) * 4 + 0xde8);
      }
      uVar11 = (ulong)*puVar14;
      iVar12 = *piVar1;
      if (iVar12 == 0) goto LAB_020b28a0;
      puVar13 = *(undefined8 **)(param_1 + 0x196c8);
      lVar18 = (long)iVar12 << 3;
      do {
        puVar16 = (uint *)*puVar13;
        if (*puVar14 == *puVar16) goto LAB_020b28f0;
        puVar13 = puVar13 + 1;
        lVar18 = lVar18 + -8;
      } while (lVar18 != 0);
      goto LAB_020b2880;
    }
  }
  else {
    puVar14 = (uint *)puVar2;
    if ((((ulong)local_90 & 0xff) < 8) && (lVar18 = *(long *)puVar3, lVar18 != 0)) {
      puVar14 = (uint *)(lVar18 + ((ulong)local_90 & 0xff) * 4 + 0xde8);
    }
    uVar11 = (ulong)*puVar14;
    iVar12 = *piVar1;
    if (iVar12 == 0) {
LAB_020b28a0:
      if (*(int *)(param_1 + 0x196c4) < 1) goto LAB_020b28f4;
    }
    else {
      puVar13 = *(undefined8 **)(param_1 + 0x196c8);
      lVar18 = (long)iVar12 << 3;
      do {
        puVar16 = (uint *)*puVar13;
        if (*puVar14 == *puVar16) goto LAB_020b28f0;
        puVar13 = puVar13 + 1;
        lVar18 = lVar18 + -8;
      } while (lVar18 != 0);
LAB_020b2880:
      if ((0x1b < iVar12) || (*(int *)(param_1 + 0x196c4) <= iVar12)) goto LAB_020b28f4;
    }
    puVar15 = *(ulong **)(param_1 + 0x196d0);
    if (puVar15 != (ulong *)0x0) {
      *(ulong *)(param_1 + 0x196d0) = *puVar15;
    }
    *puVar15 = uVar11 | 0x9600000000;
    if (*piVar1 < *(int *)(param_1 + 0x196c4)) {
      *(ulong **)(*(long *)(param_1 + 0x196c8) + (long)*piVar1 * 8) = puVar15;
      *piVar1 = *piVar1 + 1;
    }
  }
  goto LAB_020b28f4;
LAB_020b28f0:
  puVar16[1] = 0x96;
LAB_020b28f4:
  bVar5 = (byte)local_90;
  uVar11 = (ulong)local_90 & 0xff;
  if ((7 < (byte)local_90) || (uVar11 + 1 == 8)) goto LAB_020b2720;
  pbVar19 = puVar4 + uVar11 + 1;
  uVar8 = FUN_02507924(&local_90,pbVar19);
  if ((uVar8 & 1) == 0) {
    if (uVar11 + 2 == 8) goto LAB_020b2720;
    pbVar19 = puVar4 + uVar11 + 2;
    uVar8 = FUN_02507924(&local_90,pbVar19);
    if ((uVar8 & 1) == 0) {
      if (uVar11 + 3 == 8) goto LAB_020b2720;
      pbVar19 = puVar4 + uVar11 + 3;
      uVar8 = FUN_02507924(&local_90,pbVar19);
      if ((uVar8 & 1) == 0) {
        if (uVar11 + 4 == 8) goto LAB_020b2720;
        pbVar19 = puVar4 + uVar11 + 4;
        uVar8 = FUN_02507924(&local_90,pbVar19);
        if ((uVar8 & 1) == 0) {
          if (uVar11 + 5 == 8) goto LAB_020b2720;
          pbVar19 = puVar4 + uVar11 + 5;
          uVar8 = FUN_02507924(&local_90,pbVar19);
          if ((uVar8 & 1) == 0) {
            if (uVar11 + 6 == 8) goto LAB_020b2720;
            pbVar19 = puVar4 + uVar11 + 6;
            uVar8 = FUN_02507924(&local_90,pbVar19);
            if ((uVar8 & 1) == 0) {
              if (uVar11 + 7 == 8) goto LAB_020b2720;
              pbVar19 = puVar4 + uVar11 + 7;
              uVar8 = FUN_02507924(&local_90,pbVar19);
              if ((uVar8 & 1) == 0) {
                if (bVar5 == 0) goto LAB_020b2720;
                pbVar19 = puVar4 + uVar11 + 8;
                FUN_02507924(&local_90,pbVar19);
              }
            }
          }
        }
      }
    }
  }
  if (7 < *pbVar19) goto LAB_020b2720;
  local_90 = (undefined **)CONCAT71(local_90._1_7_,*pbVar19);
  goto LAB_020b27b0;
}

