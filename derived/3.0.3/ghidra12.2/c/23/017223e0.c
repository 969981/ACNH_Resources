
uint FUN_017223e0(uint param_1,char *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  uint *puVar20;
  byte *__src;
  uint local_18c;
  undefined *local_188;
  byte *pbStack_180;
  undefined4 local_178;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar4 = (uint *)PTR_DAT_04bbe120;
  puVar5 = PTR_DAT_04bbe118;
  if (*PTR_DAT_04bbe118 != '\0' && *(uint *)PTR_DAT_04bbe120 == param_1) {
    return *(uint *)PTR_DAT_04bbe128;
  }
  if ((*PTR_DAT_04bbe140 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04bbe140);
    puVar1 = PTR_DAT_04bbe138;
    if (iVar10 != 0) {
      puVar2 = PTR_DAT_04bbe138 + 0x10;
      *(undefined8 *)PTR_DAT_04bbe138 = 0x700000000;
      *(undefined **)(puVar1 + 8) = puVar2;
      __cxa_guard_release(PTR_DAT_04bbe140);
    }
  }
  pcVar6 = PTR_DAT_04bbe130;
  if (*PTR_DAT_04bbe148 == '\0') {
    *PTR_DAT_04bbe148 = 1;
    if ((*PTR_DAT_04bbe158 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04bbe158);
      puVar1 = PTR_DAT_04bbe150;
      if (iVar10 != 0) {
        *(undefined8 *)PTR_DAT_04bbe150 = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 8) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x10) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x18) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x30) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x20) = 0xffffffff00000000;
        *(undefined8 *)(puVar1 + 0x28) = 0xffffffff00000000;
        __cxa_guard_release(PTR_DAT_04bbe158);
      }
    }
    puVar7 = PTR_s_DisableOnlyLowerBody_04bbe160;
    puVar2 = PTR_DAT_04bbe138;
    lVar12 = 0;
    puVar1 = PTR_DAT_04bb4520 + 0x10;
    do {
      local_178 = 0x100;
      local_75 = 0;
      __src = *(byte **)(puVar7 + lVar12 * 8 + 0xb8);
      if (local_174 != __src) {
        lVar11 = 0;
        do {
          if (__src[lVar11] == 0) {
LAB_01722534:
            iVar10 = (int)lVar11;
joined_r0x01722538:
            if (0xff < iVar10) {
              iVar10 = 0xff;
            }
            goto LAB_01722540;
          }
          if (__src[lVar11 + 1] == 0) {
            lVar11 = lVar11 + 1;
            goto LAB_01722534;
          }
          if (__src[lVar11 + 2] == 0) {
            iVar10 = (int)lVar11 + 2;
            goto joined_r0x01722538;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        iVar10 = 0;
LAB_01722540:
        local_188 = puVar1;
        pbStack_180 = local_174;
        memcpy(local_174,__src,(long)iVar10);
        local_174[iVar10] = 0;
      }
      uVar9 = (uint)*__src;
      if (*__src == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0xffffffff;
        do {
          __src = __src + 1;
          uVar14 = crc32b(uVar14,uVar9,0x4c11db7);
          uVar9 = (uint)*__src;
        } while (uVar9 != 0);
        uVar14 = ~uVar14;
      }
      puVar4 = (uint *)(PTR_DAT_04bbe150 + lVar12 * 8);
      *puVar4 = uVar14;
      puVar4[1] = (uint)lVar12;
      iVar10 = *(int *)puVar2;
      if (iVar10 < *(int *)(puVar2 + 4)) {
        *(uint **)(*(long *)(puVar2 + 8) + (long)iVar10 * 8) = puVar4;
        iVar10 = *(int *)puVar2 + 1;
        *(int *)puVar2 = iVar10;
      }
      puVar4 = (uint *)PTR_DAT_04bbe120;
      puVar5 = PTR_DAT_04bbe118;
      lVar12 = lVar12 + 1;
    } while (lVar12 != 7);
    if (1 < iVar10) {
      lVar12 = *(long *)(puVar2 + 8);
      uVar14 = 0;
      uVar9 = iVar10 - 1;
      do {
        if ((int)uVar9 <= (int)uVar14) break;
        puVar13 = *(uint **)(lVar12 + (ulong)uVar14 * 8);
        uVar8 = (ulong)uVar14;
        if ((uVar9 - uVar14 & 1) == 0) {
          uVar16 = uVar8;
          puVar18 = puVar13;
        }
        else {
          uVar16 = uVar8 + 1;
          puVar18 = *(uint **)(lVar12 + uVar16 * 8);
          if (((puVar13 != (uint *)0x0) && (puVar18 != (uint *)0x0)) && (*puVar18 < *puVar13)) {
            *(uint **)(lVar12 + uVar16 * 8) = puVar13;
            *(uint **)(lVar12 + uVar8 * 8) = puVar18;
            puVar18 = puVar13;
          }
        }
        uVar17 = (ulong)uVar9;
        uVar9 = uVar14;
        if (~uVar8 + uVar17 != 0) {
          puVar19 = (undefined8 *)(lVar12 + 8 + uVar16 * 8);
          do {
            puVar13 = (uint *)*puVar19;
            uVar15 = (uint)uVar16;
            if (((puVar18 == (uint *)0x0) || (puVar13 == (uint *)0x0)) || (*puVar18 <= *puVar13)) {
              puVar20 = (uint *)puVar19[1];
              if (puVar13 != (uint *)0x0) goto LAB_017227c0;
LAB_01722770:
              puVar13 = puVar20;
            }
            else {
              puVar19[-1] = puVar13;
              *puVar19 = puVar18;
              puVar20 = (uint *)puVar19[1];
              puVar13 = puVar18;
              uVar9 = uVar15;
              if (puVar18 == (uint *)0x0) goto LAB_01722770;
LAB_017227c0:
              if (puVar20 == (uint *)0x0) goto LAB_01722770;
              if (*puVar13 <= *puVar20) goto LAB_01722770;
              uVar9 = uVar15 + 1;
              *puVar19 = puVar20;
              puVar19[1] = puVar13;
            }
            uVar16 = uVar16 + 2;
            puVar19 = puVar19 + 2;
            puVar18 = puVar13;
          } while (uVar17 != uVar16);
        }
        if ((int)uVar9 <= (int)uVar14) break;
        uVar16 = (ulong)uVar9;
        puVar13 = *(uint **)(lVar12 + (ulong)uVar9 * 8);
        uVar14 = uVar9;
        do {
          lVar11 = lVar12 + uVar16 * 8;
          puVar18 = *(uint **)(lVar11 + -8);
          if (((puVar13 != (uint *)0x0) && (puVar18 != (uint *)0x0)) && (*puVar13 < *puVar18)) {
            uVar14 = (uint)uVar16;
            *(uint **)(lVar11 + -8) = puVar13;
            *(uint **)(lVar12 + uVar16 * 8) = puVar18;
            puVar18 = puVar13;
          }
          uVar16 = uVar16 - 1;
          puVar13 = puVar18;
        } while ((long)uVar8 < (long)uVar16);
      } while (uVar14 != uVar9);
    }
    pcVar6 = PTR_DAT_04bbe130;
    *PTR_DAT_04bbe130 = 1;
  }
  if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
    if ((*pcVar6 != '\0') && (iVar10 = *(int *)PTR_DAT_04bbe138, iVar10 != 0)) {
      lVar12 = *(long *)((long)PTR_DAT_04bbe138 + 8);
      if (iVar10 < 2) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        iVar10 = iVar10 + -1;
        do {
          iVar3 = iVar10 + uVar9;
          if (iVar3 < 0 != SCARRY4(iVar10,uVar9)) {
            iVar3 = iVar3 + 1;
          }
          uVar14 = iVar3 >> 1;
          puVar13 = *(uint **)(lVar12 + (long)(int)uVar14 * 8);
          if (puVar13 == (uint *)0x0) goto joined_r0x01722810;
          uVar15 = *puVar13;
          if (uVar15 == param_1) goto joined_r0x01722810;
          if (uVar15 < param_1) {
            uVar9 = uVar14 + 1;
          }
          else {
            iVar10 = uVar14 - 1;
          }
        } while ((int)uVar9 < iVar10);
      }
      puVar13 = *(uint **)(lVar12 + (long)(int)uVar9 * 8);
      uVar14 = uVar9;
      if ((puVar13 == (uint *)0x0) || (*puVar13 == param_1)) {
joined_r0x01722810:
        if ((uVar14 < 7) &&
           (uVar9 = *(uint *)(*(long *)(lVar12 + (ulong)uVar14 * 8) + 4), uVar9 < 7)) {
          *puVar4 = param_1;
          *puVar5 = 1;
          *(uint *)PTR_DAT_04bbe128 = uVar9;
          return uVar9;
        }
      }
    }
    if (param_2 != (char *)0x0) {
      local_18c = 0;
      local_188 = PTR_DAT_04bb2020 + 0x10;
      pbStack_180 = (byte *)param_2;
      uVar8 = FUN_01722904(&local_18c,&local_188);
      if ((uVar8 & 1) != 0) {
        return local_18c;
      }
    }
  }
  return 0xffffffff;
}

