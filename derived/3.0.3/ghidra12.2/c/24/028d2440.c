
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028d2440(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  undefined *puVar21;
  undefined *local_c0;
  char *pcStack_b8;
  undefined *local_b0;
  char *pcStack_a8;
  undefined *local_a0;
  char *pcStack_98;
  undefined *local_90;
  char *pcStack_88;
  undefined *local_80;
  char *local_78;
  undefined1 local_70;
  byte local_6f;
  uint local_68;
  int local_64;
  
  uVar7 = nn::time::GetDayOfWeek
                    ((int)(short)param_2[2],(int)*(char *)((long)param_2 + 0x12),
                     (int)*(char *)((long)param_2 + 0x13));
  puVar3 = PTR_DAT_04bb5038;
  puVar2 = PTR_DAT_04bb46b0;
  puVar19 = (undefined8 *)PTR_DAT_04bb27d0;
  puVar21 = PTR_DAT_04bb2020;
  plVar15 = *(long **)PTR_DAT_04bb27d0;
  if (((plVar15 == (long *)0x0) || (plVar15[5] == 0)) || ((int)plVar15[0x10] != 1)) {
    uVar13 = (ulong)uVar7;
    if (6 < uVar7) {
      uVar13 = 0;
    }
    uVar7 = *(uint *)(param_1 + uVar13 * 4);
    if (0xb < uVar7) {
      uVar7 = 0;
    }
    if (((char)param_2[5] != '\0') || (*param_2 != 0)) {
      uVar4 = uVar7;
      goto LAB_028d27f8;
    }
    bVar5 = uVar7 == 0xb;
    if (plVar15 != (long *)0x0) goto LAB_028d24f8;
LAB_028d2508:
    if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0) {
      if (*(char *)((long)param_2 + 0x29) == '\0') {
        local_b0 = PTR_DAT_04bb2020 + 0x10;
        pcStack_a8 = "JohnnySitUpFlag";
        pcStack_88 = "GulBQuestStartFlag";
        if (!bVar5) {
          pcStack_88 = "JohnnyQuestStartFlag";
        }
        pcStack_98 = "GulBQuestFinishFlag";
        if (!bVar5) {
          pcStack_98 = "JohnnyQuestFinishFlag";
        }
        local_a0 = local_b0;
        local_90 = local_b0;
        iVar9 = FUN_0252d29c();
        puVar2 = PTR_DAT_04bb46b0;
        local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar9);
        if (iVar9 == -1) {
LAB_028d2ed8:
          uVar14 = 0;
        }
        else {
          local_64 = 0;
          puVar17 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
          if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
            lVar10 = (**(code **)(*(long *)*puVar17 + 0x38))();
            lVar18 = 0;
            if (lVar10 != 0) {
              lVar18 = lVar10 + 0x70;
            }
          }
          else {
            lVar18 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
          }
          if (*(long **)(lVar18 + 0x28) == (long *)0x0) {
            uVar13 = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar18 + 0x28);
            uVar13 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              uVar13 = (**(code **)*puVar17)();
            }
          }
          lVar10 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
          lVar16 = *(long *)(lVar10 + 0x1e33b0);
          lVar10 = *(long *)(lVar10 + 0x1e33b8);
          if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
             (puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar17 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar17)();
          }
          if (((iVar9 != 0 && (lVar16 != 0 || lVar10 != 0)) &&
              (iVar8 = FUN_0274ce10(&local_64,&local_90), iVar8 != 0)) &&
             (iVar8 = FUN_0274ce10(&local_64,&local_a0), iVar8 == 0)) goto LAB_028d2ed8;
          local_64 = 1;
          puVar17 = *(undefined8 **)(*(long *)puVar2 + 0x10);
          if ((*(byte *)(*(long *)puVar2 + 0x453) & 1) == 0) {
            lVar10 = (**(code **)(*(long *)*puVar17 + 0x38))();
            lVar18 = 0;
            if (lVar10 != 0) {
              lVar18 = lVar10 + 0x70;
            }
          }
          else {
            lVar18 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
          }
          if (*(long **)(lVar18 + 0x28) == (long *)0x0) {
            uVar13 = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar18 + 0x28);
            uVar13 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              uVar13 = (**(code **)*puVar17)();
            }
          }
          lVar10 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
          lVar16 = *(long *)(lVar10 + 0x1e33f8);
          lVar10 = *(long *)(lVar10 + 0x1e3400);
          if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
             (puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar17 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar17)();
          }
          if (((iVar9 != 1 && (lVar16 != 0 || lVar10 != 0)) &&
              (iVar8 = FUN_0274ce10(&local_64,&local_90), iVar8 != 0)) &&
             (iVar8 = FUN_0274ce10(&local_64,&local_a0), iVar8 == 0)) goto LAB_028d2ed8;
          local_64 = 2;
          puVar17 = *(undefined8 **)(*(long *)puVar2 + 0x10);
          if ((*(byte *)(*(long *)puVar2 + 0x453) & 1) == 0) {
            lVar10 = (**(code **)(*(long *)*puVar17 + 0x38))();
            lVar18 = 0;
            if (lVar10 != 0) {
              lVar18 = lVar10 + 0x70;
            }
          }
          else {
            lVar18 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
          }
          if (*(long **)(lVar18 + 0x28) == (long *)0x0) {
            uVar13 = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar18 + 0x28);
            uVar13 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              uVar13 = (**(code **)*puVar17)();
            }
          }
          lVar10 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
          lVar16 = *(long *)(lVar10 + 0x1e3440);
          lVar10 = *(long *)(lVar10 + 0x1e3448);
          if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
             (puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar17 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar17)();
          }
          if (((iVar9 != 2 && (lVar16 != 0 || lVar10 != 0)) &&
              (iVar8 = FUN_0274ce10(&local_64,&local_90), iVar8 != 0)) &&
             (iVar8 = FUN_0274ce10(&local_64,&local_a0), iVar8 == 0)) goto LAB_028d2ed8;
          local_64 = 3;
          puVar17 = *(undefined8 **)(*(long *)puVar2 + 0x10);
          if ((*(byte *)(*(long *)puVar2 + 0x453) & 1) == 0) {
            lVar10 = (**(code **)(*(long *)*puVar17 + 0x38))();
            lVar18 = 0;
            if (lVar10 != 0) {
              lVar18 = lVar10 + 0x70;
            }
          }
          else {
            lVar18 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
          }
          if (*(long **)(lVar18 + 0x28) == (long *)0x0) {
            uVar13 = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar18 + 0x28);
            uVar13 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              uVar13 = (**(code **)*puVar17)();
            }
          }
          lVar10 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
          lVar16 = *(long *)(lVar10 + 0x1e3488);
          lVar10 = *(long *)(lVar10 + 0x1e3490);
          if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
             (puVar17 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar17 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar17)();
          }
          if (((iVar9 != 3 && (lVar16 != 0 || lVar10 != 0)) &&
              (iVar8 = FUN_0274ce10(&local_64,&local_90), iVar8 != 0)) &&
             (iVar8 = FUN_0274ce10(&local_64,&local_a0), iVar8 == 0)) goto LAB_028d2ed8;
          local_64 = 4;
          lVar18 = FUN_0264d510();
          local_70 = 1;
          local_78 = (char *)lVar18;
          if (*(long **)(lVar18 + 0x28) == (long *)0x0) {
            local_6f = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar18 + 0x28);
            local_6f = 0;
            if (puVar17 != (undefined8 *)0x0) {
              local_6f = (**(code **)*puVar17)();
            }
          }
          puVar2 = PTR_DAT_04bb4f90;
          local_6f = local_6f & 1;
          local_80 = PTR_DAT_04bb4f90 + 0x10;
          lVar18 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
          lVar10 = *(long *)(lVar18 + 0x1e34d0);
          lVar18 = *(long *)(lVar18 + 0x1e34d8);
          FUN_02640184(&local_80);
          if (((iVar9 != 4) && (lVar10 != 0 || lVar18 != 0)) &&
             ((iVar8 = FUN_0274ce10(&local_64,&local_90), iVar8 != 0 &&
              (iVar8 = FUN_0274ce10(&local_64,&local_a0), iVar8 == 0)))) goto LAB_028d2ed8;
          local_64 = 5;
          lVar18 = FUN_0264d510();
          local_70 = 1;
          local_78 = (char *)lVar18;
          if (*(long **)(lVar18 + 0x28) == (long *)0x0) {
            bVar6 = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar18 + 0x28);
            bVar6 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              bVar6 = (**(code **)*puVar17)();
            }
          }
          local_6f = bVar6 & 1;
          local_80 = puVar2 + 0x10;
          lVar18 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
          lVar10 = *(long *)(lVar18 + 0x1e3518);
          lVar18 = *(long *)(lVar18 + 0x1e3520);
          FUN_02640184(&local_80);
          if (((iVar9 != 5) && (lVar10 != 0 || lVar18 != 0)) &&
             ((iVar8 = FUN_0274ce10(&local_64,&local_90), iVar8 != 0 &&
              (iVar8 = FUN_0274ce10(&local_64,&local_a0), iVar8 == 0)))) goto LAB_028d2ed8;
          local_64 = 6;
          lVar18 = FUN_0264d510();
          local_70 = 1;
          local_78 = (char *)lVar18;
          if (*(long **)(lVar18 + 0x28) == (long *)0x0) {
            bVar6 = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar18 + 0x28);
            bVar6 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              bVar6 = (**(code **)*puVar17)();
            }
          }
          local_6f = bVar6 & 1;
          local_80 = puVar2 + 0x10;
          lVar18 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
          lVar10 = *(long *)(lVar18 + 0x1e3560);
          lVar18 = *(long *)(lVar18 + 0x1e3568);
          FUN_02640184(&local_80);
          if ((((iVar9 != 6) && (lVar10 != 0 || lVar18 != 0)) &&
              (iVar8 = FUN_0274ce10(&local_64,&local_90), iVar8 != 0)) &&
             (iVar8 = FUN_0274ce10(&local_64,&local_a0), iVar8 == 0)) goto LAB_028d2ed8;
          local_64 = 7;
          lVar18 = FUN_0264d510();
          local_70 = 1;
          local_78 = (char *)lVar18;
          if (*(long **)(lVar18 + 0x28) == (long *)0x0) {
            bVar6 = 0;
          }
          else {
            puVar17 = (undefined8 *)**(long **)(lVar18 + 0x28);
            bVar6 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              bVar6 = (**(code **)*puVar17)();
            }
          }
          local_6f = bVar6 & 1;
          local_80 = puVar2 + 0x10;
          lVar18 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
          lVar10 = *(long *)(lVar18 + 0x1e35a8);
          lVar18 = *(long *)(lVar18 + 0x1e35b0);
          FUN_02640184(&local_80);
          if ((((iVar9 != 7) && (lVar10 != 0 || lVar18 != 0)) &&
              ((iVar9 = FUN_0274ce10(&local_64,&local_90), iVar9 != 0 &&
               (iVar9 = FUN_0274ce10(&local_64,&local_a0), iVar9 == 0)))) ||
             (iVar9 = FUN_0274ce10(&local_c0,&local_a0), iVar9 == 0)) goto LAB_028d2ed8;
          uVar14 = 1;
        }
        FUN_0273f3c4(&local_b0,uVar14);
      }
    }
    else {
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_98 = "JohnnySitUpFlag";
      local_78 = "GulBQuestStartFlag";
      if (!bVar5) {
        local_78 = "JohnnyQuestStartFlag";
      }
      pcStack_88 = "GulBQuestFinishFlag";
      if (!bVar5) {
        pcStack_88 = "JohnnyQuestFinishFlag";
      }
      uVar13 = 0;
      bVar6 = 0;
      local_90 = local_a0;
      local_80 = local_a0;
      do {
        lVar18 = *(long *)puVar2;
        if (lVar18 == 0) {
LAB_028d2610:
          lVar18 = 0;
          plVar15 = _DAT_00000028;
          if (_DAT_00000028 == (long *)0x0) goto LAB_028d25d4;
LAB_028d261c:
          uVar11 = 0;
          if ((undefined8 *)*plVar15 != (undefined8 *)0x0) {
            uVar11 = (*(code *)**(undefined8 **)*plVar15)();
          }
        }
        else {
          puVar19 = *(undefined8 **)(lVar18 + 0x10);
          if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
            lVar10 = (**(code **)(*(long *)*puVar19 + 0x38))();
            lVar18 = 0;
            if (lVar10 != 0) {
              lVar18 = lVar10 + 0x70;
            }
            plVar15 = *(long **)(lVar18 + 0x28);
          }
          else {
            if ((puVar19 == (undefined8 *)0x0) || ((long *)puVar19[0x26] == (long *)0x0))
            goto LAB_028d2610;
            lVar18 = (**(code **)(*(long *)puVar19[0x26] + 0x38))();
            plVar15 = *(long **)(lVar18 + 0x28);
          }
          if (plVar15 != (long *)0x0) goto LAB_028d261c;
LAB_028d25d4:
          uVar11 = 0;
        }
        lVar16 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + uVar13 * 0x48;
        lVar10 = *(long *)(lVar16 + 0x1e33b0);
        lVar16 = *(long *)(lVar16 + 0x1e33b8);
        if ((((uVar11 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
           (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar19 != (undefined8 *)0x0))
        {
          (**(code **)*puVar19)();
        }
        if (lVar10 != 0 || lVar16 != 0) {
          FUN_02507c6c(&local_b0,1,1,0,0);
          bVar1 = (byte)local_b0;
          if ((byte)local_b0 < 8) {
            do {
              local_c0 = (undefined *)CONCAT71(local_c0._1_7_,bVar1);
              uVar11 = FUN_02582fe0(&local_c0);
              if ((uVar13 == (uVar11 & 0xffffffff)) &&
                 (iVar9 = FUN_0274bce0(&local_b0,&local_80), iVar9 != 0)) {
                iVar9 = FUN_0274bce0(&local_b0,&local_90);
                bVar6 = iVar9 == 0 | bVar6;
              }
              bVar1 = (byte)local_b0;
              uVar11 = (ulong)local_b0 & 0xff;
              if ((7 < (byte)local_b0) || (uVar11 + 1 == 8)) break;
              pbVar20 = puVar3 + uVar11 + 1;
              uVar12 = FUN_02507924(&local_b0,pbVar20);
              if ((uVar12 & 1) == 0) {
                if (uVar11 + 2 == 8) break;
                pbVar20 = puVar3 + uVar11 + 2;
                uVar12 = FUN_02507924(&local_b0,pbVar20);
                if ((uVar12 & 1) == 0) {
                  if (uVar11 + 3 == 8) break;
                  pbVar20 = puVar3 + uVar11 + 3;
                  uVar12 = FUN_02507924(&local_b0,pbVar20);
                  if ((uVar12 & 1) == 0) {
                    if (uVar11 + 4 == 8) break;
                    pbVar20 = puVar3 + uVar11 + 4;
                    uVar12 = FUN_02507924(&local_b0,pbVar20);
                    if ((uVar12 & 1) == 0) {
                      if (uVar11 + 5 == 8) break;
                      pbVar20 = puVar3 + uVar11 + 5;
                      uVar12 = FUN_02507924(&local_b0,pbVar20);
                      if ((uVar12 & 1) == 0) {
                        if (uVar11 + 6 == 8) break;
                        pbVar20 = puVar3 + uVar11 + 6;
                        uVar12 = FUN_02507924(&local_b0,pbVar20);
                        if ((uVar12 & 1) == 0) {
                          if (uVar11 + 7 == 8) break;
                          pbVar20 = puVar3 + uVar11 + 7;
                          uVar12 = FUN_02507924(&local_b0,pbVar20);
                          if ((uVar12 & 1) == 0) {
                            if (bVar1 == 0) break;
                            pbVar20 = puVar3 + uVar11 + 8;
                            FUN_02507924(&local_b0,pbVar20);
                          }
                        }
                      }
                    }
                  }
                }
              }
              bVar1 = *pbVar20;
              if (7 < bVar1) break;
              local_b0 = (undefined *)CONCAT71(local_b0._1_7_,bVar1);
            } while( true );
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != 8);
      FUN_0273f3c4(&local_a0,bVar6);
      puVar21 = PTR_DAT_04bb2020;
      puVar19 = (undefined8 *)PTR_DAT_04bb27d0;
    }
  }
  else {
    if ((char)param_2[5] == '\0') {
      uVar7 = 0;
      bVar5 = false;
      uVar4 = 0;
      if (*param_2 == 0) {
LAB_028d24f8:
        if (*(byte *)(*plVar15 + 0x476) < 2) goto LAB_028d2508;
        goto LAB_028d2ee4;
      }
    }
    else {
      uVar4 = 0;
    }
LAB_028d27f8:
    uVar7 = uVar4;
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "JohnnySitUpFlag";
    FUN_0273f3c4(&local_80,0);
  }
LAB_028d2ee4:
  if (*param_2 != 0) {
    local_80 = puVar21 + 0x10;
    local_78 = "GstQuestStartLandFlag";
    FUN_02743234(&local_80,0);
    goto LAB_028d2f08;
  }
  if (*(char *)((long)param_2 + 0x29) == '\0' && *(char *)((long)param_2 + 0x2a) == '\0') {
    if (*(char *)((long)param_2 + 0x29) != '\0') goto LAB_028d2f28;
LAB_028d2f70:
    if (((1 < *(byte *)(*(long *)*puVar19 + 0x476)) ||
        (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0)) ||
       ((*(char *)((long)param_2 + 0x2a) == '\0' &&
        ((*param_2 == 0 && (*(char *)((long)param_2 + 0x2b) != '\0')))))) goto LAB_028d3150;
    local_80 = puVar21 + 0x10;
    local_78 = "SpnVisitMainField";
    FUN_0273f3c4(&local_80,0);
    local_64 = FUN_0252d29c();
    if (local_64 == -1) goto LAB_028d3150;
    local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
    uVar13 = FUN_02b5e950(&local_90,local_64);
    if ((uVar13 & 1) == 0) {
LAB_028d30b4:
      local_68 = 0;
    }
    else {
      local_80 = (undefined *)CONCAT44(local_80._4_4_,local_90._0_4_);
      lVar18 = *(long *)PTR_DAT_04bb46b0;
      if (lVar18 == 0) goto LAB_028d30b4;
      puVar19 = *(undefined8 **)(lVar18 + 0x10);
      if ((*(byte *)(lVar18 + 0x453) & 1) != 0) {
        if (((puVar19 != (undefined8 *)0x0) && ((long *)puVar19[0x26] != (long *)0x0)) &&
           (lVar18 = (**(code **)(*(long *)puVar19[0x26] + 0x38))(), lVar18 != 0))
        goto LAB_028d30a8;
        goto LAB_028d30b4;
      }
      lVar18 = (**(code **)(*(long *)*puVar19 + 0x38))();
      if (lVar18 == 0) goto LAB_028d30b4;
      lVar18 = lVar18 + 0x70;
LAB_028d30a8:
      if (7 < (uint)local_80) goto LAB_028d30b4;
      lVar10 = lVar18 + 0x119228 + ((ulong)local_80 & 0xffffffff) * 0xfa08;
      if (7 < (uint)local_80) {
        lVar10 = lVar18 + 0x119228;
      }
      local_70 = 1;
      local_78 = (char *)lVar10;
      if (*(long **)(lVar10 + 0x28) == (long *)0x0) {
        bVar6 = 0;
      }
      else {
        puVar19 = (undefined8 *)**(long **)(lVar10 + 0x28);
        bVar6 = 0;
        if (puVar19 != (undefined8 *)0x0) {
          bVar6 = (**(code **)*puVar19)();
        }
      }
      local_6f = bVar6 & 1;
      local_80 = PTR_DAT_04bb8088 + 0x10;
      local_68 = *(uint *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8));
      if (8 < local_68) {
        local_68 = 0;
      }
      FUN_02640184(&local_80);
    }
    if ((int)local_68 < 2) goto LAB_028d3150;
    local_78 = "ImmQ_A_Complete";
    local_80 = puVar21 + 0x10;
    uVar13 = FUN_0273f0a0(&local_80);
    if ((uVar13 & 1) == 0) goto LAB_028d3150;
    pcStack_88 = "ImmQ_B_Complete";
    local_90 = puVar21 + 0x10;
    uVar13 = FUN_0273f0a0(&local_90);
    if ((uVar13 & 1) == 0) goto LAB_028d3150;
    pcStack_98 = "ImmQ_C_Complete";
    local_a0 = puVar21 + 0x10;
    uVar13 = FUN_0273f0a0(&local_a0);
    if ((uVar13 & 1) == 0) goto LAB_028d3150;
    pcStack_a8 = "CommuneIslandAvailable";
    local_b0 = puVar21 + 0x10;
    iVar9 = FUN_0274ce10(&local_64,&local_b0);
    if (iVar9 != 0) goto LAB_028d3150;
    local_c0 = puVar21 + 0x10;
    pcStack_b8 = "VisitedCommune";
    iVar9 = FUN_0274ce10(&local_64,&local_c0);
    if (iVar9 != 0) goto LAB_028d3150;
    uVar14 = 1;
  }
  else {
    local_78 = "GstQuestStartLandFlag";
    local_80 = puVar21 + 0x10;
    FUN_02743234(&local_80,0);
    iVar9 = FUN_0252d29c();
    local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar9);
    if (iVar9 == -1) {
LAB_028d2f08:
      uVar14 = 0;
    }
    else {
      local_78 = "GstQuestClearFlag";
      local_80 = puVar21 + 0x10;
      iVar9 = FUN_0274ce10(&local_90,&local_80);
      if (iVar9 == 0) goto LAB_028d2f08;
      uVar14 = 1;
    }
    local_80 = puVar21 + 0x10;
    local_78 = "GstQuestClearFlag";
    FUN_02743234(&local_80,uVar14);
    if (*(char *)((long)param_2 + 0x29) == '\0') goto LAB_028d2f70;
LAB_028d2f28:
    uVar14 = 0;
  }
  local_80 = puVar21 + 0x10;
  local_78 = "SpnVisitMainField";
  FUN_0273f3c4(&local_80,uVar14);
LAB_028d3150:
  if (((char)param_2[5] != '\0') || (*param_2 != 0)) {
    local_80 = puVar21 + 0x10;
    local_78 = "HgcVisitFlagForTailor";
    FUN_0273f3c4(&local_80,uVar7 == 2);
  }
  return;
}

