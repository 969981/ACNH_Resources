
void FUN_03d677b0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_1e0;
  char *local_1d8;
  undefined *local_1d0;
  char *local_1c8;
  undefined *local_1c0;
  undefined1 *puStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [255];
  undefined1 local_ad;
  long local_a8 [5];
  undefined *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  local_a8[0] = 0;
  local_a8[1] = 0;
  plVar5 = (long *)param_2[0xb];
  local_70 = 0;
  local_a8[4] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_80 = PTR_FUN_04bd4118;
  uStack_78 = 0;
  if ((plVar5 != (long *)0x0) && ((**(code **)(*plVar5 + 0x30))(plVar5,local_a8), local_a8[3] != 0))
  {
    puVar1 = PTR_DAT_04bb21f8 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    while (*(long *)(local_a8[0] + 0xb8) != 0) {
      local_ad = 0;
      local_1b0 = 0x100;
      local_1ac[0] = 0;
      local_1c0 = puVar1;
      puStack_1b8 = local_1ac;
      FUN_03c907b0(&local_1c0);
      if ((local_a8[3] == 0) ||
         (local_1c8 = *(char **)(local_a8[0] + 0xb8), local_1c8 == (char *)0x0)) {
        local_1c8 = (char *)0x0;
        local_1d0 = puVar2;
LAB_03d678cc:
        uVar8 = 0;
        bVar4 = true;
        do {
          if (local_1c8[uVar8] != "LpLocator"[uVar8]) break;
          if (local_1c8[uVar8] == '\0') {
            if (bVar4) goto LAB_03d67934;
            break;
          }
          if (local_1c8[uVar8 + 1] != "LpLocator"[uVar8 + 1]) break;
          if (local_1c8[uVar8 + 1] == '\0') goto LAB_03d67934;
          if (local_1c8[uVar8 + 2] != "LpLocator"[uVar8 + 2]) break;
          if (local_1c8[uVar8 + 2] == '\0') goto LAB_03d67934;
          bVar4 = uVar8 < 0x7fffe;
          uVar8 = uVar8 + 3;
        } while (uVar8 != 0x80001);
        if (local_1c8 == "LpUniteButton") {
LAB_03d679b0:
          puVar7 = (undefined8 *)(*param_1 + 0x18);
        }
        else {
          uVar8 = 0;
          bVar4 = true;
          do {
            if (local_1c8[uVar8] != "LpUniteButton"[uVar8]) break;
            if (local_1c8[uVar8] == '\0') {
              if (bVar4) goto LAB_03d679b0;
              break;
            }
            if (local_1c8[uVar8 + 1] != "LpUniteButton"[uVar8 + 1]) break;
            if (local_1c8[uVar8 + 1] == '\0') goto LAB_03d679b0;
            if (local_1c8[uVar8 + 2] != "LpUniteButton"[uVar8 + 2]) break;
            if (local_1c8[uVar8 + 2] == '\0') goto LAB_03d679b0;
            bVar4 = uVar8 < 0x7fffe;
            uVar8 = uVar8 + 3;
          } while (uVar8 != 0x80001);
          if (local_1c8 == "LpDragButton") {
LAB_03d67a50:
            puVar7 = (undefined8 *)(*param_1 + 0x20);
          }
          else {
            uVar8 = 0;
            bVar4 = true;
            do {
              if (local_1c8[uVar8] != "LpDragButton"[uVar8]) break;
              if (local_1c8[uVar8] == '\0') {
                if (bVar4) goto LAB_03d67a50;
                break;
              }
              if (local_1c8[uVar8 + 1] != "LpDragButton"[uVar8 + 1]) break;
              if (local_1c8[uVar8 + 1] == '\0') goto LAB_03d67a50;
              if (local_1c8[uVar8 + 2] != "LpDragButton"[uVar8 + 2]) break;
              if (local_1c8[uVar8 + 2] == '\0') goto LAB_03d67a50;
              bVar4 = uVar8 < 0x7fffe;
              uVar8 = uVar8 + 3;
            } while (uVar8 != 0x80001);
            local_1e0 = PTR_DAT_04bb2020 + 0x10;
            local_1d8 = "LpKeyDecideIcon";
            FUN_006bd3a4(&local_1d0);
            (**(code **)(local_1d0 + 0x18))(&local_1d0);
            pcVar3 = local_1c8;
            (**(code **)(local_1e0 + 0x18))(&local_1e0);
            if (pcVar3 == local_1d8) {
LAB_03d67b1c:
              puVar7 = (undefined8 *)(*param_1 + 0x28);
            }
            else {
              uVar8 = 0;
              bVar4 = true;
              do {
                if (local_1c8[uVar8] != local_1d8[uVar8]) break;
                if (local_1c8[uVar8] == '\0') {
                  if (bVar4) goto LAB_03d67b1c;
                  break;
                }
                if (local_1c8[uVar8 + 1] != local_1d8[uVar8 + 1]) break;
                if (local_1c8[uVar8 + 1] == '\0') goto LAB_03d67b1c;
                if (local_1c8[uVar8 + 2] != local_1d8[uVar8 + 2]) break;
                if (local_1c8[uVar8 + 2] == '\0') goto LAB_03d67b1c;
                bVar4 = uVar8 < 0x7fffe;
                uVar8 = uVar8 + 3;
              } while (uVar8 != 0x80001);
              local_1e0 = PTR_DAT_04bb2020 + 0x10;
              local_1d8 = "LpSelector";
              (**(code **)(local_1d0 + 0x18))(&local_1d0);
              (**(code **)(local_1d0 + 0x18))(&local_1d0);
              pcVar3 = local_1c8;
              (**(code **)(local_1e0 + 0x18))(&local_1e0);
              if (pcVar3 == local_1d8) {
LAB_03d67bf0:
                puVar7 = (undefined8 *)(*param_1 + 0x30);
              }
              else {
                uVar8 = 0;
                bVar4 = true;
                do {
                  if (local_1c8[uVar8] != local_1d8[uVar8]) break;
                  if (local_1c8[uVar8] == '\0') {
                    if (bVar4) goto LAB_03d67bf0;
                    break;
                  }
                  if (local_1c8[uVar8 + 1] != local_1d8[uVar8 + 1]) break;
                  if (local_1c8[uVar8 + 1] == '\0') goto LAB_03d67bf0;
                  if (local_1c8[uVar8 + 2] != local_1d8[uVar8 + 2]) break;
                  if (local_1c8[uVar8 + 2] == '\0') goto LAB_03d67bf0;
                  bVar4 = uVar8 < 0x7fffe;
                  uVar8 = uVar8 + 3;
                } while (uVar8 != 0x80001);
                local_1e0 = PTR_DAT_04bb2020 + 0x10;
                local_1d8 = "LpScrollBar";
                (**(code **)(local_1d0 + 0x18))(&local_1d0);
                (**(code **)(local_1d0 + 0x18))(&local_1d0);
                pcVar3 = local_1c8;
                (**(code **)(local_1e0 + 0x18))(&local_1e0);
                if (pcVar3 == local_1d8) {
LAB_03d67cc4:
                  puVar7 = (undefined8 *)(*param_1 + 0x38);
                }
                else {
                  uVar8 = 0;
                  bVar4 = true;
                  do {
                    if (local_1c8[uVar8] != local_1d8[uVar8]) break;
                    if (local_1c8[uVar8] == '\0') {
                      if (bVar4) goto LAB_03d67cc4;
                      break;
                    }
                    if (local_1c8[uVar8 + 1] != local_1d8[uVar8 + 1]) break;
                    if (local_1c8[uVar8 + 1] == '\0') goto LAB_03d67cc4;
                    if (local_1c8[uVar8 + 2] != local_1d8[uVar8 + 2]) break;
                    if (local_1c8[uVar8 + 2] == '\0') goto LAB_03d67cc4;
                    bVar4 = uVar8 < 0x7fffe;
                    uVar8 = uVar8 + 3;
                  } while (uVar8 != 0x80001);
                  local_1e0 = PTR_DAT_04bb2020 + 0x10;
                  local_1d8 = "LpCharAnim";
                  (**(code **)(local_1d0 + 0x18))(&local_1d0);
                  (**(code **)(local_1d0 + 0x18))(&local_1d0);
                  pcVar3 = local_1c8;
                  (**(code **)(local_1e0 + 0x18))(&local_1e0);
                  if (pcVar3 == local_1d8) {
LAB_03d67d98:
                    puVar7 = (undefined8 *)(*param_1 + 0x40);
                  }
                  else {
                    uVar8 = 0;
                    bVar4 = true;
                    do {
                      if (local_1c8[uVar8] != local_1d8[uVar8]) break;
                      if (local_1c8[uVar8] == '\0') {
                        if (bVar4) goto LAB_03d67d98;
                        break;
                      }
                      if (local_1c8[uVar8 + 1] != local_1d8[uVar8 + 1]) break;
                      if (local_1c8[uVar8 + 1] == '\0') goto LAB_03d67d98;
                      if (local_1c8[uVar8 + 2] != local_1d8[uVar8 + 2]) break;
                      if (local_1c8[uVar8 + 2] == '\0') goto LAB_03d67d98;
                      bVar4 = uVar8 < 0x7fffe;
                      uVar8 = uVar8 + 3;
                    } while (uVar8 != 0x80001);
                    local_1e0 = PTR_DAT_04bb2020 + 0x10;
                    local_1d8 = "LpTextAnim";
                    (**(code **)(local_1d0 + 0x18))(&local_1d0);
                    (**(code **)(local_1d0 + 0x18))(&local_1d0);
                    pcVar3 = local_1c8;
                    (**(code **)(local_1e0 + 0x18))(&local_1e0);
                    if (pcVar3 == local_1d8) {
LAB_03d67e6c:
                      puVar7 = (undefined8 *)(*param_1 + 0x48);
                    }
                    else {
                      uVar8 = 0;
                      bVar4 = true;
                      do {
                        if (local_1c8[uVar8] != local_1d8[uVar8]) break;
                        if (local_1c8[uVar8] == '\0') {
                          if (bVar4) goto LAB_03d67e6c;
                          break;
                        }
                        if (local_1c8[uVar8 + 1] != local_1d8[uVar8 + 1]) break;
                        if (local_1c8[uVar8 + 1] == '\0') goto LAB_03d67e6c;
                        if (local_1c8[uVar8 + 2] != local_1d8[uVar8 + 2]) break;
                        if (local_1c8[uVar8 + 2] == '\0') goto LAB_03d67e6c;
                        bVar4 = uVar8 < 0x7fffe;
                        uVar8 = uVar8 + 3;
                      } while (uVar8 != 0x80001);
                      local_1e0 = PTR_DAT_04bb2020 + 0x10;
                      local_1d8 = "LpTraceGauge";
                      (**(code **)(local_1d0 + 0x18))(&local_1d0);
                      (**(code **)(local_1d0 + 0x18))(&local_1d0);
                      pcVar3 = local_1c8;
                      (**(code **)(local_1e0 + 0x18))(&local_1e0);
                      if (pcVar3 == local_1d8) {
LAB_03d67f40:
                        puVar7 = (undefined8 *)(*param_1 + 0x50);
                      }
                      else {
                        uVar8 = 0;
                        bVar4 = true;
                        do {
                          if (local_1c8[uVar8] != local_1d8[uVar8]) break;
                          if (local_1c8[uVar8] == '\0') {
                            if (bVar4) goto LAB_03d67f40;
                            break;
                          }
                          if (local_1c8[uVar8 + 1] != local_1d8[uVar8 + 1]) break;
                          if (local_1c8[uVar8 + 1] == '\0') goto LAB_03d67f40;
                          if (local_1c8[uVar8 + 2] != local_1d8[uVar8 + 2]) break;
                          if (local_1c8[uVar8 + 2] == '\0') goto LAB_03d67f40;
                          bVar4 = uVar8 < 0x7fffe;
                          uVar8 = uVar8 + 3;
                        } while (uVar8 != 0x80001);
                        local_1e0 = PTR_DAT_04bb2020 + 0x10;
                        local_1d8 = "LpNumberAnim";
                        (**(code **)(local_1d0 + 0x18))(&local_1d0);
                        (**(code **)(local_1d0 + 0x18))(&local_1d0);
                        pcVar3 = local_1c8;
                        (**(code **)(local_1e0 + 0x18))(&local_1e0);
                        if (pcVar3 == local_1d8) {
LAB_03d68014:
                          puVar7 = (undefined8 *)(*param_1 + 0x58);
                        }
                        else {
                          uVar8 = 0;
                          bVar4 = true;
                          do {
                            if (local_1c8[uVar8] != local_1d8[uVar8]) break;
                            if (local_1c8[uVar8] == '\0') {
                              if (bVar4) goto LAB_03d68014;
                              break;
                            }
                            if (local_1c8[uVar8 + 1] != local_1d8[uVar8 + 1]) break;
                            if (local_1c8[uVar8 + 1] == '\0') goto LAB_03d68014;
                            if (local_1c8[uVar8 + 2] != local_1d8[uVar8 + 2]) break;
                            if (local_1c8[uVar8 + 2] == '\0') goto LAB_03d68014;
                            bVar4 = uVar8 < 0x7fffe;
                            uVar8 = uVar8 + 3;
                          } while (uVar8 != 0x80001);
                          local_1e0 = PTR_DAT_04bb2020 + 0x10;
                          local_1d8 = "LpMultiNumberAnim";
                          (**(code **)(local_1d0 + 0x18))(&local_1d0);
                          (**(code **)(local_1d0 + 0x18))(&local_1d0);
                          pcVar3 = local_1c8;
                          (**(code **)(local_1e0 + 0x18))(&local_1e0);
                          if (pcVar3 == local_1d8) {
LAB_03d680e8:
                            puVar7 = (undefined8 *)(*param_1 + 0x60);
                          }
                          else {
                            uVar8 = 0;
                            bVar4 = true;
                            do {
                              if (local_1c8[uVar8] != local_1d8[uVar8]) break;
                              if (local_1c8[uVar8] == '\0') {
                                if (bVar4) goto LAB_03d680e8;
                                break;
                              }
                              if (local_1c8[uVar8 + 1] != local_1d8[uVar8 + 1]) break;
                              if (local_1c8[uVar8 + 1] == '\0') goto LAB_03d680e8;
                              if (local_1c8[uVar8 + 2] != local_1d8[uVar8 + 2]) break;
                              if (local_1c8[uVar8 + 2] == '\0') goto LAB_03d680e8;
                              bVar4 = uVar8 < 0x7fffe;
                              uVar8 = uVar8 + 3;
                            } while (uVar8 != 0x80001);
                            local_1e0 = PTR_DAT_04bb2020 + 0x10;
                            local_1d8 = "LpTimer";
                            uVar8 = FUN_00710cb0(&local_1d0,&local_1e0);
                            puVar7 = (undefined8 *)(*param_1 + 0x70);
                            if ((uVar8 & 1) != 0) {
                              puVar7 = (undefined8 *)(*param_1 + 0x68);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        local_1d0 = PTR_DAT_04bb2020 + 0x10;
        if (local_1c8 != "LpLocator") goto LAB_03d678cc;
LAB_03d67934:
        puVar7 = (undefined8 *)(*param_1 + 0x10);
      }
      lVar6 = (*(code *)*puVar7)(param_1,local_a8,param_2);
      if (lVar6 != 0) {
        FUN_03d677b0(param_1,lVar6);
      }
      if (local_a8[3] == 0) break;
      do {
        FUN_03c906a0(local_a8 + 2);
        if (local_a8[3] == 0) goto LAB_03d681ac;
        plVar5 = *(long **)(local_a8[3] + 0xc9);
        lVar9 = plVar5[2];
        lVar6 = (**(code **)(*plVar5 + 0x30))(plVar5);
      } while (lVar9 == lVar6);
      local_a8[0] = (**(code **)(*plVar5 + 0x30))(plVar5);
      if (local_a8[3] == 0) break;
    }
  }
LAB_03d681ac:
  (**(code **)(*param_2 + 0xd0))(param_2,param_1);
  (**(code **)(*param_2 + 0xe8))(param_2);
  return;
}

