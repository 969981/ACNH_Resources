
/* WARNING: Removing unreachable block (ram,0x03b09184) */
/* WARNING: Removing unreachable block (ram,0x03b09168) */
/* WARNING: Removing unreachable block (ram,0x03b091a0) */

void FUN_03b090f0(long param_1,long param_2)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  
  puVar4 = PTR_DAT_04bb3508;
  if (*(int *)(param_1 + 0x398) == 2) {
    return;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x31c) = 5;
    uVar9 = *(uint *)(param_1 + 0x338);
    if (0 < (int)uVar9) {
      uVar11 = 0;
      do {
        uVar3 = uVar11 + 1;
        if (uVar9 <= uVar11) {
          uVar11 = 0;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x340) + (long)(int)uVar11 * 4) = 0;
        uVar9 = *(uint *)(param_1 + 0x338);
        uVar11 = uVar3;
      } while ((int)uVar3 < (int)uVar9);
    }
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x300) = 1;
    *(undefined4 *)(param_1 + 0x304) = 1;
    *(undefined4 *)(param_1 + 0x308) = 1;
    *(undefined4 *)(param_1 + 0x390) = 0;
    *(undefined4 *)(param_1 + 0x31c) = 3;
    uVar9 = *(uint *)(param_1 + 0x368);
    if (uVar9 < *(uint *)(param_1 + 0x358)) {
      *(uint *)(param_1 + 0x368) = uVar9 + 1;
      *(long *)(*(long *)(param_1 + 0x360) + (long)(int)uVar9 * 8) = param_1 + 0x370;
    }
    FUN_03a0cd90(param_2,"VfxMgr::calc",param_1 + 0x2a8,*(undefined4 *)PTR_DAT_04bd0f30,0,0);
    return;
  }
  lVar13 = *(long *)(param_1 + 0x388);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar6 == 0) {
    iVar5 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar5 = (int)lVar6 + -1;
  }
  if (*(char *)(lVar13 + iVar5 + 0x194c) == '\0') {
    *(undefined4 *)(lVar13 + (long)iVar5 * 4 + 0x1940) = 1;
    uVar7 = nn::os::GetSystemTick();
    *(undefined8 *)(lVar13 + (long)iVar5 * 8 + 0x1928) = uVar7;
  }
  lVar15 = *(long *)(param_1 + 0x388);
  lVar13 = 0;
  lVar6 = lVar15 + 0x4f8;
  do {
    lVar10 = lVar15 + lVar13 * 0x50;
    if (0 < *(int *)(lVar10 + 0x538)) {
      lVar16 = 0;
      do {
        FUN_03af1480(*(undefined8 *)(lVar6 + lVar16 * 8));
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(lVar10 + 0x538));
    }
    lVar13 = lVar13 + 1;
    lVar6 = lVar6 + 0x50;
  } while (lVar13 != 0x40);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (lVar6 == 0) {
    iVar5 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar5 = (int)lVar6 + -1;
  }
  uVar14 = 0;
  lVar6 = 0x400;
  do {
    lVar15 = *(long *)(param_1 + 0x388);
    uVar9 = 1 << (ulong)((uint)uVar14 & 0x1f);
    lVar13 = lVar15 + (uVar14 >> 5 & 0x7ffffff) * 4;
    if ((uVar9 & *(uint *)(lVar13 + 0x3e4)) == 0) {
      if (((*(uint *)(lVar13 + 0x3dc) & uVar9) == 0) ||
         ((*(int *)(lVar15 + 0x398) == 1 && ((*(uint *)(lVar13 + 0x3ec) & uVar9) != 0)))) {
        lVar13 = *(long *)(lVar15 + 0x18);
        if (uVar14 == 0x3f) {
          if (*(long *)(lVar13 + 0x1b30) == 0) goto LAB_03b09418;
          if (*(char *)(lVar13 + 0x2be8) == '\0') {
            uVar17 = 0;
            goto LAB_03b09408;
          }
LAB_03b093d8:
          uVar8 = 0x3f;
        }
        else {
          uVar8 = uVar14 & 0xffffffff;
        }
        uVar17 = 0;
        uVar7 = 0;
LAB_03b09414:
        FUN_0033de30(uVar17,lVar13,0,uVar8,uVar7);
      }
      else {
        lVar13 = *(long *)(lVar15 + 0x18);
        uVar17 = *(undefined4 *)(lVar15 + uVar14 * 4 + 0x3f4);
        if (uVar14 != 0x3f) {
          uVar8 = uVar14 & 0xffffffff;
LAB_03b09410:
          uVar7 = 1;
          goto LAB_03b09414;
        }
        if (*(long *)(lVar13 + 0x1b30) != 0) {
          if (*(char *)(lVar13 + 0x2be8) != '\0') goto LAB_03b093d8;
LAB_03b09408:
          uVar8 = 0x3f;
          goto LAB_03b09410;
        }
      }
LAB_03b09418:
      lVar15 = lVar15 + uVar14 * 0x50;
      *(undefined2 *)(lVar15 + 0x540) = 0;
      *(undefined4 *)(lVar15 + 0x53c) = 0;
      lVar13 = *(long *)(param_1 + 0x388);
      lVar15 = *(long *)(lVar13 + 0x18);
      uVar8 = (ulong)*(uint *)(lVar15 + 0x1b0);
      if (0 < (int)*(uint *)(lVar15 + 0x1b0)) {
        if ((*(uint *)(*(long *)(lVar15 + 0x1b8) + uVar14 * 4 + 0x100) & 0xc00) == 0) {
          uVar12 = 0;
          lVar10 = *(long *)(lVar15 + 0x1b8) + lVar6;
          do {
            if (uVar8 - 1 == uVar12) goto LAB_03b09470;
            pbVar1 = (byte *)(lVar10 + 1);
            lVar10 = lVar10 + 0x300;
            uVar12 = uVar12 + 1;
          } while ((*pbVar1 & 0xc) == 0);
          if (uVar12 < uVar8) goto LAB_03b0944c;
        }
        else {
LAB_03b0944c:
          lVar15 = lVar13 + uVar14 * 0x50 + (long)iVar5 * 2;
          *(ushort *)(lVar15 + 0x53c) = *(ushort *)(lVar15 + 0x53c) | 2;
          lVar15 = *(long *)(*(long *)(param_1 + 0x388) + 0x18);
          uVar8 = (ulong)*(uint *)(lVar15 + 0x1b0);
        }
LAB_03b09470:
        if (0 < (int)uVar8) {
          lVar15 = *(long *)(lVar15 + 0x1b8);
          if ((*(uint *)(lVar15 + uVar14 * 4 + 0x100) & 0xfffff3ff) == 0) {
            uVar12 = 0;
            do {
              if (uVar8 - 1 == uVar12) goto LAB_03b09340;
              puVar2 = (uint *)(lVar15 + lVar6);
              lVar15 = lVar15 + 0x300;
              uVar12 = uVar12 + 1;
            } while ((*puVar2 & 0xfffff3ff) == 0);
            if (uVar8 <= uVar12) goto LAB_03b09340;
          }
          lVar13 = lVar13 + uVar14 * 0x50 + (long)iVar5 * 2;
          *(ushort *)(lVar13 + 0x53c) = *(ushort *)(lVar13 + 0x53c) | 1;
        }
      }
    }
LAB_03b09340:
    uVar14 = uVar14 + 1;
    lVar6 = lVar6 + 4;
    if (uVar14 == 0x40) {
      lVar13 = *(long *)(param_1 + 0x388);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (lVar6 == 0) {
        iVar5 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar5 = (int)lVar6 + -1;
      }
      if (*(char *)(lVar13 + iVar5 + 0x194c) == '\0') {
        lVar15 = nn::os::GetSystemTick();
        lVar6 = lVar13 + (long)*(int *)(lVar13 + 0x1940 + (long)iVar5 * 4) * 8;
        *(long *)(lVar6 + 0x18f8) =
             (lVar15 - *(long *)(lVar13 + (long)iVar5 * 8 + 0x1928)) + *(long *)(lVar6 + 0x18f8);
        *(undefined4 *)(lVar13 + 0x1940 + (long)iVar5 * 4) = 0xffffffff;
      }
      return;
    }
  } while( true );
}

