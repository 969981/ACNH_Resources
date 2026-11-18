
void FUN_037530e0(undefined4 param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  void *__s;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  char cVar15;
  ushort uVar16;
  int *piVar17;
  undefined8 uVar18;
  long lVar19;
  int iVar20;
  undefined *local_828;
  undefined1 *local_820;
  undefined4 local_818;
  undefined1 local_814 [7];
  undefined1 local_80d;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  uint local_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_94;
  int local_8c;
  undefined **local_88;
  uint *puStack_80;
  
  local_94 = (undefined **)0xfffe;
  local_8c = param_2;
  FUN_0277d4ac(&local_94);
  local_80d = 0;
  local_818 = 8;
  local_820 = local_814;
  local_814[0] = 0;
  local_828 = PTR_DAT_04bb3768 + 0x10;
  uVar10 = FUN_0376b510(&local_828,param_1);
  if ((uVar10 & 1) == 0) {
    return;
  }
  uVar18 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_828 + 0x18))(&local_828);
  uVar8 = FUN_006bd550(local_820,0);
  local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar8);
  puVar11 = (uint *)FUN_0079e770(uVar18,&local_88);
  puVar7 = PTR_DAT_04bb40b8;
  puVar6 = PTR_DAT_04bb40b0;
  if (puVar11 == (uint *)0x0) {
    return;
  }
  if (*puVar11 != 0) {
    cVar15 = *PTR_DAT_04bb40b0;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar7 + 0x50);
        if (-1 < (int)uVar9) {
          if ((ushort *)((ulong)uVar9 + (long)puVar11) != (ushort *)0x0) {
            uVar16 = *(ushort *)((ulong)uVar9 + (long)puVar11);
            goto LAB_0375329c;
          }
          break;
        }
        if (uVar9 != 0xffffffff) break;
      }
      puVar14 = (uint *)(ulong)*puVar11;
      uVar16 = 0xfffe;
      if ((*puVar11 == 0) || (puVar11 == puVar14)) goto LAB_0375329c;
      lVar19 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar14)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)puVar11 + (lVar19 - (long)puVar14);
      if (lVar19 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar14));
      *(undefined4 *)(puVar7 + 0x50) = 0xfffffffe;
      if (uVar10 == 0) break;
      piVar17 = (int *)(lVar19 + 4);
      while (piVar17[-1] != -0x78f0e1d7) {
        piVar17 = piVar17 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_03753298;
      }
      iVar1 = 0;
      if (*piVar17 != -1) {
        iVar1 = *piVar17;
      }
      *(int *)(puVar7 + 0x50) = iVar1;
      if (*puVar11 == 0) break;
    } while( true );
  }
LAB_03753298:
  uVar16 = 0xfffe;
LAB_0375329c:
  local_88 = (undefined **)(ulong)uVar16;
  FUN_0277d4ac(&local_88);
  puVar6 = PTR_DAT_04bb43c0;
  local_94 = local_88;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(&local_94);
  iVar1 = local_8c;
  if (*(long *)puVar6 == 0) {
    return;
  }
  lVar19 = *(long *)(lVar19 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
  if (*(uint *)(lVar19 + 0x1d8) <= uVar9) {
    return;
  }
  if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
    return;
  }
  local_98 = (uint)(local_8c == 0);
  if ((short)local_94 != -2) {
    uVar10 = FUN_02686510(&local_94);
    if ((uVar10 & 1) == 0) {
      if (local_98 != 0) {
        lVar19 = *(long *)PTR_DAT_04bb27f8;
        FUN_0277dedc(&local_94);
        lVar19 = (**(code **)(*(long *)(lVar19 + 0x3b0) + 0x18))(lVar19 + 0x3b0);
        uVar9 = FUN_0277d6c4(&local_94);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar12 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar19 + lVar12) = *(uint *)(lVar19 + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
        }
      }
      if (local_98 != 1) {
        FUN_02686340(&local_94);
      }
    }
    if ((iVar1 != 0) && (uVar10 = FUN_026871c0(&local_94), (uVar10 & 1) == 0)) {
      FUN_02686ff0(&local_94);
      FUN_02687440(&local_94);
    }
  }
  lVar19 = *(long *)puVar6;
  local_a0 = 0;
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  local_a8 = (undefined4)local_94;
  uStack_a4 = local_94._4_4_;
  uVar9 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar6 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      lVar19 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(&local_94);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar19 + 0x1d8)) &&
         (puVar11 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8),
         puVar11 != (uint *)0x0)) {
        uVar9 = *puVar11;
        local_b4 = 0;
        if ((uVar9 == 0) || (puVar11 == (uint *)(ulong)uVar9)) goto LAB_037534f0;
        puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
        local_b4 = 0;
        if (*puVar14 == 0) goto LAB_037534f0;
        uVar9 = puVar14[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
          lVar19 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar14 + lVar19 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar19 != 0) {
            uVar4 = 0;
            if ((ulong)uVar9 != 0) {
              uVar4 = (uint)((ulong)((long)puVar11 - lVar19) / (ulong)uVar9);
            }
            if (*puVar14 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc0020) &&
               (local_b4 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar4 * 2)
               , local_b4 < 0x5b6)) goto LAB_037534f0;
          }
        }
      }
    }
  }
  local_b4 = 0;
