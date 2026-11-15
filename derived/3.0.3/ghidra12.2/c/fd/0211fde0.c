
undefined8 FUN_0211fde0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  int local_68;
  byte local_64 [4];
  
  puVar6 = PTR_DAT_04bb2720;
  if (*(int *)(param_1 + 0x1604) == 1) {
    lVar15 = *(long *)PTR_DAT_04bb2720;
    if ((lVar15 != 0) && (*(long *)(lVar15 + 0x330) != 0)) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar10 = FUN_006bd550(*puVar12,0);
      if ((iVar10 == 0x758f7eaf) &&
         ((*(long *)puVar6 != 0 && (lVar15 = *(long *)(*(long *)puVar6 + 0x330), lVar15 != 0)))) {
        uVar18 = *(uint *)(lVar15 + 0x248);
        lVar15 = param_1 + 0x10;
        if (uVar18 < 8) {
          lVar15 = lVar15 + (ulong)uVar18 * 0x1c;
        }
        goto LAB_0211fe9c;
      }
    }
    lVar15 = param_1 + 0x10;
  }
  else {
    lVar15 = param_1 + 0xd4;
  }
LAB_0211fe9c:
  if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0211ffb0;
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar17 == 0) {
LAB_0211ff08:
    if (*pbVar16 < 8) goto LAB_0211ff80;
LAB_0211ff14:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0211ff78:
      pbVar16 = PTR_DAT_04bb5038;
      goto LAB_0211ff80;
    }
    lVar17 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar17 + 0x473);
    pbVar16 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar3 = (uint *)(lVar17 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar16 = (byte *)(lVar17 + 0x471);
      }
    }
    local_64[0] = *pbVar16;
    if (7 < local_64[0]) goto LAB_0211ff78;
  }
  else {
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar17 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0211ff08;
      }
      goto LAB_0211ff14;
    }
LAB_0211ff80:
    local_64[0] = *pbVar16;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  local_68 = *(int *)(lVar15 + 0x18);
  uVar13 = FUN_02536144(local_64,&local_68);
  if ((uVar13 & 1) != 0) {
    return 1;
  }
LAB_0211ffb0:
  puVar9 = PTR_DAT_04bb37d8;
  puVar8 = PTR_DAT_04bb37d0;
  puVar7 = PTR_DAT_04bb3350;
  puVar6 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    lVar15 = (long)*(int *)(param_1 + 0x1e8) << 3;
    plVar20 = *(long **)(param_1 + 0x1f0);
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    puVar2 = PTR_DAT_04bb6718 + 0x10;
    do {
      uVar18 = *(uint *)(*plVar20 + 0xe8);
      if ((uVar18 != 0) && (lVar17 = *(long *)puVar6, lVar17 != 0)) {
        plVar19 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                            ((ulong)(uVar18 >> 0x11) & 0x7ff8));
        if ((plVar19 == (long *)0x0) ||
           (((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar19 + 0x46) != uVar18)))) {
          plVar19 = (long *)0x0;
        }
        if (*(int *)(lVar17 + 0x288) == 1 || *(int *)(lVar17 + 0x288) == -1) {
          plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
          lVar17 = *(long *)puVar6;
          iVar10 = (**(code **)(*plVar14 + 0x60))();
          if (iVar10 < 0x11) {
            uVar18 = 1;
          }
          else {
            uVar18 = *(uint *)(lVar17 + 0x5e8);
            if (4 < uVar18) goto LAB_021200a8;
            uVar18 = 0x1aU >> (ulong)(uVar18 & 0x1f) & 1;
          }
        }
        else {
LAB_021200a8:
          uVar18 = 0;
        }
        if (plVar19 != (long *)0x0) {
          lVar17 = plVar19[0x2a];
          uVar4 = *(uint *)(plVar19 + 0x49);
          if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
            *(undefined **)puVar8 = puVar1;
            __cxa_guard_release(puVar9);
          }
          uVar11 = (**(code **)(*plVar19 + 0x20))(plVar19,puVar8);
          if (((((int)lVar17 == 1) && ((uVar11 & uVar18) != 0)) && ((uVar4 >> 4 & 1) != 0)) &&
             ((int)plVar19[0xea] != 3)) {
            puVar12 = (undefined8 *)plVar19[0x77];
            if (((*PTR_DAT_04bc2280 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc2280), iVar10 != 0)) {
              *(undefined **)PTR_DAT_04bc2278 = puVar2;
              __cxa_guard_release(PTR_DAT_04bc2280);
            }
            if (((puVar12 != (undefined8 *)0x0) &&
                (uVar13 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc2278), (uVar13 & 1) != 0)) &&
               (*(int *)(puVar12 + 0x15f0) != 0)) {
              return 1;
            }
          }
        }
      }
      plVar20 = plVar20 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  return 0;
}

