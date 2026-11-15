
void FUN_01fe99b0(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  char *pcVar17;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  uVar13 = *param_2;
  if ((((uVar13 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar13)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar8 + 0x60))();
    if (iVar5 < 0x11) {
      uVar13 = 1;
      goto joined_r0x01fe9a78;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01fe9a78;
    }
  }
  uVar13 = 0;
joined_r0x01fe9a78:
  if (plVar14 != (long *)0x0) {
    lVar10 = plVar14[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar9 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar10 == 1) {
      uVar1 = uVar13;
    }
    if (((uVar9 & 1) != 0) && (uVar1 != 0)) {
      plVar8 = plVar14 + 0x7c;
      plVar16 = *(long **)(*(long *)(param_1 + 8) + 8);
      (**(code **)(plVar14[0x7c] + 0x18))(plVar8);
      (**(code **)(plVar14[0x7c] + 0x18))(plVar8);
      lVar10 = plVar14[0x7d];
      (**(code **)(*plVar16 + 0x18))(plVar16);
      if (lVar10 != plVar16[1]) {
        uVar9 = 0;
        bVar3 = true;
        do {
          if (*(char *)(plVar14[0x7d] + uVar9) != *(char *)(plVar16[1] + uVar9)) break;
          if (*(char *)(plVar14[0x7d] + uVar9) == '\0') {
            if (bVar3) {
              return;
            }
            break;
          }
          bVar3 = uVar9 < 0x80000;
          uVar9 = uVar9 + 1;
        } while (uVar9 != 0x80001);
        if ((int)plVar14[0xea] != 3) {
          puVar15 = (undefined8 *)plVar14[0x77];
          if (((*PTR_DAT_04bb7480 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb7480), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bb7478 = PTR_DAT_04bb6d20 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb7480);
          }
          if ((puVar15 != (undefined8 *)0x0) &&
             (uVar9 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bb7478), (uVar9 & 1) != 0)) {
            sVar4 = FUN_0376baa0(plVar8);
            if (sVar4 != -1) {
              iVar5 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
              if (iVar5 != 0) {
                lVar11 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
                lVar10 = 0;
                lVar12 = (long)iVar5 << 3;
                do {
                  if (*(short *)(*(long *)(lVar11 + lVar10 * 8) + 0x38) == sVar4) {
                    if ((*(ushort *)(*(long *)(lVar11 + lVar10 * 8) + 0x114) >> 5 & 1) != 0) {
                      return;
                    }
                    break;
                  }
                  lVar10 = lVar10 + 1;
                  lVar12 = lVar12 + -8;
                } while (lVar12 != 0);
              }
            }
            uVar9 = FUN_01fa6dd8(puVar15);
            if (((uVar9 & 1) == 0) &&
               (((pcVar17 = *(char **)(param_1 + 8), *pcVar17 == '\0' ||
                 ((*(ushort *)((long)puVar15 + 0x1242c) & 1) != 0)) &&
                (iVar5 = FUN_0372fc20(*(undefined8 *)PTR_DAT_04bb4e28,param_2),
                iVar5 == *(int *)(pcVar17 + 4))))) {
              uVar6 = FUN_0376baa0(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
              uVar7 = FUN_0376baa0(plVar8);
              uVar9 = FUN_03770130(uVar6,uVar7);
              if ((uVar9 & 1) == 0) {
                if (**(uint **)(param_1 + 0x10) == 0) {
                  **(uint **)(param_1 + 0x10) = *param_2;
                }
              }
              else {
                **(uint **)(param_1 + 0x10) = *param_2;
              }
            }
          }
        }
      }
    }
  }
  return;
}

