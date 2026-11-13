
void FUN_01313c40(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  if (param_3 == 1) {
    if ((3 < *(uint *)(param_1 + 0x10)) ||
       (uVar10 = (ulong)*(uint *)(&switchD_01313694::switchdataD_0498de90)
                                 [(int)*(uint *)(param_1 + 0x10)],
       0xf < *(uint *)(&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)])) {
      uVar10 = 0;
    }
    uVar1 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
    if (*(long *)(param_1 + 8) == 0) goto LAB_013145f8;
    if ((3 < *(uint *)(param_1 + 0x10)) ||
       (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                  [(int)*(uint *)(param_1 + 0x10)] + 4),
       0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)] + 4
                      ))) {
      uVar10 = 0;
    }
    local_68 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
    if (*(long *)(param_1 + 8) == 0) goto LAB_013145fc;
    if ((3 < *(uint *)(param_1 + 0x10)) ||
       (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                  [(int)*(uint *)(param_1 + 0x10)] + 8),
       0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)] + 8
                      ))) {
      uVar10 = 0;
    }
    local_6c = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
    if (*(long *)(param_1 + 8) == 0) goto LAB_01314600;
    if ((3 < *(uint *)(param_1 + 0x10)) ||
       (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                  [(int)*(uint *)(param_1 + 0x10)] + 0xc),
       0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)] +
                      0xc))) {
      uVar10 = 0;
    }
    local_70 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
    if (*(long *)(param_1 + 8) == 0) goto LAB_01314604;
    if ((3 < *(uint *)(param_1 + 0x10)) ||
       (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                  [(int)*(uint *)(param_1 + 0x10)] + 0x10),
       0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)] +
                      0x10))) {
      uVar10 = 0;
    }
    local_74 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
    if (*(long *)(param_1 + 8) == 0) goto LAB_0131460c;
    if ((3 < *(uint *)(param_1 + 0x10)) ||
       (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                  [(int)*(uint *)(param_1 + 0x10)] + 0x14),
       0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)] +
                      0x14))) {
      uVar10 = 0;
    }
    local_78 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
    if (*(long *)(param_1 + 8) == 0) goto LAB_01314610;
    if ((3 < *(uint *)(param_1 + 0x10)) ||
       (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                  [(int)*(uint *)(param_1 + 0x10)] + 0x18),
       0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)] +
                      0x18))) {
      uVar10 = 0;
    }
    local_7c = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
    if (*(long *)(param_1 + 8) == 0) goto LAB_01314618;
    if ((3 < *(uint *)(param_1 + 0x10)) ||
       (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                  [(int)*(uint *)(param_1 + 0x10)] + 0x1c),
       0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)] +
                      0x1c))) {
      uVar10 = 0;
    }
    local_80 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
    if (*(long *)(param_1 + 8) != 0) {
      if ((3 < *(uint *)(param_1 + 0x10)) ||
         (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                    [(int)*(uint *)(param_1 + 0x10)] + 0x20),
         0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)] +
                        0x20))) {
        uVar10 = 0;
      }
      uVar2 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
      if (*(long *)(param_1 + 8) == 0) {
LAB_013146d4:
        uVar3 = 4;
LAB_013146d8:
        uVar4 = 4;
LAB_013146dc:
        uVar5 = 4;
LAB_013146e0:
        uVar6 = 4;
LAB_013146e4:
        uVar7 = 4;
LAB_013146e8:
        uVar8 = 4;
      }
      else {
        if ((3 < *(uint *)(param_1 + 0x10)) ||
           (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                      [(int)*(uint *)(param_1 + 0x10)] + 0x24),
           0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)]
                          + 0x24))) {
          uVar10 = 0;
        }
        uVar3 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
        if (*(long *)(param_1 + 8) == 0) goto LAB_013146d8;
        if ((3 < *(uint *)(param_1 + 0x10)) ||
           (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                      [(int)*(uint *)(param_1 + 0x10)] + 0x28),
           0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)]
                          + 0x28))) {
          uVar10 = 0;
        }
        uVar4 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
        if (*(long *)(param_1 + 8) == 0) goto LAB_013146dc;
        if ((3 < *(uint *)(param_1 + 0x10)) ||
           (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                      [(int)*(uint *)(param_1 + 0x10)] + 0x2c),
           0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)]
                          + 0x2c))) {
          uVar10 = 0;
        }
        uVar5 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
        if (*(long *)(param_1 + 8) == 0) goto LAB_013146e0;
        if ((3 < *(uint *)(param_1 + 0x10)) ||
           (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                      [(int)*(uint *)(param_1 + 0x10)] + 0x30),
           0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)]
                          + 0x30))) {
          uVar10 = 0;
        }
        uVar6 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
        if (*(long *)(param_1 + 8) == 0) goto LAB_013146e4;
        if ((3 < *(uint *)(param_1 + 0x10)) ||
           (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                      [(int)*(uint *)(param_1 + 0x10)] + 0x34),
           0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)]
                          + 0x34))) {
          uVar10 = 0;
        }
        uVar7 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
        if (*(long *)(param_1 + 8) == 0) goto LAB_013146e8;
        if ((3 < *(uint *)(param_1 + 0x10)) ||
           (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                      [(int)*(uint *)(param_1 + 0x10)] + 0x38),
           0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)]
                          + 0x38))) {
          uVar10 = 0;
        }
        uVar8 = (*(code *)(&switchD_01313874::switchdataD_0498dd90)[uVar10 * 2])();
        if (*(long *)(param_1 + 8) != 0) {
          if ((3 < *(uint *)(param_1 + 0x10)) ||
             (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                        [(int)*(uint *)(param_1 + 0x10)] + 0x3c),
             0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                             [(int)*(uint *)(param_1 + 0x10)] + 0x3c))) {
            uVar10 = 0;
          }
          ppuVar11 = &switchD_01313874::switchdataD_0498dd90;
