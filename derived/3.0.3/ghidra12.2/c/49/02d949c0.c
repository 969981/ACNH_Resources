
void FUN_02d949c0(undefined4 *param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  puVar4 = PTR_DAT_04bb43c0;
  puVar8 = PTR_DAT_04bb37e0;
  plVar1 = (long *)(param_2 + 0x1e4d0);
  uVar15 = *(uint *)(param_2 + 0x1c260);
  if (((int)uVar15 < 0) || (*(int *)(param_2 + 0x1c248) <= (int)uVar15)) {
LAB_02d94bf8:
    piVar7 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
    if ((*piVar7 == 0) ||
       (piVar7 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1), *piVar7 - 1U < param_3)) {
      puVar13 = (undefined4 *)PTR_DAT_04bb37e0;
    }
    else {
      lVar16 = (**(code **)(*plVar1 + 0x18))(plVar1);
      puVar13 = *(undefined4 **)(*(long *)(lVar16 + 8) + (long)(int)param_3 * 8);
    }
    uVar10 = *puVar13;
    uVar9 = puVar13[1];
    *param_1 = 1;
    param_1[1] = uVar10;
  }
  else {
    lVar16 = param_2 + 0x1c238;
    uVar5 = uVar15 + 1;
    uVar2 = uVar5 & 3;
    lVar11 = lVar16;
    if (2 < uVar15) {
      uVar12 = uVar5 & 0xfffffffc;
      do {
        uVar12 = uVar12 - 4;
        lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
      } while (uVar12 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar11 = *(long *)(lVar11 + 8);
    }
    if (((lVar11 == 0) || (lVar11 = lVar11 - *(int *)(param_2 + 0x1c24c), lVar11 == 0)) ||
       (*(int *)(lVar11 + 0x270) != 0x78)) {
      uVar2 = uVar5 & 3;
      lVar11 = lVar16;
      if (2 < uVar15) {
        uVar12 = uVar5 & 0xfffffffc;
        do {
          uVar12 = uVar12 - 4;
          lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
        } while (uVar12 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        lVar11 = *(long *)(lVar11 + 8);
      }
      lVar17 = -(long)*(int *)(param_2 + 0x1c24c);
      if (((lVar11 == 0) || (lVar11 = lVar17 + lVar11, lVar11 == 0)) ||
         (*(int *)(lVar11 + 0x270) != 9)) {
        uVar2 = uVar5 & 3;
        lVar11 = lVar16;
        if (2 < uVar15) {
          uVar5 = uVar5 & 0xfffffffc;
          do {
            uVar5 = uVar5 - 4;
            lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
          } while (uVar5 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          lVar11 = *(long *)(lVar11 + 8);
        }
        if (((lVar11 == 0) || (lVar17 = lVar17 + lVar11, lVar17 == 0)) ||
           (*(int *)(lVar17 + 0x270) != 8)) goto LAB_02d94bf8;
      }
      if (param_3 != 0) {
        piVar7 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
        puVar8 = PTR_DAT_04bb37e0;
        if (*piVar7 == 0) {
          puVar14 = (undefined8 *)PTR_DAT_04bb37e0;
        }
        else {
          piVar7 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
          if (*piVar7 - 1U < param_3 - 1) {
            puVar14 = (undefined8 *)PTR_DAT_04bb37e0;
          }
          else {
            lVar11 = (**(code **)(*plVar1 + 0x18))(plVar1);
            puVar14 = *(undefined8 **)(*(long *)(lVar11 + 8) + (long)(int)(param_3 - 1) * 8);
          }
        }
        puVar4 = PTR_DAT_04bb5ce0;
        local_78 = (undefined *)*puVar14;
        uVar15 = *(uint *)(param_2 + 0x1c260);
        if ((-1 < (int)uVar15) && ((int)uVar15 < *(int *)(param_2 + 0x1c248))) {
          uVar5 = uVar15 + 1;
          uVar2 = uVar5 & 3;
          lVar11 = lVar16;
          if (2 < uVar15) {
            uVar12 = uVar5 & 0xfffffffc;
            do {
              uVar12 = uVar12 - 4;
              lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
            } while (uVar12 != 0);
          }
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            lVar11 = *(long *)(lVar11 + 8);
          }
          if (((lVar11 == 0) || (lVar11 = lVar11 - *(int *)(param_2 + 0x1c24c), lVar11 == 0)) ||
             (*(int *)(lVar11 + 0x270) != 9)) {
            uVar2 = uVar5 & 3;
            if (2 < uVar15) {
              uVar5 = uVar5 & 0xfffffffc;
              do {
                uVar5 = uVar5 - 4;
                lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(lVar16 + 8) + 8) + 8) + 8);
              } while (uVar5 != 0);
            }
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              lVar16 = *(long *)(lVar16 + 8);
            }
            if (((lVar16 != 0) && (lVar16 = lVar16 - *(int *)(param_2 + 0x1c24c), lVar16 != 0)) &&
               (*(int *)(lVar16 + 0x270) == 8)) {
              if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                puVar8 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe54);
              }
              uVar6 = FUN_0277d7b4(&local_78,puVar8);
              if ((uVar6 & 1) != 0) {
                uVar10 = 7;
                goto LAB_02d94fac;
              }
            }
          }
          else {
            if (*(long *)PTR_DAT_04bb5ce0 != 0) {
              puVar8 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
            }
            uVar6 = FUN_0277d7b4(&local_78,puVar8);
            if ((uVar6 & 1) != 0) {
              uVar10 = 5;
              goto LAB_02d94fac;
            }
            lVar16 = *(long *)puVar4;
            puVar8 = PTR_DAT_04bb37e0;
            if ((lVar16 != 0) && (*(char *)(lVar16 + 0xe9e) != '\0')) {
              puVar8 = (undefined *)(lVar16 + 0xe94);
            }
            uVar6 = FUN_0277d7b4(&local_78,puVar8);
            if ((uVar6 & 1) != 0) {
              uVar10 = 6;
              goto LAB_02d94fac;
            }
          }
        }
        uVar10 = 1;
