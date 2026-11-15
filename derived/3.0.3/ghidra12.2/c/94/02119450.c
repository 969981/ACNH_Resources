
void FUN_02119450(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  int local_6c;
  byte local_68 [4];
  int local_64;
  
  puVar9 = PTR_DAT_04bc2280;
  puVar8 = PTR_DAT_04bb37d8;
  puVar7 = PTR_DAT_04bb37d0;
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    lVar20 = (long)*(int *)(param_1 + 0x1e8) << 3;
    plVar19 = *(long **)(param_1 + 0x1f0);
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    puVar2 = PTR_DAT_04bb6718 + 0x10;
    do {
      uVar17 = *(uint *)(*plVar19 + 0xe8);
      if ((uVar17 != 0) && (lVar15 = *(long *)puVar5, lVar15 != 0)) {
        plVar18 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                            ((ulong)(uVar17 >> 0x11) & 0x7ff8));
        if ((plVar18 == (long *)0x0) ||
           (((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar18 + 0x46) != uVar17)))) {
          plVar18 = (long *)0x0;
        }
        if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
          plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
          lVar15 = *(long *)puVar5;
          iVar10 = (**(code **)(*plVar12 + 0x60))();
          if (iVar10 < 0x11) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(uint *)(lVar15 + 0x5e8);
            if (4 < uVar17) goto LAB_02119578;
            uVar17 = 5U >> (ulong)(uVar17 & 0x1f) & 1;
          }
        }
        else {
LAB_02119578:
          uVar17 = 1;
        }
        if (plVar18 != (long *)0x0) {
          if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
            *(undefined **)puVar7 = puVar1;
            __cxa_guard_release(puVar8);
          }
          uVar11 = (**(code **)(*plVar18 + 0x20))(plVar18,puVar7);
          if (uVar17 == 0 && ((uVar11 ^ 0xffffffff) & 1) == 0) {
            puVar13 = (undefined8 *)plVar18[0x77];
            if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
              *(undefined **)PTR_DAT_04bc2278 = puVar2;
              __cxa_guard_release(puVar9);
            }
            if ((puVar13 != (undefined8 *)0x0) &&
               (uVar14 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc2278), (uVar14 & 1) != 0)) {
              FUN_01f72938(puVar13,puVar13 + 0x15f0);
            }
          }
        }
      }
      plVar19 = plVar19 + 1;
      lVar20 = lVar20 + -8;
    } while (lVar20 != 0);
  }
  puVar5 = PTR_DAT_04bb2720;
  if (*(int *)(param_1 + 0x1604) == 1) {
    lVar20 = *(long *)PTR_DAT_04bb2720;
    if ((lVar20 != 0) && (*(long *)(lVar20 + 0x330) != 0)) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
      iVar10 = FUN_006bd550(*puVar13,0);
      if ((iVar10 == 0x758f7eaf) &&
         ((*(long *)puVar5 != 0 && (lVar20 = *(long *)(*(long *)puVar5 + 0x330), lVar20 != 0)))) {
        uVar17 = *(uint *)(lVar20 + 0x248);
        param_1 = param_1 + 0x10;
        if (uVar17 < 8) {
          param_1 = param_1 + (ulong)uVar17 * 0x1c;
        }
        goto LAB_021196d4;
      }
    }
    param_1 = param_1 + 0x10;
  }
  else {
    param_1 = param_1 + 0xd4;
  }
LAB_021196d4:
  local_64 = *(int *)(param_1 + 0x18);
  if (local_64 == 0) {
    return;
  }
  lVar20 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar20 == 0) {
LAB_02119744:
    if (7 < *pbVar16) {
LAB_02119750:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar20 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar20 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar3 = (uint *)(lVar20 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar16 = (byte *)(lVar20 + 0x471);
          }
        }
        local_68[0] = *pbVar16;
        if (local_68[0] < 8) goto LAB_021197d0;
      }
      pbVar16 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar20 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar20 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar20 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02119744;
      }
      goto LAB_02119750;
    }
  }
  local_68[0] = *pbVar16;
  if (7 < local_68[0]) {
    local_68[0] = 0xff;
  }
LAB_021197d0:
  uVar14 = FUN_025309d0(local_68);
  if (((uVar14 & 1) != 0) && (iVar10 = FUN_00a74b78(local_68), iVar10 != 4)) {
    local_6c = local_64;
    FUN_02537ab4(local_68,&local_6c,8);
  }
  return;
}

