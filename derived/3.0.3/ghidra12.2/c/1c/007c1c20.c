
/* WARNING: Type propagation algorithm not settling */

uint FUN_007c1c20(uint param_1,char *param_2)

{
  undefined **ppuVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  uint *puVar19;
  byte *pbVar20;
  char *pcVar21;
  ulong uVar22;
  undefined **local_188;
  byte *local_180;
  undefined4 local_178;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar3 = (uint *)PTR_DAT_04bb45c8;
  puVar6 = PTR_DAT_04bb45c0;
  if (*PTR_DAT_04bb45c0 != '\0' && *(uint *)PTR_DAT_04bb45c8 == param_1) {
    return *(uint *)PTR_DAT_04bb45d0;
  }
  if ((*PTR_DAT_04bb45e8 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04bb45e8);
    puVar7 = PTR_DAT_04bb45e0;
    if (iVar10 != 0) {
      puVar8 = PTR_DAT_04bb45e0 + 0x10;
      *(undefined8 *)PTR_DAT_04bb45e0 = 0x7900000000;
      *(undefined **)(puVar7 + 8) = puVar8;
      __cxa_guard_release(PTR_DAT_04bb45e8);
    }
  }
  pcVar21 = PTR_DAT_04bb45d8;
  puVar7 = PTR_s_EmotEnd_04bb4608;
  if (*PTR_DAT_04bb45f0 == '\0') {
    *PTR_DAT_04bb45f0 = 1;
    if ((*PTR_DAT_04bb4600 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04bb4600);
      puVar7 = PTR_DAT_04bb45f8;
      if (iVar10 != 0) {
        *(undefined8 *)PTR_DAT_04bb45f8 = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x200) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x208) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x210) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x218) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x220) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x228) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x230) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x238) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x240) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x248) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x250) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 600) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x260) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x268) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x270) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x278) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x280) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x288) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x290) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x298) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2a0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2a8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2b0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2b8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2c0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2c8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2d0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2d8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2e0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2e8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2f0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x2f8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x300) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x308) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x310) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x318) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 800) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x328) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x330) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x338) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x340) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x348) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x350) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x358) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x360) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x368) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x370) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x378) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x380) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x388) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x390) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x398) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x3a0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x3a8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x3b0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x3b8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x3c0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x40) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x48) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x50) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x58) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x60) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x68) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x70) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x78) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x80) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x88) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x90) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x98) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0xa0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0xa8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0xb0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0xb8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0xc0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 200) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0xd0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0xd8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0xe0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0xe8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0xf0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0xf8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x100) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x108) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x110) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x118) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x120) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x128) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x130) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x138) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x140) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x148) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x150) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x158) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x160) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x168) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x170) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x178) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x180) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x188) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 400) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x198) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1a0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1a8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1b0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1b8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1c0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1c8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1d0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1d8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1e0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1e8) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1f0) = 0xffffffff00000000;
        *(undefined8 *)(puVar7 + 0x1f8) = 0xffffffff00000000;
        __cxa_guard_release(PTR_DAT_04bb4600);
      }
    }
    puVar7 = PTR_DAT_04bb45e0;
    uVar22 = 0;
    ppuVar1 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
    do {
      if (uVar22 < 0x6d) {
        puVar8 = PTR_s_EmotEnd_04bb4608 + 0x528;
        uVar15 = uVar22;
      }
      else {
        puVar8 = (undefined *)FUN_007c3ad0();
        uVar15 = uVar22 + 0xffffff93;
      }
      pbVar20 = *(byte **)(puVar8 + (uVar15 & 0xffffffff) * 8);
      local_178 = 0x100;
      local_75 = 0;
      local_188 = &PTR_LAB_04914140;
      local_180 = local_174;
      if (local_174 != pbVar20) {
        lVar11 = 0;
        do {
          if (pbVar20[lVar11] == 0) {
LAB_007c1da4:
            iVar10 = (int)lVar11;
joined_r0x007c1da8:
            if (0xff < iVar10) {
              iVar10 = 0xff;
            }
            goto LAB_007c1db0;
          }
          if (pbVar20[lVar11 + 1] == 0) {
            lVar11 = lVar11 + 1;
            goto LAB_007c1da4;
          }
          if (pbVar20[lVar11 + 2] == 0) {
            iVar10 = (int)lVar11 + 2;
            goto joined_r0x007c1da8;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        iVar10 = 0;
LAB_007c1db0:
        memcpy(local_174,pbVar20,(long)iVar10);
        local_174[iVar10] = 0;
      }
      uVar9 = (uint)*pbVar20;
      if (*pbVar20 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0xffffffff;
        do {
          pbVar20 = pbVar20 + 1;
          uVar13 = crc32b(uVar13,uVar9,0x4c11db7);
          uVar9 = (uint)*pbVar20;
        } while (uVar9 != 0);
        uVar13 = ~uVar13;
      }
      puVar3 = (uint *)(PTR_DAT_04bb45f8 + uVar22 * 8);
      *puVar3 = uVar13;
      puVar3[1] = (uint)uVar22;
      iVar10 = *(int *)puVar7;
      if (iVar10 < *(int *)(puVar7 + 4)) {
        *(uint **)(*(long *)(puVar7 + 8) + (long)iVar10 * 8) = puVar3;
        iVar10 = *(int *)puVar7 + 1;
        *(int *)puVar7 = iVar10;
      }
      puVar3 = (uint *)PTR_DAT_04bb45c8;
      puVar6 = PTR_DAT_04bb45c0;
      uVar22 = uVar22 + 1;
      local_188 = ppuVar1;
    } while (uVar22 != 0x79);
    if (1 < iVar10) {
      lVar11 = *(long *)(puVar7 + 8);
      uVar13 = 0;
      uVar9 = iVar10 - 1;
      do {
        if ((int)uVar9 <= (int)uVar13) break;
        puVar12 = *(uint **)(lVar11 + (ulong)uVar13 * 8);
        uVar22 = (ulong)uVar13;
        if ((uVar9 - uVar13 & 1) == 0) {
          uVar15 = uVar22;
          puVar17 = puVar12;
        }
        else {
          uVar15 = uVar22 + 1;
          puVar17 = *(uint **)(lVar11 + uVar15 * 8);
          if (((puVar12 != (uint *)0x0) && (puVar17 != (uint *)0x0)) && (*puVar17 < *puVar12)) {
            *(uint **)(lVar11 + uVar15 * 8) = puVar12;
            *(uint **)(lVar11 + uVar22 * 8) = puVar17;
            puVar17 = puVar12;
          }
        }
        uVar16 = (ulong)uVar9;
        uVar9 = uVar13;
        if (~uVar22 + uVar16 != 0) {
          puVar18 = (undefined8 *)(lVar11 + 8 + uVar15 * 8);
          do {
            puVar12 = (uint *)*puVar18;
            uVar14 = (uint)uVar15;
            if (((puVar17 == (uint *)0x0) || (puVar12 == (uint *)0x0)) || (*puVar17 <= *puVar12)) {
              puVar19 = (uint *)puVar18[1];
              if (puVar12 != (uint *)0x0) goto LAB_007c2030;
LAB_007c1fe0:
              puVar12 = puVar19;
            }
            else {
              puVar18[-1] = puVar12;
              *puVar18 = puVar17;
              puVar19 = (uint *)puVar18[1];
              puVar12 = puVar17;
              uVar9 = uVar14;
              if (puVar17 == (uint *)0x0) goto LAB_007c1fe0;
LAB_007c2030:
              if (puVar19 == (uint *)0x0) goto LAB_007c1fe0;
              if (*puVar12 <= *puVar19) goto LAB_007c1fe0;
              uVar9 = uVar14 + 1;
              *puVar18 = puVar19;
              puVar18[1] = puVar12;
            }
            uVar15 = uVar15 + 2;
            puVar18 = puVar18 + 2;
            puVar17 = puVar12;
          } while (uVar16 != uVar15);
        }
        if ((int)uVar9 <= (int)uVar13) break;
        uVar15 = (ulong)uVar9;
        puVar12 = *(uint **)(lVar11 + (ulong)uVar9 * 8);
        uVar13 = uVar9;
        do {
          lVar4 = lVar11 + uVar15 * 8;
          puVar17 = *(uint **)(lVar4 + -8);
          if (((puVar12 != (uint *)0x0) && (puVar17 != (uint *)0x0)) && (*puVar12 < *puVar17)) {
            uVar13 = (uint)uVar15;
            *(uint **)(lVar4 + -8) = puVar12;
            *(uint **)(lVar11 + uVar15 * 8) = puVar17;
            puVar17 = puVar12;
          }
          uVar15 = uVar15 - 1;
          puVar12 = puVar17;
        } while ((long)uVar22 < (long)uVar15);
      } while (uVar13 != uVar9);
    }
    pcVar21 = PTR_DAT_04bb45d8;
    *PTR_DAT_04bb45d8 = 1;
    puVar7 = PTR_s_EmotEnd_04bb4608;
  }
  PTR_s_EmotEnd_04bb4608 = puVar7;
  if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
    if ((*pcVar21 != '\0') && (iVar10 = *(int *)PTR_DAT_04bb45e0, iVar10 != 0)) {
      lVar11 = *(long *)((long)PTR_DAT_04bb45e0 + 8);
      if (iVar10 < 2) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        iVar10 = iVar10 + -1;
        do {
          iVar2 = iVar10 + uVar9;
          if (iVar2 < 0 != SCARRY4(iVar10,uVar9)) {
            iVar2 = iVar2 + 1;
          }
          uVar13 = iVar2 >> 1;
          puVar12 = *(uint **)(lVar11 + (long)(int)uVar13 * 8);
          if (puVar12 == (uint *)0x0) goto joined_r0x007c2080;
          uVar14 = *puVar12;
          if (uVar14 == param_1) goto joined_r0x007c2080;
          if (uVar14 < param_1) {
            uVar9 = uVar13 + 1;
          }
          else {
            iVar10 = uVar13 - 1;
          }
        } while ((int)uVar9 < iVar10);
      }
      puVar12 = *(uint **)(lVar11 + (long)(int)uVar9 * 8);
      uVar13 = uVar9;
      if ((puVar12 == (uint *)0x0) || (*puVar12 == param_1)) {
joined_r0x007c2080:
        if ((uVar13 < 0x79) &&
           (uVar9 = *(uint *)(*(long *)(lVar11 + (ulong)uVar13 * 8) + 4), uVar9 < 0x79)) {
          *puVar3 = param_1;
          *puVar6 = 1;
          *(uint *)PTR_DAT_04bb45d0 = uVar9;
          return uVar9;
        }
      }
    }
    if (param_2 != (char *)0x0) {
      local_188 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      uVar9 = 0;
      local_180 = (byte *)param_2;
      do {
        if ((int)uVar9 < 0x6d) {
          pcVar21 = "";
          if (uVar9 < 0x6d) {
            puVar8 = puVar7 + 0x528;
            uVar13 = uVar9;
            goto LAB_007c2108;
          }
        }
        else {
          pcVar21 = "";
          if (uVar9 < 0x79) {
            puVar8 = (undefined *)FUN_007c3ad0();
            uVar13 = uVar9 - 0x6d;
LAB_007c2108:
            pcVar21 = *(char **)(puVar8 + (ulong)uVar13 * 8);
          }
        }
        (*(code *)local_188[3])(&local_188);
        if ((byte *)pcVar21 == local_180) {
          return uVar9;
        }
        if (*pcVar21 == *local_180) {
          if (*pcVar21 == '\0') {
            return uVar9;
          }
          lVar11 = 0x7fffe;
          pbVar20 = local_180;
          while( true ) {
            if (pcVar21[1] != pbVar20[1]) break;
            if (pcVar21[1] == '\0') {
              return uVar9;
            }
            if (pcVar21[2] != pbVar20[2]) break;
            if (pcVar21[2] == '\0') {
              return uVar9;
            }
            if ((lVar11 == 0) || (cVar5 = pcVar21[3], cVar5 != pbVar20[3])) break;
            lVar11 = lVar11 + -3;
            pbVar20 = pbVar20 + 3;
            pcVar21 = pcVar21 + 3;
            if (cVar5 == '\0') {
              return uVar9;
            }
          }
        }
        uVar13 = 0x79;
        if ((int)uVar9 < 0x79) {
          uVar13 = uVar9 + 1;
        }
        uVar9 = uVar13;
      } while (uVar13 != 0x79);
    }
  }
  return 0xffffffff;
}

