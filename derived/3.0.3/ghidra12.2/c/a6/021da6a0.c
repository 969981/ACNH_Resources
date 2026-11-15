
/* WARNING: Removing unreachable block (ram,0x021da850) */

void FUN_021da6a0(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  ushort uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  long *plVar16;
  uint *puVar17;
  ushort uVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint local_64;
  
  if (DAT_053e0208 == 0) {
    return;
  }
  puVar15 = DAT_055c1b60 + -8;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    puVar17 = &DAT_055c11c8;
  }
  else {
    uVar18 = 0;
    puVar19 = DAT_055c1b60;
    puVar12 = puVar15;
    do {
      if (*(int *)(puVar12 + 7) == 0x6622bd46) {
        bVar6 = uVar18 == 0xffff;
        puVar17 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar18 & 0xffffffffU) * 8);
        if ((uVar18 & 0xff00) != 0) {
          puVar17 = (uint *)PTR_DAT_04bc39f8;
        }
        goto LAB_021da768;
      }
      puVar19 = (undefined8 *)puVar19[1];
      uVar18 = uVar18 + 1;
      puVar12 = puVar19 + -8;
      puVar17 = (uint *)PTR_DAT_04bc39f8;
    } while (puVar19 != &DAT_055c1b58);
  }
  uVar18 = 0xffff;
  bVar6 = true;