LAB_02d94fac:
        *param_1 = uVar10;
        param_1[1] = (undefined4)local_78;
        param_1[2] = local_78._4_4_;
        return;
      }
      uVar10 = 4;
    }
    else {
      uVar15 = *(uint *)(param_2 + 0x1c350);
      if (param_3 < uVar15) {
        puVar14 = *(undefined8 **)(param_2 + 0x1c358);
        if (*(int *)(param_2 + 0x108b14) == 0) {
          lVar16 = (long)(int)uVar15 << 3;
          uVar15 = 0;
          lVar11 = *(long *)PTR_DAT_04bb43c0;
          puVar8 = PTR_DAT_04bc0510 + 0x10;
          do {
            puVar13 = (undefined4 *)*puVar14;
            uVar5 = FUN_0277d6c4(puVar13);
            lVar17 = *(long *)puVar4;
            if (lVar17 != 0) {
              lVar11 = *(long *)(lVar11 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                local_70 = *puVar13;
                local_6c = puVar13[1];
                local_68 = 0;
                local_78 = puVar8;
                uVar5 = FUN_0277d6c4(&local_70);
                if (*(long *)puVar4 != 0) {
                  lVar11 = *(long *)(lVar17 + 0x57e58);
                  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                  if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                    lVar11 = *(long *)PTR_DAT_04bc0428;
                    uVar5 = FUN_0277d6c4(puVar13);
                    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                    if (uVar5 < *(uint *)(lVar11 + 0x1d8)) {
                      lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
                      if (lVar11 != 0) {
                        local_68 = lVar11;
                      }
                    }
                  }
                }
                uVar6 = FUN_01af7d10(&local_78);
                lVar17 = *(long *)puVar4;
                if ((uVar6 & 1) != 0) {
                  if (uVar15 == param_3) goto LAB_02d94f60;
                  uVar15 = uVar15 + 1;
                }
              }
            }
            lVar11 = lVar17;
            puVar14 = puVar14 + 1;
            lVar16 = lVar16 + -8;
          } while (lVar16 != 0);
          puVar13 = (undefined4 *)PTR_DAT_04bb37e0;
LAB_02d94f60:
          uVar10 = *puVar13;
          uVar9 = puVar13[1];
        }
        else {
          uVar5 = 0;
          lVar16 = (long)(int)uVar15 << 3;
          do {
            puVar13 = (undefined4 *)*puVar14;
            uVar6 = FUN_02da4058(puVar13);
            if ((uVar6 & 1) != 0) {
              if (uVar5 == param_3) goto LAB_02d94d18;
              uVar5 = uVar5 + 1;
            }
            puVar14 = puVar14 + 1;
            lVar16 = lVar16 + -8;
          } while (lVar16 != 0);
          puVar13 = (undefined4 *)puVar8;
LAB_02d94d18:
          uVar10 = *puVar13;
          uVar9 = puVar13[1];
        }
        param_1[2] = uVar9;
        *param_1 = 1;
        param_1[1] = uVar10;
        return;
      }
      uVar10 = 1;
    }
    uVar3 = *(undefined4 *)PTR_DAT_04bb37e0;
    uVar9 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *param_1 = uVar10;
    param_1[1] = uVar3;
  }
  param_1[2] = uVar9;
  return;
}

