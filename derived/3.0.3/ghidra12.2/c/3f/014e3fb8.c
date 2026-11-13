
bool FUN_014e3fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  undefined8 local_2608;
  long *local_2600;
  long **local_25f8;
  long **local_25f0;
  long *local_25e8 [5];
  long alStack_25c0 [990];
  undefined8 local_6d0;
  long local_6a8 [201];
  
  uVar7 = FUN_014e44ac();
  puVar3 = PTR_DAT_04bb27c0;
  if ((uVar7 & 1) == 0) {
    return false;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  uVar15 = 0;
  if (lVar11 != 0) {
    uVar15 = *(uint *)(param_1 + 8);
    if ((((uVar15 == 0) ||
         (plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
        ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar15)) {
      plVar13 = (long *)0x0;
    }
    if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar8 + 0x60))();
      if (iVar5 < 0x11) {
        uVar14 = 1;
        uVar15 = 1;
      }
      else {
        uVar15 = *(uint *)(lVar11 + 0x5e8);
        if (4 < uVar15) goto LAB_014e40ac;
        uVar14 = 0x1aU >> (ulong)(uVar15 & 0x1f) & 1;
        uVar15 = (uint)(0x101000100 >> (((ulong)uVar15 & 7) << 3)) & 1;
      }
    }
    else {
LAB_014e40ac:
      uVar14 = 0;
      uVar15 = 0;
    }
    if (plVar13 != (long *)0x0) {
      lVar11 = plVar13[0x2a];
      bVar4 = (int)lVar11 == 1;
      if (((*PTR_DAT_04bbcf28 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbcf28), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bbcf20 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbcf28);
      }
      uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bbcf20);
      if ((uVar7 & 1) == 0) {
        uVar15 = 0;
        goto LAB_014e41d0;
      }
      uVar14 = uVar14 ^ 1;
      if ((int)lVar11 != 1) {
        uVar14 = 1;
      }
      if (uVar14 != 0) {
        return false;
      }
      uVar15 = *(uint *)(*(long *)PTR_DAT_04bb4c80 + 0x10);
      if ((uVar15 == 0) || (lVar11 = *(long *)puVar3, lVar11 == 0)) goto LAB_014e4420;
      plVar8 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                         ((ulong)(uVar15 >> 0x11) & 0x7ff8));
      if ((plVar8 == (long *)0x0) ||
         (((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar8 + 0x46) != uVar15)))) {
        plVar8 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar11 = *(long *)puVar3;
        iVar5 = (**(code **)(*plVar9 + 0x60))();
        if (iVar5 < 0x11) {
          uVar15 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_014e41fc;
          uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_014e41fc:
        uVar15 = 0;
      }
      if (plVar8 != (long *)0x0) {
        lVar11 = plVar8[0x2a];
        uVar14 = *(uint *)(plVar8 + 0x49);
        if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb7d58);
        }
        uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb7d50);
        if ((((int)lVar11 == 1) && ((uVar6 & uVar15) != 0)) && ((uVar14 >> 4 & 1) != 0)) {
          lVar11 = 0xc6;
          local_25f8 = local_25e8;
          local_25e8[0] = alStack_25c0;
          local_2608 = 0;
          local_2600 = (long *)0x0;
          plVar9 = local_25e8[0];
          do {
            lVar11 = lVar11 + -2;
            *plVar9 = (long)(plVar9 + 5);
            plVar9[5] = (long)(plVar9 + 10);
            plVar9 = plVar9 + 10;
          } while (lVar11 != 0);
          local_6d0 = 0;
          if (local_6a8 != (long *)0x0) {
            local_2608 = 0xc800000000;
            local_2600 = local_6a8;
          }
          local_25f0 = local_25f8;
          FUN_01492ce0(plVar8,&local_2608);
          if ((int)local_2608 != 0) {
            lVar11 = (long)(int)local_2608 << 3;
            puVar1 = PTR_DAT_04bb3290 + 0x10;
            plVar8 = local_2600;
            do {
              uVar15 = *(uint *)(*plVar8 + 0x20);
              if ((uVar15 != 0) && (lVar12 = *(long *)puVar3, lVar12 != 0)) {
                plVar9 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                   ((ulong)(uVar15 >> 0x11) & 0x7ff8));
                if ((plVar9 == (long *)0x0) ||
                   (((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0 ||
                    (*(uint *)(plVar9 + 0x46) != uVar15)))) {
                  plVar9 = (long *)0x0;
                }
                if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
                  plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                         (*(long *)PTR_DAT_04bb3350 + 0x68));
                  lVar12 = *(long *)puVar3;
                  iVar5 = (**(code **)(*plVar10 + 0x60))();
                  if (iVar5 < 0x11) {
                    uVar15 = 1;
                  }
                  else {
                    if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_014e4380;
                    uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
                  }
                }
                else {
LAB_014e4380:
                  uVar15 = 0;
                }
                if (plVar9 != (long *)0x0) {
                  lVar12 = plVar9[0x2a];
                  uVar14 = *(uint *)(plVar9 + 0x49);
                  if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar5 != 0)) {
                    *(undefined **)PTR_DAT_04bb5920 = puVar1;
                    __cxa_guard_release(PTR_DAT_04bb5928);
                  }
                  uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
                  if (((((int)lVar12 == 1) && ((uVar6 & uVar15) != 0)) && ((uVar14 >> 4 & 1) != 0))
                     && (plVar9[0x151] != 0)) {
                    FUN_01434bcc();
                  }
                }
              }
              plVar8 = plVar8 + 1;
              lVar11 = lVar11 + -8;
            } while (lVar11 != 0);
          }
        }
      }
LAB_014e4420:
      *(int *)(param_1 + 0xc) = (int)param_3;
      *(int *)(param_1 + 0x10) = (int)((ulong)param_3 >> 0x20);
      FUN_014c97d0(plVar13,param_2,param_3);
      return true;
    }
  }
  bVar4 = false;
LAB_014e41d0:
  bVar2 = false;
  if (uVar15 != 0) {
    bVar2 = bVar4;
  }
  return bVar2;
}

