
undefined8 FUN_016b7080(uint *param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  int local_a8;
  uint uStack_a4;
  long *local_a0;
  undefined8 local_88;
  undefined8 local_80;
  long local_78 [2];
  uint local_64;
  
  puVar6 = PTR_DAT_04bb2720;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  iVar10 = 0;
  if (lVar14 != 0) {
    if (*(long *)(lVar14 + 0x330) == 0) {
      iVar10 = 0;
    }
    else {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar9 = FUN_006bd550(*puVar11,0);
      iVar10 = 0;
      if (iVar9 == 0x758f7eaf) {
        iVar10 = 0;
        if (*(long *)puVar6 != 0) {
          lVar14 = *(long *)(*(long *)puVar6 + 0x330);
          iVar10 = 0;
          if (lVar14 != 0) {
            iVar10 = *(int *)(lVar14 + 0x244);
          }
        }
      }
    }
  }
  puVar8 = PTR_DAT_04bb37d0;
  puVar7 = PTR_DAT_04bb3350;
  puVar6 = PTR_DAT_04bb27c0;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) != iVar10) {
    return 0;
  }
  uStack_a4 = 0;
  local_a0 = (long *)0x0;
  puVar11 = &local_80;
  local_80 = 0;
  if (local_78 != (long *)0x0) {
    uStack_a4 = 2;
    local_a0 = local_78;
  }
  local_a8 = 0;
  local_88._4_4_ = (uint)((ulong)puVar11 >> 0x20);
  if (param_2 == 1) {
    if (local_78 == (long *)0x0) {
      local_a8 = 0;
      local_88 = puVar11;
      goto LAB_016b7204;
    }
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,1);
    *local_a0 = (long)&local_88;
    local_a8 = 1;
    if (uStack_a4 < 2) goto LAB_016b7204;
    local_a8 = 1;
    local_80 = 2;
    if (uStack_a4 < 2) goto LAB_016b7204;
    lVar14 = 1;
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    if (local_78 == (long *)0x0) {
      return 0;
    }
    lVar14 = 0;
    local_88 = (undefined8 *)((ulong)local_88._4_4_ << 0x20);
    puVar11 = &local_88;
  }
  local_a0[lVar14] = (long)puVar11;
  local_a8 = local_a8 + 1;
LAB_016b7204:
  if (local_a8 != 0) {
    lVar14 = (long)local_a8 << 3;
    puVar2 = PTR_DAT_04bb3750 + 0x10;
    puVar3 = PTR_DAT_04bb6718 + 0x10;
    do {
      local_64 = *(uint *)*local_a0;
      puVar5 = param_1 + (ulong)local_64 * 7;
      if (2 < local_64) {
        puVar5 = param_1;
      }
      uVar16 = *puVar5;
      if ((uVar16 != 0) && (lVar15 = *(long *)puVar6, lVar15 != 0)) {
        plVar17 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8));
        if ((plVar17 == (long *)0x0) ||
           (((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar17 + 0x46) != uVar16)))) {
          plVar17 = (long *)0x0;
        }
        if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
          plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
          lVar15 = *(long *)puVar6;
          iVar10 = (**(code **)(*plVar12 + 0x60))();
          if (iVar10 < 0x11) {
            uVar16 = 1;
          }
          else {
            uVar16 = *(uint *)(lVar15 + 0x5e8);
            if (4 < uVar16) goto LAB_016b7318;
            uVar16 = 0x1aU >> (ulong)(uVar16 & 0x1f) & 1;
          }
        }
        else {
LAB_016b7318:
          uVar16 = 0;
        }
        if (plVar17 != (long *)0x0) {
          lVar15 = plVar17[0x2a];
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar10 != 0)) {
            *(undefined **)puVar8 = puVar2;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar13 = (**(code **)(*plVar17 + 0x20))(plVar17,puVar8);
          uVar4 = 0;
          if ((int)lVar15 == 1) {
            uVar4 = uVar16;
          }
          if (((uVar13 & 1) != 0) && (uVar4 != 0)) {
            plVar17 = (long *)plVar17[0x77];
            if (((*PTR_DAT_04bb9a60 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb9a60), iVar10 != 0)) {
              *(undefined **)PTR_DAT_04bb9a58 = puVar3;
              __cxa_guard_release(PTR_DAT_04bb9a60);
            }
            if (((plVar17 != (long *)0x0) &&
                (uVar13 = (**(code **)*plVar17)(plVar17,PTR_DAT_04bb9a58), (uVar13 & 1) != 0)) &&
               (uVar13 = (**(code **)(*plVar17 + 0x510))(plVar17), (uVar13 & 1) != 0)) {
              iVar10 = *(int *)((long)plVar17 + 0x77f4);
              iVar9 = (int)plVar17[0xef6];
              if (iVar10 == 0x3c) {
LAB_016b73e4:
                bVar1 = false;
              }
              else {
                if (iVar9 == 0x3c) {
LAB_016b73f4:
                  bVar1 = false;
                }
                else {
                  if (iVar10 == 0x10) goto LAB_016b73e4;
                  if (iVar9 == 0x10) goto LAB_016b73f4;
                  bVar1 = iVar10 != 0x3e && iVar9 != 0x3e;
                }
                if (iVar10 == 0x3d) goto LAB_016b7254;
              }
              if ((*(ushort *)((long)plVar17 + 0xaf64) & 0x40) == 0) {
                bVar1 = true;
              }
              if ((iVar9 != 0x3d) && (bVar1)) {
                return 1;
              }
            }
          }
        }
      }
LAB_016b7254:
      local_a0 = local_a0 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  return 0;
}

