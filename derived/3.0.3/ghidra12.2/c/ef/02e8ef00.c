
void FUN_02e8ef00(undefined4 *param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  puVar8 = PTR_DAT_04bb43c0;
  plVar1 = (long *)(param_2 + 0x1ee50);
  uVar14 = *(uint *)(param_2 + 0x1c1f8);
  if (((int)uVar14 < 0) || (*(int *)(param_2 + 0x1c1e0) <= (int)uVar14)) {
LAB_02e8f270:
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
    lVar16 = param_2 + 0x1c1d0;
    uVar5 = uVar14 + 1;
    uVar3 = uVar5 & 3;
    lVar11 = lVar16;
    if (2 < uVar14) {
      uVar12 = uVar5 & 0xfffffffc;
      do {
        uVar12 = uVar12 - 4;
        lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
      } while (uVar12 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      lVar11 = *(long *)(lVar11 + 8);
    }
    if (((lVar11 == 0) || (lVar11 = lVar11 - *(int *)(param_2 + 0x1c1e4), lVar11 == 0)) ||
       (*(int *)(lVar11 + 0x270) != 0x78)) {
      uVar3 = uVar5 & 3;
      lVar11 = lVar16;
      if (2 < uVar14) {
        uVar12 = uVar5 & 0xfffffffc;
        do {
          uVar12 = uVar12 - 4;
          lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
        } while (uVar12 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        lVar11 = *(long *)(lVar11 + 8);
      }
      lVar17 = -(long)*(int *)(param_2 + 0x1c1e4);
      if (((lVar11 == 0) || (lVar11 = lVar17 + lVar11, lVar11 == 0)) ||
         (*(int *)(lVar11 + 0x270) != 9)) {
        uVar3 = uVar5 & 3;
        lVar11 = lVar16;
        if (2 < uVar14) {
          uVar12 = uVar5 & 0xfffffffc;
          do {
            uVar12 = uVar12 - 4;
            lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
          } while (uVar12 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          lVar11 = *(long *)(lVar11 + 8);
        }
        if (((lVar11 == 0) || (lVar17 = lVar17 + lVar11, lVar17 == 0)) ||
           (*(int *)(lVar17 + 0x270) != 8)) {
          uVar3 = uVar5 & 3;
          if (2 < uVar14) {
            uVar5 = uVar5 & 0xfffffffc;
            do {
              uVar5 = uVar5 - 4;
            } while (uVar5 != 0);
          }
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          }
          goto LAB_02e8f270;
        }
      }
      if (param_3 != 0) {
        piVar7 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
        puVar8 = PTR_DAT_04bb37e0;
        if (*piVar7 == 0) {
          puVar15 = (undefined8 *)PTR_DAT_04bb37e0;
        }
        else {
          piVar7 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
          if (*piVar7 - 1U < param_3 - 1) {
            puVar15 = (undefined8 *)PTR_DAT_04bb37e0;
          }
          else {
            lVar11 = (**(code **)(*plVar1 + 0x18))(plVar1);
            puVar15 = *(undefined8 **)(*(long *)(lVar11 + 8) + (long)(int)(param_3 - 1) * 8);
          }
        }
        puVar2 = PTR_DAT_04bb5ce0;
        local_78 = (undefined *)*puVar15;
        uVar14 = *(uint *)(param_2 + 0x1c1f8);
        if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(param_2 + 0x1c1e0))) {
          uVar5 = uVar14 + 1;
          uVar3 = uVar5 & 3;
          lVar11 = lVar16;
          if (2 < uVar14) {
            uVar12 = uVar5 & 0xfffffffc;
            do {
              uVar12 = uVar12 - 4;
              lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 8) + 8) + 8);
            } while (uVar12 != 0);
          }
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            lVar11 = *(long *)(lVar11 + 8);
          }
          if (((lVar11 == 0) || (lVar11 = lVar11 - *(int *)(param_2 + 0x1c1e4), lVar11 == 0)) ||
             (*(int *)(lVar11 + 0x270) != 9)) {
            uVar3 = uVar5 & 3;
            if (2 < uVar14) {
              uVar5 = uVar5 & 0xfffffffc;
              do {
                uVar5 = uVar5 - 4;
                lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(lVar16 + 8) + 8) + 8) + 8);
              } while (uVar5 != 0);
            }
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              lVar16 = *(long *)(lVar16 + 8);
            }
            if (((lVar16 != 0) && (lVar16 = lVar16 - *(int *)(param_2 + 0x1c1e4), lVar16 != 0)) &&
               (*(int *)(lVar16 + 0x270) == 8)) {
              if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                puVar8 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe54);
              }
              uVar6 = FUN_0277d7b4(&local_78,puVar8);
              if ((uVar6 & 1) != 0) {
                uVar10 = 7;
                goto LAB_02e8f4dc;
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
              goto LAB_02e8f4dc;
            }
            lVar16 = *(long *)puVar2;
            puVar8 = PTR_DAT_04bb37e0;
            if ((lVar16 != 0) && (*(char *)(lVar16 + 0xe9e) != '\0')) {
              puVar8 = (undefined *)(lVar16 + 0xe94);
            }
            uVar6 = FUN_0277d7b4(&local_78,puVar8);
            if ((uVar6 & 1) != 0) {
              uVar10 = 6;
              goto LAB_02e8f4dc;
            }
          }
        }
        uVar10 = 1;
LAB_02e8f4dc:
        *param_1 = uVar10;
        param_1[1] = (undefined4)local_78;
        param_1[2] = local_78._4_4_;
        return;
      }
      uVar10 = 4;
    }
    else {
      if (param_3 < *(uint *)(param_2 + 0x1eb10)) {
        puVar15 = *(undefined8 **)(param_2 + 0x1eb18);
        lVar16 = (long)(int)*(uint *)(param_2 + 0x1eb10) << 3;
        uVar14 = 0;
        lVar11 = *(long *)PTR_DAT_04bb43c0;
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        do {
          puVar13 = (undefined4 *)*puVar15;
          uVar5 = FUN_0277d6c4(puVar13);
          lVar17 = *(long *)puVar8;
          if (lVar17 != 0) {
            lVar11 = *(long *)(lVar11 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
              local_70 = *puVar13;
              local_6c = puVar13[1];
              local_68 = 0;
              local_78 = puVar2;
              uVar5 = FUN_0277d6c4(&local_70);
              if (*(long *)puVar8 != 0) {
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
              lVar17 = *(long *)puVar8;
              if ((uVar6 & 1) != 0) {
                if (uVar14 == param_3) goto LAB_02e8f328;
                uVar14 = uVar14 + 1;
              }
            }
          }
          lVar11 = lVar17;
          puVar15 = puVar15 + 1;
          lVar16 = lVar16 + -8;
        } while (lVar16 != 0);
        puVar13 = (undefined4 *)PTR_DAT_04bb37e0;
LAB_02e8f328:
        uVar10 = *puVar13;
        uVar9 = puVar13[1];
        *param_1 = 1;
        param_1[1] = uVar10;
        param_1[2] = uVar9;
        return;
      }
      uVar10 = 1;
    }
    uVar4 = *(undefined4 *)PTR_DAT_04bb37e0;
    uVar9 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *param_1 = uVar10;
    param_1[1] = uVar4;
  }
  param_1[2] = uVar9;
  return;
}

