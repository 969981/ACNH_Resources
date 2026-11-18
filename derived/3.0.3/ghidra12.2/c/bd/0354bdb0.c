
void FUN_0354bdb0(undefined4 *param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  uint *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  puVar5 = PTR_DAT_04bb43c0;
  puVar4 = PTR_DAT_04bb37e0;
  puVar11 = PTR_DAT_04bb27f8;
  plVar1 = (long *)(param_2 + 0x1c370);
  uVar19 = *(uint *)(param_2 + 0x1c288);
  if (((int)uVar19 < 0) || (*(int *)(param_2 + 0x1c270) <= (int)uVar19)) goto LAB_0354c4c8;
  lVar20 = param_2 + 0x1c260;
  uVar7 = uVar19 + 1;
  uVar2 = uVar7 & 3;
  lVar15 = lVar20;
  if (2 < uVar19) {
    uVar16 = uVar7 & 0xfffffffc;
    do {
      uVar16 = uVar16 - 4;
      lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(lVar15 + 8) + 8) + 8) + 8);
    } while (uVar16 != 0);
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    lVar15 = *(long *)(lVar15 + 8);
  }
  if (((lVar15 == 0) || (lVar15 = lVar15 - *(int *)(param_2 + 0x1c274), lVar15 == 0)) ||
     (*(int *)(lVar15 + 0x270) != 0x78)) {
    uVar2 = uVar7 & 3;
    lVar15 = lVar20;
    if (2 < uVar19) {
      uVar16 = uVar7 & 0xfffffffc;
      do {
        uVar16 = uVar16 - 4;
        lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(lVar15 + 8) + 8) + 8) + 8);
      } while (uVar16 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar15 = *(long *)(lVar15 + 8);
    }
    lVar21 = -(long)*(int *)(param_2 + 0x1c274);
    if (((lVar15 != 0) && (lVar21 + lVar15 != 0)) && (*(int *)(lVar21 + lVar15 + 0x270) == 9)) {
LAB_0354bf94:
      if (param_3 != 0) {
        piVar9 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
        puVar11 = PTR_DAT_04bb37e0;
        if (*piVar9 == 0) {
          puVar18 = (undefined8 *)PTR_DAT_04bb37e0;
        }
        else {
          piVar9 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
          if (*piVar9 - 1U < param_3 - 1) {
            puVar18 = (undefined8 *)PTR_DAT_04bb37e0;
          }
          else {
            lVar15 = (**(code **)(*plVar1 + 0x18))(plVar1);
            puVar18 = *(undefined8 **)(*(long *)(lVar15 + 8) + (long)(int)(param_3 - 1) * 8);
          }
        }
        puVar4 = PTR_DAT_04bb5ce0;
        local_78 = (undefined *)*puVar18;
        uVar19 = *(uint *)(param_2 + 0x1c288);
        if ((-1 < (int)uVar19) && ((int)uVar19 < *(int *)(param_2 + 0x1c270))) {
          uVar7 = uVar19 + 1;
          uVar2 = uVar7 & 3;
          lVar15 = lVar20;
          if (2 < uVar19) {
            uVar16 = uVar7 & 0xfffffffc;
            do {
              uVar16 = uVar16 - 4;
              lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(lVar15 + 8) + 8) + 8) + 8);
            } while (uVar16 != 0);
          }
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            lVar15 = *(long *)(lVar15 + 8);
          }
          if (((lVar15 == 0) || (lVar15 = lVar15 - *(int *)(param_2 + 0x1c274), lVar15 == 0)) ||
             (*(int *)(lVar15 + 0x270) != 9)) {
            uVar2 = uVar7 & 3;
            if (2 < uVar19) {
              uVar7 = uVar7 & 0xfffffffc;
              do {
                uVar7 = uVar7 - 4;
                lVar20 = *(long *)(*(long *)(*(long *)(*(long *)(lVar20 + 8) + 8) + 8) + 8);
              } while (uVar7 != 0);
            }
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              lVar20 = *(long *)(lVar20 + 8);
            }
            if (((lVar20 != 0) && (lVar20 = lVar20 - *(int *)(param_2 + 0x1c274), lVar20 != 0)) &&
               (*(int *)(lVar20 + 0x270) == 8)) {
              if (*(long *)PTR_DAT_04bb5ce0 != 0) {
                puVar11 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe54);
              }
              uVar8 = FUN_0277d7b4(&local_78,puVar11);
              if ((uVar8 & 1) != 0) {
                uVar13 = 7;
                goto LAB_0354c590;
              }
            }
          }
          else {
            if (*(long *)PTR_DAT_04bb5ce0 != 0) {
              puVar11 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
            }
            uVar8 = FUN_0277d7b4(&local_78,puVar11);
            if ((uVar8 & 1) != 0) {
              uVar13 = 5;
              goto LAB_0354c590;
            }
            lVar20 = *(long *)puVar4;
            puVar11 = PTR_DAT_04bb37e0;
            if ((lVar20 != 0) && (*(char *)(lVar20 + 0xe9e) != '\0')) {
              puVar11 = (undefined *)(lVar20 + 0xe94);
            }
            uVar8 = FUN_0277d7b4(&local_78,puVar11);
            if ((uVar8 & 1) != 0) {
              uVar13 = 6;
              goto LAB_0354c590;
            }
          }
        }
        uVar13 = 1;
