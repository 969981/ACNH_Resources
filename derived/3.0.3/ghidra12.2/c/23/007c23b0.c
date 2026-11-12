
/* WARNING: Type propagation algorithm not settling */

uint FUN_007c23b0(uint param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  uint *puVar19;
  byte *pbVar20;
  char *pcVar21;
  undefined **local_188;
  byte *local_180;
  undefined4 local_178;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar3 = (uint *)PTR_DAT_04bb4638;
  puVar5 = PTR_DAT_04bb4630;
  if (*PTR_DAT_04bb4630 != '\0' && *(uint *)PTR_DAT_04bb4638 == param_1) {
    return *(uint *)PTR_DAT_04bb4640;
  }
  if ((*PTR_DAT_04bb4658 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04bb4658);
    puVar6 = PTR_DAT_04bb4650;
    if (iVar8 != 0) {
      puVar1 = PTR_DAT_04bb4650 + 0x10;
      *(undefined8 *)PTR_DAT_04bb4650 = 0x7500000000;
      *(undefined **)(puVar6 + 8) = puVar1;
      __cxa_guard_release(PTR_DAT_04bb4658);
    }
  }
  pcVar21 = PTR_DAT_04bb4648;
  puVar6 = PTR_DAT_04bb4678;
  if (*PTR_DAT_04bb4660 == '\0') {
    *PTR_DAT_04bb4660 = 1;
    if ((*PTR_DAT_04bb4670 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04bb4670);
      puVar6 = PTR_DAT_04bb4668;
      if (iVar8 != 0) {
        *(undefined8 *)PTR_DAT_04bb4668 = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x200) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x208) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x210) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x218) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x220) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x228) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x230) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x238) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x240) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x248) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x250) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 600) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x260) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x268) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x270) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x278) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x280) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x288) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x290) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x298) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2a0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2a8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2b0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2b8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2c0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2c8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2d0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2d8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2e0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2e8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2f0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x2f8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x300) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x308) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x310) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x318) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 800) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x328) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x330) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x338) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x340) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x348) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x350) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x358) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x360) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x368) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x370) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x378) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x380) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x388) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x390) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x398) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x3a0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x60) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x68) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x70) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x78) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x80) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x88) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x90) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x98) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0xa0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0xa8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0xb0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0xb8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0xc0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 200) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0xd0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0xd8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0xe0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0xe8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0xf0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0xf8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x100) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x108) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x110) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x118) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x120) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x128) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x130) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x138) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x140) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x148) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x150) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x158) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x160) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x168) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x170) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x178) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x180) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x188) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 400) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x198) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1a0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1a8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1b0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1b8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1c0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1c8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1d0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1d8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1e0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1e8) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1f0) = 0xffffffff00000000;
        *(undefined8 *)(puVar6 + 0x1f8) = 0xffffffff00000000;
        __cxa_guard_release(PTR_DAT_04bb4670);
      }
    }
    puVar1 = PTR_DAT_04bb4678;
    puVar6 = PTR_DAT_04bb4650;
    lVar10 = 0;
    do {
      local_178 = 0x100;
      local_75 = 0;
      pbVar20 = *(byte **)(puVar1 + lVar10 * 8 + 0x370);
      local_188 = &PTR_LAB_04914140;
      if (local_174 != pbVar20) {
        lVar9 = 0;
        do {
          if (pbVar20[lVar9] == 0) {
LAB_007c2504:
            iVar8 = (int)lVar9;
joined_r0x007c2508:
            if (0xff < iVar8) {
              iVar8 = 0xff;
            }
            goto LAB_007c2510;
          }
          if (pbVar20[lVar9 + 1] == 0) {
            lVar9 = lVar9 + 1;
            goto LAB_007c2504;
          }
          if (pbVar20[lVar9 + 2] == 0) {
            iVar8 = (int)lVar9 + 2;
            goto joined_r0x007c2508;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        iVar8 = 0;
LAB_007c2510:
        local_180 = local_174;
        memcpy(local_174,pbVar20,(long)iVar8);
        local_174[iVar8] = 0;
      }
      uVar7 = (uint)*pbVar20;
      if (*pbVar20 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0xffffffff;
        do {
          pbVar20 = pbVar20 + 1;
          uVar13 = crc32b(uVar13,uVar7,0x4c11db7);
          uVar7 = (uint)*pbVar20;
        } while (uVar7 != 0);
        uVar13 = ~uVar13;
      }
      puVar3 = (uint *)(PTR_DAT_04bb4668 + lVar10 * 8);
      *puVar3 = uVar13;
      puVar3[1] = (uint)lVar10;
      iVar8 = *(int *)puVar6;
      if (iVar8 < *(int *)(puVar6 + 4)) {
        *(uint **)(*(long *)(puVar6 + 8) + (long)iVar8 * 8) = puVar3;
        iVar8 = *(int *)puVar6 + 1;
        *(int *)puVar6 = iVar8;
      }
      puVar3 = (uint *)PTR_DAT_04bb4638;
      puVar5 = PTR_DAT_04bb4630;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x75);
    if (1 < iVar8) {
      lVar10 = *(long *)(puVar6 + 8);
      uVar13 = 0;
      uVar7 = iVar8 - 1;
      do {
        if ((int)uVar7 <= (int)uVar13) break;
        puVar11 = *(uint **)(lVar10 + (ulong)uVar13 * 8);
        uVar12 = (ulong)uVar13;
        if ((uVar7 - uVar13 & 1) == 0) {
          uVar15 = uVar12;
          puVar17 = puVar11;
        }
        else {
          uVar15 = uVar12 + 1;
          puVar17 = *(uint **)(lVar10 + uVar15 * 8);
          if (((puVar11 != (uint *)0x0) && (puVar17 != (uint *)0x0)) && (*puVar17 < *puVar11)) {
            *(uint **)(lVar10 + uVar15 * 8) = puVar11;
            *(uint **)(lVar10 + uVar12 * 8) = puVar17;
            puVar17 = puVar11;
          }
        }
        uVar16 = (ulong)uVar7;
        uVar7 = uVar13;
        if (~uVar12 + uVar16 != 0) {
          puVar18 = (undefined8 *)(lVar10 + 8 + uVar15 * 8);
          do {
            puVar11 = (uint *)*puVar18;
            uVar14 = (uint)uVar15;
            if (((puVar17 == (uint *)0x0) || (puVar11 == (uint *)0x0)) || (*puVar17 <= *puVar11)) {
              puVar19 = (uint *)puVar18[1];
              if (puVar11 != (uint *)0x0) goto LAB_007c2790;
LAB_007c2740:
              puVar11 = puVar19;
            }
            else {
              puVar18[-1] = puVar11;
              *puVar18 = puVar17;
              puVar19 = (uint *)puVar18[1];
              puVar11 = puVar17;
              uVar7 = uVar14;
              if (puVar17 == (uint *)0x0) goto LAB_007c2740;
LAB_007c2790:
              if (puVar19 == (uint *)0x0) goto LAB_007c2740;
              if (*puVar11 <= *puVar19) goto LAB_007c2740;
              uVar7 = uVar14 + 1;
              *puVar18 = puVar19;
              puVar18[1] = puVar11;
            }
            uVar15 = uVar15 + 2;
            puVar18 = puVar18 + 2;
            puVar17 = puVar11;
          } while (uVar16 != uVar15);
        }
        if ((int)uVar7 <= (int)uVar13) break;
        uVar15 = (ulong)uVar7;
        puVar11 = *(uint **)(lVar10 + (ulong)uVar7 * 8);
        uVar13 = uVar7;
        do {
          lVar9 = lVar10 + uVar15 * 8;
          puVar17 = *(uint **)(lVar9 + -8);
          if (((puVar11 != (uint *)0x0) && (puVar17 != (uint *)0x0)) && (*puVar11 < *puVar17)) {
            uVar13 = (uint)uVar15;
            *(uint **)(lVar9 + -8) = puVar11;
            *(uint **)(lVar10 + uVar15 * 8) = puVar17;
            puVar17 = puVar11;
          }
          uVar15 = uVar15 - 1;
          puVar11 = puVar17;
        } while ((long)uVar12 < (long)uVar15);
      } while (uVar13 != uVar7);
    }
    pcVar21 = PTR_DAT_04bb4648;
    *PTR_DAT_04bb4648 = 1;
    puVar6 = PTR_DAT_04bb4678;
  }
  PTR_DAT_04bb4678 = puVar6;
  if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
    if ((*pcVar21 != '\0') && (iVar8 = *(int *)PTR_DAT_04bb4650, iVar8 != 0)) {
      lVar10 = *(long *)((long)PTR_DAT_04bb4650 + 8);
      if (iVar8 < 2) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        iVar8 = iVar8 + -1;
        do {
          iVar2 = iVar8 + uVar7;
          if (iVar2 < 0 != SCARRY4(iVar8,uVar7)) {
            iVar2 = iVar2 + 1;
          }
          uVar13 = iVar2 >> 1;
          puVar11 = *(uint **)(lVar10 + (long)(int)uVar13 * 8);
          if (puVar11 == (uint *)0x0) goto joined_r0x007c27e0;
          uVar14 = *puVar11;
          if (uVar14 == param_1) goto joined_r0x007c27e0;
          if (uVar14 < param_1) {
            uVar7 = uVar13 + 1;
          }
          else {
            iVar8 = uVar13 - 1;
          }
        } while ((int)uVar7 < iVar8);
      }
      puVar11 = *(uint **)(lVar10 + (long)(int)uVar7 * 8);
      uVar13 = uVar7;
      if ((puVar11 == (uint *)0x0) || (*puVar11 == param_1)) {
joined_r0x007c27e0:
        if ((uVar13 < 0x75) &&
           (uVar7 = *(uint *)(*(long *)(lVar10 + (ulong)uVar13 * 8) + 4), uVar7 < 0x75)) {
          *puVar3 = param_1;
          *puVar5 = 1;
          *(uint *)PTR_DAT_04bb4640 = uVar7;
          return uVar7;
        }
      }
    }
    if (param_2 != (char *)0x0) {
      local_188 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      uVar7 = 0;
      local_180 = (byte *)param_2;
      do {
        pcVar21 = "";
        if (uVar7 < 0x75) {
          pcVar21 = *(char **)(puVar6 + (ulong)uVar7 * 8 + 0x370);
        }
        (*(code *)local_188[3])(&local_188);
        if ((byte *)pcVar21 == local_180) {
          return uVar7;
        }
        if (*pcVar21 == *local_180) {
          if (*pcVar21 == '\0') {
            return uVar7;
          }
          lVar10 = 0x7fffe;
          pbVar20 = local_180;
          while( true ) {
            if (pcVar21[1] != pbVar20[1]) break;
            if (pcVar21[1] == '\0') {
              return uVar7;
            }
            if (pcVar21[2] != pbVar20[2]) break;
            if (pcVar21[2] == '\0') {
              return uVar7;
            }
            if ((lVar10 == 0) || (cVar4 = pcVar21[3], cVar4 != pbVar20[3])) break;
            lVar10 = lVar10 + -3;
            pbVar20 = pbVar20 + 3;
            pcVar21 = pcVar21 + 3;
            if (cVar4 == '\0') {
              return uVar7;
            }
          }
        }
        uVar13 = 0x75;
        if ((int)uVar7 < 0x75) {
          uVar13 = uVar7 + 1;
        }
        uVar7 = uVar13;
      } while (uVar13 != 0x75);
    }
  }
  return 0xffffffff;
}

