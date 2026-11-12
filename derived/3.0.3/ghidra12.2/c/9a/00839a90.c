
void FUN_00839a90(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  
  puVar7 = PTR_DAT_04bb5198;
  puVar6 = PTR_DAT_04bb5190;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  if (param_3 != 0) {
    if (param_2 == 0) {
      iVar3 = *(int *)(param_1 + 0x2b0);
      if (iVar3 != 0) {
        uVar13 = 0;
        puVar1 = PTR_DAT_04bb2e50 + 0x10;
        lVar15 = *(long *)(param_1 + 0x2b8);
        do {
          lVar11 = *(long *)puVar4;
          if (lVar11 != 0) {
            uVar14 = *(uint *)(lVar15 + (-(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2));
            if ((((uVar14 == 0) ||
                 (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                      ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0))
                || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar12 + 0x46) != uVar14)) {
              plVar12 = (long *)0x0;
            }
            if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
              plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
              lVar11 = *(long *)puVar4;
              iVar8 = (**(code **)(*plVar9 + 0x60))();
              if (iVar8 < 0x11) {
                uVar14 = 1;
              }
              else {
                if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_00839d60;
                uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_00839d60:
              uVar14 = 0;
            }
            if (plVar12 != (long *)0x0) {
              lVar11 = plVar12[0x2a];
              if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
                *(undefined **)puVar6 = puVar1;
                __cxa_guard_release(puVar7);
              }
              uVar10 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
              uVar2 = 0;
              if ((int)lVar11 == 1) {
                uVar2 = uVar14;
              }
              if ((((uVar10 & 1) != 0) && (uVar2 != 0)) &&
                 ((*(int *)((long)plVar12 + 0x274) != DAT_04cd5b80 &&
                  ((*(int *)((long)plVar12 + 0x274) != DAT_04cd5b84 &&
                   (*(int *)((long)plVar12 + 0x274) != DAT_04cd5b88)))))) {
                FUN_00834c4c(plVar12,0);
              }
            }
          }
          uVar10 = uVar13 + 1;
          uVar13 = uVar10 & 0xffffffff;
        } while (iVar3 != (int)uVar10);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x2d0);
      if (iVar3 != 0) {
        uVar13 = 0;
        puVar1 = PTR_DAT_04bb2e50 + 0x10;
        lVar15 = *(long *)(param_1 + 0x2d8);
        do {
          lVar11 = *(long *)puVar4;
          if (lVar11 != 0) {
            uVar14 = *(uint *)(lVar15 + (-(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2));
            if ((((uVar14 == 0) ||
                 (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                      ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0))
                || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar12 + 0x46) != uVar14)) {
              plVar12 = (long *)0x0;
            }
            if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
              plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
              lVar11 = *(long *)puVar4;
              iVar8 = (**(code **)(*plVar9 + 0x60))();
              if (iVar8 < 0x11) {
                uVar14 = 1;
              }
              else {
                if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_00839bb0;
                uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_00839bb0:
              uVar14 = 0;
            }
            if (plVar12 != (long *)0x0) {
              lVar11 = plVar12[0x2a];
              if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
                *(undefined **)puVar6 = puVar1;
                __cxa_guard_release(puVar7);
              }
              uVar10 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar6);
              uVar2 = 0;
              if ((int)lVar11 == 1) {
                uVar2 = uVar14;
              }
              if ((((uVar10 & 1) != 0) && (uVar2 != 0)) &&
                 ((*(int *)((long)plVar12 + 0x274) != DAT_04cd5b80 &&
                  ((*(int *)((long)plVar12 + 0x274) != DAT_04cd5b84 &&
                   (*(int *)((long)plVar12 + 0x274) != DAT_04cd5b88)))))) {
                FUN_00834c4c(plVar12,0);
              }
            }
          }
          uVar10 = uVar13 + 1;
          uVar13 = uVar10 & 0xffffffff;
        } while (iVar3 != (int)uVar10);
      }
    }
  }
  return;
}