LAB_0354c590:
        *param_1 = uVar13;
        param_1[1] = (undefined4)local_78;
        param_1[2] = local_78._4_4_;
        return;
      }
      uVar13 = 4;
      goto LAB_0354c0d8;
    }
    uVar2 = uVar7 & 3;
    lVar15 = lVar20;
    if (2 < uVar19) {
      uVar16 = uVar7 & 0xfffffffc;
      do {
        uVar16 = uVar16 - 4;
        lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(lVar15 + 8) + 8) + 8) + 8);
      } while (uVar16 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar15 = *(long *)(lVar15 + 8);
    }
    if (((lVar15 != 0) && (lVar21 + lVar15 != 0)) && (*(int *)(lVar21 + lVar15 + 0x270) == 8))
    goto LAB_0354bf94;
    uVar2 = uVar7 & 3;
    if (2 < uVar19) {
      uVar7 = uVar7 & 0xfffffffc;
      do {
        uVar7 = uVar7 - 4;
        lVar20 = *(long *)(*(long *)(*(long *)(*(long *)(lVar20 + 8) + 8) + 8) + 8);
      } while (uVar7 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar20 = *(long *)(lVar20 + 8);
    }
    if (((lVar20 == 0) || (lVar21 + lVar20 == 0)) || (*(int *)(lVar21 + lVar20 + 0x270) != 0x77)) {
LAB_0354c4c8:
      piVar9 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
      if (*piVar9 == 0) {
LAB_0354c500:
        puVar17 = (undefined4 *)PTR_DAT_04bb37e0;
      }
      else {
        lVar20 = *plVar1;
LAB_0354c4e8:
        piVar9 = (int *)(**(code **)(lVar20 + 0x18))(plVar1);
        if (*piVar9 - 1U < param_3) goto LAB_0354c500;
        lVar20 = (**(code **)(*plVar1 + 0x18))(plVar1);
        puVar17 = *(undefined4 **)(*(long *)(lVar20 + 8) + (long)(int)param_3 * 8);
      }
      uVar13 = *puVar17;
      uVar12 = puVar17[1];
      *param_1 = 1;
LAB_0354c530:
      param_1[1] = uVar13;
      goto LAB_0354c534;
    }
    lVar20 = *(long *)PTR_DAT_04bb27f8;
    uVar19 = 0;
    if (lVar20 == 0) {
LAB_0354c468:
      piVar9 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
      if (*piVar9 != 0) {
        lVar20 = *plVar1;
        param_3 = param_3 - uVar19;
        goto LAB_0354c4e8;
      }
      goto LAB_0354c500;
    }
    iVar3 = *(int *)(*(long *)(*(long *)(param_2 + 0x228) + 0x570) + 0x2e8);
    lVar15 = *(long *)PTR_DAT_04bb2720;
    if (lVar15 == 0) {
      puVar18 = &DAT_055c04a0;
    }
    else {
      puVar18 = &DAT_055c04a0;
      if (*(long *)(lVar15 + 0x330) != 0) {
        puVar18 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar6 = FUN_006bd550(*puVar18,0);
        puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar18 = &DAT_055c04a0;
        }
      }
    }
    iVar6 = *(int *)(puVar18 + 7);
    if (((DAT_05ac0a90 == iVar6) || (DAT_05ac0aa0 == iVar6)) ||
       ((((DAT_05ac0ab0 == iVar6 || ((DAT_05ac0ac0 == iVar6 || (DAT_05ac0ad0 == iVar6)))) ||
         (DAT_05ac0ae0 == iVar6)) ||
        ((((DAT_05ac0af0 == iVar6 || (DAT_05ac0b00 == iVar6)) || (DAT_05ac0b10 == iVar6)) ||
         (DAT_05ac0b20 == iVar6)))))) {
      piVar9 = (int *)FUN_036e50d0(lVar20);
    }
    else {
      piVar9 = (int *)(lVar20 + 0x40);
    }
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = (iVar3 + *piVar9 + -1) / iVar3;
    }
    uVar19 = iVar6 * iVar3;
    if ((int)uVar19 < 1 || uVar19 <= param_3) goto LAB_0354c468;
    lVar20 = *(long *)puVar11;
    if (lVar20 == 0) goto LAB_0354c4c8;
    lVar15 = FUN_029156e0();
    uVar8 = FUN_03777260(*(undefined4 *)(lVar15 + 0x38));
    if ((uVar8 & 1) != 0) {
      puVar10 = (uint *)FUN_036e50d0(lVar20);
      if (param_3 < *puVar10) {
        uVar13 = 9;
        goto LAB_0354c0d8;
      }
LAB_0354c5c0:
      puVar11 = PTR_DAT_04bb37e0;
      *param_1 = 0;
      uVar13 = *(undefined4 *)puVar11;
      uVar12 = *(undefined4 *)(puVar11 + 4);
      goto LAB_0354c530;
    }
    if (*(uint *)(lVar20 + 0x40) <= param_3) goto LAB_0354c5c0;
    uVar13 = 8;
    lVar20 = *(long *)(*(long *)(lVar20 + 0x48) + (long)(int)param_3 * 8);
    uVar14 = *(undefined4 *)(lVar20 + 8);
    uVar12 = *(undefined4 *)(lVar20 + 0xc);
  }
  else {
    uVar19 = *(uint *)(param_2 + 0x108ec8);
    if (param_3 < uVar19) {
      puVar18 = *(undefined8 **)(param_2 + 0x108ed0);
      if (*(int *)(param_2 + 0x23c) == 1) {
        uVar7 = 0;
        lVar20 = (long)(int)uVar19 << 3;
        do {
          puVar17 = (undefined4 *)*puVar18;
          uVar8 = FUN_03551b90(puVar17);
          if ((uVar8 & 1) != 0) {
            if (uVar7 == param_3) goto LAB_0354c398;
            uVar7 = uVar7 + 1;
          }
          puVar18 = puVar18 + 1;
          lVar20 = lVar20 + -8;
        } while (lVar20 != 0);
        puVar17 = (undefined4 *)puVar4;
LAB_0354c398:
        uVar13 = *puVar17;
        uVar12 = puVar17[1];
      }
      else {
        lVar20 = (long)(int)uVar19 << 3;
        uVar19 = 0;
        lVar15 = *(long *)PTR_DAT_04bb43c0;
        puVar11 = PTR_DAT_04bc0510 + 0x10;
        do {
          puVar17 = (undefined4 *)*puVar18;
          uVar7 = FUN_0277d6c4(puVar17);
          lVar21 = *(long *)puVar5;
          if (lVar21 != 0) {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              local_70 = *puVar17;
              local_6c = puVar17[1];
              local_68 = 0;
              local_78 = puVar11;
              uVar7 = FUN_0277d6c4(&local_70);
              if (*(long *)puVar5 != 0) {
                lVar15 = *(long *)(lVar21 + 0x57e58);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                  lVar15 = *(long *)PTR_DAT_04bc0428;
                  uVar7 = FUN_0277d6c4(puVar17);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if (uVar7 < *(uint *)(lVar15 + 0x1d8)) {
                    lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8);
                    if (lVar15 != 0) {
                      local_68 = lVar15;
                    }
                  }
                }
              }
              uVar8 = FUN_01af7d10(&local_78);
              lVar21 = *(long *)puVar5;
              if ((uVar8 & 1) != 0) {
                if (uVar19 == param_3) goto LAB_0354c290;
                uVar19 = uVar19 + 1;
              }
            }
          }
          lVar15 = lVar21;
          puVar18 = puVar18 + 1;
          lVar20 = lVar20 + -8;
        } while (lVar20 != 0);
        puVar17 = (undefined4 *)PTR_DAT_04bb37e0;
LAB_0354c290:
        uVar13 = *puVar17;
        uVar12 = puVar17[1];
      }
      param_1[2] = uVar12;
      *param_1 = 1;
      param_1[1] = uVar13;
      return;
    }
    uVar13 = 1;
LAB_0354c0d8:
    uVar14 = *(undefined4 *)PTR_DAT_04bb37e0;
    uVar12 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  }
  *param_1 = uVar13;
  param_1[1] = uVar14;
LAB_0354c534:
  param_1[2] = uVar12;
  return;
}

