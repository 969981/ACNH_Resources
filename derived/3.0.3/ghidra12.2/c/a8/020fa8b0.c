
/* WARNING: Type propagation algorithm not settling */

uint FUN_020fa8b0(uint param_1,char *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  char *pcVar13;
  uint *puVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  uint *puVar21;
  
  if (*PTR_DAT_04bc2930 != '\0' && *(uint *)PTR_DAT_04bc2938 == param_1) {
    return *(uint *)PTR_DAT_04bc2940;
  }
  if ((*PTR_DAT_04bc2958 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_04bc2958);
    puVar5 = PTR_DAT_04bc2950;
    if (iVar6 != 0) {
      puVar1 = PTR_DAT_04bc2950 + 0x10;
      *(undefined8 *)PTR_DAT_04bc2950 = 0x200000000;
      *(undefined **)(puVar5 + 8) = puVar1;
      __cxa_guard_release(PTR_DAT_04bc2958);
    }
  }
  pcVar13 = PTR_DAT_04bc2948;
  puVar11 = (uint *)PTR_DAT_04bc2938;
  puVar10 = PTR_DAT_04bc2930;
  if (*PTR_DAT_04bc2960 == '\0') {
    *PTR_DAT_04bc2960 = 1;
    if ((*PTR_DAT_04bc2970 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04bc2970);
      puVar5 = PTR_DAT_04bc2968;
      puVar10 = PTR_DAT_04bc2930;
      puVar11 = (uint *)PTR_DAT_04bc2938;
      pcVar13 = PTR_DAT_04bc2948;
      if (iVar6 != 0) {
        *(undefined8 *)PTR_DAT_04bc2968 = 0xffffffff00000000;
        *(undefined8 *)(puVar5 + 8) = 0xffffffff00000000;
        __cxa_guard_release(PTR_DAT_04bc2970);
        puVar10 = PTR_DAT_04bc2930;
        puVar11 = (uint *)PTR_DAT_04bc2938;
        pcVar13 = PTR_DAT_04bc2948;
      }
    }
    puVar1 = PTR_DAT_04bc2968;
    puVar5 = PTR_DAT_04bc2950;
    uVar3 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar3 = crc32b(uVar3,0x82,0x4c11db7);
    uVar4 = crc32b(uVar3,0xb9,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x83,0x4c11db7);
    uVar4 = crc32b(uVar4,0x88,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x83,0x4c11db7);
    uVar4 = crc32b(uVar4,0x83,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x83,0x4c11db7);
    uVar12 = crc32b(uVar4,0x97,0x4c11db7);
    *(uint *)PTR_DAT_04bc2968 = ~uVar12;
    *(undefined4 *)(puVar1 + 4) = 0;
    iVar6 = *(int *)puVar5;
    iVar19 = *(int *)(puVar5 + 4);
    if (iVar6 < iVar19) {
      *(undefined **)(*(long *)(puVar5 + 8) + (long)iVar6 * 8) = puVar1;
      iVar19 = *(int *)(puVar5 + 4);
      iVar6 = *(int *)puVar5 + 1;
      *(int *)puVar5 = iVar6;
    }
    uVar3 = crc32b(uVar3,0xbf,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
    uVar3 = crc32b(uVar3,0x82,0x4c11db7);
    uVar12 = crc32b(uVar3,0xa4,0x4c11db7);
    *(uint *)(puVar1 + 8) = ~uVar12;
    *(undefined4 *)(puVar1 + 0xc) = 1;
    if (iVar6 < iVar19) {
      *(undefined **)(*(long *)(puVar5 + 8) + (long)iVar6 * 8) = puVar1 + 8;
      iVar6 = *(int *)puVar5 + 1;
      *(int *)puVar5 = iVar6;
    }
    if (1 < iVar6) {
      lVar9 = *(long *)(puVar5 + 8);
      uVar16 = 0;
      uVar12 = iVar6 - 1;
      do {
        if ((int)uVar12 <= (int)uVar16) break;
        puVar14 = *(uint **)(lVar9 + (ulong)uVar16 * 8);
        uVar15 = (ulong)uVar16;
        if ((uVar12 - uVar16 & 1) == 0) {
          uVar18 = uVar15;
          puVar21 = puVar14;
        }
        else {
          uVar18 = uVar15 + 1;
          puVar21 = *(uint **)(lVar9 + uVar18 * 8);
          if (((puVar14 != (uint *)0x0) && (puVar21 != (uint *)0x0)) && (*puVar21 < *puVar14)) {
            *(uint **)(lVar9 + uVar18 * 8) = puVar14;
            *(uint **)(lVar9 + uVar15 * 8) = puVar21;
            puVar21 = puVar14;
          }
        }
        uVar20 = (ulong)uVar12;
        uVar12 = uVar16;
        if (~uVar15 + uVar20 != 0) {
          puVar7 = (undefined8 *)(lVar9 + 8 + uVar18 * 8);
          do {
            puVar14 = (uint *)*puVar7;
            uVar17 = (uint)uVar18;
            if (((puVar21 == (uint *)0x0) || (puVar14 == (uint *)0x0)) || (*puVar21 <= *puVar14)) {
              puVar8 = (uint *)puVar7[1];
              if (puVar14 != (uint *)0x0) goto LAB_020fabd0;
LAB_020fab80:
              puVar14 = puVar8;
            }
            else {
              puVar7[-1] = puVar14;
              *puVar7 = puVar21;
              puVar8 = (uint *)puVar7[1];
              puVar14 = puVar21;
              uVar12 = uVar17;
              if (puVar21 == (uint *)0x0) goto LAB_020fab80;
LAB_020fabd0:
              if ((puVar8 == (uint *)0x0) || (*puVar14 <= *puVar8)) goto LAB_020fab80;
              uVar12 = uVar17 + 1;
              *puVar7 = puVar8;
              puVar7[1] = puVar14;
            }
            uVar18 = uVar18 + 2;
            puVar7 = puVar7 + 2;
            puVar21 = puVar14;
          } while (uVar20 != uVar18);
        }
        if ((int)uVar12 <= (int)uVar16) break;
        uVar18 = (ulong)uVar12;
        puVar14 = *(uint **)(lVar9 + (ulong)uVar12 * 8);
        uVar16 = uVar12;
        do {
          lVar2 = lVar9 + uVar18 * 8;
          puVar21 = *(uint **)(lVar2 + -8);
          if (((puVar14 != (uint *)0x0) && (puVar21 != (uint *)0x0)) && (*puVar14 < *puVar21)) {
            uVar16 = (uint)uVar18;
            *(uint **)(lVar2 + -8) = puVar14;
            *(uint **)(lVar9 + uVar18 * 8) = puVar21;
            puVar21 = puVar14;
          }
          uVar18 = uVar18 - 1;
          puVar14 = puVar21;
        } while ((long)uVar15 < (long)uVar18);
      } while (uVar16 != uVar12);
    }
    *pcVar13 = '\x01';
  }
  if ((param_2 != (char *)0x0) && (*param_2 == '\0')) {
    return 0xffffffff;
  }
  if ((*pcVar13 != '\0') && (iVar6 = *(int *)PTR_DAT_04bc2950, iVar6 != 0)) {
    lVar9 = *(long *)((long)PTR_DAT_04bc2950 + 8);
    if (iVar6 < 2) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      iVar6 = iVar6 + -1;
      do {
        iVar19 = iVar6 + uVar12;
        if (iVar19 < 0 != SCARRY4(iVar6,uVar12)) {
          iVar19 = iVar19 + 1;
        }
        uVar16 = iVar19 >> 1;
        puVar14 = *(uint **)(lVar9 + (long)(int)uVar16 * 8);
        if (puVar14 == (uint *)0x0) goto joined_r0x020fac20;
        uVar17 = *puVar14;
        if (uVar17 == param_1) goto joined_r0x020fac20;
        if (uVar17 < param_1) {
          uVar12 = uVar16 + 1;
        }
        else {
          iVar6 = uVar16 - 1;
        }
      } while ((int)uVar12 < iVar6);
    }
    puVar14 = *(uint **)(lVar9 + (long)(int)uVar12 * 8);
    uVar16 = uVar12;
    if ((puVar14 == (uint *)0x0) || (*puVar14 == param_1)) {
joined_r0x020fac20:
      if ((uVar16 < 2) && (uVar12 = *(uint *)(*(long *)(lVar9 + (ulong)uVar16 * 8) + 4), uVar12 < 2)
         ) {
        *puVar11 = param_1;
        *puVar10 = 1;
        *(uint *)PTR_DAT_04bc2940 = uVar12;
        return uVar12;
      }
    }
  }
  if (param_2 == (char *)0x0) {
    return 0xffffffff;
  }
  if (param_2 == PTR_DAT_04bc2978) {
LAB_020fad3c:
    uVar12 = 0;
  }
  else {
    if ((*param_2 == -0x1d) && (param_2[1] == -0x7e)) {
      if ((((param_2[2] == -0x47) &&
           ((((param_2[3] == -0x1d && (param_2[4] == -0x7d)) && (param_2[5] == -0x78)) &&
            ((param_2[6] == -0x1d && (param_2[7] == -0x7d)))))) && (param_2[8] == -0x7d)) &&
         (((param_2[9] == -0x1d && (param_2[10] == -0x7d)) &&
          ((param_2[0xb] == -0x69 && (param_2[0xc] == '\0')))))) goto LAB_020fad3c;
      if (param_2 != PTR_DAT_04bc2978 + 0xd) {
        if (param_2[2] != -0x41) {
          return 0xffffffff;
        }
        if (param_2[3] != -0x1d) {
          return 0xffffffff;
        }
        if (param_2[4] != -0x7e) {
          return 0xffffffff;
        }
        if (param_2[5] != -0x5c) {
          return 0xffffffff;
        }
        if (param_2[6] != '\0') {
          return 0xffffffff;
        }
      }
    }
    else if (param_2 != PTR_DAT_04bc2978 + 0xd) {
      return 0xffffffff;
    }
    uVar12 = 1;
  }
  return uVar12;
}

