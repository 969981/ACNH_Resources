
void FUN_0279db20(byte *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  char *local_60;
  ulong local_58;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar6 = FUN_02583354(DAT_055021a0,local_34,1);
  puVar3 = PTR_DAT_04bb2020;
  if (lVar6 == 0) {
    return;
  }
  plVar1 = (long *)(lVar6 + 0x18338);
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "FishingConventionSpring";
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar14 = (char *)param_2[1];
  (**(code **)(local_68 + 0x18))(&local_68);
  if (pcVar14 == local_60) {
LAB_0279dc20:
    lVar11 = *(long *)(lVar6 + 0x18358);
    if (lVar11 == 0) {
      uVar13 = 0;
    }
    else {
      if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
        uVar13 = 0;
        plVar7 = *(long **)(lVar11 + 0x20);
      }
      else {
        uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        uVar13 = uVar13 & 0xffffffff;
        if (*(long *)(lVar6 + 0x18358) == 0) goto LAB_0279dd14;
        plVar7 = *(long **)(*(long *)(lVar6 + 0x18358) + 0x20);
      }
      if (plVar7 != (long *)0x0) {
        local_68 = (undefined *)*plVar1;
        local_60 = *(char **)(lVar6 + 0x18340);
        local_58 = 0x62ac;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
      }
    }
LAB_0279dd14:
    lVar11 = *plVar1;
    lVar12 = *(long *)(lVar6 + 0x18340);
    local_60 = "AttendFishingConvention";
LAB_0279dd20:
    local_68 = puVar3 + 0x10;
    FUN_0279e300(lVar12 + lVar11,param_1,&local_68,0);
  }
  else {
    uVar13 = 0;
    bVar4 = true;
    do {
      if (*(char *)(param_2[1] + uVar13) != local_60[uVar13]) break;
      if (*(char *)(param_2[1] + uVar13) == '\0') {
        if (bVar4) goto LAB_0279dc20;
        break;
      }
      bVar4 = uVar13 < 0x80000;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80001);
    local_68 = puVar3 + 0x10;
    local_60 = "FishingConventionSummer";
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar14 = (char *)param_2[1];
    (**(code **)(local_68 + 0x18))(&local_68);
    if (pcVar14 == local_60) {
LAB_0279dd48:
      lVar11 = *(long *)(lVar6 + 0x18358);
      if (lVar11 == 0) {
        uVar13 = 0;
      }
      else {
        if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          lVar11 = *(long *)(lVar6 + 0x18358);
          uVar13 = uVar13 & 0xffffffff;
          if (lVar11 == 0) goto LAB_0279de34;
        }
        plVar7 = *(long **)(lVar11 + 0x20);
        if (plVar7 != (long *)0x0) {
          local_68 = (undefined *)*plVar1;
          local_60 = *(char **)(lVar6 + 0x18340);
          local_58 = 0x62ac;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
        }
      }
LAB_0279de34:
      lVar11 = *plVar1;
      lVar12 = *(long *)(lVar6 + 0x18340);
      uVar9 = 1;
    }
    else {
      uVar13 = 0;
      bVar4 = true;
      do {
        if (*(char *)(param_2[1] + uVar13) != local_60[uVar13]) break;
        if (*(char *)(param_2[1] + uVar13) == '\0') {
          if (bVar4) goto LAB_0279dd48;
          break;
        }
        bVar4 = uVar13 < 0x80000;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80001);
      local_68 = puVar3 + 0x10;
      local_60 = "FishingConventionAutumn";
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar14 = (char *)param_2[1];
      (**(code **)(local_68 + 0x18))(&local_68);
      if (pcVar14 == local_60) {
LAB_0279de54:
        lVar11 = *(long *)(lVar6 + 0x18358);
        if (lVar11 == 0) {
          uVar13 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            lVar11 = *(long *)(lVar6 + 0x18358);
            uVar13 = uVar13 & 0xffffffff;
            if (lVar11 == 0) goto LAB_0279df24;
          }
          plVar7 = *(long **)(lVar11 + 0x20);
          if (plVar7 != (long *)0x0) {
            local_68 = (undefined *)*plVar1;
            local_60 = *(char **)(lVar6 + 0x18340);
            local_58 = 0x62ac;
            (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
          }
        }
LAB_0279df24:
        lVar11 = *plVar1;
        lVar12 = *(long *)(lVar6 + 0x18340);
        uVar9 = 2;
      }
      else {
        uVar13 = 0;
        bVar4 = true;
        do {
          if (*(char *)(param_2[1] + uVar13) != local_60[uVar13]) break;
          if (*(char *)(param_2[1] + uVar13) == '\0') {
            if (bVar4) goto LAB_0279de54;
            break;
          }
          bVar4 = uVar13 < 0x80000;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x80001);
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        if ((char *)param_2[1] != "FishingConventionWinter") {
          uVar13 = 0;
          bVar4 = true;
          do {
            cVar2 = ((char *)param_2[1])[uVar13];
            if (cVar2 != "FishingConventionWinter"[uVar13]) break;
            if (cVar2 == '\0') {
              if (bVar4) goto LAB_0279df44;
              break;
            }
            bVar4 = uVar13 < 0x80000;
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x80001);
          (**(code **)(*param_2 + 0x18))(param_2);
          (**(code **)(*param_2 + 0x18))(param_2);
          if ((char *)param_2[1] != "InsectConvention1") {
            uVar13 = 0;
            bVar4 = true;
            do {
              cVar2 = ((char *)param_2[1])[uVar13];
              if (cVar2 != "InsectConvention1"[uVar13]) break;
              if (cVar2 == '\0') {
                if (bVar4) goto LAB_0279e07c;
                break;
              }
              bVar4 = uVar13 < 0x80000;
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x80001);
            (**(code **)(*param_2 + 0x18))(param_2);
            (**(code **)(*param_2 + 0x18))(param_2);
            if ((char *)param_2[1] == "InsectConvention2") {
LAB_0279e15c:
              local_58 = local_58 & 0xffffffffffffff00;
              local_60 = (char *)(lVar6 + 0x18330);
              if (*(long *)(lVar6 + 0x18358) == 0) {
                uVar5 = 0;
              }
              else {
                puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x18358) + 0x10);
                uVar5 = 0;
                if (puVar8 != (undefined8 *)0x0) {
                  uVar5 = (**(code **)*puVar8)();
                }
              }
              local_58 = CONCAT62(local_58._2_6_,CONCAT11(uVar5,(undefined1)local_58)) &
                         0xffffffffffff01ff;
              local_68 = PTR_DAT_04bb64b0 + 0x10;
              uVar9 = FUN_0279949c(&local_68);
              uVar10 = 1;
            }
            else {
              uVar13 = 0;
              bVar4 = true;
              do {
                cVar2 = ((char *)param_2[1])[uVar13];
                if (cVar2 != "InsectConvention2"[uVar13]) break;
                if (cVar2 == '\0') {
                  if (bVar4) goto LAB_0279e15c;
                  break;
                }
                bVar4 = uVar13 < 0x80000;
                uVar13 = uVar13 + 1;
              } while (uVar13 != 0x80001);
              local_60 = "InsectConvention3";
              local_68 = puVar3 + 0x10;
              uVar13 = FUN_00710cb0(param_2,&local_68);
              if ((uVar13 & 1) == 0) {
                local_60 = "InsectConvention4";
                local_68 = puVar3 + 0x10;
                uVar13 = FUN_00710cb0(param_2,&local_68);
                if ((uVar13 & 1) == 0) {
                  return;
                }
                local_58 = local_58 & 0xffffffffffffff00;
                local_60 = (char *)(lVar6 + 0x18330);
                if (*(long *)(lVar6 + 0x18358) == 0) {
                  uVar5 = 0;
                }
                else {
                  puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x18358) + 0x10);
                  uVar5 = 0;
                  if (puVar8 != (undefined8 *)0x0) {
                    uVar5 = (**(code **)*puVar8)();
                  }
                }
                local_58 = CONCAT62(local_58._2_6_,CONCAT11(uVar5,(undefined1)local_58)) &
                           0xffffffffffff01ff;
                local_68 = PTR_DAT_04bb64b0 + 0x10;
                uVar9 = FUN_0279949c(&local_68);
                uVar10 = 3;
              }
              else {
                local_58 = local_58 & 0xffffffffffffff00;
                local_60 = (char *)(lVar6 + 0x18330);
                if (*(long *)(lVar6 + 0x18358) == 0) {
                  uVar5 = 0;
                }
                else {
                  puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x18358) + 0x10);
                  uVar5 = 0;
                  if (puVar8 != (undefined8 *)0x0) {
                    uVar5 = (**(code **)*puVar8)();
                  }
                }
                local_58 = CONCAT62(local_58._2_6_,CONCAT11(uVar5,(undefined1)local_58)) &
                           0xffffffffffff01ff;
                local_68 = PTR_DAT_04bb64b0 + 0x10;
                uVar9 = FUN_0279949c(&local_68);
                uVar10 = 2;
              }
            }
            pcStack_70 = "AttendInsectConvention";
            local_78 = puVar3 + 0x10;
            FUN_0279e300(uVar9,param_1,&local_78,uVar10);
            FUN_02640184(&local_68);
            return;
          }
