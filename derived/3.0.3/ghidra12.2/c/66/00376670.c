
/* WARNING: Type propagation algorithm not settling */

uint FUN_00376670(long param_1,long *param_2,uint *param_3,long param_4)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  switch(uVar3 & 3) {
  case 0:
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf;
    goto joined_r0x00376930;
  case 1:
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf | 0x10;
joined_r0x00376930:
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    break;
  case 2:
    uVar9 = *(uint *)(param_1 + 0x10);
    uVar11 = uVar3 >> 6 & 7;
    uVar12 = (ulong)uVar9 & 0x30;
    uVar10 = -(uVar9 >> 0xc & 1);
    lVar8 = ((ulong)uVar9 & 3) * 0x10;
    uVar20 = (ulong)(uVar9 >> 6) & 8;
    uVar15 = ((ulong)(uVar9 >> 2) & 3) << 2 | ((ulong)(uVar9 >> 2) & 3) << 4;
    uVar18 = (ulong)(uVar9 >> 8) & 0xc;
    if (uVar11 == 0) {
      uVar15 = (ulong)(((int)lVar8 + (int)uVar12 | (uint)uVar20) + (int)uVar18 + (int)uVar15);
LAB_00376904:
      *(byte *)(param_1 + 0x48) =
           (*(byte *)(param_1 + 0x48) & 0xf |
           *(char *)(*(long *)(param_1 + 0x18) + (uVar10 & 0xc) + uVar15) << 4) + 0x20;
      goto joined_r0x00376930;
    }
    uVar15 = (lVar8 + uVar12 | uVar20) + uVar18 + uVar15;
    pbVar1 = (byte *)(*(long *)(param_1 + 0x18) + (ulong)(uVar10 & 0xc) + uVar15);
    if (*pbVar1 - 0xe < 0xfffffffd) {
      if ((uVar11 == 1) || (0xfffffffc < pbVar1[4] - 0xe)) {
        uVar9 = 1;
      }
      else if ((uVar11 == 2) || (0xfffffffc < pbVar1[8] - 0xe)) {
        uVar9 = 2;
      }
      else if ((uVar11 == 3) || (0xfffffffc < pbVar1[0xc] - 0xe)) {
        uVar9 = 3;
      }
      else if ((uVar11 == 4) || (0xfffffffc < pbVar1[0x10] - 0xe)) {
        uVar9 = 4;
      }
      else if ((uVar11 == 5) || (0xfffffffc < pbVar1[0x14] - 0xe)) {
        uVar9 = 5;
      }
      else if (uVar11 == 6) {
        uVar9 = 6;
      }
      else {
        uVar9 = 6;
        if (pbVar1[0x18] - 0xe < 0xfffffffd) {
          uVar9 = 7;
        }
      }
      if (uVar11 <= uVar9) goto LAB_00376904;
    }
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf | 0xd0;
    break;
  case 3:
    uVar9 = *(uint *)(param_1 + 0x10);
    pbVar1 = (byte *)(*(long *)(param_1 + 0x18) + (ulong)(-(uVar9 >> 0xc & 1) & 0xc) +
                     (((ulong)uVar9 & 3) * 0x10 + ((ulong)uVar9 & 0x30) | (ulong)(uVar9 >> 6) & 8) +
                     ((ulong)(uVar9 >> 8) & 0xc) + ((ulong)(uVar9 >> 2) & 3) * 0x14);
    uVar10 = (uint)*pbVar1;
    uVar11 = (uint)pbVar1[4];
    uVar9 = 1;
  }
  if ((uVar3 & 3) == 0) {
    uVar14 = uVar3 & 3;
    uVar13 = 0;
    lVar8 = *(long *)(param_4 + 0xc0);
    lVar19 = *(long *)(param_4 + 200);
    uVar16 = uVar14;
    if (lVar8 == 0 && lVar19 == 0) goto LAB_00376a90;
LAB_003769dc:
    uVar14 = uVar16;
    if (lVar19 != 0) {
      lVar8 = lVar19;
    }
    if (*(char *)(lVar8 + 0x16) == '\x03') {
      uVar4 = *(uint *)(lVar8 + 0x10);
      uVar15 = (ulong)*(ushort *)(lVar8 + 0xc + (ulong)uVar4 + 2);
      if (uVar15 == 0) goto LAB_00376a90;
      uVar16 = 0;
      piVar21 = (int *)((ulong)uVar4 + lVar8 + 0x10);
      do {
        piVar2 = (int *)(lVar8 + 0xc + (ulong)(*piVar21 + uVar4));
        if (*piVar2 == 6) {
          bVar6 = *(byte *)(piVar2 + 1);
          if ((bVar6 & 1) == 0) {
            uVar16 = uVar16 | 1;
          }
          else {
            uVar16 = uVar16 | (uint)*(byte *)((long)piVar2 + 5) << 6 | 3;
          }
          if ((bVar6 >> 3 & 1) != 0) {
            uVar16 = uVar16 | (uint)*(byte *)((long)piVar2 + 9) << 8 | 4;
          }
          if ((bVar6 >> 2 & 1) != 0) {
            uVar16 = uVar16 | (uint)*(byte *)(piVar2 + 2) << 10 | 8;
          }
          uVar16 = (bVar6 & 2) << 3 | (bVar6 >> 4 & 1) << 5 | uVar16;
        }
        uVar15 = uVar15 - 1;
        piVar21 = piVar21 + 1;
      } while (uVar15 != 0);
    }
    else {
      uVar16 = 0;
    }
    uVar4 = uVar13 | 4;
    if (uVar16 == 0) {
      uVar4 = uVar13;
    }
    uVar13 = uVar4;
    if (uVar4 == 0 && uVar16 == 0) goto LAB_00376aa8;
LAB_00376acc:
    bVar7 = (uVar3 & 3) != 3;
    uVar3 = 0;
    if (!bVar7) {
      uVar3 = uVar11;
    }
    uVar11 = (uint)(*(byte *)(param_1 + 0x48) >> 4);
    if (!bVar7) {
      uVar11 = uVar10;
    }
    *param_3 = uVar11;
    param_3[1] = uVar3;
    param_3[2] = uVar13 | bVar7;
    *param_2 = 3;
    if (uVar16 == 0) goto LAB_00376b0c;
    param_3[3] = uVar16;
    lVar8 = *param_2 + 1;
  }
  else {
    uVar13 = uVar3 & 3;
    uVar15 = (ulong)uVar13;
    uVar16 = *(uint *)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 0x18) +
            ((ulong)uVar16 & 3) * 0x10 + ((ulong)(uVar16 >> 2) & 3) * 0x14;
    bVar6 = *(byte *)(lVar8 + 1);
    if (bVar6 - 5 < 2) {
LAB_00376704:
      uVar13 = 2;
      uVar9 = 1;
      if (bVar6 != 7) {
LAB_00376968:
        pcVar17 = (char *)(((ulong)uVar16 & 3) * 0x10 + ((ulong)(uVar16 >> 2) & 3) * 0x14 +
                           *(long *)(param_1 + 0x18) + 0x11);
        uVar12 = 1;
        do {
          uVar18 = uVar12;
          if (uVar15 == uVar18) break;
          cVar5 = *pcVar17;
          pcVar17 = pcVar17 + 0x10;
          uVar12 = uVar18 + 1;
        } while (cVar5 != '\a');
        if (uVar15 <= uVar18) {
          uVar14 = 0;
          lVar8 = *(long *)(param_4 + 0xc0);
          lVar19 = *(long *)(param_4 + 200);
          uVar16 = 0;
          if (lVar8 != 0 || lVar19 != 0) goto LAB_003769dc;
          goto LAB_00376a90;
        }
      }
    }
    else {
      if ((uVar13 == 1) || (*(byte *)(lVar8 + 0x11) - 5 < 2)) {
        if (1 < uVar15) goto LAB_00376704;
      }
      else if (uVar13 != 2) {
        uVar12 = 2;
        if (1 < *(byte *)(lVar8 + 0x21) - 5) {
          uVar12 = 3;
        }
        if (uVar12 < uVar15) goto LAB_00376704;
      }
      uVar13 = 0;
      if (bVar6 != 7) goto LAB_00376968;
    }
    uVar13 = uVar13 | 8;
    uVar14 = 1;
    lVar8 = *(long *)(param_4 + 0xc0);
    lVar19 = *(long *)(param_4 + 200);
    uVar16 = 1;
    if (lVar8 != 0 || lVar19 != 0) goto LAB_003769dc;
LAB_00376a90:
    uVar16 = 0;
    if (uVar13 != 0) goto LAB_00376acc;
LAB_00376aa8:
    lVar8 = 2;
    *param_3 = uVar10;
    param_3[1] = uVar11;
  }
  *param_2 = lVar8;
LAB_00376b0c:
  return (uint)(uVar16 == 0) & ((uVar14 | uVar9) ^ 0xffffffff);
}

