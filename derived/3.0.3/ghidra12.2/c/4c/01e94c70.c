
undefined8 FUN_01e94c70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int local_8c;
  undefined **local_88;
  int *piStack_80;
  uint *local_78;
  uint local_64;
  
  puVar4 = PTR_DAT_04bb3968;
  lVar8 = *(long *)PTR_DAT_04bb3968;
  lVar12 = *(long *)(lVar8 + 0x11e0);
  if (lVar12 != lVar8 + 0x11d8) {
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    puVar2 = PTR_DAT_04bb4100 + 0x10;
    do {
      local_8c = *(int *)(lVar12 + -8);
      if (local_8c != *(int *)(*(long *)(param_1 + 8) + 0x508)) {
        lVar9 = *(long *)puVar4;
        local_64 = 0;
        if (lVar9 != 0) {
          local_88 = &PTR_FUN_04a770e0;
          if (*(int *)(lVar9 + 0xb88) != 0) {
            lVar13 = (long)*(int *)(lVar9 + 0xb88) << 3;
            puVar11 = *(undefined8 **)(lVar9 + 0xb90);
            piStack_80 = &local_8c;
            local_78 = &local_64;
            do {
              (*(code *)*local_88)(&local_88,*puVar11);
              lVar13 = lVar13 + -8;
              puVar11 = puVar11 + 1;
            } while (lVar13 != 0);
            if ((local_64 != 0) && (lVar9 = *(long *)PTR_DAT_04bb27c0, lVar9 != 0)) {
              plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                  ((ulong)(local_64 >> 0x11) & 0x7ff8));
              if ((plVar10 == (long *)0x0) ||
                 (((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0 ||
                  (*(uint *)(plVar10 + 0x46) != local_64)))) {
                plVar10 = (long *)0x0;
              }
              if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
                plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar9 = *(long *)PTR_DAT_04bb27c0;
                iVar5 = (**(code **)(*plVar6 + 0x60))();
                if (iVar5 < 0x11) {
                  uVar14 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_01e94e08;
                  uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_01e94e08:
                uVar14 = 0;
              }
              if (plVar10 != (long *)0x0) {
                lVar9 = plVar10[0x2a];
                if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
                  *(undefined **)PTR_DAT_04bb37d0 = puVar1;
                  __cxa_guard_release(PTR_DAT_04bb37d8);
                }
                uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
                uVar3 = 0;
                if ((int)lVar9 == 1) {
                  uVar3 = uVar14;
                }
                if (((uVar7 & 1) != 0) && (uVar3 != 0)) {
                  puVar11 = (undefined8 *)plVar10[0x77];
                  if (((*PTR_DAT_04bb6860 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar5 != 0)) {
                    *(undefined **)PTR_DAT_04bb6858 = puVar2;
                    __cxa_guard_release(PTR_DAT_04bb6860);
                  }
                  if (((puVar11 != (undefined8 *)0x0) &&
                      (uVar7 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bb6858), (uVar7 & 1) != 0))
                     && (*(int *)(puVar11 + 0x2680) == 7)) {
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
      lVar12 = *(long *)(lVar12 + 8);
    } while (lVar12 + -8 != lVar8 + 0x11d0);
  }
  return 0;
}