LAB_0279e07c:
          lVar11 = *(long *)(lVar6 + 0x18358);
          if (lVar11 == 0) {
            uVar13 = 0;
          }
          else {
            if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
              uVar13 = 0;
            }
            else {
              uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
              lVar11 = *(long *)(lVar6 + 0x18358);
              uVar13 = uVar13 & 0xffffffff;
              if (lVar11 == 0) goto LAB_0279e148;
            }
            plVar7 = *(long **)(lVar11 + 0x20);
            if (plVar7 != (long *)0x0) {
              local_68 = (undefined *)*plVar1;
              local_60 = *(char **)(lVar6 + 0x18340);
              local_58 = 0x62ac;
              (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
            }
          }
LAB_0279e148:
          lVar11 = *plVar1;
          lVar12 = *(long *)(lVar6 + 0x18340);
          local_60 = "AttendInsectConvention";
          goto LAB_0279dd20;
        }
LAB_0279df44:
        lVar11 = *(long *)(lVar6 + 0x18358);
        if (lVar11 == 0) {
          uVar13 = 0;
        }
        else {
          if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            lVar11 = *(long *)(lVar6 + 0x18358);
            uVar13 = uVar13 & 0xffffffff;
            if (lVar11 == 0) goto LAB_0279e014;
          }
          plVar7 = *(long **)(lVar11 + 0x20);
          if (plVar7 != (long *)0x0) {
            local_68 = (undefined *)*plVar1;
            local_60 = *(char **)(lVar6 + 0x18340);
            local_58 = 0x62ac;
            (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
          }
        }
LAB_0279e014:
        lVar11 = *plVar1;
        lVar12 = *(long *)(lVar6 + 0x18340);
        uVar9 = 3;
      }
    }
    local_68 = puVar3 + 0x10;
    local_60 = "AttendFishingConvention";
    FUN_0279e300(lVar12 + lVar11,param_1,&local_68,uVar9);
  }
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar6 + 0x18358) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x18358) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

