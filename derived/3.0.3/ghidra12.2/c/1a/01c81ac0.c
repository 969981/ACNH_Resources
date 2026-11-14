
bool FUN_01c81ac0(long param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  undefined1 *__src;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined2 local_110 [2];
  undefined4 local_10c;
  undefined8 local_108;
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  
  bVar8 = false;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x2078))) {
    plVar1 = (long *)(param_1 + 0x20);
    plVar4 = plVar1 + (ulong)param_2 * 10;
    if (99 < param_2) {
      plVar4 = plVar1;
    }
    if (plVar4[7] == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      __src = (undefined1 *)plVar4[1];
      local_6d = 0;
      local_100 = PTR_DAT_04bb2030 + 0x10;
      local_f0 = 0x80;
      puStack_f8 = local_ec;
      if (local_ec != __src) {
        lVar10 = 0;
        do {
          if (__src[lVar10] == '\0') {
LAB_01c81bac:
            iVar18 = (int)lVar10;
            if (0x7f < iVar18) {
              iVar18 = 0x7f;
            }
            goto LAB_01c81bb8;
          }
          if (__src[lVar10 + 1] == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_01c81bac;
          }
          if (__src[lVar10 + 2] == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_01c81bac;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        iVar18 = 0;
LAB_01c81bb8:
        memcpy(local_ec,__src,(long)iVar18);
        local_ec[iVar18] = 0;
      }
      puVar6 = PTR_DAT_04bb2710;
      lVar10 = 0;
      local_110[0] = 0x101;
      local_10c = 4;
      local_100 = PTR_DAT_04bb2d88 + 0x10;
      local_108 = 0;
      if (*(char *)((long)plVar4 + 0x4c) == '\0') {
        lVar10 = *(long *)PTR_DAT_04bb2710;
        *(undefined1 *)(lVar10 + 0x2d4) = 0;
        puVar14 = (undefined8 *)FUN_03c0b770(lVar10,param_1 + 0x1f60,&local_100,local_110);
        if (puVar14 == (undefined8 *)0x0) {
          lVar10 = 0;
        }
        else {
          lVar10 = FUN_01d3bf08(*(undefined8 *)PTR_DAT_04bc1048,puVar14);
          lVar13 = *(long *)(*(long *)puVar6 + 0x2c8);
          if (0 < (int)*(uint *)(lVar13 + 0x10)) {
            lVar16 = 0;
            lVar17 = 8;
            do {
              if (*(undefined8 **)(*(long *)(lVar13 + 0x18) + lVar17 + -8) == puVar14) {
                iVar18 = -(int)lVar16;
                uVar15 = (**(code **)(**(long **)(lVar13 + 8) + 0x88))
                                   (*(long **)(lVar13 + 8),*puVar14);
                if ((uVar15 & 1) != 0) {
                  (**(code **)(**(long **)(lVar13 + 8) + 0x38))(*(long **)(lVar13 + 8),*puVar14);
                }
                if (iVar18 < *(int *)(lVar13 + 0x10)) {
                  puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x18) + lVar17 + -8);
                  *puVar14 = *(undefined8 *)(lVar13 + 0x20);
                  *(undefined8 **)(lVar13 + 0x20) = puVar14;
                }
                if ((-1 < iVar18) && (iVar9 = *(int *)(lVar13 + 0x10), iVar18 < iVar9)) {
                  if (1 - (int)lVar16 < iVar9) {
                    pvVar3 = (void *)(*(long *)(lVar13 + 0x18) + lVar17);
                    memmove((void *)((long)pvVar3 + -8),pvVar3,(iVar9 + lVar16) * 8 - 8);
                    iVar9 = *(int *)(lVar13 + 0x10);
                  }
                  *(int *)(lVar13 + 0x10) = iVar9 + -1;
                }
                break;
              }
              lVar16 = lVar16 + -1;
              lVar17 = lVar17 + 8;
            } while (-lVar16 != (ulong)*(uint *)(lVar13 + 0x10));
          }
        }
      }
      plVar4[7] = lVar10;
      puVar7 = PTR_DAT_04bc1048;
      puVar6 = PTR_DAT_04bb47c8;
      if ((lVar10 == 0) && ((param_3 & 1) != 0)) {
        if (0 < *(int *)(param_1 + 0x2078)) {
          uVar15 = 0;
          do {
            plVar5 = plVar1 + uVar15 * 10;
            if (99 < uVar15) {
              plVar5 = plVar1;
            }
            puVar14 = (undefined8 *)plVar5[7];
            if (puVar14 != (undefined8 *)0x0) {
              puVar12 = *(undefined8 **)puVar7;
              plVar11 = (long *)puVar12[2];
              if (plVar11 != puVar12 + 1) {
                plVar2 = (long *)((long)puVar14 + (long)*(int *)((long)puVar12 + 0x1c));
                do {
                  if (plVar11 == plVar2) {
                    if (*plVar2 != 0) {
                      *(long *)(*plVar2 + 8) = plVar2[1];
                    }
                    if ((long *)plVar2[1] != (long *)0x0) {
                      *(long *)plVar2[1] = *plVar2;
                    }
                    *plVar2 = 0;
                    plVar2[1] = 0;
                    *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + -1;
                    if (*(char *)(puVar14 + 2) == '\0') {
                      (**(code **)(*(long *)*puVar12 + 0x38))((long *)*puVar12,*puVar14);
                    }
                    (**(code **)(*(long *)*puVar12 + 0x38))((long *)*puVar12,puVar14);
                    break;
                  }
                  plVar11 = (long *)plVar11[1];
                } while (plVar11 != puVar12 + 1);
              }
              plVar5[7] = 0;
            }
            if (plVar5[8] != 0) {
              (**(code **)(**(long **)(*(long *)puVar6 + 8) + 0x38))();
              plVar5[8] = 0;
            }
            uVar15 = uVar15 + 1;
          } while ((long)uVar15 < (long)*(int *)(param_1 + 0x2078));
        }
        puVar6 = PTR_DAT_04bb2710;
        lVar10 = 0;
        local_108 = 0;
        local_110[0] = 0x101;
        local_10c = 4;
        if (*(char *)((long)plVar4 + 0x4c) == '\0') {
          lVar10 = *(long *)PTR_DAT_04bb2710;
          *(undefined1 *)(lVar10 + 0x2d4) = 0;
          puVar14 = (undefined8 *)FUN_03c0b770(lVar10,param_1 + 0x1f60,&local_100,local_110);
          if (puVar14 == (undefined8 *)0x0) {
            lVar10 = 0;
          }
          else {
            lVar10 = FUN_01d3bf08(*(undefined8 *)PTR_DAT_04bc1048,puVar14);
            lVar13 = *(long *)(*(long *)puVar6 + 0x2c8);
            if (0 < (int)*(uint *)(lVar13 + 0x10)) {
              lVar16 = 0;
              lVar17 = 8;
              do {
                if (*(undefined8 **)(*(long *)(lVar13 + 0x18) + lVar17 + -8) == puVar14) {
                  iVar18 = -(int)lVar16;
                  uVar15 = (**(code **)(**(long **)(lVar13 + 8) + 0x88))
                                     (*(long **)(lVar13 + 8),*puVar14);
                  if ((uVar15 & 1) != 0) {
                    (**(code **)(**(long **)(lVar13 + 8) + 0x38))(*(long **)(lVar13 + 8),*puVar14);
                  }
                  if (iVar18 < *(int *)(lVar13 + 0x10)) {
                    puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x18) + lVar17 + -8);
                    *puVar14 = *(undefined8 *)(lVar13 + 0x20);
                    *(undefined8 **)(lVar13 + 0x20) = puVar14;
                  }
                  if ((-1 < iVar18) && (iVar9 = *(int *)(lVar13 + 0x10), iVar18 < iVar9)) {
                    if (1 - (int)lVar16 < iVar9) {
                      pvVar3 = (void *)(*(long *)(lVar13 + 0x18) + lVar17);
                      memmove((void *)((long)pvVar3 + -8),pvVar3,(iVar9 + lVar16) * 8 - 8);
                      iVar9 = *(int *)(lVar13 + 0x10);
                    }
                    *(int *)(lVar13 + 0x10) = iVar9 + -1;
                  }
                  break;
                }
                lVar16 = lVar16 + -1;
                lVar17 = lVar17 + 8;
              } while (-lVar16 != (ulong)*(uint *)(lVar13 + 0x10));
            }
          }
        }
        plVar4[7] = lVar10;
      }
      bVar8 = lVar10 != 0;
    }
    else {
      bVar8 = true;
    }
  }
  return bVar8;
}

