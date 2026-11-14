
void FUN_0171b900(long *param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint local_18c;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  puVar1 = PTR_DAT_04bb21f8;
  if (7 < param_2) {
    return;
  }
  local_180 = (undefined *)CONCAT44(local_180._4_4_,param_2);
  if (7 < param_2) {
    return;
  }
  if ((*(uint *)(param_1 + 0xf) >> (ulong)(param_2 & 0x1f) & 1) == 0) {
    return;
  }
  lVar7 = param_1[1];
  if (lVar7 == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x9c) == '\0') {
    *(undefined1 *)((long)param_1 + 0x9c) = 1;
    if (*(int *)(lVar7 + 0x18) < 1) {
      local_6d = 0;
      local_170 = 0x100;
      puStack_178 = local_16c;
      local_16c[0] = 0;
      local_180 = puVar1 + 0x10;
      lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
      FUN_038d1270(&local_180,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
    }
    else {
      plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 8) + 0x18);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    lVar7 = param_1[1];
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) < 1) {
        local_6d = 0;
        local_170 = 0x100;
        puStack_178 = local_16c;
        local_16c[0] = 0;
        local_180 = puVar1 + 0x10;
        lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
        FUN_038d1270(&local_180,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 8) + 0x18);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))(plVar6,0,0,1,1);
        }
      }
      lVar7 = param_1[1];
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) < 1) {
          local_6d = 0;
          local_170 = 0x100;
          puStack_178 = local_16c;
          local_16c[0] = 0;
          local_180 = puVar1 + 0x10;
          lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
          FUN_038d1270(&local_180,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8)
                      );
        }
        else {
          lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 8);
          if (*(long *)(lVar7 + 0x18) != 0) {
            *(undefined2 *)(lVar7 + 0x24) = 0x101;
          }
        }
        lVar7 = param_1[1];
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) < 2) {
            local_6d = 0;
            local_170 = 0x100;
            puStack_178 = local_16c;
            local_16c[0] = 0;
            local_180 = puVar1 + 0x10;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
            FUN_038d1270(&local_180,"%s.as",
                         lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
          }
          else {
            plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x18) + 0x18);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
          lVar7 = param_1[1];
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) < 2) {
              local_6d = 0;
              local_170 = 0x100;
              puStack_178 = local_16c;
              local_16c[0] = 0;
              local_180 = puVar1 + 0x10;
              lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
              FUN_038d1270(&local_180,"%s.as",
                           lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
            }
            else {
              plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x18) + 0x18);
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x18))(plVar6,0,0,1,1);
              }
            }
            lVar7 = param_1[1];
            if (lVar7 != 0) {
              if (*(int *)(lVar7 + 0x18) < 2) {
                local_6d = 0;
                local_170 = 0x100;
                puStack_178 = local_16c;
                local_16c[0] = 0;
                local_180 = puVar1 + 0x10;
                lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
                FUN_038d1270(&local_180,"%s.as",
                             lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
              }
              else {
                lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x18);
                if (*(long *)(lVar7 + 0x18) != 0) {
                  *(undefined2 *)(lVar7 + 0x24) = 0x101;
                }
              }
              lVar7 = param_1[1];
              if (lVar7 != 0) {
                if (*(int *)(lVar7 + 0x18) < 3) {
                  local_6d = 0;
                  local_170 = 0x100;
                  puStack_178 = local_16c;
                  local_16c[0] = 0;
                  local_180 = puVar1 + 0x10;
                  lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
                  FUN_038d1270(&local_180,"%s.as",
                               lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
                }
                else {
                  plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x28) + 0x18);
                  if (plVar6 != (long *)0x0) {
                    (**(code **)(*plVar6 + 8))();
                  }
                }
                lVar7 = param_1[1];
                if (lVar7 != 0) {
                  if (*(int *)(lVar7 + 0x18) < 3) {
                    local_6d = 0;
                    local_170 = 0x100;
                    puStack_178 = local_16c;
                    local_16c[0] = 0;
                    local_180 = puVar1 + 0x10;
                    lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
                    FUN_038d1270(&local_180,"%s.as",
                                 lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
                  }
                  else {
                    plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x28) + 0x18);
                    if (plVar6 != (long *)0x0) {
                      (**(code **)(*plVar6 + 0x18))(plVar6,0,0,1,1);
                    }
                  }
                  lVar7 = param_1[1];
                  if (lVar7 != 0) {
                    if (*(int *)(lVar7 + 0x18) < 3) {
                      local_6d = 0;
                      local_170 = 0x100;
                      puStack_178 = local_16c;
                      local_16c[0] = 0;
                      local_180 = puVar1 + 0x10;
                      lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
                      FUN_038d1270(&local_180,"%s.as",
                                   lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
                    }
                    else {
                      lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x28);
                      if (*(long *)(lVar7 + 0x18) != 0) {
                        *(undefined2 *)(lVar7 + 0x24) = 0x101;
                      }
                    }
                    lVar7 = param_1[1];
                    if (lVar7 != 0) {
                      if (*(int *)(lVar7 + 0x18) < 4) {
                        local_6d = 0;
                        local_170 = 0x100;
                        puStack_178 = local_16c;
                        local_16c[0] = 0;
                        local_180 = puVar1 + 0x10;
                        lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
                        FUN_038d1270(&local_180,"%s.as",
                                     lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
                      }
                      else {
                        plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x38) + 0x18);
                        if (plVar6 != (long *)0x0) {
                          (**(code **)(*plVar6 + 8))();
                        }
                      }
                      lVar7 = param_1[1];
                      if (lVar7 != 0) {
                        if (*(int *)(lVar7 + 0x18) < 4) {
                          local_6d = 0;
                          local_170 = 0x100;
                          puStack_178 = local_16c;
                          local_16c[0] = 0;
                          local_180 = puVar1 + 0x10;
                          lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
                          FUN_038d1270(&local_180,"%s.as",
                                       lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
                        }
                        else {
                          plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x38) + 0x18);
                          if (plVar6 != (long *)0x0) {
                            (**(code **)(*plVar6 + 0x18))(plVar6,0,0,1,1);
                          }
                        }
                        lVar7 = param_1[1];
                        if (lVar7 != 0) {
                          if (*(int *)(lVar7 + 0x18) < 4) {
                            local_6d = 0;
                            local_170 = 0x100;
                            puStack_178 = local_16c;
                            local_16c[0] = 0;
                            local_180 = puVar1 + 0x10;
                            lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
                            FUN_038d1270(&local_180,"%s.as",
                                         lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8))
                            ;
                          }
                          else {
                            lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x38);
                            if (*(long *)(lVar7 + 0x18) != 0) {
                              *(undefined2 *)(lVar7 + 0x24) = 0x101;
                            }
                          }
                          lVar7 = param_1[1];
                          if (lVar7 != 0) {
                            if (*(int *)(lVar7 + 0x18) < 5) {
                              local_6d = 0;
                              local_170 = 0x100;
                              puStack_178 = local_16c;
                              local_16c[0] = 0;
                              local_180 = puVar1 + 0x10;
                              lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
                              FUN_038d1270(&local_180,"%s.as",
                                           lVar7 + *(int *)(lVar7 + 0x24) +
                                           (long)*(int *)(lVar7 + 8));
                            }
                            else {
                              plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x48) + 0x18);
                              if (plVar6 != (long *)0x0) {
                                (**(code **)(*plVar6 + 8))();
                              }
                            }
                            lVar7 = param_1[1];
                            if (lVar7 != 0) {
                              if (*(int *)(lVar7 + 0x18) < 5) {
                                local_6d = 0;
                                local_170 = 0x100;
                                puStack_178 = local_16c;
                                local_16c[0] = 0;
                                local_180 = puVar1 + 0x10;
                                lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
                                FUN_038d1270(&local_180,"%s.as",
                                             lVar7 + *(int *)(lVar7 + 0x24) +
                                             (long)*(int *)(lVar7 + 8));
                              }
                              else {
                                plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x48) + 0x18
                                                   );
                                if (plVar6 != (long *)0x0) {
                                  (**(code **)(*plVar6 + 0x18))(plVar6,0,0,1,1);
                                }
                              }
                              lVar7 = param_1[1];
                              if (lVar7 != 0) {
                                if (*(int *)(lVar7 + 0x18) < 5) {
                                  local_6d = 0;
                                  local_170 = 0x100;
                                  puStack_178 = local_16c;
                                  local_16c[0] = 0;
                                  local_180 = puVar1 + 0x10;
                                  lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
                                  FUN_038d1270(&local_180,"%s.as",
                                               lVar7 + *(int *)(lVar7 + 0x24) +
                                               (long)*(int *)(lVar7 + 8));
                                }
                                else {
                                  lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x48);
                                  if (*(long *)(lVar7 + 0x18) != 0) {
                                    *(undefined2 *)(lVar7 + 0x24) = 0x101;
                                  }
                                }
                                lVar7 = param_1[1];
                                if (lVar7 != 0) {
                                  if (*(int *)(lVar7 + 0x18) < 6) {
                                    local_6d = 0;
                                    local_170 = 0x100;
                                    puStack_178 = local_16c;
                                    local_16c[0] = 0;
                                    local_180 = puVar1 + 0x10;
                                    lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8)
                                    ;
                                    FUN_038d1270(&local_180,"%s.as",
                                                 lVar7 + *(int *)(lVar7 + 0x24) +
                                                 (long)*(int *)(lVar7 + 8));
                                  }
                                  else {
                                    plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x58) +
                                                       0x18);
                                    if (plVar6 != (long *)0x0) {
                                      (**(code **)(*plVar6 + 8))();
                                    }
                                  }
                                  lVar7 = param_1[1];
                                  if (lVar7 != 0) {
                                    if (*(int *)(lVar7 + 0x18) < 6) {
                                      local_6d = 0;
                                      local_170 = 0x100;
                                      puStack_178 = local_16c;
                                      local_16c[0] = 0;
                                      local_180 = puVar1 + 0x10;
                                      lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) +
                                                       8);
                                      FUN_038d1270(&local_180,"%s.as",
                                                   lVar7 + *(int *)(lVar7 + 0x24) +
                                                   (long)*(int *)(lVar7 + 8));
                                    }
                                    else {
                                      plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x58)
                                                         + 0x18);
                                      if (plVar6 != (long *)0x0) {
                                        (**(code **)(*plVar6 + 0x18))(plVar6,0,0,1,1);
                                      }
                                    }
                                    lVar7 = param_1[1];
                                    if (lVar7 != 0) {
                                      if (*(int *)(lVar7 + 0x18) < 6) {
                                        local_6d = 0;
                                        local_170 = 0x100;
                                        puStack_178 = local_16c;
                                        local_16c[0] = 0;
                                        local_180 = puVar1 + 0x10;
                                        lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10)
                                                         + 8);
                                        FUN_038d1270(&local_180,"%s.as",
                                                     lVar7 + *(int *)(lVar7 + 0x24) +
                                                     (long)*(int *)(lVar7 + 8));
                                      }
                                      else {
                                        lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x58);
                                        if (*(long *)(lVar7 + 0x18) != 0) {
                                          *(undefined2 *)(lVar7 + 0x24) = 0x101;
                                        }
                                      }
                                      lVar7 = param_1[1];
                                      if (lVar7 != 0) {
                                        if (*(int *)(lVar7 + 0x18) < 7) {
                                          local_6d = 0;
                                          local_170 = 0x100;
                                          puStack_178 = local_16c;
                                          local_16c[0] = 0;
                                          local_180 = puVar1 + 0x10;
                                          lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10
                                                                     ) + 8);
                                          FUN_038d1270(&local_180,"%s.as",
                                                       lVar7 + *(int *)(lVar7 + 0x24) +
                                                       (long)*(int *)(lVar7 + 8));
                                        }
                                        else {
                                          plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) +
                                                                       0x68) + 0x18);
                                          if (plVar6 != (long *)0x0) {
                                            (**(code **)(*plVar6 + 8))();
                                          }
                                        }
                                        lVar7 = param_1[1];
                                        if (lVar7 != 0) {
                                          if (*(int *)(lVar7 + 0x18) < 7) {
                                            local_6d = 0;
                                            local_170 = 0x100;
                                            puStack_178 = local_16c;
                                            local_16c[0] = 0;
                                            local_180 = puVar1 + 0x10;
                                            lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) +
                                                                       0x10) + 8);
                                            FUN_038d1270(&local_180,"%s.as",
                                                         lVar7 + *(int *)(lVar7 + 0x24) +
                                                         (long)*(int *)(lVar7 + 8));
                                          }
                                          else {
                                            plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) +
                                                                         0x68) + 0x18);
                                            if (plVar6 != (long *)0x0) {
                                              (**(code **)(*plVar6 + 0x18))(plVar6,0,0,1,1);
                                            }
                                          }
                                          lVar7 = param_1[1];
                                          if (lVar7 != 0) {
                                            if (*(int *)(lVar7 + 0x18) < 7) {
                                              local_6d = 0;
                                              local_170 = 0x100;
                                              puStack_178 = local_16c;
                                              local_16c[0] = 0;
                                              local_180 = puVar1 + 0x10;
                                              lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) +
                                                                         0x10) + 8);
                                              FUN_038d1270(&local_180,"%s.as",
                                                           lVar7 + *(int *)(lVar7 + 0x24) +
                                                           (long)*(int *)(lVar7 + 8));
                                            }
                                            else {
                                              lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x68);
                                              if (*(long *)(lVar7 + 0x18) != 0) {
                                                *(undefined2 *)(lVar7 + 0x24) = 0x101;
                                              }
                                            }
                                            lVar7 = param_1[1];
                                            if (lVar7 != 0) {
                                              if (*(int *)(lVar7 + 0x18) < 8) {
                                                local_6d = 0;
                                                local_170 = 0x100;
                                                puStack_178 = local_16c;
                                                local_16c[0] = 0;
                                                local_180 = puVar1 + 0x10;
                                                lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50)
                                                                           + 0x10) + 8);
                                                FUN_038d1270(&local_180,"%s.as",
                                                             lVar7 + *(int *)(lVar7 + 0x24) +
                                                             (long)*(int *)(lVar7 + 8));
                                              }
                                              else {
                                                plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20
                                                                                       ) + 0x78) +
                                                                   0x18);
                                                if (plVar6 != (long *)0x0) {
                                                  (**(code **)(*plVar6 + 8))();
                                                }
                                              }
                                              lVar7 = param_1[1];
                                              if (lVar7 != 0) {
                                                if (*(int *)(lVar7 + 0x18) < 8) {
                                                  local_6d = 0;
                                                  local_170 = 0x100;
                                                  puStack_178 = local_16c;
                                                  local_16c[0] = 0;
                                                  local_180 = puVar1 + 0x10;
                                                  lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50
                                                                                       ) + 0x10) + 8
                                                                   );
                                                  FUN_038d1270(&local_180,"%s.as",
                                                               lVar7 + *(int *)(lVar7 + 0x24) +
                                                               (long)*(int *)(lVar7 + 8));
                                                }
                                                else {
                                                  plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 
                                                  0x20) + 0x78) + 0x18);
                                                  if (plVar6 != (long *)0x0) {
                                                    (**(code **)(*plVar6 + 0x18))(plVar6,0,0,1,1);
                                                  }
                                                }
                                                lVar7 = param_1[1];
                                                if (lVar7 != 0) {
                                                  if (*(int *)(lVar7 + 0x18) < 8) {
                                                    local_6d = 0;
                                                    local_170 = 0x100;
                                                    puStack_178 = local_16c;
                                                    local_16c[0] = 0;
                                                    local_180 = puVar1 + 0x10;
                                                    lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 
                                                  0x50) + 0x10) + 8);
                                                  FUN_038d1270(&local_180,"%s.as",
                                                               lVar7 + *(int *)(lVar7 + 0x24) +
                                                               (long)*(int *)(lVar7 + 8));
                                                  }
                                                  else {
                                                    lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x78
                                                                     );
                                                    if (*(long *)(lVar7 + 0x18) != 0) {
                                                      *(undefined2 *)(lVar7 + 0x24) = 0x101;
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
  if (((short)param_1[0xe] == -1) || (*(short *)((long)param_1 + 0x72) == -1)) {
    if ((param_1[1] == 0) || (lVar7 = param_1[2], lVar7 == 0)) {
      uVar3 = 0xffff;
      uVar8 = 0xffff0000;
    }
    else {
      if (*(int *)(lVar7 + 0x30) == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        lVar11 = *(long *)(lVar7 + 0x38);
        lVar10 = 0;
        lVar7 = (long)*(int *)(lVar7 + 0x30) << 3;
        uVar3 = 0xffffffff;
        do {
          plVar6 = (long *)**(undefined8 **)(lVar11 + lVar10 * 8);
          iVar2 = (**(code **)(*plVar6 + 0x38))(plVar6,param_1 + 3);
          if (iVar2 != -1) {
            uVar3 = (uint)lVar10 & 0xffff | iVar2 << 0x10;
            break;
          }
          lVar10 = lVar10 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      uVar8 = uVar3 & 0xffff0000;
      uVar3 = uVar3 & 0xffff;
    }
    *(uint *)(param_1 + 0xe) = uVar3 | uVar8;
  }
  uVar8 = 0;
  if (param_3 != 0) {
    uVar8 = (uint)(param_2 < 8) & *(uint *)(param_1 + 0xf) >> (ulong)(param_2 & 0x1f) ^
            (uint)(param_2 < 8) & *(uint *)((long)param_1 + 0x74) >> (ulong)(param_2 & 0x1f);
  }
  if ((param_2 < 8) && ((*(uint *)(param_1 + 0xf) >> (ulong)(param_2 & 0x1f) & 1) != 0)) {
    if (param_2 < 8) {
      local_18c = *(uint *)((long)param_1 + 0x74) >> (ulong)(param_2 & 0x1f) & 1;
    }
    else {
      local_18c = 0;
    }
  }
  else {
    local_18c = 1;
  }
  lVar7 = param_1[1];
  if (lVar7 != 0) {
    if (((int)param_2 < 0) || (*(int *)(lVar7 + 0x18) <= (int)param_2)) {
      local_6d = 0;
      local_170 = 0x100;
      puStack_178 = local_16c;
      local_16c[0] = 0;
      local_180 = puVar1 + 0x10;
      lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
      FUN_038d1270(&local_180,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
    }
    else {
      plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + (ulong)param_2 * 0x10 + 8) + 0x18);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1,(ulong)param_2);
  if (iVar2 != 0) {
    iVar2 = FUN_0171cd20(param_1,0);
    uVar9 = (ulong)param_2;
    lVar7 = param_1[1];
    if (lVar7 != 0) {
      if (((int)param_2 < 0) || (*(int *)(lVar7 + 0x18) <= (int)param_2)) {
        local_6d = 0;
        local_170 = 0x100;
        puStack_178 = local_16c;
        local_16c[0] = 0;
        local_180 = puVar1 + 0x10;
        lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
        FUN_038d1270(&local_180,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + uVar9 * 0x10 + 8) + 0x18);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))(plVar6,(int)(short)iVar2,iVar2 >> 0x10,1,1);
        }
      }
    }
    uVar3 = FUN_0171cd20(param_1,uVar9);
    if ((uVar3 < 0xffff0000) && ((uVar3 & 0xffff) != 0xffff)) {
      uVar4 = (**(code **)(*param_1 + 0x28))(param_1,uVar9);
      lVar7 = param_1[1];
      if (lVar7 != 0) {
        if (((int)param_2 < 0) || (*(int *)(lVar7 + 0x18) <= (int)param_2)) {
          local_6d = 0;
          local_170 = 0x100;
          puStack_178 = local_16c;
          local_16c[0] = 0;
          local_180 = puVar1 + 0x10;
          lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
          FUN_038d1270(&local_180,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8)
                      );
        }
        else {
          plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + (ulong)param_2 * 0x10 + 8) + 0x18)
          ;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x18))(plVar6,(int)(short)uVar3,(int)uVar3 >> 0x10,0,uVar4 & 1);
          }
        }
      }
    }
    if ((((short)param_1[0xe] != -1) && (*(short *)((long)param_1 + 0x72) != -1)) &&
       (uVar9 = (**(code **)(*param_1 + 0x38))(param_1,param_2), (uVar9 & 1) != 0)) {
      lVar7 = param_1[1];
      if (lVar7 != 0) {
        if (((int)param_2 < 0) || (*(int *)(lVar7 + 0x18) <= (int)param_2)) {
          local_6d = 0;
          local_170 = 0x100;
          puStack_178 = local_16c;
          local_16c[0] = 0;
          local_180 = puVar1 + 0x10;
          lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
          FUN_038d1270(&local_180,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8)
                      );
        }
        else {
          plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x20) + (ulong)param_2 * 0x10 + 8) + 0x18)
          ;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x18))
                      (plVar6,(long)(short)param_1[0xe],(long)*(short *)((long)param_1 + 0x72),0,1);
          }
        }
      }
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
  lVar7 = 0;
  do {
    uVar3 = (uint)lVar7;
    local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar3);
    if (((uVar3 < 8) && ((*(uint *)(param_1 + 0xf) >> (ulong)(uVar3 & 0x1f) & 1) != 0)) &&
       (iVar5 = (**(code **)(*param_1 + 0x30))(param_1,lVar7), iVar2 < iVar5)) {
      uVar3 = FUN_0171cd20(param_1,lVar7);
      if ((uVar3 < 0xffff0000) && ((uVar3 & 0xffff) != 0xffff)) {
        uVar4 = (**(code **)(*param_1 + 0x28))(param_1,lVar7);
        lVar10 = param_1[1];
        if (lVar10 != 0) {
          if (((int)param_2 < 0) || (*(int *)(lVar10 + 0x18) <= (int)param_2)) {
            local_6d = 0;
            local_170 = 0x100;
            local_16c[0] = 0;
            lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0x50) + 0x10) + 8);
            local_180 = puVar1 + 0x10;
            puStack_178 = local_16c;
            FUN_038d1270(&local_180,"%s.as",
                         lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8));
          }
          else {
            plVar6 = *(long **)(*(long *)(*(long *)(lVar10 + 0x20) + (ulong)param_2 * 0x10 + 8) +
                               0x18);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x18))(plVar6,(int)(short)uVar3,(int)uVar3 >> 0x10,1,uVar4 & 1)
              ;
            }
          }
        }
      }
      if ((((short)param_1[0xe] != -1) && (*(short *)((long)param_1 + 0x72) != -1)) &&
         (uVar9 = (**(code **)(*param_1 + 0x38))(param_1,lVar7), (uVar9 & 1) != 0)) {
        lVar10 = param_1[1];
        if (lVar10 != 0) {
          if (((int)param_2 < 0) || (*(int *)(lVar10 + 0x18) <= (int)param_2)) {
            local_6d = 0;
            local_170 = 0x100;
            local_180 = puVar1 + 0x10;
            local_16c[0] = 0;
            lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0x50) + 0x10) + 8);
            puStack_178 = local_16c;
            FUN_038d1270(&local_180,"%s.as",
                         lVar10 + *(int *)(lVar10 + 0x24) + (long)*(int *)(lVar10 + 8));
          }
          else {
            plVar6 = *(long **)(*(long *)(*(long *)(lVar10 + 0x20) + (ulong)param_2 * 0x10 + 8) +
                               0x18);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x18))
                        (plVar6,(long)(short)param_1[0xe],(long)*(short *)((long)param_1 + 0x72),1,1
                        );
            }
          }
        }
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 8);
  lVar7 = param_1[1];
  if (lVar7 != 0) {
    if (((int)param_2 < 0) || (*(int *)(lVar7 + 0x18) <= (int)param_2)) {
      local_6d = 0;
      local_180 = puVar1 + 0x10;
      local_170 = 0x100;
      local_16c[0] = 0;
      puStack_178 = local_16c;
      lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x10) + 8);
      FUN_038d1270(&local_180,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
    }
    else {
      lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + (ulong)param_2 * 0x10 + 8);
      plVar6 = *(long **)(lVar7 + 0x18);
      if (plVar6 != (long *)0x0) {
        if (uVar8 != 0) {
          *(undefined1 *)(lVar7 + 0x25) = 1;
          *(char *)(lVar7 + 0x24) = (char)local_18c;
          if (local_18c != 0) {
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0171c100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x30))(plVar6,lVar7 + 8);
        return;
      }
    }
  }
  return;
}