LAB_037534f0:
  local_828 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_820,0,0x754);
  uVar9 = nn::os::GetSystemTick();
  local_cc = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
  local_c8 = (local_cc ^ local_cc >> 0x1e) * 0x6c078965 + 2;
  local_c4 = (local_c8 ^ local_c8 >> 0x1e) * 0x6c078965 + 3;
  local_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(local_828 + 0x18))(&local_828);
  memset(__s,0,0x754);
  puStack_80 = &local_b4;
  local_88 = &PTR_FUN_049ff858;
  FUN_008a1ba0(&local_828,&local_88);
  lVar19 = (**(code **)(local_828 + 0x20))(&local_828);
  uVar10 = 0;
  do {
    if ((*(uint *)(lVar19 + (uVar10 >> 5) * 4) >> (ulong)((uint)uVar10 & 0x1f) & 1) != 0)
    goto LAB_037535e0;
    uVar9 = (uint)uVar10 + 1;
    uVar10 = (ulong)uVar9;
  } while (uVar9 != 15000);
  uVar10 = 0;
LAB_037535e0:
  lVar12 = (**(code **)(local_828 + 0x20))(&local_828);
  puVar7 = PTR_DAT_04bbfe58;
  puVar6 = PTR_DAT_04bb37e0;
  iVar20 = 15000;
  do {
    if ((*(uint *)(lVar12 + (ulong)(iVar20 - 1U >> 5) * 4) >> (ulong)(iVar20 - 1U & 0x1f) & 1) != 0)
    break;
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
  if (iVar20 == (int)uVar10) {
    return;
  }
LAB_03753670:
  psVar2 = (short *)(puVar7 + uVar10 * 8);
  if (0x752 < (uint)(uVar10 >> 3)) {
    psVar2 = (short *)puVar7;
  }
  psVar3 = (short *)puVar6;
  if ((uint)uVar10 < 0x3a99) {
    psVar3 = psVar2;
  }
  local_88 = *(undefined ***)psVar3;
  if (*psVar3 != -2) {
    uVar13 = FUN_02686510(&local_88);
    if ((uVar13 & 1) == 0) {
      if (local_98 != 0) {
        lVar12 = *(long *)PTR_DAT_04bb27f8;
        FUN_0277dedc(&local_88);
        lVar12 = (**(code **)(*(long *)(lVar12 + 0x3b0) + 0x18))(lVar12 + 0x3b0);
        uVar9 = FUN_0277d6c4(&local_88);
        if ((uVar9 >> 3 & 0x1fff) < 0x753) {
          lVar5 = (ulong)((uVar9 & 0xffff) >> 5) * 4;
          *(uint *)(lVar12 + lVar5) = *(uint *)(lVar12 + lVar5) | 1 << (ulong)(uVar9 & 0x1f);
        }
      }
      if (local_98 != 1) {
        FUN_02686340(&local_88);
      }
    }
    if ((iVar1 != 0) && (uVar13 = FUN_026871c0(&local_88), (uVar13 & 1) == 0)) {
      FUN_02686ff0(&local_88);
      FUN_02687440(&local_88);
    }
  }
  do {
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulong)uVar9;
    if (0x752 < uVar9 >> 3) {
      uVar9 = 0x3a95;
      goto LAB_037537a0;
    }
  } while ((*(uint *)(lVar19 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) == 0);
  goto LAB_03753668;
  while( true ) {
    if ((*(uint *)(lVar19 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0)
    goto LAB_03753664;
    uVar9 = uVar9 - 3;
    if (uVar9 == 0xfffffffd) break;
LAB_037537a0:
    uVar4 = uVar9 + 2;
    if (((*(uint *)(lVar19 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1) != 0) ||
       (uVar4 = uVar9 + 1,
       (*(uint *)(lVar19 + (ulong)(uVar4 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
      uVar9 = uVar4;
LAB_03753664:
      uVar10 = (ulong)(uVar9 + 1);
      goto LAB_03753668;
    }
  }
  uVar10 = 0;
LAB_03753668:
  if (iVar20 == (int)uVar10) {
    return;
  }
  goto LAB_03753670;
}