LAB_021da768:
  uVar21 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar27 = 0;
  uVar22 = 0;
  do {
    uVar20 = (uint)uVar21;
    lVar4 = *(long *)PTR_DAT_04bb4760 + (uVar21 & 0xffffffff) * 0x15;
    if (0x6c < uVar20) {
      lVar4 = *(long *)PTR_DAT_04bb4760;
    }
    local_64 = uVar20;
    if (bVar6) {
LAB_021da7dc:
      uVar11 = 0xffff;
    }
    else {
      local_64 = 3;
      uVar11 = uVar18;
      if ((*puVar17 & 8) != 0) {
        uVar11 = 0xffff;
      }
      if ((puVar15 != &DAT_055c1b18) && ((*puVar17 & 8) != 0)) {
        uVar11 = 0;
        puVar19 = DAT_055c1b60;
        puVar12 = puVar15;
        do {
          if (*(int *)(puVar12 + 7) == 0x6622bd46) goto LAB_021da854;
          puVar19 = (undefined8 *)puVar19[1];
          uVar11 = uVar11 + 1;
          puVar12 = puVar19 + -8;
        } while (puVar19 != &DAT_055c1b58);
        goto LAB_021da7dc;
      }
    }
LAB_021da854:
    uVar2 = (ushort)*(byte *)(lVar4 + 4) | (*(byte *)(lVar4 + 5) & 3) << 8;
    if (0x1ff < uVar2) {
      uVar2 = uVar2 | 0xfc00;
    }
    if ((((uVar2 == uVar11) && (uVar23 = uVar23 + 1, uVar20 < 10)) &&
        ((&DAT_053fee41)[uVar21 * 0xba0] != '\0')) &&
       (((&DAT_053fede8)[uVar21 * 0x174] != 0 &&
        (*(int *)((&DAT_053fede8)[uVar21 * 0x174] + 4) != 0x13)))) {
      if ((int)(&DAT_053fe898)[uVar21 * 0x2e8] < 1) {
        local_64 = 0;
LAB_021da92c:
        uVar20 = 1 << (ulong)(uVar20 & 0x1f);
      }
      else {
        local_64 = 0;
        iVar13 = (&DAT_053fe898)[uVar21 * 0x2e8] + (&DAT_053fe894)[uVar21 * 0x2e8] + -1;
        iVar14 = 0;
        if ((int)(&DAT_053fe890)[uVar21 * 0x2e8] <= iVar13) {
          iVar14 = (&DAT_053fe890)[uVar21 * 0x2e8];
        }
        puVar10 = (uint *)((&DAT_053fe888)[uVar21 * 0x174] + (long)(iVar13 - iVar14) * 0x14);
        if ((char)puVar10[4] == '\0') {
          local_64 = *puVar10;
        }
        if (0x1a < (int)local_64) {
          uVar24 = 1 << (ulong)(uVar20 & 0x1f) | uVar24;
          goto LAB_021da7b0;
        }
        if ((char)puVar10[4] != '\0') goto LAB_021da92c;
        uVar20 = 1 << (ulong)(uVar20 & 0x1f);
        if (*puVar10 == 0x1e) {
          uVar22 = uVar22 | uVar20;
          goto LAB_021da7b0;
        }
      }
      uVar27 = uVar20 | uVar27;
    }
LAB_021da7b0:
    uVar21 = uVar21 + 1;
  } while (uVar21 != 10);
  iVar13 = 0;
  iVar14 = 0;
  do {
    if ((&DAT_05454358)[(long)iVar14 * 0x2d8] != '\0') {
      lVar4 = (long)iVar14;
      if ((&DAT_054543c4)[lVar4 * 0x2d8] == '\0') {
        if ((int)(&DAT_05454398)[lVar4 * 0xb6] < 1) {
          puVar17 = (uint *)PTR_DAT_04bc2808;
        }
        else {
          iVar5 = (&DAT_05454398)[lVar4 * 0xb6] + (&DAT_05454394)[lVar4 * 0xb6] + -1;
          iVar3 = 0;
          if ((int)(&DAT_05454390)[lVar4 * 0xb6] <= iVar5) {
            iVar3 = (&DAT_05454390)[lVar4 * 0xb6];
          }
          puVar17 = (uint *)((&DAT_05454388)[lVar4 * 0x5b] + (long)(iVar5 - iVar3) * 0x10 + 4);
        }
      }
      else {
        puVar17 = &DAT_054543c0 + lVar4 * 0xb6;
      }
      local_64 = *puVar17;
      if (local_64 == 0) {
        iVar13 = iVar13 + 1;
      }
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 != 0x11);
  uVar20 = 5 - iVar13;
  if (uVar23 <= uVar20) {
    return;
  }
  uVar7 = nn::os::GetSystemTick();
  uVar28 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  uVar8 = (uVar28 ^ uVar28 >> 0x1e) * 0x6c078965 + 2;
  uVar29 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
  uVar21 = (ulong)((uVar29 ^ uVar29 >> 0x1e) * 0x6c078965 + 4);
  uVar7 = uVar22 - (uVar22 >> 1 & 0x55555555);
  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
  uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
  uVar7 = uVar7 + (uVar7 >> 8);
  uVar7 = uVar7 + (uVar7 >> 0x10) & 0x3f;
  uVar26 = (ulong)uVar7;
  plVar16 = (long *)PTR_DAT_04bb3968;
  if (uVar7 == 0) {
    uVar25 = (ulong)uVar29;
  }
  else {
    uVar7 = uVar28;
    uVar1 = uVar8;
    do {
      uVar8 = uVar29;
      uVar28 = uVar1;
      uVar25 = uVar21;
      uVar7 = uVar7 ^ uVar7 << 0xb;
      uVar29 = (uint)uVar25;
      uVar21 = (ulong)(uVar7 >> 8 ^ uVar29 >> 0x13 ^ uVar7 ^ uVar29);
      if ((uVar22 != 0) &&
         (uVar7 = uVar22 - (uVar22 >> 1 & 0x55555555),
         uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333),
         iVar14 = (int)(uVar26 * uVar21 >> 0x20), uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f,
         uVar7 = uVar7 + (uVar7 >> 8), iVar14 + 1 <= (int)(uVar7 + (uVar7 >> 0x10) & 0x3f))) {
        iVar14 = iVar14 + 2;
        uVar7 = uVar22;
        do {
          iVar14 = iVar14 + -1;
          if (iVar14 < 2) {
            local_64 = 1;
            uVar7 = uVar7 - 1 & (uVar7 ^ 0xffffffff);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
            uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
            uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
            uVar7 = uVar7 + (uVar7 >> 8);
            uVar7 = uVar7 + (uVar7 >> 0x10);
            uVar1 = uVar7 & 0x3f;
            if (uVar1 < 10) {
              if ((&DAT_053fee41)[(ulong)uVar1 * 0xba0] != '\0') {
                FUN_01e2caf8(*plVar16 + 0xda0,uVar1 * 0xba0 + 0x53fe850,1,&local_64,0,0);
                plVar16 = (long *)PTR_DAT_04bb3968;
              }
              uVar7 = ~(1 << (ulong)(uVar7 & 0x1f));
              goto LAB_021dabd8;
            }
            break;
          }
          uVar7 = uVar7 - 1 & uVar7;
        } while (uVar7 != 0);
      }
      uVar7 = 0xffffffff;
LAB_021dabd8:
      uVar23 = uVar23 - 1;
      if (uVar23 <= uVar20) break;
      uVar26 = uVar26 - 1;
      uVar22 = uVar7 & uVar22;
      uVar7 = uVar28;
      uVar1 = uVar8;
    } while ((uVar26 & 0xffffffff) != 0);
    if (uVar23 <= uVar20) goto joined_r0x021daf8c;
  }
  uVar22 = uVar27 - (uVar27 >> 1 & 0x55555555);
  uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
  uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
  uVar22 = uVar22 + (uVar22 >> 8);
  uVar22 = uVar22 + (uVar22 >> 0x10) & 0x3f;
  uVar26 = (ulong)uVar22;
  if ((uVar22 != 0) && (uVar20 < uVar23)) {
    uVar9 = uVar25;
    uVar22 = uVar28;
    do {
      uVar28 = uVar8;
      uVar25 = uVar21;
      uVar22 = uVar22 ^ uVar22 << 0xb;
      uVar8 = (uint)uVar9;
      uVar21 = (ulong)(uVar22 >> 8 ^ (uint)uVar25 >> 0x13 ^ uVar22 ^ (uint)uVar25);
      if ((uVar27 != 0) &&
         (uVar22 = uVar27 - (uVar27 >> 1 & 0x55555555),
         uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333),
         iVar14 = (int)(uVar26 * uVar21 >> 0x20), uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f,
         uVar22 = uVar22 + (uVar22 >> 8), iVar14 + 1 <= (int)(uVar22 + (uVar22 >> 0x10) & 0x3f))) {
        iVar14 = iVar14 + 2;
        uVar22 = uVar27;
        do {
          iVar14 = iVar14 + -1;
          if (iVar14 < 2) {
            local_64 = 1;
            uVar22 = uVar22 - 1 & (uVar22 ^ 0xffffffff);
            uVar22 = uVar22 - (uVar22 >> 1 & 0x55555555);
            uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
            uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
            uVar22 = uVar22 + (uVar22 >> 8);
            uVar22 = uVar22 + (uVar22 >> 0x10);
            uVar7 = uVar22 & 0x3f;
            if (uVar7 < 10) {
              if ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0') {
                FUN_01e2caf8(*plVar16 + 0xda0,uVar7 * 0xba0 + 0x53fe850,1,&local_64,0,0);
                plVar16 = (long *)PTR_DAT_04bb3968;
              }
              uVar22 = ~(1 << (ulong)(uVar22 & 0x1f));
              goto LAB_021dadc4;
            }
            break;
          }
          uVar22 = uVar22 - 1 & uVar22;
        } while (uVar22 != 0);
      }
      uVar22 = 0xffffffff;
