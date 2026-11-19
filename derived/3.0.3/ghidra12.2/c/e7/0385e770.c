
void FUN_0385e770(long *param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 *puVar5;
  code *pcVar4;
  ulong uVar6;
  undefined **local_60;
  char *local_58;
  undefined **local_50;
  char *local_48;
  long local_28;
  
  plVar2 = *(long **)(param_2 + 0x58);
  local_28 = 0;
  if (((plVar2 == (long *)0x0) || ((**(code **)(*plVar2 + 0x28))(plVar2,&local_28), local_28 == 0))
     || (pcVar3 = *(char **)(local_28 + 0xb8), pcVar3 == (char *)0x0)) {
    pcVar4 = *(code **)(*param_1 + 0x120);
  }
  else {
    local_50 = &PTR_LAB_048f9770;
    local_48 = pcVar3;
    if (pcVar3 == "LpLocator") {
LAB_0385e82c:
      puVar5 = (undefined8 *)(*param_1 + 0xa8);
    }
    else {
      uVar6 = 0;
      bVar1 = true;
      do {
        if (pcVar3[uVar6] != "LpLocator"[uVar6]) break;
        if (pcVar3[uVar6] == '\0') {
          if (bVar1) goto LAB_0385e82c;
          break;
        }
        bVar1 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      if (pcVar3 == "LpUniteButton") {
LAB_0385e880:
        puVar5 = (undefined8 *)(*param_1 + 0xb0);
      }
      else {
        uVar6 = 0;
        bVar1 = true;
        do {
          if (pcVar3[uVar6] != "LpUniteButton"[uVar6]) break;
          if (pcVar3[uVar6] == '\0') {
            if (bVar1) goto LAB_0385e880;
            break;
          }
          bVar1 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        if (pcVar3 == "LpDragButton") {
LAB_0385e8d4:
          puVar5 = (undefined8 *)(*param_1 + 0xb8);
        }
        else {
          uVar6 = 0;
          bVar1 = true;
          do {
            if (pcVar3[uVar6] != "LpDragButton"[uVar6]) break;
            if (pcVar3[uVar6] == '\0') {
              if (bVar1) goto LAB_0385e8d4;
              break;
            }
            bVar1 = uVar6 < 0x80000;
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x80001);
          local_60 = &PTR_LAB_048f9770;
          local_58 = "LpKeyDecideIcon";
          FUN_006bd3a4(&local_50);
          (*(code *)local_50[3])(&local_50);
          pcVar3 = local_48;
          (*(code *)local_60[3])(&local_60);
          if (pcVar3 == local_58) {
LAB_0385e964:
            puVar5 = (undefined8 *)(*param_1 + 0xc0);
          }
          else {
            uVar6 = 0;
            bVar1 = true;
            do {
              if (local_48[uVar6] != local_58[uVar6]) break;
              if (local_48[uVar6] == '\0') {
                if (bVar1) goto LAB_0385e964;
                break;
              }
              bVar1 = uVar6 < 0x80000;
              uVar6 = uVar6 + 1;
            } while (uVar6 != 0x80001);
            (*(code *)local_50[3])(&local_50);
            (*(code *)local_50[3])(&local_50);
            if (local_48 == "LpSelector") {
LAB_0385e9dc:
              puVar5 = (undefined8 *)(*param_1 + 200);
            }
            else {
              uVar6 = 0;
              bVar1 = true;
              do {
                if (local_48[uVar6] != "LpSelector"[uVar6]) break;
                if (local_48[uVar6] == '\0') {
                  if (bVar1) goto LAB_0385e9dc;
                  break;
                }
                bVar1 = uVar6 < 0x80000;
                uVar6 = uVar6 + 1;
              } while (uVar6 != 0x80001);
              (*(code *)local_50[3])(&local_50);
              (*(code *)local_50[3])(&local_50);
              if (local_48 == "LpScrollBar") {
LAB_0385ea54:
                puVar5 = (undefined8 *)(*param_1 + 0xd0);
              }
              else {
                uVar6 = 0;
                bVar1 = true;
                do {
                  if (local_48[uVar6] != "LpScrollBar"[uVar6]) break;
                  if (local_48[uVar6] == '\0') {
                    if (bVar1) goto LAB_0385ea54;
                    break;
                  }
                  bVar1 = uVar6 < 0x80000;
                  uVar6 = uVar6 + 1;
                } while (uVar6 != 0x80001);
                local_60 = &PTR_LAB_048f9770;
                local_58 = "LpCharAnim";
                uVar6 = FUN_00710cb0(&local_50,&local_60);
                if ((uVar6 & 1) == 0) {
                  local_60 = &PTR_LAB_048f9770;
                  local_58 = "LpTextAnim";
                  uVar6 = FUN_00710cb0(&local_50,&local_60);
                  if ((uVar6 & 1) == 0) {
                    local_60 = &PTR_LAB_048f9770;
                    local_58 = "LpTraceGauge";
                    uVar6 = FUN_00710cb0(&local_50,&local_60);
                    if ((uVar6 & 1) == 0) {
                      local_60 = &PTR_LAB_048f9770;
                      local_58 = "LpNumberAnim";
                      uVar6 = FUN_00710cb0(&local_50,&local_60);
                      if ((uVar6 & 1) == 0) {
                        local_60 = &PTR_LAB_048f9770;
                        local_58 = "LpMultiNumberAnim";
                        uVar6 = FUN_00710cb0(&local_50,&local_60);
                        if ((uVar6 & 1) == 0) {
                          local_60 = &PTR_LAB_048f9770;
                          local_58 = "LpTimer";
                          uVar6 = FUN_00710cb0(&local_50,&local_60);
                          if ((uVar6 & 1) == 0) {
                            local_60 = &PTR_LAB_048f9770;
                            local_58 = "UISysBounding";
                            uVar6 = FUN_00710cb0(&local_50,&local_60);
                            if ((uVar6 & 1) == 0) {
                              local_60 = &PTR_LAB_048f9770;
                              local_58 = "UISysScrollBtnList";
                              uVar6 = FUN_00710cb0(&local_50,&local_60);
                              if ((uVar6 & 1) == 0) {
                                local_60 = &PTR_LAB_048f9770;
                                local_58 = "UISysScrollSign";
                                uVar6 = FUN_00710cb0(&local_50,&local_60);
                                if ((uVar6 & 1) == 0) {
                                  puVar5 = (undefined8 *)(*param_1 + 0x120);
                                }
                                else {
                                  puVar5 = (undefined8 *)(*param_1 + 0x118);
                                }
                              }
                              else {
                                puVar5 = (undefined8 *)(*param_1 + 0x110);
                              }
                            }
                            else {
                              puVar5 = (undefined8 *)(*param_1 + 0x108);
                            }
                          }
                          else {
                            puVar5 = (undefined8 *)(*param_1 + 0x100);
                          }
                        }
                        else {
                          puVar5 = (undefined8 *)(*param_1 + 0xf8);
                        }
                      }
                      else {
                        puVar5 = (undefined8 *)(*param_1 + 0xf0);
                      }
                    }
                    else {
                      puVar5 = (undefined8 *)(*param_1 + 0xe8);
                    }
                  }
                  else {
                    puVar5 = (undefined8 *)(*param_1 + 0xe0);
                  }
                }
                else {
                  puVar5 = (undefined8 *)(*param_1 + 0xd8);
                }
              }
            }
          }
        }
      }
    }
    pcVar4 = (code *)*puVar5;
  }
  (*pcVar4)(param_1,param_2);
  return;
}

