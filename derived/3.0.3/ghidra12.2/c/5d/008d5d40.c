
void FUN_008d5d40(long *param_1,byte param_2,ulong param_3)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  byte *pbVar18;
  byte local_8c [4];
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  char *local_78;
  
  if ((param_3 & 1) != 0) {
    local_78 = "Chara_Attention_On";
    if ((param_2 & 1) == 0) {
      local_78 = "Chara_Attention_Off";
    }
    local_80 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    FUN_03844960(*param_1 + 0x37fc8,&local_80,0);
  }
  *(byte *)((long)param_1 + 0x45) = param_2 & 1;
  local_80 = &PTR_FUN_04923f50;
  local_78 = (char *)(CONCAT71(local_78._1_7_,param_2) & 0xffffffffffffff01);
  iVar11 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar11 != 0) {
    lVar16 = (long)iVar11 << 3;
    puVar15 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_80)(&local_80,*puVar15);
      lVar16 = lVar16 + -8;
      puVar15 = puVar15 + 1;
    } while (lVar16 != 0);
  }
  FUN_02507c6c(&local_80,7,1,1,1);
  puVar9 = PTR_DAT_04bb5038;
  puVar8 = PTR_DAT_04bb4718;
  puVar7 = PTR_DAT_04bb3760;
  puVar6 = PTR_DAT_04bb3758;
  puVar5 = PTR_DAT_04bb3238;
  puVar4 = PTR_DAT_04bb27c0;
  uVar13 = (ulong)local_80 & 0xff;
  local_88 = local_80._4_4_;
  local_8c[0] = 0xff;
  if ((byte)local_80 < 8) {
    local_8c[0] = (byte)local_80;
  }
  local_84 = local_78._0_2_;
  if ((param_2 & 1) == 0) {
    if ((byte)local_80 < 8) {
      puVar1 = PTR_DAT_04bb3290 + 0x10;
      do {
        lVar16 = *(long *)puVar8;
        lVar14 = *(long *)puVar4;
        puVar2 = (uint *)puVar5;
        if (lVar16 != 0) {
          puVar2 = (uint *)(lVar16 + uVar13 * 4 + 0xde8);
        }
        uVar3 = *puVar2;
        if ((((lVar14 != 0 && uVar3 != 0) &&
             (plVar17 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                  ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar17 != (long *)0x0)) &&
            ((*(uint *)(plVar17 + 0x49) >> 1 & 1) == 0)) && (*(uint *)(plVar17 + 0x46) == uVar3)) {
          lVar16 = plVar17[0x2a];
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
            *(undefined **)puVar6 = puVar1;
            __cxa_guard_release(puVar7);
          }
          uVar13 = (**(code **)(*plVar17 + 0x20))(plVar17,puVar6);
          if ((((uVar13 & 1) != 0) && ((int)lVar16 == 1)) &&
             (uVar13 = (**(code **)(*plVar17 + 0x228))(plVar17), (uVar13 & 1) != 0)) {
            (**(code **)(*plVar17 + 0x240))(plVar17);
          }
        }
        bVar10 = local_8c[0];
        uVar13 = (ulong)local_8c[0];
        if (7 < local_8c[0]) {
          return;
        }
        if (uVar13 + 1 == 8) {
          return;
        }
        pbVar18 = puVar9 + uVar13 + 1;
        uVar12 = FUN_02507924(local_8c,pbVar18);
        if ((uVar12 & 1) == 0) {
          if (uVar13 + 2 == 8) {
            return;
          }
          pbVar18 = puVar9 + uVar13 + 2;
          uVar12 = FUN_02507924(local_8c,pbVar18);
          if ((uVar12 & 1) == 0) {
            if (uVar13 + 3 == 8) {
              return;
            }
            pbVar18 = puVar9 + uVar13 + 3;
            uVar12 = FUN_02507924(local_8c,pbVar18);
            if ((uVar12 & 1) == 0) {
              if (uVar13 + 4 == 8) {
                return;
              }
              pbVar18 = puVar9 + uVar13 + 4;
              uVar12 = FUN_02507924(local_8c,pbVar18);
              if ((uVar12 & 1) == 0) {
                if (uVar13 + 5 == 8) {
                  return;
                }
                pbVar18 = puVar9 + uVar13 + 5;
                uVar12 = FUN_02507924(local_8c,pbVar18);
                if ((uVar12 & 1) == 0) {
                  if (uVar13 + 6 == 8) {
                    return;
                  }
                  pbVar18 = puVar9 + uVar13 + 6;
                  uVar12 = FUN_02507924(local_8c,pbVar18);
                  if ((uVar12 & 1) == 0) {
                    if (uVar13 + 7 == 8) {
                      return;
                    }
                    pbVar18 = puVar9 + uVar13 + 7;
                    uVar12 = FUN_02507924(local_8c,pbVar18);
                    if ((uVar12 & 1) == 0) {
                      if (bVar10 == 0) {
                        return;
                      }
                      pbVar18 = puVar9 + uVar13 + 8;
                      FUN_02507924(local_8c,pbVar18);
                    }
                  }
                }
              }
            }
          }
        }
        local_8c[0] = *pbVar18;
        uVar13 = (ulong)local_8c[0];
      } while (local_8c[0] < 8);
      return;
    }
  }
  else if ((byte)local_80 < 8) {
    puVar1 = PTR_DAT_04bb3290 + 0x10;
    do {
      lVar16 = *(long *)puVar8;
      lVar14 = *(long *)puVar4;
      puVar2 = (uint *)puVar5;
      if (lVar16 != 0) {
        puVar2 = (uint *)(lVar16 + uVar13 * 4 + 0xde8);
      }
      uVar3 = *puVar2;
      if ((((lVar14 != 0 && uVar3 != 0) &&
           (plVar17 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar17 != (long *)0x0)) &&
          ((*(uint *)(plVar17 + 0x49) >> 1 & 1) == 0)) && (*(uint *)(plVar17 + 0x46) == uVar3)) {
        lVar16 = plVar17[0x2a];
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          *(undefined **)puVar6 = puVar1;
          __cxa_guard_release(puVar7);
        }
        uVar13 = (**(code **)(*plVar17 + 0x20))(plVar17,puVar6);
        if ((((uVar13 & 1) != 0) && ((int)lVar16 == 1)) &&
           (uVar13 = (**(code **)(*plVar17 + 0x230))(plVar17), (uVar13 & 1) != 0)) {
          (**(code **)(*plVar17 + 0x238))(plVar17);
        }
      }
      bVar10 = local_8c[0];
      uVar13 = (ulong)local_8c[0];
      if (7 < local_8c[0]) {
        return;
      }
      if (uVar13 + 1 == 8) {
        return;
      }
      pbVar18 = puVar9 + uVar13 + 1;
      uVar12 = FUN_02507924(local_8c,pbVar18);
      if ((uVar12 & 1) == 0) {
        if (uVar13 + 2 == 8) {
          return;
        }
        pbVar18 = puVar9 + uVar13 + 2;
        uVar12 = FUN_02507924(local_8c,pbVar18);
        if ((uVar12 & 1) == 0) {
          if (uVar13 + 3 == 8) {
            return;
          }
          pbVar18 = puVar9 + uVar13 + 3;
          uVar12 = FUN_02507924(local_8c,pbVar18);
          if ((uVar12 & 1) == 0) {
            if (uVar13 + 4 == 8) {
              return;
            }
            pbVar18 = puVar9 + uVar13 + 4;
            uVar12 = FUN_02507924(local_8c,pbVar18);
            if ((uVar12 & 1) == 0) {
              if (uVar13 + 5 == 8) {
                return;
              }
              pbVar18 = puVar9 + uVar13 + 5;
              uVar12 = FUN_02507924(local_8c,pbVar18);
              if ((uVar12 & 1) == 0) {
                if (uVar13 + 6 == 8) {
                  return;
                }
                pbVar18 = puVar9 + uVar13 + 6;
                uVar12 = FUN_02507924(local_8c,pbVar18);
                if ((uVar12 & 1) == 0) {
                  if (uVar13 + 7 == 8) {
                    return;
                  }
                  pbVar18 = puVar9 + uVar13 + 7;
                  uVar12 = FUN_02507924(local_8c,pbVar18);
                  if ((uVar12 & 1) == 0) {
                    if (bVar10 == 0) {
                      return;
                    }
                    pbVar18 = puVar9 + uVar13 + 8;
                    FUN_02507924(local_8c,pbVar18);
                  }
                }
              }
            }
          }
        }
      }
      local_8c[0] = *pbVar18;
      uVar13 = (ulong)local_8c[0];
    } while (local_8c[0] < 8);
    return;
  }
  return;
}

