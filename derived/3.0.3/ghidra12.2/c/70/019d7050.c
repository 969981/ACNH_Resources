
undefined8 FUN_019d7050(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  if ((((DAT_052d0188 == 0) ||
       (plVar15 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(DAT_052d0188 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
      ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != DAT_052d0188)) {
    plVar15 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar13 = 1;
      goto joined_r0x019d7120;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x019d7120;
    }
  }
  uVar13 = 0;
joined_r0x019d7120:
  if (plVar15 != (long *)0x0) {
    lVar8 = plVar15[0x2a];
    if (((*PTR_DAT_04bbe9f0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9f0);
    }
    uVar7 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bbe9e8);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar13;
    }
    if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
      if ((*param_1 != -1) && (iVar5 = (int)plVar15[0x5f], 0 < iVar5)) {
        lVar8 = 0;
        uVar2 = *(undefined4 *)PTR_DAT_04bb3238;
        do {
          lVar11 = *(long *)(*(long *)(*(long *)(plVar15[0x5c] + lVar8 * 8) + 0x38) + 0x40);
          uVar13 = *(uint *)(lVar11 + 0x78);
          if (0 < (int)uVar13) {
            uVar7 = 0;
            do {
              if (uVar7 < uVar13) {
                plVar6 = *(long **)(lVar11 + 0x60);
                plVar14 = plVar6 + uVar7;
              }
              else {
                plVar6 = *(long **)(lVar11 + 0x60);
                plVar14 = plVar6;
              }
              if (*(int *)(*plVar14 + 200) == *param_3) {
                if ((int)uVar7 < (int)uVar13) {
                  plVar6 = plVar6 + (uVar7 & 0xffffffff);
                }
                *(undefined4 *)(*plVar6 + 200) = uVar2;
                iVar5 = (int)plVar15[0x5f];
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar13);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar5);
      }
      puVar4 = PTR_DAT_04bb4800;
      if ((*param_2 != -1) &&
         (lVar8 = FUN_019db0b8(*(undefined8 *)PTR_DAT_04bb4800), 0 < *(int *)(lVar8 + 0x78))) {
        lVar9 = *(long *)puVar4;
        lVar11 = 0;
        lVar10 = *(long *)PTR_DAT_04bb32e8;
        uVar2 = *(undefined4 *)PTR_DAT_04bb3238;
        do {
          lVar12 = *(long *)(*(long *)(lVar8 + 0x60) + lVar11 * 8);
          if (lVar9 == 0) {
            lVar12 = **(long **)(lVar12 + 0xc0);
          }
          else {
            if (*(char *)(lVar9 + 0x80c) == '\0') {
              bVar3 = *(byte *)(lVar10 + 0x4064);
              *(undefined1 *)(lVar9 + 0x80c) = 1;
              uVar13 = (uint)(bVar3 - 0x12 < 0xfffffff4);
              *(uint *)(lVar9 + 0x808) = uVar13;
            }
            else {
              uVar13 = *(uint *)(lVar9 + 0x808);
            }
            if (uVar13 < *(uint *)(lVar12 + 0xb8)) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + (long)(int)uVar13 * 8);
            }
            else {
              lVar12 = 0;
            }
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x40);
          uVar13 = *(uint *)(lVar12 + 0x78);
          if (0 < (int)uVar13) {
            uVar7 = 0;
            do {
              if (uVar7 < uVar13) {
                plVar15 = *(long **)(lVar12 + 0x60) + uVar7;
                plVar6 = *(long **)(lVar12 + 0x60);
              }
              else {
                plVar15 = *(long **)(lVar12 + 0x60);
                plVar6 = plVar15;
              }
              if (*(int *)(*plVar15 + 200) == *param_3) {
                if ((int)uVar7 < (int)uVar13) {
                  plVar6 = plVar6 + (uVar7 & 0xffffffff);
                }
                *(undefined4 *)(*plVar6 + 200) = uVar2;
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar13);
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(lVar8 + 0x78));
      }
    }
  }
  return 0;
}

