
uint FUN_036ac2a0(uint param_1,char *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long lVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  char *pcVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  undefined *local_28;
  char *pcStack_20;
  uint local_14;
  
  if (*PTR_DAT_04bcabb0 != '\0' && *(uint *)PTR_DAT_04bcabb8 == param_1) {
    return *(uint *)PTR_DAT_04bcabc0;
  }
  if ((*PTR_DAT_04bcabd8 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_04bcabd8);
    puVar5 = PTR_DAT_04bcabd0;
    if (iVar6 != 0) {
      puVar1 = PTR_DAT_04bcabd0 + 0x10;
      *(undefined8 *)PTR_DAT_04bcabd0 = 0x300000000;
      *(undefined **)(puVar5 + 8) = puVar1;
      __cxa_guard_release(PTR_DAT_04bcabd8);
    }
  }
  pcVar14 = PTR_DAT_04bcabc8;
  puVar12 = (uint *)PTR_DAT_04bcabb8;
  puVar11 = PTR_DAT_04bcabb0;
  if (*PTR_DAT_04bcabe0 == '\0') {
    *PTR_DAT_04bcabe0 = 1;
    if ((*PTR_DAT_04bcabf0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04bcabf0);
      puVar5 = PTR_DAT_04bcabe8;
      puVar11 = PTR_DAT_04bcabb0;
      puVar12 = (uint *)PTR_DAT_04bcabb8;
      pcVar14 = PTR_DAT_04bcabc8;
      if (iVar6 != 0) {
        *(undefined8 *)(PTR_DAT_04bcabe8 + 0x10) = 0xffffffff00000000;
        *(undefined8 *)puVar5 = 0xffffffff00000000;
        *(undefined8 *)(puVar5 + 8) = 0xffffffff00000000;
        __cxa_guard_release(PTR_DAT_04bcabf0);
        puVar11 = PTR_DAT_04bcabb0;
        puVar12 = (uint *)PTR_DAT_04bcabb8;
        pcVar14 = PTR_DAT_04bcabc8;
      }
    }
    puVar1 = PTR_DAT_04bcabe8;
    puVar5 = PTR_DAT_04bcabd0;
    uVar3 = crc32b(0xffffffff,0x52,0x4c11db7);
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
    uVar3 = crc32b(uVar3,100,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar13 = crc32b(uVar3,0x6d,0x4c11db7);
    *(uint *)PTR_DAT_04bcabe8 = ~uVar13;
    *(undefined4 *)(puVar1 + 4) = 0;
    iVar6 = *(int *)puVar5;
    iVar16 = *(int *)(puVar5 + 4);
    if (iVar6 < iVar16) {
      *(undefined **)(*(long *)(puVar5 + 8) + (long)iVar6 * 8) = puVar1;
      iVar16 = *(int *)(puVar5 + 4);
      iVar6 = *(int *)puVar5 + 1;
      *(int *)puVar5 = iVar6;
    }
    uVar3 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar3 = crc32b(uVar3,99,0x4c11db7);
    uVar3 = crc32b(uVar3,0x68,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
    uVar4 = crc32b(uVar3,0x4c,0x4c11db7);
    uVar4 = crc32b(uVar4,0x65,0x4c11db7);
    uVar4 = crc32b(uVar4,0x73,0x4c11db7);
    uVar4 = crc32b(uVar4,0x73,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar13 = crc32b(uVar4,0x6e,0x4c11db7);
    *(uint *)(puVar1 + 8) = ~uVar13;
    *(undefined4 *)(puVar1 + 0xc) = 1;
    if (iVar6 < iVar16) {
      *(undefined **)(*(long *)(puVar5 + 8) + (long)iVar6 * 8) = puVar1 + 8;
      iVar16 = *(int *)(puVar5 + 4);
      iVar6 = *(int *)puVar5 + 1;
      *(int *)puVar5 = iVar6;
    }
    uVar3 = crc32b(uVar3,0x42,0x4c11db7);
    uVar3 = crc32b(uVar3,0x72,0x4c11db7);
    uVar3 = crc32b(uVar3,0x65,0x4c11db7);
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    uVar13 = crc32b(uVar3,0x6b,0x4c11db7);
    *(uint *)(puVar1 + 0x10) = ~uVar13;
    *(undefined4 *)(puVar1 + 0x14) = 2;
    if (iVar6 < iVar16) {
      *(undefined **)(*(long *)(puVar5 + 8) + (long)iVar6 * 8) = puVar1 + 0x10;
      iVar6 = *(int *)puVar5 + 1;
      *(int *)puVar5 = iVar6;
    }
    if (1 < iVar6) {
      lVar10 = *(long *)(puVar5 + 8);
      uVar17 = 0;
      uVar13 = iVar6 - 1;
      do {
        if ((int)uVar13 <= (int)uVar17) break;
        puVar15 = *(uint **)(lVar10 + (ulong)uVar17 * 8);
        uVar7 = (ulong)uVar17;
        if ((uVar13 - uVar17 & 1) == 0) {
          uVar19 = uVar7;
          puVar21 = puVar15;
        }
        else {
          uVar19 = uVar7 + 1;
          puVar21 = *(uint **)(lVar10 + uVar19 * 8);
          if (((puVar15 != (uint *)0x0) && (puVar21 != (uint *)0x0)) && (*puVar21 < *puVar15)) {
            *(uint **)(lVar10 + uVar19 * 8) = puVar15;
            *(uint **)(lVar10 + uVar7 * 8) = puVar21;
            puVar21 = puVar15;
          }
        }
        uVar20 = (ulong)uVar13;
        uVar13 = uVar17;
        if (~uVar7 + uVar20 != 0) {
          puVar8 = (undefined8 *)(lVar10 + 8 + uVar19 * 8);
          do {
            puVar15 = (uint *)*puVar8;
            uVar18 = (uint)uVar19;
            if (((puVar21 == (uint *)0x0) || (puVar15 == (uint *)0x0)) || (*puVar21 <= *puVar15)) {
              puVar9 = (uint *)puVar8[1];
              if (puVar15 != (uint *)0x0) goto LAB_036ac620;
LAB_036ac5d0:
              puVar15 = puVar9;
            }
            else {
              puVar8[-1] = puVar15;
              *puVar8 = puVar21;
              puVar9 = (uint *)puVar8[1];
              puVar15 = puVar21;
              uVar13 = uVar18;
              if (puVar21 == (uint *)0x0) goto LAB_036ac5d0;
LAB_036ac620:
              if ((puVar9 == (uint *)0x0) || (*puVar15 <= *puVar9)) goto LAB_036ac5d0;
              uVar13 = uVar18 + 1;
              *puVar8 = puVar9;
              puVar8[1] = puVar15;
            }
            uVar19 = uVar19 + 2;
            puVar8 = puVar8 + 2;
            puVar21 = puVar15;
          } while (uVar20 != uVar19);
        }
        if ((int)uVar13 <= (int)uVar17) break;
        uVar19 = (ulong)uVar13;
        puVar15 = *(uint **)(lVar10 + (ulong)uVar13 * 8);
        uVar17 = uVar13;
        do {
          lVar2 = lVar10 + uVar19 * 8;
          puVar21 = *(uint **)(lVar2 + -8);
          if (((puVar15 != (uint *)0x0) && (puVar21 != (uint *)0x0)) && (*puVar15 < *puVar21)) {
            uVar17 = (uint)uVar19;
            *(uint **)(lVar2 + -8) = puVar15;
            *(uint **)(lVar10 + uVar19 * 8) = puVar21;
            puVar21 = puVar15;
          }
          uVar19 = uVar19 - 1;
          puVar15 = puVar21;
        } while ((long)uVar7 < (long)uVar19);
      } while (uVar17 != uVar13);
    }
    *pcVar14 = '\x01';
  }
  if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
    if ((*pcVar14 != '\0') && (iVar6 = *(int *)PTR_DAT_04bcabd0, iVar6 != 0)) {
      lVar10 = *(long *)((long)PTR_DAT_04bcabd0 + 8);
      if (iVar6 < 2) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        iVar6 = iVar6 + -1;
        do {
          iVar16 = iVar6 + uVar13;
          if (iVar16 < 0 != SCARRY4(iVar6,uVar13)) {
            iVar16 = iVar16 + 1;
          }
          uVar17 = iVar16 >> 1;
          puVar15 = *(uint **)(lVar10 + (long)(int)uVar17 * 8);
          if (puVar15 == (uint *)0x0) goto joined_r0x036ac670;
          uVar18 = *puVar15;
          if (uVar18 == param_1) goto joined_r0x036ac670;
          if (uVar18 < param_1) {
            uVar13 = uVar17 + 1;
          }
          else {
            iVar6 = uVar17 - 1;
          }
        } while ((int)uVar13 < iVar6);
      }
      puVar15 = *(uint **)(lVar10 + (long)(int)uVar13 * 8);
      uVar17 = uVar13;
      if ((puVar15 == (uint *)0x0) || (*puVar15 == param_1)) {
joined_r0x036ac670:
        if ((uVar17 < 3) &&
           (uVar13 = *(uint *)(*(long *)(lVar10 + (ulong)uVar17 * 8) + 4), uVar13 < 3)) {
          *puVar12 = param_1;
          *puVar11 = 1;
          *(uint *)PTR_DAT_04bcabc0 = uVar13;
          return uVar13;
        }
      }
    }
    if (param_2 != (char *)0x0) {
      local_14 = 0;
      local_28 = PTR_DAT_04bb2020 + 0x10;
      pcStack_20 = param_2;
      uVar7 = FUN_036ac7e4(&local_14,&local_28);
      if ((uVar7 & 1) != 0) {
        return local_14;
      }
    }
  }
  return 0xffffffff;
}

