
void FUN_01c5ed0c(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  *param_1 = param_2;
  uVar2 = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *param_2;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 >> 2 & 1) == 0) {
        if ((uVar1 >> 3 & 1) == 0) {
          if ((uVar1 >> 4 & 1) == 0) {
            if ((uVar1 >> 5 & 1) == 0) {
              if ((uVar1 >> 6 & 1) == 0) {
                if ((uVar1 >> 7 & 1) == 0) {
                  if ((uVar1 >> 8 & 1) == 0) {
                    if ((uVar1 >> 9 & 1) == 0) {
                      if ((uVar1 >> 10 & 1) == 0) {
                        if ((uVar1 >> 0xb & 1) == 0) {
                          if ((uVar1 >> 0xc & 1) == 0) {
                            if ((uVar1 >> 0xd & 1) == 0) {
                              if ((uVar1 >> 0xe & 1) == 0) {
                                if ((uVar1 >> 0xf & 1) == 0) {
                                  if ((uVar1 >> 0x10 & 1) == 0) {
                                    if ((uVar1 >> 0x11 & 1) == 0) {
                                      if ((uVar1 >> 0x12 & 1) == 0) {
                                        if ((uVar1 >> 0x13 & 1) == 0) {
                                          if ((uVar1 >> 0x14 & 1) == 0) {
                                            if ((uVar1 >> 0x15 & 1) == 0) {
                                              if ((uVar1 >> 0x16 & 1) == 0) {
                                                if ((uVar1 >> 0x17 & 1) == 0) {
                                                  if ((uVar1 >> 0x18 & 1) == 0) {
                                                    if ((uVar1 >> 0x19 & 1) == 0) {
                                                      if ((uVar1 >> 0x1a & 1) == 0) {
                                                        if ((uVar1 >> 0x1b & 1) == 0) {
                                                          if ((uVar1 >> 0x1c & 1) == 0) {
                                                            if ((uVar1 >> 0x1d & 1) == 0) {
                                                              if ((uVar1 >> 0x1e & 1) == 0) {
                                                                if (-1 < (int)uVar1) {
                                                                  return;
                                                                }
                                                                uVar2 = 0x1f;
                                                              }
                                                              else {
                                                                uVar2 = 0x1e;
                                                              }
                                                            }
                                                            else {
                                                              uVar2 = 0x1d;
                                                            }
                                                          }
                                                          else {
                                                            uVar2 = 0x1c;
                                                          }
                                                        }
                                                        else {
                                                          uVar2 = 0x1b;
                                                        }
                                                      }
                                                      else {
                                                        uVar2 = 0x1a;
                                                      }
                                                    }
                                                    else {
                                                      uVar2 = 0x19;
                                                    }
                                                  }
                                                  else {
                                                    uVar2 = 0x18;
                                                  }
                                                }
                                                else {
                                                  uVar2 = 0x17;
                                                }
                                              }
                                              else {
                                                uVar2 = 0x16;
                                              }
                                            }
                                            else {
                                              uVar2 = 0x15;
                                            }
                                          }
                                          else {
                                            uVar2 = 0x14;
                                          }
                                        }
                                        else {
                                          uVar2 = 0x13;
                                        }
                                      }
                                      else {
                                        uVar2 = 0x12;
                                      }
                                    }
                                    else {
                                      uVar2 = 0x11;
                                    }
                                  }
                                  else {
                                    uVar2 = 0x10;
                                  }
                                }
                                else {
                                  uVar2 = 0xf;
                                }
                              }
                              else {
                                uVar2 = 0xe;
                              }
                            }
                            else {
                              uVar2 = 0xd;
                            }
                          }
                          else {
                            uVar2 = 0xc;
                          }
                        }
                        else {
                          uVar2 = 0xb;
                        }
                      }
                      else {
                        uVar2 = 10;
                      }
                    }
                    else {
                      uVar2 = 9;
                    }
                  }
                  else {
                    uVar2 = 8;
                  }
                }
                else {
                  uVar2 = 7;
                }
              }
              else {
                uVar2 = 6;
              }
            }
            else {
              uVar2 = 5;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  *(undefined4 *)(param_1 + 1) = uVar2;
  return;
}

