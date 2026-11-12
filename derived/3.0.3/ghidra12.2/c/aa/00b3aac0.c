
int FUN_00b3aac0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *param_1;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar3 = uVar3 + (uVar3 >> 0x10) & 0x3f;
  if ((int)uVar3 < param_2) {
    uVar2 = param_1[1];
    uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
    if ((int)uVar1 < param_2) {
      uVar2 = param_1[2];
      uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
      if ((int)uVar3 < param_2) {
        uVar2 = param_1[3];
        uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
        uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
        uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
        uVar1 = uVar1 + (uVar1 >> 8);
        uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
        if ((int)uVar1 < param_2) {
          uVar2 = param_1[4];
          uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
          uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
          uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
          uVar3 = uVar3 + (uVar3 >> 8);
          uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
          if ((int)uVar3 < param_2) {
            uVar2 = param_1[5];
            uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
            uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
            uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
            uVar1 = uVar1 + (uVar1 >> 8);
            uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
            if ((int)uVar1 < param_2) {
              uVar2 = param_1[6];
              uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
              uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
              uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
              uVar3 = uVar3 + (uVar3 >> 8);
              uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
              if ((int)uVar3 < param_2) {
                uVar2 = param_1[7];
                uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
                uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
                uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                uVar1 = uVar1 + (uVar1 >> 8);
                uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
                if ((int)uVar1 < param_2) {
                  uVar2 = param_1[8];
                  uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
                  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                  uVar3 = uVar3 + (uVar3 >> 8);
                  uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
                  if ((int)uVar3 < param_2) {
                    uVar2 = param_1[9];
                    uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
                    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
                    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                    uVar1 = uVar1 + (uVar1 >> 8);
                    uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
                    if ((int)uVar1 < param_2) {
                      uVar2 = param_1[10];
                      uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
                      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                      uVar3 = uVar3 + (uVar3 >> 8);
                      uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
                      if ((int)uVar3 < param_2) {
                        uVar2 = param_1[0xb];
                        uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
                        uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
                        uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                        uVar1 = uVar1 + (uVar1 >> 8);
                        uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
                        if ((int)uVar1 < param_2) {
                          uVar2 = param_1[0xc];
                          uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
                          uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                          uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                          uVar3 = uVar3 + (uVar3 >> 8);
                          uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
                          if ((int)uVar3 < param_2) {
                            uVar2 = param_1[0xd];
                            uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
                            uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
                            uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                            uVar1 = uVar1 + (uVar1 >> 8);
                            uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
                            if ((int)uVar1 < param_2) {
                              uVar2 = param_1[0xe];
                              uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
                              uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                              uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                              uVar3 = uVar3 + (uVar3 >> 8);
                              uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
                              if ((int)uVar3 < param_2) {
                                uVar2 = param_1[0xf];
                                uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
                                uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                                uVar1 = uVar1 + (uVar1 >> 8);
                                uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
                                if ((int)uVar1 < param_2) {
                                  uVar2 = param_1[0x10];
                                  uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                                  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                                  uVar3 = uVar3 + (uVar3 >> 8);
                                  uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
                                  if ((int)uVar3 < param_2) {
                                    uVar2 = param_1[0x11];
                                    uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
                                    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                                    uVar1 = uVar1 + (uVar1 >> 8);
                                    uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
                                    if ((int)uVar1 < param_2) {
                                      uVar2 = param_1[0x12];
                                      uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                                      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                                      uVar3 = uVar3 + (uVar3 >> 8);
                                      uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
                                      if ((int)uVar3 < param_2) {
                                        uVar2 = param_1[0x13];
                                        uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                        uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
                                        uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                                        uVar1 = uVar1 + (uVar1 >> 8);
                                        uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
                                        if ((int)uVar1 < param_2) {
                                          uVar2 = param_1[0x14];
                                          uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                          uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
                                          uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                                          uVar3 = uVar3 + (uVar3 >> 8);
                                          uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
                                          if ((int)uVar3 < param_2) {
                                            uVar2 = param_1[0x15];
                                            uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                            uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333)
                                            ;
                                            uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                                            uVar1 = uVar1 + (uVar1 >> 8);
                                            uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
                                            if ((int)uVar1 < param_2) {
                                              uVar2 = param_1[0x16];
                                              uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                              uVar3 = (uVar3 >> 2 & 0x33333333) +
                                                      (uVar3 & 0x33333333);
                                              uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                                              uVar3 = uVar3 + (uVar3 >> 8);
                                              uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
                                              if ((int)uVar3 < param_2) {
                                                uVar2 = param_1[0x17];
                                                uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                                uVar1 = (uVar1 >> 2 & 0x33333333) +
                                                        (uVar1 & 0x33333333);
                                                uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                                                uVar1 = uVar1 + (uVar1 >> 8);
                                                uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3;
                                                if ((int)uVar1 < param_2) {
                                                  uVar2 = param_1[0x18];
                                                  uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                                  uVar3 = (uVar3 >> 2 & 0x33333333) +
                                                          (uVar3 & 0x33333333);
                                                  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                                                  uVar3 = uVar3 + (uVar3 >> 8);
                                                  uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar1;
                                                  if ((int)uVar3 < param_2) {
                                                    uVar2 = param_1[0x19];
                                                    uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                                    uVar1 = (uVar1 >> 2 & 0x33333333) +
                                                            (uVar1 & 0x33333333);
                                                    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                                                    uVar1 = uVar1 + (uVar1 >> 8);
                                                    uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar3
                                                    ;
                                                    if ((int)uVar1 < param_2) {
                                                      uVar2 = param_1[0x1a];
                                                      uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                                      uVar3 = (uVar3 >> 2 & 0x33333333) +
                                                              (uVar3 & 0x33333333);
                                                      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                                                      uVar3 = uVar3 + (uVar3 >> 8);
                                                      uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) +
                                                              uVar1;
                                                      if ((int)uVar3 < param_2) {
                                                        uVar2 = param_1[0x1b];
                                                        uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                                        uVar1 = (uVar1 >> 2 & 0x33333333) +
                                                                (uVar1 & 0x33333333);
                                                        uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
                                                        uVar1 = uVar1 + (uVar1 >> 8);
                                                        uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) +
                                                                uVar3;
                                                        if ((int)uVar1 < param_2) {
                                                          uVar2 = param_1[0x1c];
                                                          uVar3 = uVar2 - (uVar2 >> 1 & 0x55555555);
                                                          uVar3 = (uVar3 >> 2 & 0x33333333) +
                                                                  (uVar3 & 0x33333333);
                                                          uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
                                                          uVar3 = uVar3 + (uVar3 >> 8);
                                                          uVar3 = (uVar3 + (uVar3 >> 0x10) & 0x3f) +
                                                                  uVar1;
                                                          if ((int)uVar3 < param_2) {
                                                            uVar2 = param_1[0x1d];
                                                            uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555
                                                                            );
                                                            uVar1 = (uVar1 >> 2 & 0x33333333) +
                                                                    (uVar1 & 0x33333333);
                                                            uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f
                                                            ;
                                                            uVar1 = uVar1 + (uVar1 >> 8);
                                                            uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f)
                                                                    + uVar3;
                                                            if ((int)uVar1 < param_2) {
                                                              uVar2 = param_1[0x1e];
                                                              uVar3 = uVar2 - (uVar2 >> 1 &
                                                                              0x55555555);
                                                              uVar3 = (uVar3 >> 2 & 0x33333333) +
                                                                      (uVar3 & 0x33333333);
                                                              uVar3 = uVar3 + (uVar3 >> 4) &
                                                                      0xf0f0f0f;
                                                              uVar3 = uVar3 + (uVar3 >> 8);
                                                              uVar3 = (uVar3 + (uVar3 >> 0x10) &
                                                                      0x3f) + uVar1;
                                                              if ((int)uVar3 < param_2) {
                                                                uVar2 = param_1[0x1f];
                                                                uVar1 = uVar2 - (uVar2 >> 1 &
                                                                                0x55555555);
                                                                uVar1 = (uVar1 >> 2 & 0x33333333) +
                                                                        (uVar1 & 0x33333333);
                                                                uVar1 = uVar1 + (uVar1 >> 4) &
                                                                        0xf0f0f0f;
                                                                uVar1 = uVar1 + (uVar1 >> 8);
                                                                if ((int)((uVar1 + (uVar1 >> 0x10) &
                                                                          0x3f) + uVar3) < param_2)
                                                                {
                                                                  return -1;
                                                                }
                                                                iVar4 = 0x3e0;
                                                              }
                                                              else {
                                                                iVar4 = 0x3c0;
                                                                uVar3 = uVar1;
                                                              }
                                                            }
                                                            else {
                                                              iVar4 = 0x3a0;
                                                            }
                                                          }
                                                          else {
                                                            iVar4 = 0x380;
                                                            uVar3 = uVar1;
                                                          }
                                                        }
                                                        else {
                                                          iVar4 = 0x360;
                                                        }
                                                      }
                                                      else {
                                                        iVar4 = 0x340;
                                                        uVar3 = uVar1;
                                                      }
                                                    }
                                                    else {
                                                      iVar4 = 800;
                                                    }
                                                  }
                                                  else {
                                                    iVar4 = 0x300;
                                                    uVar3 = uVar1;
                                                  }
                                                }
                                                else {
                                                  iVar4 = 0x2e0;
                                                }
                                              }
                                              else {
                                                iVar4 = 0x2c0;
                                                uVar3 = uVar1;
                                              }
                                            }
                                            else {
                                              iVar4 = 0x2a0;
                                            }
                                          }
                                          else {
                                            iVar4 = 0x280;
                                            uVar3 = uVar1;
                                          }
                                        }
                                        else {
                                          iVar4 = 0x260;
                                        }
                                      }
                                      else {
                                        iVar4 = 0x240;
                                        uVar3 = uVar1;
                                      }
                                    }
                                    else {
                                      iVar4 = 0x220;
                                    }
                                  }
                                  else {
                                    iVar4 = 0x200;
                                    uVar3 = uVar1;
                                  }
                                }
                                else {
                                  iVar4 = 0x1e0;
                                }
                              }
                              else {
                                iVar4 = 0x1c0;
                                uVar3 = uVar1;
                              }
                            }
                            else {
                              iVar4 = 0x1a0;
                            }
                          }
                          else {
                            iVar4 = 0x180;
                            uVar3 = uVar1;
                          }
                        }
                        else {
                          iVar4 = 0x160;
                        }
                      }
                      else {
                        iVar4 = 0x140;
                        uVar3 = uVar1;
                      }
                    }
                    else {
                      iVar4 = 0x120;
                    }
                  }
                  else {
                    iVar4 = 0x100;
                    uVar3 = uVar1;
                  }
                }
                else {
                  iVar4 = 0xe0;
                }
              }
              else {
                iVar4 = 0xc0;
                uVar3 = uVar1;
              }
            }
            else {
              iVar4 = 0xa0;
            }
          }
          else {
            iVar4 = 0x80;
            uVar3 = uVar1;
          }
        }
        else {
          iVar4 = 0x60;
        }
      }
      else {
        iVar4 = 0x40;
        uVar3 = uVar1;
      }
    }
    else {
      iVar4 = 0x20;
    }
  }
  else {
    iVar4 = 0;
    uVar3 = 0;
  }
  if (uVar2 == 0) {
    return iVar4 + -1;
  }
  iVar5 = (param_2 - uVar3) + 1;
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < 2) {
      uVar3 = uVar2 - 1 & (uVar2 ^ 0xffffffff);
      uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      return (uVar3 + (uVar3 >> 0x10) & 0x3f) + iVar4;
    }
    uVar2 = uVar2 - 1 & uVar2;
  } while (uVar2 != 0);
  return iVar4 + -1;
}

