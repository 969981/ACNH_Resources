
undefined8 FUN_038b4610(long *param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  char *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined **local_370;
  char *local_368;
  undefined *local_360;
  undefined1 *local_358;
  undefined4 local_350;
  undefined1 local_34c [127];
  undefined1 local_2cd;
  long *local_2c8;
  uint local_2c0;
  undefined **local_2b8;
  undefined1 *local_2b0;
  long *local_2a8;
  uint local_2a0;
  undefined *local_298;
  undefined1 *local_290;
  undefined *local_288;
  char *local_280;
  int local_278;
  char local_274 [511];
  undefined1 local_75;
  char local_6c [12];
  
  if ((char)param_1[0xf] == '\0') {
    return 0;
  }
  uVar7 = (**(code **)(*param_1 + 0x20))();
  if ((((uVar7 & 1) == 0) || (local_6c[0] = '\0', (char)param_1[0xf] == '\0')) ||
     (uVar7 = (**(code **)(*param_1 + 200))(param_1,local_6c,param_2), (uVar7 & 1) == 0)) {
LAB_038b4d08:
    uVar8 = 0;
  }
  else {
    if (local_6c[0] == '\0') {
      local_75 = 0;
      local_278 = 0x200;
      local_280 = local_274;
      local_274[0] = '\0';
      local_288 = PTR_DAT_04bb2d90 + 0x10;
      uVar7 = FUN_038b7550(&local_288,param_2);
      iVar9 = 1;
      while ((uVar7 & 1) != 0) {
        local_6c[0] = '\0';
        if (((char)param_1[0xf] == '\0') ||
           (uVar7 = (**(code **)(*param_1 + 200))(param_1,local_6c,&local_288), (uVar7 & 1) == 0))
        goto LAB_038b4d08;
        if (local_6c[0] != '\0') goto LAB_038b473c;
        uVar7 = FUN_038b7550(&local_288,&local_288);
        iVar9 = iVar9 + 1;
      }
      if (local_278 < 1) {
        (**(code **)(local_288 + 0x18))(&local_288);
      }
      else {
        *local_280 = '\0';
      }
LAB_038b473c:
      local_2a0 = 0;
      local_298 = PTR_DAT_04bb2020 + 0x10;
      local_290 = &DAT_040bd1e9;
      local_2a8 = param_2;
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar12 = 0;
      do {
        if (*(char *)(param_2[1] + lVar12) == '\0') {
LAB_038b47cc:
          uVar16 = (int)lVar12 + 1;
          goto LAB_038b47d0;
        }
        lVar2 = param_2[1] + lVar12;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_038b47cc;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_038b47cc;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      uVar16 = 1;
LAB_038b47d0:
      if ((local_2a8 == param_2) && (local_2a0 == uVar16)) {
        iVar18 = 0;
        uVar17 = 0;
      }
      else {
        iVar18 = 0;
        do {
          uVar17 = local_2a0;
          plVar4 = local_2a8;
          iVar18 = iVar18 + 1;
          (**(code **)(*local_2a8 + 0x18))(local_2a8);
          lVar12 = 0;
          do {
            if (*(char *)(plVar4[1] + lVar12) == '\0') {
LAB_038b4dbc:
              iVar10 = (int)lVar12;
              goto joined_r0x038b4dc0;
            }
            lVar2 = plVar4[1] + lVar12;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_038b4dbc;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              iVar10 = (int)lVar12 + 2;
              goto joined_r0x038b4dc0;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          iVar10 = 0;
joined_r0x038b4dc0:
          if ((-1 < (int)uVar17) && ((int)uVar17 <= iVar10)) {
            uVar7 = (ulong)uVar17;
            pcVar15 = (char *)(local_2a8[1] + uVar7);
            uVar11 = uVar17;
            if (*pcVar15 != '\0') {
              do {
                (**(code **)(local_298 + 0x18))(&local_298);
                uVar14 = 0;
                bVar6 = true;
                cVar3 = *pcVar15;
                do {
                  if (local_290[uVar14] == '\0') break;
                  if (local_290[uVar14] == cVar3) {
                    if (bVar6) goto LAB_038b4e84;
                    break;
                  }
                  if (local_290[uVar14 + 1] == '\0') break;
                  if (local_290[uVar14 + 1] == cVar3) goto LAB_038b4e84;
                  if (local_290[uVar14 + 2] == '\0') break;
                  if (local_290[uVar14 + 2] == cVar3) goto LAB_038b4e84;
                  bVar6 = uVar14 < 0x7fffe;
                  uVar14 = uVar14 + 3;
                } while (uVar14 != 0x80001);
                uVar7 = uVar7 + 1;
                pcVar15 = (char *)(local_2a8[1] + uVar7);
              } while (*pcVar15 != '\0');
LAB_038b4e84:
              uVar11 = (uint)uVar7;
            }
            local_2a0 = uVar11 + 1;
          }
        } while ((local_2a8 != param_2) || (local_2a0 != uVar16));
      }
      local_2c0 = 0;
      if (uVar17 + 1 != uVar16) {
        uVar17 = uVar16;
      }
      local_2b8 = &PTR_LAB_048f9770;
      local_2b0 = &DAT_040bd1e9;
      if (uVar17 != 0) {
        iVar18 = iVar18 - iVar9;
        puVar1 = PTR_DAT_04bb2d88 + 0x10;
        local_2c8 = param_2;
        do {
          if (iVar18 < 1) {
            local_350 = 0x80;
            local_2cd = 0;
            local_34c[0] = 0;
            local_360 = puVar1;
            local_358 = local_34c;
            FUN_0076e020(&local_2c8,&local_360);
            local_370 = &PTR_LAB_048f9770;
            local_368 = "";
            (**(code **)(local_288 + 0x18))(&local_288);
            (**(code **)(local_288 + 0x18))(&local_288);
            pcVar15 = local_280;
            (*(code *)local_370[3])(&local_370);
            pcVar5 = local_280;
            if (pcVar15 != local_368) {
              if (*local_280 == *local_368) {
                if (*local_280 != '\0') {
                  lVar12 = 0x7fffe;
                  pcVar13 = local_368;
                  pcVar15 = local_280;
                  do {
                    if (pcVar15[1] != pcVar13[1]) goto LAB_038b497c;
                    if (pcVar15[1] == '\0') break;
                    if (pcVar15[2] != pcVar13[2]) goto LAB_038b497c;
                    if (pcVar15[2] == '\0') break;
                    if ((lVar12 == 0) || (cVar3 = pcVar15[3], cVar3 != pcVar13[3]))
                    goto LAB_038b497c;
                    lVar12 = lVar12 + -3;
                    pcVar13 = pcVar13 + 3;
                    pcVar15 = pcVar15 + 3;
                  } while (cVar3 != '\0');
                }
              }
              else {
LAB_038b497c:
                local_370 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                local_368 = "/";
                (**(code **)(local_288 + 0x18))(&local_288);
                lVar12 = 0;
                do {
                  if (local_280[lVar12] == '\0') goto LAB_038b49ec;
                  if (local_280[lVar12 + 1] == '\0') {
                    lVar12 = lVar12 + 1;
                    goto LAB_038b49ec;
                  }
                  if (local_280[lVar12 + 2] == '\0') {
                    lVar12 = lVar12 + 2;
                    goto LAB_038b49ec;
                  }
                  lVar12 = lVar12 + 3;
                } while (lVar12 != 0x80001);
                lVar12 = 0;
LAB_038b49ec:
                uVar16 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
                (*(code *)local_370[3])(&local_370);
                lVar12 = 0;
                do {
                  if (local_368[lVar12] == '\0') goto LAB_038b4a4c;
                  if (local_368[lVar12 + 1] == '\0') {
                    lVar12 = lVar12 + 1;
                    goto LAB_038b4a4c;
                  }
                  if (local_368[lVar12 + 2] == '\0') {
                    lVar12 = lVar12 + 2;
                    goto LAB_038b4a4c;
                  }
                  lVar12 = lVar12 + 3;
                } while (lVar12 != 0x80001);
                lVar12 = 0;
LAB_038b4a4c:
                uVar11 = (uint)lVar12;
                if ((int)(local_278 - uVar16) <= (int)(uint)lVar12) {
                  uVar11 = local_278 + ~uVar16;
                }
                if (0 < (int)uVar11) {
                  (*(code *)local_370[3])(&local_370);
                  memcpy(pcVar5 + uVar16,local_368,(ulong)uVar11);
                  pcVar5[(int)(uVar11 + uVar16)] = '\0';
                }
              }
            }
            pcVar15 = local_280;
            (**(code **)(local_288 + 0x18))(&local_288);
            lVar12 = 0;
            do {
              if (local_280[lVar12] == '\0') goto LAB_038b4aec;
              if (local_280[lVar12 + 1] == '\0') {
                lVar12 = lVar12 + 1;
                goto LAB_038b4aec;
              }
              if (local_280[lVar12 + 2] == '\0') {
                lVar12 = lVar12 + 2;
                goto LAB_038b4aec;
              }
              lVar12 = lVar12 + 3;
            } while (lVar12 != 0x80001);
            lVar12 = 0;
LAB_038b4aec:
            uVar16 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
            (**(code **)(local_360 + 0x18))(&local_360);
            lVar12 = 0;
            do {
              if (local_358[lVar12] == '\0') goto LAB_038b4b4c;
              if (local_358[lVar12 + 1] == '\0') {
                lVar12 = lVar12 + 1;
                goto LAB_038b4b4c;
              }
              if (local_358[lVar12 + 2] == '\0') {
                lVar12 = lVar12 + 2;
                goto LAB_038b4b4c;
              }
              lVar12 = lVar12 + 3;
            } while (lVar12 != 0x80001);
            lVar12 = 0;
LAB_038b4b4c:
            uVar11 = (uint)lVar12;
            if ((int)(local_278 - uVar16) <= (int)(uint)lVar12) {
              uVar11 = local_278 + ~uVar16;
            }
            if (0 < (int)uVar11) {
              (**(code **)(local_360 + 0x18))(&local_360);
              memcpy(pcVar15 + uVar16,local_358,(ulong)uVar11);
              pcVar15[(int)(uVar11 + uVar16)] = '\0';
            }
            if ((((char)param_1[0xf] == '\0') ||
                (uVar7 = (**(code **)(*param_1 + 0x20))(param_1), (uVar7 & 1) == 0)) ||
               (uVar7 = (**(code **)(*param_1 + 0xe8))(param_1,&local_288,param_3), (uVar7 & 1) == 0
               )) goto LAB_038b4d08;
          }
          else {
            iVar18 = iVar18 + -1;
          }
          uVar16 = local_2c0;
          plVar4 = local_2c8;
          (**(code **)(*local_2c8 + 0x18))(local_2c8);
          lVar12 = 0;
          do {
            if (*(char *)(plVar4[1] + lVar12) == '\0') {
LAB_038b4c2c:
              iVar9 = (int)lVar12;
              goto joined_r0x038b4c30;
            }
            lVar2 = plVar4[1] + lVar12;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_038b4c2c;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              iVar9 = (int)lVar12 + 2;
              goto joined_r0x038b4c30;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          iVar9 = 0;
joined_r0x038b4c30:
          if ((-1 < (int)uVar16) && ((int)uVar16 <= iVar9)) {
            uVar7 = (ulong)uVar16;
            pcVar15 = (char *)(local_2c8[1] + uVar7);
            if (*pcVar15 != '\0') {
              do {
                (*(code *)local_2b8[3])(&local_2b8);
                uVar14 = 0;
                bVar6 = true;
                cVar3 = *pcVar15;
                do {
                  if (local_2b0[uVar14] == '\0') break;
                  if (local_2b0[uVar14] == cVar3) {
                    if (bVar6) goto LAB_038b4cf0;
                    break;
                  }
                  if (local_2b0[uVar14 + 1] == '\0') break;
                  if (local_2b0[uVar14 + 1] == cVar3) goto LAB_038b4cf0;
                  if (local_2b0[uVar14 + 2] == '\0') break;
                  if (local_2b0[uVar14 + 2] == cVar3) goto LAB_038b4cf0;
                  bVar6 = uVar14 < 0x7fffe;
                  uVar14 = uVar14 + 3;
                } while (uVar14 != 0x80001);
                uVar7 = uVar7 + 1;
                pcVar15 = (char *)(local_2c8[1] + uVar7);
              } while (*pcVar15 != '\0');
LAB_038b4cf0:
              uVar16 = (uint)uVar7;
            }
            local_2c0 = uVar16 + 1;
          }
        } while ((local_2c8 != param_2) || (local_2c0 != uVar17));
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}

