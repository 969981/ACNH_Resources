
uint FUN_020fb550(uint param_1,char *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  long lVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  char *pcVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  uint *puVar22;
  undefined *local_28;
  char *pcStack_20;
  uint local_14;
  
  if (*PTR_DAT_04bc29d0 != '\0' && *(uint *)PTR_DAT_04bc29d8 == param_1) {
    return *(uint *)PTR_DAT_04bc29e0;
  }
  if ((*PTR_DAT_04bc29f8 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04bc29f8);
    puVar6 = PTR_DAT_04bc29f0;
    if (iVar7 != 0) {
      puVar1 = PTR_DAT_04bc29f0 + 0x10;
      *(undefined8 *)PTR_DAT_04bc29f0 = 0x300000000;
      *(undefined **)(puVar6 + 8) = puVar1;
      __cxa_guard_release(PTR_DAT_04bc29f8);
    }
  }
  pcVar15 = PTR_DAT_04bc29e8;
  puVar13 = (uint *)PTR_DAT_04bc29d8;
  puVar12 = PTR_DAT_04bc29d0;
  if (*PTR_DAT_04bc2a00 == '\0') {
    *PTR_DAT_04bc2a00 = 1;
    if ((*PTR_DAT_04bc2a10 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04bc2a10);
      puVar6 = PTR_DAT_04bc2a08;
      puVar12 = PTR_DAT_04bc29d0;
      puVar13 = (uint *)PTR_DAT_04bc29d8;
      pcVar15 = PTR_DAT_04bc29e8;
      if (iVar7 != 0) {
        *(undefined8 *)(PTR_DAT_04bc2a08 + 0x10) = 0xffffffff00000000;
        *(undefined8 *)puVar6 = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 8) = 0xffffffff00000000;
        __cxa_guard_release(PTR_DAT_04bc2a10);
        puVar12 = PTR_DAT_04bc29d0;
        puVar13 = (uint *)PTR_DAT_04bc29d8;
        pcVar15 = PTR_DAT_04bc29e8;
      }
    }
    puVar1 = PTR_DAT_04bc2a08;
    puVar6 = PTR_DAT_04bc29f0;
    uVar3 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar3,0x82,0x4c11db7);
    uVar5 = crc32b(uVar4,0xa4,0x4c11db7);
    uVar5 = crc32b(uVar5,0xe3,0x4c11db7);
    uVar5 = crc32b(uVar5,0x83,0x4c11db7);
    uVar5 = crc32b(uVar5,0xbc,0x4c11db7);
    uVar5 = crc32b(uVar5,0xe3,0x4c11db7);
    uVar5 = crc32b(uVar5,0x83,0x4c11db7);
    uVar5 = crc32b(uVar5,0x96,0x4c11db7);
    uVar5 = crc32b(uVar5,0xe3,0x4c11db7);
    uVar5 = crc32b(uVar5,0x83,0x4c11db7);
    uVar14 = crc32b(uVar5,0xb3,0x4c11db7);
    *(uint *)PTR_DAT_04bc2a08 = ~uVar14;
    *(undefined4 *)(puVar1 + 4) = 0;
    iVar7 = *(int *)puVar6;
    iVar20 = *(int *)(puVar6 + 4);
    if (iVar7 < iVar20) {
      *(undefined **)(*(long *)(puVar6 + 8) + (long)iVar7 * 8) = puVar1;
      iVar20 = *(int *)(puVar6 + 4);
      iVar7 = *(int *)puVar6 + 1;
      *(int *)puVar6 = iVar7;
    }
    uVar4 = crc32b(uVar4,0xb7,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x83,0x4c11db7);
    uVar4 = crc32b(uVar4,0xa3,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x83,0x4c11db7);
    uVar4 = crc32b(uVar4,0x83,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x83,0x4c11db7);
    uVar4 = crc32b(uVar4,0x95,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x83,0x4c11db7);
    uVar14 = crc32b(uVar4,0xab,0x4c11db7);
    *(uint *)(puVar1 + 8) = ~uVar14;
    *(undefined4 *)(puVar1 + 0xc) = 1;
    if (iVar7 < iVar20) {
      *(undefined **)(*(long *)(puVar6 + 8) + (long)iVar7 * 8) = puVar1 + 8;
      iVar20 = *(int *)(puVar6 + 4);
      iVar7 = *(int *)puVar6 + 1;
      *(int *)puVar6 = iVar7;
    }
    uVar3 = crc32b(uVar3,0x83,0x4c11db7);
    uVar3 = crc32b(uVar3,0xa9,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
    uVar3 = crc32b(uVar3,0x83,0x4c11db7);
    uVar3 = crc32b(uVar3,0xb3,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
    uVar3 = crc32b(uVar3,0x83,0x4c11db7);
    uVar3 = crc32b(uVar3,0x80,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
    uVar3 = crc32b(uVar3,0x83,0x4c11db7);
    uVar14 = crc32b(uVar3,0xa0,0x4c11db7);
    *(uint *)(puVar1 + 0x10) = ~uVar14;
    *(undefined4 *)(puVar1 + 0x14) = 2;
    if (iVar7 < iVar20) {
      *(undefined **)(*(long *)(puVar6 + 8) + (long)iVar7 * 8) = puVar1 + 0x10;
      iVar7 = *(int *)puVar6 + 1;
      *(int *)puVar6 = iVar7;
    }
    if (1 < iVar7) {
      lVar11 = *(long *)(puVar6 + 8);
      uVar17 = 0;
      uVar14 = iVar7 - 1;
      do {
        if ((int)uVar14 <= (int)uVar17) break;
        puVar16 = *(uint **)(lVar11 + (ulong)uVar17 * 8);
        uVar8 = (ulong)uVar17;
        if ((uVar14 - uVar17 & 1) == 0) {
          uVar19 = uVar8;
          puVar22 = puVar16;
        }
        else {
          uVar19 = uVar8 + 1;
          puVar22 = *(uint **)(lVar11 + uVar19 * 8);
          if (((puVar16 != (uint *)0x0) && (puVar22 != (uint *)0x0)) && (*puVar22 < *puVar16)) {
            *(uint **)(lVar11 + uVar19 * 8) = puVar16;
            *(uint **)(lVar11 + uVar8 * 8) = puVar22;
            puVar22 = puVar16;
          }
        }
        uVar21 = (ulong)uVar14;
        uVar14 = uVar17;
        if (~uVar8 + uVar21 != 0) {
          puVar9 = (undefined8 *)(lVar11 + 8 + uVar19 * 8);
          do {
            puVar16 = (uint *)*puVar9;
            uVar18 = (uint)uVar19;
            if (((puVar22 == (uint *)0x0) || (puVar16 == (uint *)0x0)) || (*puVar22 <= *puVar16)) {
              puVar10 = (uint *)puVar9[1];
              if (puVar16 != (uint *)0x0) goto LAB_020fb900;
LAB_020fb8b0:
              puVar16 = puVar10;
            }
            else {
              puVar9[-1] = puVar16;
              *puVar9 = puVar22;
              puVar10 = (uint *)puVar9[1];
              puVar16 = puVar22;
              uVar14 = uVar18;
              if (puVar22 == (uint *)0x0) goto LAB_020fb8b0;
LAB_020fb900:
              if ((puVar10 == (uint *)0x0) || (*puVar16 <= *puVar10)) goto LAB_020fb8b0;
              uVar14 = uVar18 + 1;
              *puVar9 = puVar10;
              puVar9[1] = puVar16;
            }
            uVar19 = uVar19 + 2;
            puVar9 = puVar9 + 2;
            puVar22 = puVar16;
          } while (uVar21 != uVar19);
        }
        if ((int)uVar14 <= (int)uVar17) break;
        uVar19 = (ulong)uVar14;
        puVar16 = *(uint **)(lVar11 + (ulong)uVar14 * 8);
        uVar17 = uVar14;
        do {
          lVar2 = lVar11 + uVar19 * 8;
          puVar22 = *(uint **)(lVar2 + -8);
          if (((puVar16 != (uint *)0x0) && (puVar22 != (uint *)0x0)) && (*puVar16 < *puVar22)) {
            uVar17 = (uint)uVar19;
            *(uint **)(lVar2 + -8) = puVar16;
            *(uint **)(lVar11 + uVar19 * 8) = puVar22;
            puVar22 = puVar16;
          }
          uVar19 = uVar19 - 1;
          puVar16 = puVar22;
        } while ((long)uVar8 < (long)uVar19);
      } while (uVar17 != uVar14);
    }
    *pcVar15 = '\x01';
  }
  if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
    if ((*pcVar15 != '\0') && (iVar7 = *(int *)PTR_DAT_04bc29f0, iVar7 != 0)) {
      lVar11 = *(long *)((long)PTR_DAT_04bc29f0 + 8);
      if (iVar7 < 2) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        iVar7 = iVar7 + -1;
        do {
          iVar20 = iVar7 + uVar14;
          if (iVar20 < 0 != SCARRY4(iVar7,uVar14)) {
            iVar20 = iVar20 + 1;
          }
          uVar17 = iVar20 >> 1;
          puVar16 = *(uint **)(lVar11 + (long)(int)uVar17 * 8);
          if (puVar16 == (uint *)0x0) goto joined_r0x020fb950;
          uVar18 = *puVar16;
          if (uVar18 == param_1) goto joined_r0x020fb950;
          if (uVar18 < param_1) {
            uVar14 = uVar17 + 1;
          }
          else {
            iVar7 = uVar17 - 1;
          }
        } while ((int)uVar14 < iVar7);
      }
      puVar16 = *(uint **)(lVar11 + (long)(int)uVar14 * 8);
      uVar17 = uVar14;
      if ((puVar16 == (uint *)0x0) || (*puVar16 == param_1)) {
joined_r0x020fb950:
        if ((uVar17 < 3) &&
           (uVar14 = *(uint *)(*(long *)(lVar11 + (ulong)uVar17 * 8) + 4), uVar14 < 3)) {
          *puVar13 = param_1;
          *puVar12 = 1;
          *(uint *)PTR_DAT_04bc29e0 = uVar14;
          return uVar14;
        }
      }
    }
    if (param_2 != (char *)0x0) {
      local_14 = 0;
      local_28 = PTR_DAT_04bb2020 + 0x10;
      pcStack_20 = param_2;
      uVar8 = FUN_020fbac4(&local_14,&local_28);
      if ((uVar8 & 1) != 0) {
        return local_14;
      }
    }
  }
  return 0xffffffff;
}

