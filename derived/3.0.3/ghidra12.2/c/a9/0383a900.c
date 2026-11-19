
void FUN_0383a900(long param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *local_40;
  char *pcStack_38;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((char *)param_2[1] == "FtrObject") {
LAB_0383a990:
    uVar5 = 0x8c00;
    goto LAB_0383ac14;
  }
  uVar6 = 0;
  bVar4 = true;
  do {
    cVar2 = ((char *)param_2[1])[uVar6];
    if (cVar2 != "FtrObject"[uVar6]) break;
    if (cVar2 == '\0') {
      if (bVar4) goto LAB_0383a990;
      break;
    }
    bVar4 = uVar6 < 0x80000;
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x80001);
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((char *)param_2[1] != "InsectObject") {
    uVar6 = 0;
    bVar4 = true;
    do {
      cVar2 = ((char *)param_2[1])[uVar6];
      if (cVar2 != "InsectObject"[uVar6]) break;
      if (cVar2 == '\0') {
        if (bVar4) goto LAB_0383ac10;
        break;
      }
      bVar4 = uVar6 < 0x80000;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((char *)param_2[1] != "FishObject") {
      uVar6 = 0;
      bVar4 = true;
      do {
        cVar2 = ((char *)param_2[1])[uVar6];
        if (cVar2 != "FishObject"[uVar6]) break;
        if (cVar2 == '\0') {
          if (bVar4) goto LAB_0383ac10;
          break;
        }
        bVar4 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      if ((char *)param_2[1] != "SeafoodObject") {
        uVar6 = 0;
        bVar4 = true;
        do {
          cVar2 = ((char *)param_2[1])[uVar6];
          if (cVar2 != "SeafoodObject"[uVar6]) break;
          if (cVar2 == '\0') {
            if (bVar4) goto LAB_0383ac10;
            break;
          }
          bVar4 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        if ((char *)param_2[1] == "DoorBell") goto LAB_0383ab50;
        uVar6 = 0;
        bVar4 = true;
        do {
          cVar2 = ((char *)param_2[1])[uVar6];
          if (cVar2 != "DoorBell"[uVar6]) break;
          if (cVar2 == '\0') {
            if (bVar4) goto LAB_0383ab50;
            break;
          }
          bVar4 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        puVar3 = PTR_DAT_04bb2020;
        if ((char *)param_2[1] == "DoorObject") goto LAB_0383ac7c;
        uVar6 = 0;
        bVar4 = true;
        do {
          cVar2 = ((char *)param_2[1])[uVar6];
          if (cVar2 != "DoorObject"[uVar6]) break;
          if (cVar2 == '\0') {
            if (bVar4) goto LAB_0383ac7c;
            break;
          }
          bVar4 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = "DoorDecoObject";
        local_40 = puVar1;
        uVar6 = FUN_00710cb0(param_2,&local_40);
        if ((uVar6 & 1) == 0) {
          pcStack_38 = "HouseRoofObject";
          local_40 = puVar1;
          uVar6 = FUN_00710cb0(param_2,&local_40);
          if ((uVar6 & 1) != 0) goto LAB_0383ac10;
          pcStack_38 = "FacilityBannerFlagObject";
          local_40 = puVar3 + 0x10;
          uVar6 = FUN_00710cb0(param_2,&local_40);
          if ((uVar6 & 1) == 0) {
            pcStack_38 = "PurchaseBoxObject";
            local_40 = puVar3 + 0x10;
            uVar6 = FUN_00710cb0(param_2,&local_40);
            if ((uVar6 & 1) != 0) goto LAB_0383ac7c;
            pcStack_38 = "FieldOutsideObject";
            local_40 = puVar3 + 0x10;
            uVar6 = FUN_00710cb0(param_2,&local_40);
            if ((uVar6 & 1) != 0) {
LAB_0383aca4:
              uVar5 = 0x6800;
              goto LAB_0383ac14;
            }
            pcStack_38 = "AmbientOutdoorObject";
            local_40 = puVar3 + 0x10;
            uVar6 = FUN_00710cb0(param_2,&local_40);
            if ((uVar6 & 1) != 0) {
              uVar5 = 0x6000;
              goto LAB_0383ac14;
            }
            pcStack_38 = "FireworksObject";
            local_40 = puVar3 + 0x10;
            uVar6 = FUN_00710cb0(param_2,&local_40);
            if ((uVar6 & 1) != 0) {
              uVar5 = 0xa800;
              goto LAB_0383ac14;
            }
            pcStack_38 = "BbsBirdObject";
            local_40 = puVar3 + 0x10;
            uVar6 = FUN_00710cb0(param_2,&local_40);
            if ((uVar6 & 1) != 0) goto LAB_0383aca4;
            pcStack_38 = "BridgeObject";
            local_40 = puVar3 + 0x10;
            uVar6 = FUN_00710cb0(param_2,&local_40);
            if ((uVar6 & 1) != 0) goto LAB_0383ac7c;
            pcStack_38 = "NpcObject";
            local_40 = puVar3 + 0x10;
            uVar6 = FUN_00710cb0(param_2,&local_40);
            if ((uVar6 & 1) != 0) {
              uVar5 = 0x1e000;
              goto LAB_0383ac14;
            }
            pcStack_38 = "PlayerObject";
            local_40 = puVar3 + 0x10;
            uVar6 = FUN_00710cb0(param_2,&local_40);
            if ((uVar6 & 1) != 0) {
LAB_0383ad78:
              uVar5 = 0x20800;
              goto LAB_0383ac14;
            }
            pcStack_38 = "HumanToolObject";
            local_40 = puVar3 + 0x10;
            uVar6 = FUN_00710cb0(param_2,&local_40);
            if ((uVar6 & 1) != 0) {
              uVar5 = 0x7000;
              goto LAB_0383ac14;
            }
            pcStack_38 = "DoubutsugoObject";
            local_40 = puVar3 + 0x10;
            uVar6 = FUN_00710cb0(param_2,&local_40);
            if ((uVar6 & 1) != 0) {
              uVar5 = 0x23000;
              goto LAB_0383ac14;
            }
            pcStack_38 = "RiverObject";
            local_40 = puVar3 + 0x10;
            uVar6 = FUN_00710cb0(param_2,&local_40);
            if ((uVar6 & 1) == 0) {
              pcStack_38 = "SeaObject";
              local_40 = puVar3 + 0x10;
              uVar6 = FUN_00710cb0(param_2,&local_40);
              if ((uVar6 & 1) == 0) {
                pcStack_38 = "RoofMapObject";
                local_40 = puVar3 + 0x10;
                uVar6 = FUN_00710cb0(param_2,&local_40);
                if ((uVar6 & 1) == 0) {
                  pcStack_38 = "WaterfallMapObject";
                  local_40 = puVar3 + 0x10;
                  uVar6 = FUN_00710cb0(param_2,&local_40);
                  if ((uVar6 & 1) == 0) {
                    pcStack_38 = "TreeWindObject";
                    local_40 = puVar3 + 0x10;
                    uVar6 = FUN_00710cb0(param_2,&local_40);
                    if ((uVar6 & 1) != 0) goto LAB_0383aca4;
                    pcStack_38 = "ChimeObject";
                    local_40 = puVar3 + 0x10;
                    uVar6 = FUN_00710cb0(param_2,&local_40);
                    if ((uVar6 & 1) != 0) goto LAB_0383abec;
                    pcStack_38 = "TVObject";
                    local_40 = puVar3 + 0x10;
                    uVar6 = FUN_00710cb0(param_2,&local_40);
                    if ((uVar6 & 1) != 0) {
LAB_0383aeb4:
                      uVar5 = 0xc800;
                      goto LAB_0383ac14;
                    }
                    pcStack_38 = "SimpleRumbleObject";
                    local_40 = puVar3 + 0x10;
                    uVar6 = FUN_00710cb0(param_2,&local_40);
                    if ((uVar6 & 1) != 0) goto LAB_0383ac7c;
                    pcStack_38 = "RainbowObject";
                    local_40 = puVar3 + 0x10;
                    uVar6 = FUN_00710cb0(param_2,&local_40);
                    if ((uVar6 & 1) != 0) {
                      uVar5 = 0x6c00;
                      goto LAB_0383ac14;
                    }
                    pcStack_38 = "ShootingStarObject";
                    local_40 = puVar3 + 0x10;
                    uVar6 = FUN_00710cb0(param_2,&local_40);
                    if ((uVar6 & 1) != 0) {
                      uVar5 = 0x5400;
                      goto LAB_0383ac14;
                    }
                    pcStack_38 = "PlantObject";
                    local_40 = puVar3 + 0x10;
                    uVar6 = FUN_00710cb0(param_2,&local_40);
                    if ((uVar6 & 1) != 0) goto LAB_0383aeb4;
                    pcStack_38 = "WaterFallObject";
                    local_40 = puVar3 + 0x10;
                    uVar6 = FUN_00710cb0(param_2,&local_40);
                    if ((uVar6 & 1) != 0) goto LAB_0383ac10;
                    pcStack_38 = "UnitIconObject";
                    local_40 = puVar3 + 0x10;
                    uVar6 = FUN_00710cb0(param_2,&local_40);
                    if ((uVar6 & 1) != 0) {
                      uVar5 = 0x1b800;
                      goto LAB_0383ac14;
                    }
                    pcStack_38 = "Stone";
                    local_40 = puVar3 + 0x10;
                    uVar6 = FUN_00710cb0(param_2,&local_40);
                    if ((uVar6 & 1) == 0) {
                      pcStack_38 = "FenceObject";
                      local_40 = puVar3 + 0x10;
                      uVar6 = FUN_00710cb0(param_2,&local_40);
                      if ((uVar6 & 1) == 0) {
                        pcStack_38 = "WaterTwinkleObject";
                        local_40 = puVar3 + 0x10;
                        uVar6 = FUN_00710cb0(param_2,&local_40);
                        if ((uVar6 & 1) == 0) {
                          pcStack_38 = "PlayerRefObject";
                          local_40 = puVar3 + 0x10;
                          uVar6 = FUN_00710cb0(param_2,&local_40);
                          if ((uVar6 & 1) != 0) {
                            uVar5 = 0x11800;
                            goto LAB_0383ac14;
                          }
                          pcStack_38 = "SwkbdObject";
                          local_40 = puVar3 + 0x10;
                          uVar6 = FUN_00710cb0(param_2,&local_40);
                          if ((uVar6 & 1) != 0) goto LAB_0383aeb4;
                          pcStack_38 = "MiniGameObject";
                          local_40 = puVar3 + 0x10;
                          uVar6 = FUN_00710cb0(param_2,&local_40);
                          if ((uVar6 & 1) == 0) {
                            pcStack_38 = "MonologueObject";
                            local_40 = puVar3 + 0x10;
                            uVar6 = FUN_00710cb0(param_2,&local_40);
                            if ((uVar6 & 1) == 0) {
                              pcStack_38 = "WindowObject";
                              local_40 = puVar3 + 0x10;
                              uVar6 = FUN_00710cb0(param_2,&local_40);
                              if ((uVar6 & 1) != 0) {
                                uVar5 = 0x4400;
                                goto LAB_0383ac14;
                              }
                              pcStack_38 = "KppBoatObject";
                              local_40 = puVar3 + 0x10;
                              uVar6 = FUN_00710cb0(param_2,&local_40);
                              if ((uVar6 & 1) != 0) goto LAB_0383ac10;
                              pcStack_38 = "Snowball";
                              local_40 = puVar3 + 0x10;
                              uVar6 = FUN_00710cb0(param_2,&local_40);
                              if ((uVar6 & 1) != 0) {
                                uVar5 = 0x4c00;
                                goto LAB_0383ac14;
                              }
                              pcStack_38 = "Balloon";
                              local_40 = puVar3 + 0x10;
                              uVar6 = FUN_00710cb0(param_2,&local_40);
                              if ((uVar6 & 1) == 0) {
                                pcStack_38 = "ThereminObject";
                                local_40 = puVar3 + 0x10;
                                uVar6 = FUN_00710cb0(param_2,&local_40);
                                if ((uVar6 & 1) == 0) {
                                  pcStack_38 = "KKFesStageObject";
                                  local_40 = puVar3 + 0x10;
                                  uVar6 = FUN_00710cb0(param_2,&local_40);
                                  if ((uVar6 & 1) == 0) {
                                    pcStack_38 = "KKFesWetObject";
                                    local_40 = puVar3 + 0x10;
                                    uVar6 = FUN_00710cb0(param_2,&local_40);
                                    if ((uVar6 & 1) == 0) {
                                      local_40 = puVar3 + 0x10;
                                      pcStack_38 = "SincereCleanObject";
                                      uVar6 = FUN_00710cb0(param_2,&local_40);
                                      uVar5 = 0x7800;
                                      if ((uVar6 & 1) == 0) {
                                        uVar5 = 0x18800;
                                      }
                                    }
                                    else {
                                      uVar5 = 0xb400;
                                    }
                                    goto LAB_0383ac14;
                                  }
                                  goto LAB_0383ad78;
                                }
                                goto LAB_0383ae54;
                              }
                            }
                          }
                          goto LAB_0383ac7c;
                        }
                      }
LAB_0383ab50:
                      uVar5 = 0x5c00;
                    }
                    else {
LAB_0383ac7c:
                      uVar5 = 0x5000;
                    }
                    goto LAB_0383ac14;
                  }
                }
LAB_0383ae54:
                uVar5 = 0x3c00;
                goto LAB_0383ac14;
              }
            }
            uVar5 = 0x4000;
            goto LAB_0383ac14;
          }
        }
LAB_0383abec:
        uVar5 = 0x5800;
        goto LAB_0383ac14;
      }
    }
  }
LAB_0383ac10:
  uVar5 = 0x7800;
LAB_0383ac14:
  FUN_038c6d48(uVar5,param_2,*(undefined8 *)(param_1 + 0x18),8,1,0);
  return;
}

