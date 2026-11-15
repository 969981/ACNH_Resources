
uint FUN_020fae70(uint param_1,char *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  char *pcVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  uint *puVar20;
  undefined *local_28;
  char *pcStack_20;
  uint local_14;
  
  if (*PTR_DAT_04bc2980 != '\0' && *(uint *)PTR_DAT_04bc2988 == param_1) {
    return *(uint *)PTR_DAT_04bc2990;
  }
  if ((*PTR_DAT_04bc29a8 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04bc29a8);
    puVar4 = PTR_DAT_04bc29a0;
    if (iVar5 != 0) {
      puVar1 = PTR_DAT_04bc29a0 + 0x10;
      *(undefined8 *)PTR_DAT_04bc29a0 = 0x300000000;
      *(undefined **)(puVar4 + 8) = puVar1;
      __cxa_guard_release(PTR_DAT_04bc29a8);
    }
  }
  pcVar13 = PTR_DAT_04bc2998;
  puVar11 = (uint *)PTR_DAT_04bc2988;
  puVar10 = PTR_DAT_04bc2980;
  if (*PTR_DAT_04bc29b0 == '\0') {
    *PTR_DAT_04bc29b0 = 1;
    if ((*PTR_DAT_04bc29c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_04bc29c0);
      puVar4 = PTR_DAT_04bc29b8;
      puVar10 = PTR_DAT_04bc2980;
      puVar11 = (uint *)PTR_DAT_04bc2988;
      pcVar13 = PTR_DAT_04bc2998;
      if (iVar5 != 0) {
        *(undefined8 *)(PTR_DAT_04bc29b8 + 0x10) = 0xffffffff00000000;
        *(undefined8 *)puVar4 = 0xffffffff00000000;
        *(undefined8 *)(puVar4 + 8) = 0xffffffff00000000;
        __cxa_guard_release(PTR_DAT_04bc29c0);
        puVar10 = PTR_DAT_04bc2980;
        puVar11 = (uint *)PTR_DAT_04bc2988;
        pcVar13 = PTR_DAT_04bc2998;
      }
    }
    puVar1 = PTR_DAT_04bc29b8;
    puVar4 = PTR_DAT_04bc29a0;
    uVar3 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar3 = crc32b(uVar3,0x72,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    uVar12 = crc32b(uVar3,0x6c,0x4c11db7);
    *(uint *)PTR_DAT_04bc29b8 = ~uVar12;
    *(undefined4 *)(puVar1 + 4) = 0;
    iVar5 = *(int *)puVar4;
    iVar18 = *(int *)(puVar4 + 4);
    if (iVar5 < iVar18) {
      *(undefined **)(*(long *)(puVar4 + 8) + (long)iVar5 * 8) = puVar1;
      iVar18 = *(int *)(puVar4 + 4);
      iVar5 = *(int *)puVar4 + 1;
      *(int *)puVar4 = iVar5;
    }
    uVar3 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar3 = crc32b(uVar3,0x68,0x4c11db7);
    uVar3 = crc32b(uVar3,0x75,0x4c11db7);
    uVar3 = crc32b(uVar3,0x66,0x4c11db7);
    uVar3 = crc32b(uVar3,0x66,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
    uVar12 = crc32b(uVar3,0x65,0x4c11db7);
    *(uint *)(puVar1 + 8) = ~uVar12;
    *(undefined4 *)(puVar1 + 0xc) = 1;
    if (iVar5 < iVar18) {
      *(undefined **)(*(long *)(puVar4 + 8) + (long)iVar5 * 8) = puVar1 + 8;
      iVar18 = *(int *)(puVar4 + 4);
      iVar5 = *(int *)puVar4 + 1;
      *(int *)puVar4 = iVar5;
    }
    uVar3 = crc32b(0xffffffff,0x52,0x4c11db7);
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
    uVar3 = crc32b(uVar3,100,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar12 = crc32b(uVar3,0x6d,0x4c11db7);
    *(uint *)(puVar1 + 0x10) = ~uVar12;
    *(undefined4 *)(puVar1 + 0x14) = 2;
    if (iVar5 < iVar18) {
      *(undefined **)(*(long *)(puVar4 + 8) + (long)iVar5 * 8) = puVar1 + 0x10;
      iVar5 = *(int *)puVar4 + 1;
      *(int *)puVar4 = iVar5;
    }
    if (1 < iVar5) {
      lVar9 = *(long *)(puVar4 + 8);
      uVar15 = 0;
      uVar12 = iVar5 - 1;
      do {
        if ((int)uVar12 <= (int)uVar15) break;
        puVar14 = *(uint **)(lVar9 + (ulong)uVar15 * 8);
        uVar6 = (ulong)uVar15;
        if ((uVar12 - uVar15 & 1) == 0) {
          uVar17 = uVar6;
          puVar20 = puVar14;
        }
        else {
          uVar17 = uVar6 + 1;
          puVar20 = *(uint **)(lVar9 + uVar17 * 8);
          if (((puVar14 != (uint *)0x0) && (puVar20 != (uint *)0x0)) && (*puVar20 < *puVar14)) {
            *(uint **)(lVar9 + uVar17 * 8) = puVar14;
            *(uint **)(lVar9 + uVar6 * 8) = puVar20;
            puVar20 = puVar14;
          }
        }
        uVar19 = (ulong)uVar12;
        uVar12 = uVar15;
        if (~uVar6 + uVar19 != 0) {
          puVar7 = (undefined8 *)(lVar9 + 8 + uVar17 * 8);
          do {
            puVar14 = (uint *)*puVar7;
            uVar16 = (uint)uVar17;
            if (((puVar20 == (uint *)0x0) || (puVar14 == (uint *)0x0)) || (*puVar20 <= *puVar14)) {
              puVar8 = (uint *)puVar7[1];
              if (puVar14 != (uint *)0x0) goto LAB_020fb1e0;
LAB_020fb190:
              puVar14 = puVar8;
            }
            else {
              puVar7[-1] = puVar14;
              *puVar7 = puVar20;
              puVar8 = (uint *)puVar7[1];
              puVar14 = puVar20;
              uVar12 = uVar16;
              if (puVar20 == (uint *)0x0) goto LAB_020fb190;
LAB_020fb1e0:
              if ((puVar8 == (uint *)0x0) || (*puVar14 <= *puVar8)) goto LAB_020fb190;
              uVar12 = uVar16 + 1;
              *puVar7 = puVar8;
              puVar7[1] = puVar14;
            }
            uVar17 = uVar17 + 2;
            puVar7 = puVar7 + 2;
            puVar20 = puVar14;
          } while (uVar19 != uVar17);
        }
        if ((int)uVar12 <= (int)uVar15) break;
        uVar17 = (ulong)uVar12;
        puVar14 = *(uint **)(lVar9 + (ulong)uVar12 * 8);
        uVar15 = uVar12;
        do {
          lVar2 = lVar9 + uVar17 * 8;
          puVar20 = *(uint **)(lVar2 + -8);
          if (((puVar14 != (uint *)0x0) && (puVar20 != (uint *)0x0)) && (*puVar14 < *puVar20)) {
            uVar15 = (uint)uVar17;
            *(uint **)(lVar2 + -8) = puVar14;
            *(uint **)(lVar9 + uVar17 * 8) = puVar20;
            puVar20 = puVar14;
          }
          uVar17 = uVar17 - 1;
          puVar14 = puVar20;
        } while ((long)uVar6 < (long)uVar17);
      } while (uVar15 != uVar12);
    }
    *pcVar13 = '\x01';
  }
  if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
    if ((*pcVar13 != '\0') && (iVar5 = *(int *)PTR_DAT_04bc29a0, iVar5 != 0)) {
      lVar9 = *(long *)((long)PTR_DAT_04bc29a0 + 8);
      if (iVar5 < 2) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        iVar5 = iVar5 + -1;
        do {
          iVar18 = iVar5 + uVar12;
          if (iVar18 < 0 != SCARRY4(iVar5,uVar12)) {
            iVar18 = iVar18 + 1;
          }
          uVar15 = iVar18 >> 1;
          puVar14 = *(uint **)(lVar9 + (long)(int)uVar15 * 8);
          if (puVar14 == (uint *)0x0) goto joined_r0x020fb230;
          uVar16 = *puVar14;
          if (uVar16 == param_1) goto joined_r0x020fb230;
          if (uVar16 < param_1) {
            uVar12 = uVar15 + 1;
          }
          else {
            iVar5 = uVar15 - 1;
          }
        } while ((int)uVar12 < iVar5);
      }
      puVar14 = *(uint **)(lVar9 + (long)(int)uVar12 * 8);
      uVar15 = uVar12;
      if ((puVar14 == (uint *)0x0) || (*puVar14 == param_1)) {
joined_r0x020fb230:
        if ((uVar15 < 3) &&
           (uVar12 = *(uint *)(*(long *)(lVar9 + (ulong)uVar15 * 8) + 4), uVar12 < 3)) {
          *puVar11 = param_1;
          *puVar10 = 1;
          *(uint *)PTR_DAT_04bc2990 = uVar12;
          return uVar12;
        }
      }
    }
    if (param_2 != (char *)0x0) {
      local_14 = 0;
      local_28 = PTR_DAT_04bb2020 + 0x10;
      pcStack_20 = param_2;
      uVar6 = FUN_020fb3a4(&local_14,&local_28);
      if ((uVar6 & 1) != 0) {
        return local_14;
      }
    }
  }
  return 0xffffffff;
}

