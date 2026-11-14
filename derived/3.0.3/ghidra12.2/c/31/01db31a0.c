
undefined8 FUN_01db31a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  void *__src;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined *local_580;
  undefined8 *local_578;
  undefined4 local_570;
  undefined2 local_56c [63];
  undefined2 local_4ee;
  undefined **local_468;
  undefined1 *local_460;
  uint local_458;
  undefined1 local_454 [1023];
  undefined1 local_55;
  undefined1 auStack_50 [16];
  uint local_24;
  
  __src = *(void **)(param_1 + 200);
  if (__src != (void *)0x0) {
    if (*(char *)(param_1 + 0xd8) == '\0') {
      memcpy(param_2,__src,*(size_t *)(param_1 + 0xd0));
      return 1;
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      FUN_00699eb4(auStack_50,__src,*(undefined8 *)(param_1 + 0xd0));
      local_454[0] = 0;
      local_460 = local_454;
      local_458 = 0x400;
      local_55 = 0;
      local_468 = &PTR_LAB_048fcfa0;
      uVar8 = FUN_0069a7c0(auStack_50,local_460,0x400,"$.title");
      uVar7 = local_458;
      puVar6 = PTR_DAT_04bc0c10;
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      local_4ee = 0;
      local_570 = 0x40;
      local_578 = (undefined8 *)local_56c;
      local_56c[0] = 0;
      uVar8 = (ulong)local_458;
      local_580 = PTR_DAT_04bc0c10 + 0x10;
      (*(code *)local_468[3])(&local_468);
      if ((int)uVar7 < 1) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar10 = 0;
        uVar9 = 0xffffffff;
        do {
          if (local_460[uVar10] == '\0') {
            uVar9 = uVar10 & 0xffffffff;
            break;
          }
          uVar10 = uVar10 + 1;
        } while (uVar8 != uVar10);
      }
      uVar8 = FUN_01df33d0(&local_580,&local_468,uVar9);
      if ((uVar8 & 1) != 0) {
        (**(code **)(local_580 + 0x18))(&local_580);
        *param_2 = *local_578;
        uVar1 = local_578[1];
        uVar3 = local_578[2];
        uVar2 = local_578[3];
        uVar4 = local_578[4];
        *(undefined2 *)(param_2 + 5) = 0;
        param_2[3] = uVar2;
        param_2[4] = uVar4;
        param_2[1] = uVar1;
        param_2[2] = uVar3;
        uVar8 = FUN_0069a220(auStack_50,&local_24,"$.player_id");
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        *(short *)((long)param_2 + 0x2a) = (short)local_24;
        (*(code *)local_468[3])(&local_468);
        uVar8 = FUN_0069a7c0(auStack_50,local_460,(long)(int)local_458,"$.creator");
        uVar7 = local_458;
        if ((uVar8 & 1) != 0) {
          local_4ee = 0;
          local_578 = (undefined8 *)local_56c;
          local_570 = 0x40;
          local_580 = puVar6 + 0x10;
          uVar8 = (ulong)local_458;
          local_56c[0] = 0;
          (*(code *)local_468[3])(&local_468);
          if ((int)uVar7 < 1) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar10 = 0;
            uVar9 = 0xffffffff;
            do {
              if (local_460[uVar10] == '\0') {
                uVar9 = uVar10 & 0xffffffff;
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar8 != uVar10);
          }
          uVar8 = FUN_01df33d0(&local_580,&local_468,uVar9);
          if ((uVar8 & 1) != 0) {
            (**(code **)(local_580 + 0x18))(&local_580);
            uVar1 = *local_578;
            uVar2 = local_578[1];
            *(undefined2 *)((long)param_2 + 0x3c) = 0;
            *(undefined8 *)((long)param_2 + 0x2c) = uVar1;
            *(undefined8 *)((long)param_2 + 0x34) = uVar2;
            uVar8 = FUN_0069a220(auStack_50,&local_24,"$.sex");
            if ((uVar8 & 1) == 0) {
              return 0;
            }
            if (local_24 < 2) {
              *(char *)((long)param_2 + 0x3e) = (char)local_24;
              uVar8 = FUN_0069a220(auStack_50,&local_24,"$.village_id");
              if ((uVar8 & 1) != 0) {
                *(short *)(param_2 + 8) = (short)local_24;
                (*(code *)local_468[3])(&local_468);
                uVar8 = FUN_0069a7c0(auStack_50,local_460,(long)(int)local_458,"$.village");
                uVar7 = local_458;
                if ((uVar8 & 1) != 0) {
                  local_4ee = 0;
                  local_578 = (undefined8 *)local_56c;
                  local_570 = 0x40;
                  local_580 = puVar6 + 0x10;
                  uVar8 = (ulong)local_458;
                  local_56c[0] = 0;
                  (*(code *)local_468[3])(&local_468);
                  if ((int)uVar7 < 1) {
                    uVar9 = 0xffffffff;
                  }
                  else {
                    uVar10 = 0;
                    uVar9 = 0xffffffff;
                    do {
                      if (local_460[uVar10] == '\0') {
                        uVar9 = uVar10 & 0xffffffff;
                        break;
                      }
                      uVar10 = uVar10 + 1;
                    } while (uVar8 != uVar10);
                  }
                  uVar8 = FUN_01df33d0(&local_580,&local_468,uVar9);
                  if ((uVar8 & 1) != 0) {
                    (**(code **)(local_580 + 0x18))(&local_580);
                    uVar1 = *local_578;
                    uVar2 = local_578[1];
                    *(undefined2 *)((long)param_2 + 0x52) = 0;
                    *(undefined8 *)((long)param_2 + 0x42) = uVar1;
                    *(undefined8 *)((long)param_2 + 0x4a) = uVar2;
                    uVar8 = FUN_0069a220(auStack_50,&local_24,"$.language");
                    if ((uVar8 & 1) == 0) {
                      return 0;
                    }
                    *(char *)((long)param_2 + 0x54) = (char)local_24;
                    uVar8 = FUN_0069a220(auStack_50,&local_24,"$.country");
                    if ((uVar8 & 1) != 0) {
                      *(char *)((long)param_2 + 0x56) = (char)local_24;
                      uVar8 = FUN_0069a220(auStack_50,&local_24,"$.region");
                      if ((uVar8 & 1) != 0) {
                        *(char *)((long)param_2 + 0x57) = (char)local_24;
                        uVar8 = FUN_0069a220(auStack_50,&local_24,"$.color");
                        if ((uVar8 & 1) != 0) {
                          *(char *)((long)param_2 + 0x67) = (char)local_24;
                          uVar8 = FUN_0069a220(auStack_50,&local_24,"$.looks");
                          if ((uVar8 & 1) != 0) {
                            *(char *)(param_2 + 0xd) = (char)local_24;
                            uVar8 = FUN_0069a220(auStack_50,&local_24,"$.usage");
                            if (((uVar8 & 1) != 0) && (local_24 < 0xc)) {
                              *(char *)((long)param_2 + 0x69) = (char)local_24;
                              FUN_006e9528(&local_580,"$.palette_colors[%d]",0);
                              (**(code **)(local_580 + 0x18))(&local_580);
                              uVar8 = FUN_0069a220(auStack_50,&local_24,local_578);
                              if ((uVar8 & 1) == 0) {
                                return 0;
                              }
                              *(undefined1 *)(param_2 + 0xb) = (undefined1)local_24;
                              FUN_006e9528(&local_580,"$.palette_colors[%d]",1);
                              (**(code **)(local_580 + 0x18))(&local_580);
                              uVar8 = FUN_0069a220(auStack_50,&local_24,local_578);
                              if ((uVar8 & 1) != 0) {
                                *(undefined1 *)((long)param_2 + 0x59) = (undefined1)local_24;
                                FUN_006e9528(&local_580,"$.palette_colors[%d]",2);
                                (**(code **)(local_580 + 0x18))(&local_580);
                                uVar8 = FUN_0069a220(auStack_50,&local_24,local_578);
                                if ((uVar8 & 1) != 0) {
                                  *(undefined1 *)((long)param_2 + 0x5a) = (undefined1)local_24;
                                  FUN_006e9528(&local_580,"$.palette_colors[%d]",3);
                                  (**(code **)(local_580 + 0x18))(&local_580);
                                  uVar8 = FUN_0069a220(auStack_50,&local_24,local_578);
                                  if ((uVar8 & 1) != 0) {
                                    *(undefined1 *)((long)param_2 + 0x5b) = (undefined1)local_24;
                                    FUN_006e9528(&local_580,"$.palette_colors[%d]",4);
                                    (**(code **)(local_580 + 0x18))(&local_580);
                                    uVar8 = FUN_0069a220(auStack_50,&local_24,local_578);
                                    if ((uVar8 & 1) != 0) {
                                      *(undefined1 *)((long)param_2 + 0x5c) = (undefined1)local_24;
                                      FUN_006e9528(&local_580,"$.palette_colors[%d]",5);
                                      (**(code **)(local_580 + 0x18))(&local_580);
                                      uVar8 = FUN_0069a220(auStack_50,&local_24,local_578);
                                      if ((uVar8 & 1) != 0) {
                                        *(undefined1 *)((long)param_2 + 0x5d) = (undefined1)local_24
                                        ;
                                        FUN_006e9528(&local_580,"$.palette_colors[%d]",6);
                                        (**(code **)(local_580 + 0x18))(&local_580);
                                        uVar8 = FUN_0069a220(auStack_50,&local_24,local_578);
                                        if ((uVar8 & 1) != 0) {
                                          *(undefined1 *)((long)param_2 + 0x5e) =
                                               (undefined1)local_24;
                                          FUN_006e9528(&local_580,"$.palette_colors[%d]",7);
                                          (**(code **)(local_580 + 0x18))(&local_580);
                                          uVar8 = FUN_0069a220(auStack_50,&local_24,local_578);
                                          if ((uVar8 & 1) != 0) {
                                            *(undefined1 *)((long)param_2 + 0x5f) =
                                                 (undefined1)local_24;
                                            FUN_006e9528(&local_580,"$.palette_colors[%d]",8);
                                            (**(code **)(local_580 + 0x18))(&local_580);
                                            uVar8 = FUN_0069a220(auStack_50,&local_24,local_578);
                                            if ((uVar8 & 1) != 0) {
                                              *(undefined1 *)(param_2 + 0xc) = (undefined1)local_24;
                                              FUN_006e9528(&local_580,"$.palette_colors[%d]",9);
                                              (**(code **)(local_580 + 0x18))(&local_580);
                                              uVar8 = FUN_0069a220(auStack_50,&local_24,local_578);
                                              if ((uVar8 & 1) != 0) {
                                                *(undefined1 *)((long)param_2 + 0x61) =
                                                     (undefined1)local_24;
                                                FUN_006e9528(&local_580,"$.palette_colors[%d]",10);
                                                (**(code **)(local_580 + 0x18))(&local_580);
                                                uVar8 = FUN_0069a220(auStack_50,&local_24,local_578)
                                                ;
                                                if ((uVar8 & 1) != 0) {
                                                  *(undefined1 *)((long)param_2 + 0x62) =
                                                       (undefined1)local_24;
                                                  FUN_006e9528(&local_580,"$.palette_colors[%d]",0xb
                                                              );
                                                  (**(code **)(local_580 + 0x18))(&local_580);
                                                  uVar8 = FUN_0069a220(auStack_50,&local_24,
                                                                       local_578);
                                                  if ((uVar8 & 1) != 0) {
                                                    *(undefined1 *)((long)param_2 + 99) =
                                                         (undefined1)local_24;
                                                    FUN_006e9528(&local_580,"$.palette_colors[%d]",
                                                                 0xc);
                                                    (**(code **)(local_580 + 0x18))(&local_580);
                                                    uVar8 = FUN_0069a220(auStack_50,&local_24,
                                                                         local_578);
                                                    if ((uVar8 & 1) != 0) {
                                                      *(undefined1 *)((long)param_2 + 100) =
                                                           (undefined1)local_24;
                                                      FUN_006e9528(&local_580,"$.palette_colors[%d]"
                                                                   ,0xd);
                                                      (**(code **)(local_580 + 0x18))(&local_580);
                                                      uVar8 = FUN_0069a220(auStack_50,&local_24,
                                                                           local_578);
                                                      if ((uVar8 & 1) != 0) {
                                                        *(undefined1 *)((long)param_2 + 0x65) =
                                                             (undefined1)local_24;
                                                        FUN_006e9528(&local_580,
                                                                     "$.palette_colors[%d]",0xe);
                                                        (**(code **)(local_580 + 0x18))(&local_580);
                                                        uVar8 = FUN_0069a220(auStack_50,&local_24,
                                                                             local_578);
                                                        if ((uVar8 & 1) != 0) {
                                                          *(undefined1 *)((long)param_2 + 0x66) =
                                                               (undefined1)local_24;
                                                          iVar5 = *(int *)(param_1 + 0x70);
                                                          if (iVar5 == 0) {
                                                            return 1;
                                                          }
                                                          lVar12 = *(long *)(param_1 + 0x78);
                                                          iVar11 = 0;
                                                          do {
                                                            lVar13 = (long)iVar11;
                                                            iVar11 = iVar11 + 1;
                                                            *(undefined1 *)
                                                             ((long)param_2 + lVar13 + 0x6c) =
                                                                 *(undefined1 *)(lVar12 + lVar13);
                                                          } while (iVar5 != iVar11);
                                                          return 1;
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
        }
      }
    }
  }
  return 0;
}

