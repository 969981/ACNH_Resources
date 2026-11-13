
void FUN_014b5820(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(param_1 + 0x10);
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  if (*(int *)(lVar5 + 8) == iVar2 && *(int *)(lVar5 + 0xc) == iVar3) {
    uVar6 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 8);
    uVar6 = (ulong)(1 < uVar4);
    lVar1 = lVar5 + uVar6 * 0x10;
    if (*(int *)(lVar1 + 8) != iVar2 || *(int *)(lVar1 + 0xc) != iVar3) {
      lVar1 = lVar5 + (ulong)(2 < uVar4) * 0x20;
      if (*(int *)(lVar1 + 8) == iVar2 && *(int *)(lVar1 + 0xc) == iVar3) {
        uVar6 = (ulong)(2 < uVar4) << 1;
      }
      else {
        uVar6 = 3;
        if (uVar4 < 4) {
          uVar6 = 0;
        }
        lVar1 = lVar5 + uVar6 * 0x10;
        if ((*(int *)(lVar1 + 8) != iVar2) || (*(int *)(lVar1 + 0xc) != iVar3)) {
          lVar1 = lVar5 + (ulong)(4 < uVar4) * 0x40;
          if ((*(int *)(lVar1 + 8) == iVar2) && (*(int *)(lVar1 + 0xc) == iVar3)) {
            uVar6 = (ulong)(4 < uVar4) << 2;
          }
          else {
            uVar6 = 5;
            if (uVar4 < 6) {
              uVar6 = 0;
            }
            lVar1 = lVar5 + uVar6 * 0x10;
            if ((*(int *)(lVar1 + 8) != iVar2) || (*(int *)(lVar1 + 0xc) != iVar3)) {
              uVar6 = 6;
              if (uVar4 < 7) {
                uVar6 = 0;
              }
              lVar1 = lVar5 + uVar6 * 0x10;
              if ((*(int *)(lVar1 + 8) != iVar2) || (*(int *)(lVar1 + 0xc) != iVar3)) {
                uVar6 = 7;
                if (uVar4 < 8) {
                  uVar6 = 0;
                }
                lVar1 = lVar5 + uVar6 * 0x10;
                if ((*(int *)(lVar1 + 8) != iVar2) || (*(int *)(lVar1 + 0xc) != iVar3)) {
                  lVar1 = lVar5 + (ulong)(8 < uVar4) * 0x80;
                  if ((*(int *)(lVar1 + 8) == iVar2) && (*(int *)(lVar1 + 0xc) == iVar3)) {
                    uVar6 = (ulong)(8 < uVar4) << 3;
                  }
                  else {
                    uVar6 = 9;
                    if (uVar4 < 10) {
                      uVar6 = 0;
                    }
                    lVar1 = lVar5 + uVar6 * 0x10;
                    if ((*(int *)(lVar1 + 8) != iVar2) || (*(int *)(lVar1 + 0xc) != iVar3)) {
                      uVar6 = 10;
                      if (uVar4 < 0xb) {
                        uVar6 = 0;
                      }
                      lVar1 = lVar5 + uVar6 * 0x10;
                      if ((*(int *)(lVar1 + 8) != iVar2) || (*(int *)(lVar1 + 0xc) != iVar3)) {
                        uVar6 = 0xb;
                        if (uVar4 < 0xc) {
                          uVar6 = 0;
                        }
                        lVar1 = lVar5 + uVar6 * 0x10;
                        if ((*(int *)(lVar1 + 8) != iVar2) || (*(int *)(lVar1 + 0xc) != iVar3)) {
                          uVar6 = 0xc;
                          if (uVar4 < 0xd) {
                            uVar6 = 0;
                          }
                          lVar1 = lVar5 + uVar6 * 0x10;
                          if ((*(int *)(lVar1 + 8) != iVar2) || (*(int *)(lVar1 + 0xc) != iVar3)) {
                            uVar6 = 0xd;
                            if (uVar4 < 0xe) {
                              uVar6 = 0;
                            }
                            lVar1 = lVar5 + uVar6 * 0x10;
                            if ((*(int *)(lVar1 + 8) != iVar2) || (*(int *)(lVar1 + 0xc) != iVar3))
                            {
                              uVar6 = 0xe;
                              if (uVar4 < 0xf) {
                                uVar6 = 0;
                              }
                              lVar1 = lVar5 + uVar6 * 0x10;
                              if ((*(int *)(lVar1 + 8) != iVar2) || (*(int *)(lVar1 + 0xc) != iVar3)
                                 ) {
                                uVar6 = 0xf;
                                if (uVar4 < 0x10) {
                                  uVar6 = 0;
                                }
                                lVar1 = lVar5 + uVar6 * 0x10;
                                if ((*(int *)(lVar1 + 8) != iVar2) ||
                                   (*(int *)(lVar1 + 0xc) != iVar3)) {
                                  lVar1 = lVar5 + (ulong)(0x10 < uVar4) * 0x100;
                                  if ((*(int *)(lVar1 + 8) == iVar2) &&
                                     (*(int *)(lVar1 + 0xc) == iVar3)) {
                                    uVar6 = (ulong)(0x10 < uVar4) << 4;
                                  }
                                  else {
                                    uVar6 = 0x11;
                                    if (uVar4 < 0x12) {
                                      uVar6 = 0;
                                    }
                                    lVar1 = lVar5 + uVar6 * 0x10;
                                    if ((*(int *)(lVar1 + 8) != iVar2) ||
                                       (*(int *)(lVar1 + 0xc) != iVar3)) {
                                      uVar6 = 0x12;
                                      if (uVar4 < 0x13) {
                                        uVar6 = 0;
                                      }
                                      lVar1 = lVar5 + uVar6 * 0x10;
                                      if ((*(int *)(lVar1 + 8) != iVar2) ||
                                         (*(int *)(lVar1 + 0xc) != iVar3)) {
                                        uVar6 = 0x13;
                                        if (uVar4 < 0x14) {
                                          uVar6 = 0;
                                        }
                                        lVar1 = lVar5 + uVar6 * 0x10;
                                        if ((*(int *)(lVar1 + 8) != iVar2) ||
                                           (*(int *)(lVar1 + 0xc) != iVar3)) {
                                          uVar6 = 0x14;
                                          if (uVar4 < 0x15) {
                                            uVar6 = 0;
                                          }
                                          lVar1 = lVar5 + uVar6 * 0x10;
                                          if ((*(int *)(lVar1 + 8) != iVar2) ||
                                             (*(int *)(lVar1 + 0xc) != iVar3)) {
                                            uVar6 = 0x15;
                                            if (uVar4 < 0x16) {
                                              uVar6 = 0;
                                            }
                                            lVar1 = lVar5 + uVar6 * 0x10;
                                            if ((*(int *)(lVar1 + 8) != iVar2) ||
                                               (*(int *)(lVar1 + 0xc) != iVar3)) {
                                              uVar6 = 0x16;
                                              if (uVar4 < 0x17) {
                                                uVar6 = 0;
                                              }
                                              lVar1 = lVar5 + uVar6 * 0x10;
                                              if ((*(int *)(lVar1 + 8) != iVar2) ||
                                                 (*(int *)(lVar1 + 0xc) != iVar3)) {
                                                uVar6 = 0x17;
                                                if (uVar4 < 0x18) {
                                                  uVar6 = 0;
                                                }
                                                lVar1 = lVar5 + uVar6 * 0x10;
                                                if ((*(int *)(lVar1 + 8) != iVar2) ||
                                                   (*(int *)(lVar1 + 0xc) != iVar3)) {
                                                  uVar6 = 0x18;
                                                  if (uVar4 < 0x19) {
                                                    uVar6 = 0;
                                                  }
                                                  lVar1 = lVar5 + uVar6 * 0x10;
                                                  if ((*(int *)(lVar1 + 8) != iVar2) ||
                                                     (*(int *)(lVar1 + 0xc) != iVar3)) {
                                                    uVar6 = 0x19;
                                                    if (uVar4 < 0x1a) {
                                                      uVar6 = 0;
                                                    }
                                                    lVar1 = lVar5 + uVar6 * 0x10;
                                                    if ((*(int *)(lVar1 + 8) != iVar2) ||
                                                       (*(int *)(lVar1 + 0xc) != iVar3)) {
                                                      uVar6 = 0x1a;
                                                      if (uVar4 < 0x1b) {
                                                        uVar6 = 0;
                                                      }
                                                      lVar1 = lVar5 + uVar6 * 0x10;
                                                      if ((*(int *)(lVar1 + 8) != iVar2) ||
                                                         (*(int *)(lVar1 + 0xc) != iVar3)) {
                                                        uVar6 = 0x1b;
                                                        if (uVar4 < 0x1c) {
                                                          uVar6 = 0;
                                                        }
                                                        lVar1 = lVar5 + uVar6 * 0x10;
                                                        if ((*(int *)(lVar1 + 8) != iVar2) ||
                                                           (*(int *)(lVar1 + 0xc) != iVar3)) {
                                                          uVar6 = 0x1c;
                                                          if (uVar4 < 0x1d) {
                                                            uVar6 = 0;
                                                          }
                                                          lVar1 = lVar5 + uVar6 * 0x10;
                                                          if ((*(int *)(lVar1 + 8) != iVar2) ||
                                                             (*(int *)(lVar1 + 0xc) != iVar3)) {
                                                            uVar6 = 0x1d;
                                                            if (uVar4 < 0x1e) {
                                                              uVar6 = 0;
                                                            }
                                                            lVar1 = lVar5 + uVar6 * 0x10;
                                                            if (*(int *)(lVar1 + 8) != iVar2) {
                                                              return;
                                                            }
                                                            if (*(int *)(lVar1 + 0xc) != iVar3) {
                                                              return;
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
    }
  }
  lVar5 = lVar5 + uVar6 * 0x10;
  *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  return;
}