LAB_013145a4:
          uVar9 = (*(code *)ppuVar11[uVar10 * 2])();
          goto LAB_01314634;
        }
      }
LAB_013146ec:
      uVar9 = 4;
      goto LAB_01314634;
    }
  }
  else {
    if (param_3 != 0) {
      uVar1 = 5;
      local_68 = 5;
      local_6c = 5;
      local_70 = 5;
      local_74 = 5;
      local_78 = 5;
      local_7c = 5;
      local_80 = 5;
      uVar2 = 5;
      uVar3 = 5;
      uVar4 = 5;
      uVar5 = 5;
      uVar6 = 5;
      uVar7 = 5;
      uVar8 = 5;
      uVar9 = 5;
      goto LAB_01314634;
    }
    if ((3 < *(uint *)(param_1 + 0x10)) ||
       (uVar10 = (ulong)*(uint *)(&switchD_01313694::switchdataD_0498de90)
                                 [(int)*(uint *)(param_1 + 0x10)],
       0xf < *(uint *)(&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)])) {
      uVar10 = 0;
    }
    uVar1 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
    if (*(long *)(param_1 + 8) != 0) {
      if ((3 < *(uint *)(param_1 + 0x10)) ||
         (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                    [(int)*(uint *)(param_1 + 0x10)] + 4),
         0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)] +
                        4))) {
        uVar10 = 0;
      }
      local_68 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
      if (*(long *)(param_1 + 8) != 0) {
        if ((3 < *(uint *)(param_1 + 0x10)) ||
           (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                      [(int)*(uint *)(param_1 + 0x10)] + 8),
           0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)[(int)*(uint *)(param_1 + 0x10)]
                          + 8))) {
          uVar10 = 0;
        }
        local_6c = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
        if (*(long *)(param_1 + 8) != 0) {
          if ((3 < *(uint *)(param_1 + 0x10)) ||
             (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                        [(int)*(uint *)(param_1 + 0x10)] + 0xc),
             0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                             [(int)*(uint *)(param_1 + 0x10)] + 0xc))) {
            uVar10 = 0;
          }
          local_70 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
          if (*(long *)(param_1 + 8) != 0) {
            if ((3 < *(uint *)(param_1 + 0x10)) ||
               (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                          [(int)*(uint *)(param_1 + 0x10)] + 0x10),
               0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                               [(int)*(uint *)(param_1 + 0x10)] + 0x10))) {
              uVar10 = 0;
            }
            local_74 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
            if (*(long *)(param_1 + 8) != 0) {
              if ((3 < *(uint *)(param_1 + 0x10)) ||
                 (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                            [(int)*(uint *)(param_1 + 0x10)] + 0x14),
                 0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                                 [(int)*(uint *)(param_1 + 0x10)] + 0x14))) {
                uVar10 = 0;
              }
              local_78 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
              if (*(long *)(param_1 + 8) != 0) {
                if ((3 < *(uint *)(param_1 + 0x10)) ||
                   (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                              [(int)*(uint *)(param_1 + 0x10)] + 0x18),
                   0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                                   [(int)*(uint *)(param_1 + 0x10)] + 0x18))) {
                  uVar10 = 0;
                }
                local_7c = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
                if (*(long *)(param_1 + 8) != 0) {
                  if ((3 < *(uint *)(param_1 + 0x10)) ||
                     (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                                [(int)*(uint *)(param_1 + 0x10)] + 0x1c),
                     0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                                     [(int)*(uint *)(param_1 + 0x10)] + 0x1c))) {
                    uVar10 = 0;
                  }
                  local_80 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
                  if (*(long *)(param_1 + 8) != 0) {
                    if ((3 < *(uint *)(param_1 + 0x10)) ||
                       (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                                  [(int)*(uint *)(param_1 + 0x10)] + 0x20),
                       0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                                       [(int)*(uint *)(param_1 + 0x10)] + 0x20))) {
                      uVar10 = 0;
                    }
                    uVar2 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
                    if (*(long *)(param_1 + 8) != 0) {
                      if ((3 < *(uint *)(param_1 + 0x10)) ||
                         (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                                    [(int)*(uint *)(param_1 + 0x10)] + 0x24),
                         0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                                         [(int)*(uint *)(param_1 + 0x10)] + 0x24))) {
                        uVar10 = 0;
                      }
                      uVar3 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
                      if (*(long *)(param_1 + 8) != 0) {
                        if ((3 < *(uint *)(param_1 + 0x10)) ||
                           (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                                      [(int)*(uint *)(param_1 + 0x10)] + 0x28),
                           0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                                           [(int)*(uint *)(param_1 + 0x10)] + 0x28))) {
                          uVar10 = 0;
                        }
                        uVar4 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])();
                        if (*(long *)(param_1 + 8) != 0) {
                          if ((3 < *(uint *)(param_1 + 0x10)) ||
                             (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                                        [(int)*(uint *)(param_1 + 0x10)] + 0x2c),
                             0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                                             [(int)*(uint *)(param_1 + 0x10)] + 0x2c))) {
                            uVar10 = 0;
                          }
                          uVar5 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])()
                          ;
                          if (*(long *)(param_1 + 8) != 0) {
                            if ((3 < *(uint *)(param_1 + 0x10)) ||
                               (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90)
                                                          [(int)*(uint *)(param_1 + 0x10)] + 0x30),
                               0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                                               [(int)*(uint *)(param_1 + 0x10)] + 0x30))) {
                              uVar10 = 0;
                            }
                            uVar6 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)[uVar10 * 2])
                                              ();
                            if (*(long *)(param_1 + 8) != 0) {
                              if ((3 < *(uint *)(param_1 + 0x10)) ||
                                 (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90
                                                            )[(int)*(uint *)(param_1 + 0x10)] + 0x34
                                                           ),
                                 0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                                                 [(int)*(uint *)(param_1 + 0x10)] + 0x34))) {
                                uVar10 = 0;
                              }
                              uVar7 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)
                                                [uVar10 * 2])();
                              if (*(long *)(param_1 + 8) == 0) goto LAB_013146e8;
                              if ((3 < *(uint *)(param_1 + 0x10)) ||
                                 (uVar10 = (ulong)*(uint *)((&switchD_01313694::switchdataD_0498de90
                                                            )[(int)*(uint *)(param_1 + 0x10)] + 0x38
                                                           ),
                                 0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                                                 [(int)*(uint *)(param_1 + 0x10)] + 0x38))) {
                                uVar10 = 0;
                              }
                              uVar8 = (*(code *)(&switchD_01313694::switchdataD_0498dc90)
                                                [uVar10 * 2])();
                              if (*(long *)(param_1 + 8) != 0) {
                                if ((3 < *(uint *)(param_1 + 0x10)) ||
                                   (uVar10 = (ulong)*(uint *)((&switchD_01313694::
                                                                switchdataD_0498de90)
                                                              [(int)*(uint *)(param_1 + 0x10)] +
                                                             0x3c),
                                   0xf < *(uint *)((&switchD_01313694::switchdataD_0498de90)
                                                   [(int)*(uint *)(param_1 + 0x10)] + 0x3c))) {
                                  uVar10 = 0;
                                }
                                ppuVar11 = &switchD_01313694::switchdataD_0498dc90;
                                goto LAB_013145a4;
                              }
                              goto LAB_013146ec;
                            }
                            goto LAB_013146e4;
                          }
                          goto LAB_013146e0;
                        }
                        goto LAB_013146dc;
                      }
                      goto LAB_013146d8;
                    }
                    goto LAB_013146d4;
                  }
                  goto LAB_0131461c;
                }
                goto LAB_01314618;
              }
              goto LAB_01314610;
            }
            goto LAB_0131460c;
          }
          goto LAB_01314604;
        }
        goto LAB_01314600;
      }
      goto LAB_013145fc;
    }
