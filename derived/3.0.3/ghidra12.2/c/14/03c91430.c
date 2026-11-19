
uint FUN_03c91430(long *param_1,undefined8 *param_2,long *param_3,char *param_4,uint param_5,
                 uint param_6,code *param_7,ulong param_8)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  code *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  char *pcVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined **local_e8;
  undefined ****ppppuStack_e0;
  long *local_d8;
  undefined ***local_c8;
  undefined8 *local_c0;
  long *local_b8;
  undefined **local_b0;
  char *local_a8;
  undefined4 local_a0;
  char local_9c [24];
  undefined1 local_84;
  undefined1 local_7c;
  undefined **local_78;
  char *local_70;
  
  if (param_5 != 0) {
LAB_03c914a4:
    lVar19 = 0;
    local_b0 = &PTR_LAB_048f9770;
    local_a8 = "/";
    do {
      if (param_4[lVar19] == '\0') {
LAB_03c91500:
        iVar18 = (int)lVar19;
joined_r0x03c91504:
        if (0 < iVar18) {
          lVar20 = 0;
          goto LAB_03c91520;
        }
        break;
      }
      if (param_4[lVar19 + 1] == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_03c91500;
      }
      if (param_4[lVar19 + 2] == '\0') {
        lVar19 = lVar19 + 2;
        iVar18 = (int)lVar19;
        goto joined_r0x03c91504;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    goto LAB_03c9155c;
  }
  uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar8 = (**(code **)*param_2)(param_2,uVar7);
  if ((uVar8 & 1) == 0) goto LAB_03c914a4;
LAB_03c9149c:
  uVar6 = 1;
  goto LAB_03c91df8;
code_r0x03c91d5c:
  plVar1 = (long *)(*(long *)(lVar22 + 0xc1) + lVar19);
  pcVar14 = param_7;
  if ((param_8 & 1) != 0) {
    pcVar14 = *(code **)(param_7 + *plVar1);
  }
  lVar23 = lVar22 + -8;
  uVar8 = (*pcVar14)(plVar1,uVar7);
  if ((uVar8 & 1) == 0) {
LAB_03c91d84:
    uVar6 = 0;
    if ((lVar23 != lVar20) && (lVar22 = *(long *)(lVar23 + 0x18), lVar22 != 0)) {
      do {
        if (lVar23 != *(long *)(lVar22 + 0x20) + -8) {
          plVar1 = (long *)(*(long *)(*(long *)(lVar23 + 0x10) + 0xc1) + lVar19);
          pcVar14 = param_7;
          if ((param_8 & 1) != 0) {
            pcVar14 = *(code **)(param_7 + *plVar1);
          }
          lVar23 = *(long *)(lVar23 + 0x10) + -8;
          uVar8 = (*pcVar14)(plVar1,uVar7);
          lVar22 = lVar23;
          if ((uVar8 & 1) != 0) goto LAB_03c91bf8;
        }
        lVar23 = lVar22;
        uVar6 = 0;
        if ((lVar23 == lVar20) || (lVar22 = *(long *)(lVar23 + 0x18), lVar22 == 0)) break;
      } while( true );
    }
    goto LAB_03c91df8;
  }
  goto LAB_03c91bf8;
  while (lVar20 = lVar20 + 1, lVar19 != lVar20) {
LAB_03c91520:
    (*(code *)local_b0[3])(&local_b0);
    if ((param_4 + lVar20 == local_a8) || (param_4[lVar20] == *local_a8)) {
      if ((int)lVar20 != 0) goto LAB_03c91568;
      pcVar11 = param_4 + 1;
      iVar18 = param_5 - 1;
      goto LAB_03c91680;
    }
  }
LAB_03c9155c:
  lVar20 = 0xffffffff;
LAB_03c91568:
  uVar5 = (uint)lVar20;
  bVar4 = (int)uVar5 < 0;
  bVar2 = param_5 <= uVar5;
  if (bVar4 || bVar2) {
    uVar5 = param_5;
  }
  local_78 = &PTR_LAB_048f9770;
  pcVar11 = param_4 + (int)(uVar5 + 1);
  iVar18 = param_5 - (uVar5 + 1);
  lVar19 = (long)param_8 >> 1;
  local_70 = param_4;
  if ((int)uVar5 < 1) {
LAB_03c91b38:
    lVar20 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar6 = 0;
    if (lVar20 == 0) goto LAB_03c91df8;
    uVar7 = *(undefined8 *)(*(long *)(lVar20 + 0xc9) + 8);
    plVar1 = (long *)(*(long *)(lVar20 + 0xc9) + lVar19);
    if ((param_8 & 1) == 0) {
      pcVar14 = param_7;
    }
    else {
      pcVar14 = *(code **)(param_7 + *plVar1);
    }
    uVar8 = (*pcVar14)(plVar1,uVar7);
    if ((uVar8 & 1) != 0) {
      lVar23 = lVar20;
LAB_03c91be0:
      uVar13 = uVar5;
      if (0x7ffff < (int)uVar5) {
        uVar13 = 0x80000;
      }
LAB_03c91bf8:
      lVar22 = (**(code **)(**(long **)(lVar23 + 0xc9) + 0x18))();
      pcVar10 = (char *)(lVar22 + 0xb0);
      (*(code *)local_78[3])(&local_78);
      (*(code *)local_78[3])(&local_78);
      if ((0 < (int)uVar5) && (local_70 != pcVar10)) {
        pcVar15 = local_70;
        pcVar17 = pcVar10;
        uVar8 = (ulong)uVar13;
        do {
          uVar8 = uVar8 - 1;
          if (*pcVar15 != *pcVar17) goto LAB_03c91d4c;
          if (*pcVar15 == '\0') break;
          pcVar15 = pcVar15 + 1;
          pcVar17 = pcVar17 + 1;
        } while (uVar8 != 0);
      }
      lVar21 = 0;
      do {
        lVar9 = lVar22 + lVar21;
        if (*(char *)(lVar9 + 0xb0) == '\0') goto LAB_03c91cb0;
        if (*(char *)(lVar9 + 0xb1) == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_03c91cb0;
        }
        if (*(char *)(lVar9 + 0xb2) == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_03c91cb0;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_03c91cb0:
      pcVar15 = PTR_DAT_04c4b988;
      if ((int)uVar5 <= (int)lVar21 && -1 < (int)uVar5) {
        pcVar15 = pcVar10 + uVar5;
      }
      if (*pcVar15 == '\0') {
LAB_03c91d04:
        if (bVar4 || bVar2) {
          uVar8 = (**(code **)*param_2)(param_2,lVar23);
        }
        else {
          uVar8 = FUN_03c91430(*(undefined8 *)(lVar23 + 0xc9),param_2,param_3,pcVar11,iVar18,0,
                               param_7,param_8);
        }
        if ((uVar8 & 1) != 0) goto LAB_03c9149c;
      }
      else if (*pcVar15 == '_') {
        uVar6 = (uint)(byte)pcVar15[1];
        if (pcVar15[1] != 0) {
          pbVar16 = (byte *)(pcVar15 + 2);
          do {
            if (9 < uVar6 - 0x30) goto LAB_03c91d4c;
            uVar6 = (uint)*pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (uVar6 != 0);
        }
        goto LAB_03c91d04;
      }
LAB_03c91d4c:
      lVar22 = *(long *)(lVar23 + 0x28);
      if (lVar22 != lVar23 + 0x20) goto code_r0x03c91d5c;
      goto LAB_03c91d84;
    }
    lVar22 = *(long *)(lVar20 + 0x28);
    if (lVar22 != lVar20 + 0x20) {
      lVar23 = lVar22 + -8;
      plVar1 = (long *)(*(long *)(lVar22 + 0xc1) + lVar19);
      if ((param_8 & 1) == 0) {
        pcVar14 = param_7;
      }
      else {
        pcVar14 = *(code **)(param_7 + *plVar1);
      }
      uVar8 = (*pcVar14)(plVar1,uVar7);
      if ((uVar8 & 1) == 0) {
        lVar22 = *(long *)(lVar22 + 0x10);
        uVar6 = 0;
        if ((lVar22 != 0) && (lVar23 != lVar20)) {
          do {
            if (lVar23 != *(long *)(lVar22 + 0x20) + -8) {
              plVar1 = (long *)(*(long *)(*(long *)(lVar23 + 0x10) + 0xc1) + lVar19);
              pcVar14 = param_7;
              if ((param_8 & 1) != 0) {
                pcVar14 = *(code **)(param_7 + *plVar1);
              }
              lVar23 = *(long *)(lVar23 + 0x10) + -8;
              uVar8 = (*pcVar14)(plVar1,uVar7);
              lVar22 = lVar23;
              if ((uVar8 & 1) != 0) goto LAB_03c91be0;
            }
            lVar23 = lVar22;
            uVar6 = 0;
          } while ((lVar23 != lVar20) && (lVar22 = *(long *)(lVar23 + 0x18), lVar22 != 0));
        }
        goto LAB_03c91df8;
      }
      goto LAB_03c91be0;
    }
  }
  else {
    lVar20 = 0;
    do {
      pcVar10 = param_4;
      if (param_4[lVar20] == '\0') {
LAB_03c915ec:
        if ((int)lVar20 < 0) {
          pcVar10 = PTR_DAT_04bb2120;
        }
        break;
      }
      if (param_4[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_03c915ec;
      }
      if (param_4[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_03c915ec;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    if (*pcVar10 != '$') {
      lVar20 = 0;
      do {
        pcVar10 = param_4;
        if (param_4[lVar20] == '\0') {
LAB_03c9183c:
          if ((int)lVar20 < 0) {
            pcVar10 = PTR_DAT_04bb2120;
          }
          break;
        }
        if (param_4[lVar20 + 1] == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_03c9183c;
        }
        if (param_4[lVar20 + 2] == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_03c9183c;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      if (*pcVar10 == '*') {
        lVar20 = 0;
        do {
          if (param_4[lVar20] == '\0') {
LAB_03c91938:
            iVar12 = (int)lVar20;
joined_r0x03c9193c:
            if (0 < iVar12) {
              local_70 = param_4 + 1;
              goto LAB_03c91960;
            }
            break;
          }
          if (param_4[lVar20 + 1] == '\0') {
            lVar20 = lVar20 + 1;
            goto LAB_03c91938;
          }
          if (param_4[lVar20 + 2] == '\0') {
            iVar12 = (int)lVar20 + 2;
            goto joined_r0x03c9193c;
          }
          lVar20 = lVar20 + 3;
        } while (lVar20 != 0x80001);
        local_70 = PTR_DAT_04c4b988;
LAB_03c91960:
        local_84 = 0;
        local_a0 = 0x19;
        local_9c[0] = '\0';
        local_b0 = (undefined **)&DAT_04b853f8;
        local_a8 = local_9c;
        if (local_9c != local_70) {
          uVar6 = 0x18;
          if ((int)uVar5 < 0x1a) {
            uVar6 = uVar5 - 1;
          }
          memcpy(local_9c,local_70,(long)(int)uVar6);
          local_9c[(int)uVar6] = '\0';
        }
        lVar20 = (**(code **)(*param_1 + 0x28))(param_1);
        lVar23 = *(long *)(lVar20 + 0xb8);
        (*(code *)local_b0[3])(&local_b0);
        if (lVar23 != 0) {
          pcVar10 = (char *)FUN_00364d70((long *)(lVar20 + 0xb8),local_a8);
          if (pcVar10 != (char *)0x0) {
            local_e8 = &PTR_LAB_048f9770;
            ppppuStack_e0 = (undefined ****)pcVar10;
            if (*pcVar10 != '\0') {
              if (pcVar10 == "RootPane") {
LAB_03c91ac8:
                lVar20 = *(long *)(lVar20 + 0x18);
              }
              else {
                uVar8 = 0;
                bVar3 = true;
                do {
                  if (pcVar10[uVar8] != "RootPane"[uVar8]) break;
                  if (pcVar10[uVar8] == '\0') {
                    if (bVar3) goto LAB_03c91ac8;
                    break;
                  }
                  bVar3 = uVar8 < 0x80000;
                  uVar8 = uVar8 + 1;
                } while (uVar8 != 0x80001);
                lVar20 = FUN_03c9c9b0(lVar20,&local_e8,*(undefined8 *)(lVar20 + 0x18));
              }
              if (lVar20 != 0) {
                plVar1 = (long *)(*(long *)(lVar20 + 0xc9) + lVar19);
                if ((param_8 & 1) == 0) {
                  pcVar14 = param_7;
                }
                else {
                  pcVar14 = *(code **)(param_7 + *plVar1);
                }
                uVar8 = (*pcVar14)(plVar1,param_1[1]);
                if ((uVar8 & 1) != 0) {
                  lVar23 = lVar20;
                  do {
                    lVar22 = (**(code **)(*param_1 + 0x18))(param_1);
                    if (lVar23 == lVar22) {
                      if (bVar4 || bVar2) {
                        uVar6 = (**(code **)*param_2)(param_2,lVar20);
                      }
                      else {
                        param_1 = *(long **)(lVar20 + 0xc9);
LAB_03c91680:
                        uVar6 = FUN_03c91430(param_1,param_2,param_3,pcVar11,iVar18,0,param_7,
                                             param_8);
                      }
                      goto LAB_03c91df8;
                    }
                    lVar23 = *(long *)(lVar23 + 0x18);
                  } while (lVar23 != 0);
                }
              }
            }
          }
        }
        uVar5 = uVar5 - 1;
      }
      goto LAB_03c91b38;
    }
    lVar20 = 0;
    do {
      if (param_4[lVar20] == '\0') {
LAB_03c91698:
        iVar12 = (int)lVar20;
joined_r0x03c9169c:
        if (0 < iVar12) {
          param_4 = param_4 + 1;
          goto LAB_03c916c8;
        }
        break;
      }
      if (param_4[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_03c91698;
      }
      if (param_4[lVar20 + 2] == '\0') {
        iVar12 = (int)lVar20 + 2;
        goto joined_r0x03c9169c;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    param_4 = PTR_DAT_04c4b988;
LAB_03c916c8:
    local_7c = 0;
    local_9c[0] = '\0';
    local_a0 = 0x21;
    local_b0 = (undefined **)(PTR_DAT_04bd2f18 + 0x10);
    local_a8 = local_9c;
    if (local_9c != param_4) {
      if (0x20 < (int)uVar5) {
        uVar5 = 0x21;
      }
      memcpy(local_9c,param_4,(long)(int)uVar5 - 1U);
      local_9c[(long)(int)uVar5 - 1U] = '\0';
    }
    if ((bVar4 || bVar2) && ((param_6 ^ 0xffffffff) & 1) == 0) {
      lVar19 = param_1[2];
      local_c8 = &local_b0;
      ppppuStack_e0 = &local_c8;
      lVar20 = *(long *)(lVar19 + 0x20);
      local_e8 = &PTR_FUN_04b853d0;
      local_d8 = param_1;
      local_c0 = param_2;
      local_b8 = param_3;
      if (lVar20 != 0) {
        (*(code *)local_b0[3])(&local_b0);
        lVar20 = FUN_00367720(lVar20,local_a8);
        if (lVar20 != 0) {
          uVar8 = (**(code **)(*local_b8 + 8))();
          if ((uVar8 & 1) == 0) {
            for (lVar19 = *(long *)(lVar20 + 0x20); lVar19 != lVar20 + 0x18;
                lVar19 = *(long *)(lVar19 + 8)) {
              lVar22 = *(long *)(lVar19 + 0x10);
              lVar23 = lVar22;
              do {
                lVar21 = (**(code **)(*param_1 + 0x18))(param_1);
                if (lVar23 == lVar21) {
                  uVar8 = (**(code **)*local_c0)(local_c0,lVar22);
                  if ((uVar8 & 1) != 0) goto LAB_03c9149c;
                  break;
                }
                lVar23 = *(long *)(lVar23 + 0x18);
              } while (lVar23 != 0);
            }
          }
          else {
            uVar8 = (**(code **)*local_b8)(local_b8,lVar20,lVar19);
            if ((uVar8 & 1) != 0) goto LAB_03c9149c;
          }
        }
      }
      uVar6 = FUN_03c91ed0(param_1,&local_e8,param_1[1]);
      goto LAB_03c91df8;
    }
    lVar20 = (**(code **)(*param_1 + 0x28))(param_1);
    lVar23 = *(long *)(lVar20 + 0x20);
    if (lVar23 != 0) {
      (*(code *)local_b0[3])(&local_b0);
      lVar23 = FUN_00367720(lVar23,local_a8);
      uVar6 = 0;
      if (lVar23 == 0) goto LAB_03c91df8;
      uVar5 = (**(code **)(*param_3 + 8))(param_3);
      if ((bVar4 || bVar2) && ((uVar5 ^ 0xffffffff) & 1) == 0) {
        uVar6 = (**(code **)*param_3)(param_3,lVar23,lVar20);
        goto LAB_03c91df8;
      }
      for (lVar20 = *(long *)(lVar23 + 0x20); lVar20 != lVar23 + 0x18;
          lVar20 = *(long *)(lVar20 + 8)) {
        lVar22 = *(long *)(lVar20 + 0x10);
        plVar1 = (long *)(*(long *)(lVar22 + 0xc9) + lVar19);
        pcVar14 = param_7;
        if ((param_8 & 1) != 0) {
          pcVar14 = *(code **)(param_7 + *plVar1);
        }
        uVar8 = (*pcVar14)(plVar1,param_1[1]);
        if ((uVar8 & 1) != 0) {
          lVar21 = lVar22;
          do {
            lVar9 = (**(code **)(*param_1 + 0x18))(param_1);
            if (lVar21 == lVar9) {
              if (bVar4 || bVar2) {
                uVar8 = (**(code **)*param_2)(param_2,lVar22);
              }
              else {
                uVar8 = FUN_03c91430(*(undefined8 *)(lVar22 + 0xc9),param_2,param_3,pcVar11,iVar18,0
                                     ,param_7,param_8);
              }
              if ((uVar8 & 1) != 0) goto LAB_03c9149c;
              break;
            }
            lVar21 = *(long *)(lVar21 + 0x18);
          } while (lVar21 != 0);
        }
      }
    }
  }
  uVar6 = 0;
LAB_03c91df8:
  return uVar6 & 1;
}

