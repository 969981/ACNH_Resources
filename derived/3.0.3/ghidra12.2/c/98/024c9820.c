
undefined4 FUN_024c9820(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  undefined4 *puVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  short local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  short local_18;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 local_14;
  
  puVar2 = PTR_DAT_04bb43c0;
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480), *(char *)(lVar8 + 0xee) != '\0')) {
    lVar8 = lVar8 + ((ulong)*(uint *)(lVar8 + 0x10) & 1) * 0x20;
    local_40 = *(short *)(lVar8 + 0x14);
    local_3e = *(undefined1 *)(lVar8 + 0x16);
    local_3d = *(undefined1 *)(lVar8 + 0x17);
    local_3c = *(undefined4 *)(lVar8 + 0x18);
    if (local_40 != -2) {
      local_38 = 0;
      lVar8 = *(long *)PTR_DAT_04bb43c0;
      local_18 = local_40;
      local_16 = local_3e;
      local_15 = local_3d;
      local_14 = local_3c;
      uVar3 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar2 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(&local_18);
          puVar2 = PTR_DAT_04bb27c0;
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
             (((puVar9 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
               puVar9 != (uint *)0x0 && (uVar3 = *puVar9, uVar3 != 0)) &&
              (puVar9 != (uint *)(ulong)uVar3)))) {
            puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
            if (((*puVar12 != 0) && (uVar3 = puVar12[1], uVar3 != 0)) &&
               ((ulong)(ushort)puVar12[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar12 + lVar8 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar8 != 0) {
                uVar7 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar3);
                }
                if (*puVar12 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar1 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar7 * 2),
                   uVar1 < 0xbd)) {
                  puVar10 = (undefined4 *)PTR_DAT_04bb3238;
                  if (uVar1 != 0x1d) goto LAB_024c9a8c;
                  lVar8 = *(long *)PTR_DAT_04bb27c0;
                  if (lVar8 == 0) {
                    plVar13 = (long *)0x0;
                    uVar7 = 0;
                    uVar15 = 0;
                    uVar3 = 0;
                  }
                  else {
                    lVar11 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480);
                    uVar3 = *(uint *)(lVar11 + ((ulong)*(uint *)(lVar11 + 0x10) & 1) * 0x20 + 0x28);
                    if ((((uVar3 == 0) ||
                         (plVar13 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                                              ((ulong)(uVar3 >> 0x11) & 0x7ff8)),
                         plVar13 == (long *)0x0)) || ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) ||
                       (*(uint *)(plVar13 + 0x46) != uVar3)) {
                      plVar13 = (long *)0x0;
                    }
                    if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
                      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                            (*(long *)PTR_DAT_04bb3350 + 0x68));
                      lVar8 = *(long *)puVar2;
                      iVar4 = (**(code **)(*plVar5 + 0x60))();
                      if (iVar4 < 0x11) {
                        uVar15 = 1;
                      }
                      else {
                        if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_024c9ab4;
                        uVar15 = 0x101000100 >> (((ulong)*(uint *)(lVar8 + 0x5e8) & 7) << 3);
                      }
                    }
                    else {
LAB_024c9ab4:
                      uVar15 = 0;
                    }
                    if (plVar13 == (long *)0x0) {
                      uVar7 = 0;
                      uVar3 = 0;
                    }
                    else {
                      uVar7 = (uint)((int)plVar13[0x2a] == 1);
                      uVar3 = *(uint *)(plVar13 + 0x49);
                      if (((*PTR_DAT_04bbe2c8 & 1) == 0) &&
                         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe2c8), iVar4 != 0)) {
                        *(undefined **)PTR_DAT_04bbe2c0 = PTR_DAT_04bbe250 + 0x10;
                        __cxa_guard_release(PTR_DAT_04bbe2c8);
                      }
                      uVar6 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bbe2c0);
                      uVar3 = uVar3 >> 4 & 1;
                      uVar14 = (uint)uVar15;
                      if ((uVar6 & 1) == 0) {
                        uVar14 = 0;
                      }
                      uVar15 = (ulong)uVar14;
                    }
                  }
                  uVar14 = 0;
                  if ((uVar15 & 0xff) != 0 && plVar13 != (long *)0x0) {
                    uVar14 = uVar7;
                  }
                  puVar10 = (undefined4 *)((long)plVar13 + 0x3a4);
                  if ((uVar14 & uVar3) == 0) {
                    puVar10 = (undefined4 *)PTR_DAT_04bb3238;
                  }
                  goto LAB_024c9a8c;
                }
              }
            }
          }
        }
      }
    }
  }
  puVar10 = (undefined4 *)PTR_DAT_04bb3238;
LAB_024c9a8c:
  return *puVar10;
}