LAB_013145f8:
    local_68 = 4;
LAB_013145fc:
    local_6c = 4;
LAB_01314600:
    local_70 = 4;
LAB_01314604:
    local_74 = 4;
LAB_0131460c:
    local_78 = 4;
LAB_01314610:
    local_7c = 4;
LAB_01314618:
    local_80 = 4;
  }
LAB_0131461c:
  uVar3 = 4;
  uVar2 = 4;
  uVar4 = 4;
  uVar5 = 4;
  uVar6 = 4;
  uVar7 = 4;
  uVar8 = 4;
  uVar9 = 4;
LAB_01314634:
  *(undefined4 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0xc) = local_68;
  *(undefined4 *)(param_2 + 0x10) = local_6c;
  *(undefined4 *)(param_2 + 0x14) = local_70;
  *(undefined4 *)(param_2 + 0x18) = local_74;
  *(undefined4 *)(param_2 + 0x1c) = local_78;
  *(undefined4 *)(param_2 + 0x20) = local_7c;
  *(undefined4 *)(param_2 + 0x24) = local_80;
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar3;
  *(undefined4 *)(param_2 + 0x30) = uVar4;
  *(undefined4 *)(param_2 + 0x34) = uVar5;
  *(undefined4 *)(param_2 + 0x38) = uVar6;
  *(undefined4 *)(param_2 + 0x3c) = uVar7;
  *(undefined4 *)(param_2 + 0x40) = uVar8;
  *(undefined4 *)(param_2 + 0x44) = uVar9;
  return;
}

