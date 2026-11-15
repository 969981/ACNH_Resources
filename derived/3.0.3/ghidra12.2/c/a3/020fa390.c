
/* WARNING: Type propagation algorithm not settling */

uint FUN_020fa390(uint param_1,char *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long lVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint uVar11;
  char *pcVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  
  if (*PTR_DAT_04bc28e0 != '\0' && *(uint *)PTR_DAT_04bc28e8 == param_1) {
    return *(uint *)PTR_DAT_04bc28f0;
  }
  if ((*PTR_DAT_04bc2908 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04bc2908);
    puVar4 = PTR_DAT_04bc2900;
    if (iVar5 != 0) {
      puVar1 = PTR_DAT_04bc2900 + 0x10;
      *(undefined8 *)PTR_DAT_04bc2900 = 0x200000000;
      *(undefined **)(puVar4 + 8) = puVar1;
      __cxa_guard_release(PTR_DAT_04bc2908);
    }
  }
  pcVar12 = PTR_DAT_04bc28f8;
  puVar10 = (uint *)PTR_DAT_04bc28e8;
  puVar9 = PTR_DAT_04bc28e0;
  if (*PTR_DAT_04bc2910 == '\0') {
    *PTR_DAT_04bc2910 = 1;
    if ((*PTR_DAT_04bc2920 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_04bc2920);
      puVar4 = PTR_DAT_04bc2918;
      puVar9 = PTR_DAT_04bc28e0;
      puVar10 = (uint *)PTR_DAT_04bc28e8;
      pcVar12 = PTR_DAT_04bc28f8;
      if (iVar5 != 0) {
        *(undefined8 *)PTR_DAT_04bc2918 = 0xffffffff00000000;
        *(undefined8 *)(puVar4 + 8) = 0xffffffff00000000;
        __cxa_guard_release(PTR_DAT_04bc2920);
        puVar9 = PTR_DAT_04bc28e0;
        puVar10 = (uint *)PTR_DAT_04bc28e8;
        pcVar12 = PTR_DAT_04bc28f8;
      }
    }
    puVar1 = PTR_DAT_04bc2918;
    puVar4 = PTR_DAT_04bc2900;
    uVar3 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar3 = crc32b(uVar3,0x74,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar11 = crc32b(uVar3,0x70,0x4c11db7);
    *(uint *)PTR_DAT_04bc2918 = ~uVar11;
    *(undefined4 *)(puVar1 + 4) = 0;
    iVar5 = *(int *)puVar4;
    iVar14 = *(int *)(puVar4 + 4);
    if (iVar5 < iVar14) {
      *(undefined **)(*(long *)(puVar4 + 8) + (long)iVar5 * 8) = puVar1;
      iVar14 = *(int *)(puVar4 + 4);
      iVar5 = *(int *)puVar4 + 1;
      *(int *)puVar4 = iVar5;
    }
    uVar3 = crc32b(0xffffffff,0x54,0x4c11db7);
    uVar3 = crc32b(uVar3,0x69,0x4c11db7);
    uVar11 = crc32b(uVar3,0x65,0x4c11db7);
    *(uint *)(puVar1 + 8) = ~uVar11;
    *(undefined4 *)(puVar1 + 0xc) = 1;
    if (iVar5 < iVar14) {
      *(undefined **)(*(long *)(puVar4 + 8) + (long)iVar5 * 8) = puVar1 + 8;
      iVar5 = *(int *)puVar4 + 1;
      *(int *)puVar4 = iVar5;
    }
    if (1 < iVar5) {
      lVar8 = *(long *)(puVar4 + 8);
      uVar16 = 0;
      uVar11 = iVar5 - 1;
      do {
        if ((int)uVar11 <= (int)uVar16) break;
        puVar13 = *(uint **)(lVar8 + (ulong)uVar16 * 8);
        uVar15 = (ulong)uVar16;
        if ((uVar11 - uVar16 & 1) == 0) {
          uVar18 = uVar15;
          puVar20 = puVar13;
        }
        else {
          uVar18 = uVar15 + 1;
          puVar20 = *(uint **)(lVar8 + uVar18 * 8);
          if (((puVar13 != (uint *)0x0) && (puVar20 != (uint *)0x0)) && (*puVar20 < *puVar13)) {
            *(uint **)(lVar8 + uVar18 * 8) = puVar13;
            *(uint **)(lVar8 + uVar15 * 8) = puVar20;
            puVar20 = puVar13;
          }
        }
        uVar19 = (ulong)uVar11;
        uVar11 = uVar16;
        if (~uVar15 + uVar19 != 0) {
          puVar6 = (undefined8 *)(lVar8 + 8 + uVar18 * 8);
          do {
            puVar13 = (uint *)*puVar6;
            uVar17 = (uint)uVar18;
            if (((puVar20 == (uint *)0x0) || (puVar13 == (uint *)0x0)) || (*puVar20 <= *puVar13)) {
              puVar7 = (uint *)puVar6[1];
              if (puVar13 != (uint *)0x0) goto LAB_020fa680;
LAB_020fa630:
              puVar13 = puVar7;
            }
            else {
              puVar6[-1] = puVar13;
              *puVar6 = puVar20;
              puVar7 = (uint *)puVar6[1];
              puVar13 = puVar20;
              uVar11 = uVar17;
              if (puVar20 == (uint *)0x0) goto LAB_020fa630;
LAB_020fa680:
              if ((puVar7 == (uint *)0x0) || (*puVar13 <= *puVar7)) goto LAB_020fa630;
              uVar11 = uVar17 + 1;
              *puVar6 = puVar7;
              puVar6[1] = puVar13;
            }
            uVar18 = uVar18 + 2;
            puVar6 = puVar6 + 2;
            puVar20 = puVar13;
          } while (uVar19 != uVar18);
        }
        if ((int)uVar11 <= (int)uVar16) break;
        uVar18 = (ulong)uVar11;
        puVar13 = *(uint **)(lVar8 + (ulong)uVar11 * 8);
        uVar16 = uVar11;
        do {
          lVar2 = lVar8 + uVar18 * 8;
          puVar20 = *(uint **)(lVar2 + -8);
          if (((puVar13 != (uint *)0x0) && (puVar20 != (uint *)0x0)) && (*puVar13 < *puVar20)) {
            uVar16 = (uint)uVar18;
            *(uint **)(lVar2 + -8) = puVar13;
            *(uint **)(lVar8 + uVar18 * 8) = puVar20;
            puVar20 = puVar13;
          }
          uVar18 = uVar18 - 1;
          puVar13 = puVar20;
        } while ((long)uVar15 < (long)uVar18);
      } while (uVar16 != uVar11);
    }
    *pcVar12 = '\x01';
  }
  if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
    if ((*pcVar12 != '\0') && (iVar5 = *(int *)PTR_DAT_04bc2900, iVar5 != 0)) {
      lVar8 = *(long *)((long)PTR_DAT_04bc2900 + 8);
      if (iVar5 < 2) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        iVar5 = iVar5 + -1;
        do {
          iVar14 = iVar5 + uVar11;
          if (iVar14 < 0 != SCARRY4(iVar5,uVar11)) {
            iVar14 = iVar14 + 1;
          }
          uVar16 = iVar14 >> 1;
          puVar13 = *(uint **)(lVar8 + (long)(int)uVar16 * 8);
          if (puVar13 == (uint *)0x0) goto joined_r0x020fa6d0;
          uVar17 = *puVar13;
          if (uVar17 == param_1) goto joined_r0x020fa6d0;
          if (uVar17 < param_1) {
            uVar11 = uVar16 + 1;
          }
          else {
            iVar5 = uVar16 - 1;
          }
        } while ((int)uVar11 < iVar5);
      }
      puVar13 = *(uint **)(lVar8 + (long)(int)uVar11 * 8);
      uVar16 = uVar11;
      if ((puVar13 == (uint *)0x0) || (*puVar13 == param_1)) {
joined_r0x020fa6d0:
        if ((uVar16 < 2) &&
           (uVar11 = *(uint *)(*(long *)(lVar8 + (ulong)uVar16 * 8) + 4), uVar11 < 2)) {
          *puVar10 = param_1;
          *puVar9 = 1;
          *(uint *)PTR_DAT_04bc28f0 = uVar11;
          return uVar11;
        }
      }
    }
    if (param_2 != (char *)0x0) {
      if ((param_2 == PTR_DAT_04bc2928) ||
         ((((*param_2 == 'S' && (param_2[1] == 't')) && (param_2[2] == 'o')) &&
          ((param_2[3] == 'p' && (param_2[4] == '\0')))))) {
        uVar11 = 0;
      }
      else {
        if (param_2 != PTR_DAT_04bc2928 + 5) {
          if (*param_2 != 'T') {
            return 0xffffffff;
          }
          if (param_2[1] != 'i') {
            return 0xffffffff;
          }
          if (param_2[2] != 'e') {
            return 0xffffffff;
          }
          if (param_2[3] != '\0') {
            return 0xffffffff;
          }
        }
        uVar11 = 1;
      }
      return uVar11;
    }
  }
  return 0xffffffff;
}