LAB_021dadc4:
      uVar23 = uVar23 - 1;
      if (uVar23 <= uVar20) break;
      uVar26 = uVar26 - 1;
      uVar27 = uVar22 & uVar27;
      uVar9 = uVar25;
      uVar22 = uVar28;
    } while ((uVar26 & 0xffffffff) != 0);
  }
joined_r0x021daf8c:
  if (uVar20 < uVar23) {
    uVar22 = uVar24 - (uVar24 >> 1 & 0x55555555);
    uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
    uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
    uVar22 = uVar22 + (uVar22 >> 8);
    uVar22 = uVar22 + (uVar22 >> 0x10) & 0x3f;
    uVar26 = (ulong)uVar22;
    if (uVar22 != 0) {
      do {
        uVar9 = uVar21;
        uVar28 = uVar28 ^ uVar28 << 0xb;
        uVar22 = (uint)uVar9;
        uVar21 = (ulong)(uVar28 >> 8 ^ uVar22 >> 0x13 ^ uVar28 ^ uVar22);
        if ((uVar24 != 0) &&
           (uVar22 = uVar24 - (uVar24 >> 1 & 0x55555555),
           uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333),
           iVar14 = (int)(uVar26 * uVar21 >> 0x20), uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f,
           uVar22 = uVar22 + (uVar22 >> 8), iVar14 + 1 <= (int)(uVar22 + (uVar22 >> 0x10) & 0x3f)))
        {
          iVar14 = iVar14 + 2;
          uVar22 = uVar24;
          do {
            iVar14 = iVar14 + -1;
            if (iVar14 < 2) {
              local_64 = 1;
              uVar22 = uVar22 - 1 & (uVar22 ^ 0xffffffff);
              uVar22 = uVar22 - (uVar22 >> 1 & 0x55555555);
              uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
              uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
              uVar22 = uVar22 + (uVar22 >> 8);
              uVar22 = uVar22 + (uVar22 >> 0x10);
              uVar27 = uVar22 & 0x3f;
              if (uVar27 < 10) {
                if ((&DAT_053fee41)[(ulong)uVar27 * 0xba0] != '\0') {
                  FUN_01e2caf8(*plVar16 + 0xda0,uVar27 * 0xba0 + 0x53fe850,1,&local_64,0,0);
                  plVar16 = (long *)PTR_DAT_04bb3968;
                }
                uVar22 = ~(1 << (ulong)(uVar22 & 0x1f));
                goto LAB_021daf54;
              }
              break;
            }
            uVar22 = uVar22 - 1 & uVar22;
          } while (uVar22 != 0);
        }
        uVar22 = 0xffffffff;
LAB_021daf54:
        uVar23 = uVar23 - 1;
        if (uVar23 <= uVar20) {
          return;
        }
        uVar26 = uVar26 - 1;
        uVar24 = uVar22 & uVar24;
        uVar22 = (uint)uVar25;
        uVar25 = uVar9;
        uVar28 = uVar8;
        uVar8 = uVar22;
      } while ((uVar26 & 0xffffffff) != 0);
    }
  }
  return;
}

