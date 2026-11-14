
undefined8 FUN_016b7da0(uint *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  int local_a8;
  uint uStack_a4;
  long *local_a0;
  undefined8 local_88;
  undefined8 local_80;
  long local_78 [2];
  uint local_64;
  
  puVar5 = PTR_DAT_04bb2720;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  iVar9 = 0;
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 0x330) == 0) {
      iVar9 = 0;
    }
    else {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar8 = FUN_006bd550(*puVar10,0);
      iVar9 = 0;
      if (iVar8 == 0x758f7eaf) {
        iVar9 = 0;
        if (*(long *)puVar5 != 0) {
          lVar13 = *(long *)(*(long *)puVar5 + 0x330);
          iVar9 = 0;
          if (lVar13 != 0) {
            iVar9 = *(int *)(lVar13 + 0x244);
          }
        }
      }
    }
  }
  puVar7 = PTR_DAT_04bb37d0;
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb27c0;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) != iVar9) {
    return 0;
  }
  uStack_a4 = 0;
  local_a0 = (long *)0x0;
  puVar10 = &local_80;
  local_80 = 0;
  if (local_78 != (long *)0x0) {
    uStack_a4 = 2;
    local_a0 = local_78;
  }
  local_a8 = 0;
  local_88._4_4_ = (uint)((ulong)puVar10 >> 0x20);
  if (param_2 == 1) {
    if (local_78 == (long *)0x0) {
      local_a8 = 0;
      local_88 = puVar10;
      goto LAB_016b7f24;
    }
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,1);
    *local_a0 = (long)&local_88;
    local_a8 = 1;
    if (uStack_a4 < 2) goto LAB_016b7f24;
    local_a8 = 1;
    local_80 = 2;
    if (uStack_a4 < 2) goto LAB_016b7f24;
    lVar13 = 1;
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    if (local_78 == (long *)0x0) {
      return 0;
    }
    lVar13 = 0;
    local_88 = (undefined8 *)((ulong)local_88._4_4_ << 0x20);
    puVar10 = &local_88;
  }
  local_a0[lVar13] = (long)puVar10;
  local_a8 = local_a8 + 1;
LAB_016b7f24:
  if (local_a8 != 0) {
    lVar13 = (long)local_a8 << 3;
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    puVar2 = PTR_DAT_04bb6718 + 0x10;
    do {
      local_64 = *(uint *)*local_a0;
      puVar4 = param_1 + (ulong)local_64 * 7;
      if (2 < local_64) {
        puVar4 = param_1;
      }
      uVar15 = *puVar4;
      if ((uVar15 != 0) && (lVar14 = *(long *)puVar5, lVar14 != 0)) {
        plVar16 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8));
        if ((plVar16 == (long *)0x0) ||
           (((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar16 + 0x46) != uVar15)))) {
          plVar16 = (long *)0x0;
        }
        if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
          plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
          lVar14 = *(long *)puVar5;
          iVar9 = (**(code **)(*plVar11 + 0x60))();
          if (iVar9 < 0x11) {
            uVar15 = 1;
          }
          else {
            uVar15 = *(uint *)(lVar14 + 0x5e8);
            if (4 < uVar15) goto LAB_016b8038;
            uVar15 = 0x1aU >> (ulong)(uVar15 & 0x1f) & 1;
          }
        }
        else {
LAB_016b8038:
          uVar15 = 0;
        }
        if (plVar16 != (long *)0x0) {
          lVar14 = plVar16[0x2a];
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar9 != 0)) {
            *(undefined **)puVar7 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar12 = (**(code **)(*plVar16 + 0x20))(plVar16,puVar7);
          uVar3 = 0;
          if ((int)lVar14 == 1) {
            uVar3 = uVar15;
          }
          if (((uVar12 & 1) != 0) && (uVar3 != 0)) {
            plVar16 = (long *)plVar16[0x77];
            if (((*PTR_DAT_04bb9a60 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb9a60), iVar9 != 0)) {
              *(undefined **)PTR_DAT_04bb9a58 = puVar2;
              __cxa_guard_release(PTR_DAT_04bb9a60);
            }
            if (((plVar16 != (long *)0x0) &&
                (uVar12 = (**(code **)*plVar16)(plVar16,PTR_DAT_04bb9a58), (uVar12 & 1) != 0)) &&
               (uVar12 = (**(code **)(*plVar16 + 0x510))(plVar16), (uVar12 & 1) != 0)) {
              return 1;
            }
          }
        }
      }
      local_a0 = local_a0 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  return 0;
}

