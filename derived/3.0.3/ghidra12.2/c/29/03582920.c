
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03582920(uint *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  
  iVar1 = FUN_01afe978(param_4);
  if (param_1[6] != 0) {
    puVar4 = *(undefined8 **)(param_1 + 8);
    lVar5 = (long)(int)param_1[6] << 3;
    do {
      if (iVar1 == *(int *)*puVar4) {
        if (DAT_05771764 == iVar1) {
          uVar2 = 0;
        }
        else if (_DAT_0577176c == iVar1) {
          uVar2 = 1;
        }
        else if (_DAT_05771774 == iVar1) {
          uVar2 = 2;
        }
        else if (_DAT_0577177c == iVar1) {
          uVar2 = 3;
        }
        else if (_DAT_05771784 == iVar1) {
          uVar2 = 4;
        }
        else if (_DAT_0577178c == iVar1) {
          uVar2 = 5;
        }
        else if (_DAT_05771794 == iVar1) {
          uVar2 = 6;
        }
        else if (_DAT_0577179c == iVar1) {
          uVar2 = 7;
        }
        else if (_DAT_057717a4 == iVar1) {
          uVar2 = 8;
        }
        else if (_DAT_057717ac == iVar1) {
          uVar2 = 9;
        }
        else {
          if (_DAT_057717b4 != iVar1) {
            return 0;
          }
          uVar2 = 10;
        }
        if (*param_1 <= uVar2) {
          uVar2 = 0;
        }
        puVar6 = (uint *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x160);
        uVar2 = *puVar6;
        if (uVar2 == 0) {
          if (iRam0000000000000000 == param_4) goto LAB_03582b50;
LAB_03582b58:
          if (iRam0000000000000000 != param_4) {
LAB_03582b74:
            if (iRam0000000000000000 != param_4) {
              if (iRam0000000000000000 != param_4) {
                if (iRam0000000000000000 != param_4) {
                  if (iRam0000000000000000 != param_4) {
                    if (iRam0000000000000000 != param_4) {
                      if (iRam0000000000000000 != param_4) {
                        if (iRam0000000000000000 != param_4) {
                          if (iRam0000000000000000 != param_4) {
                            if (iRam0000000000000000 != param_4) {
                              if (iRam0000000000000000 != param_4) {
                                if (iRam0000000000000000 != param_4) {
                                  if (iRam0000000000000000 != param_4) {
                                    if (iRam0000000000000000 != param_4) {
                                      if (iRam0000000000000000 != param_4) {
                                        if (iRam0000000000000000 != param_4) {
                                          if (iRam0000000000000000 != param_4) {
                                            piVar7 = (int *)0x0;
                                            if (iRam0000000000000000 == param_4) {
LAB_03582ef8:
                                              uVar3 = 0x12;
                                              goto LAB_03582fa8;
                                            }
LAB_03582f94:
                                            if (*piVar7 != param_4) {
                                              return 0;
                                            }
                                            uVar3 = 0x13;
                                            goto LAB_03582fa8;
                                          }
LAB_03582eb8:
                                          uVar3 = 0x11;
                                          goto LAB_03582fa8;
                                        }
LAB_03582e78:
                                        uVar3 = 0x10;
                                        goto LAB_03582fa8;
                                      }
LAB_03582e38:
                                      uVar3 = 0xf;
                                      goto LAB_03582fa8;
                                    }
LAB_03582df8:
                                    uVar3 = 0xe;
                                    goto LAB_03582fa8;
                                  }
LAB_03582db8:
                                  uVar3 = 0xd;
                                  goto LAB_03582fa8;
                                }
LAB_03582d78:
                                uVar3 = 0xc;
                                goto LAB_03582fa8;
                              }
LAB_03582d38:
                              uVar3 = 0xb;
                              goto LAB_03582fa8;
                            }
LAB_03582cf8:
                            uVar3 = 10;
                            goto LAB_03582fa8;
                          }
LAB_03582cb8:
                          uVar3 = 9;
                          goto LAB_03582fa8;
                        }
LAB_03582c78:
                        uVar3 = 8;
                        goto LAB_03582fa8;
                      }
LAB_03582c38:
                      uVar3 = 7;
                      goto LAB_03582fa8;
                    }
LAB_03582bf8:
                    uVar3 = 6;
                    goto LAB_03582fa8;
                  }
LAB_03582bdc:
                  uVar3 = 5;
                  goto LAB_03582fa8;
                }
LAB_03582bc0:
                uVar3 = 4;
                goto LAB_03582fa8;
              }
LAB_03582ba4:
              uVar3 = 3;
              goto LAB_03582fa8;
            }
LAB_03582b88:
            uVar3 = 2;
            goto LAB_03582fa8;
          }
        }
        else {
          puVar4 = *(undefined8 **)(puVar6 + 2);
          if (*(int *)*puVar4 == param_4) {
LAB_03582b50:
            uVar3 = 0;
            goto LAB_03582fa8;
          }
          if (uVar2 < 2) goto LAB_03582b58;
          if (*(int *)puVar4[1] != param_4) {
            if (uVar2 < 3) goto LAB_03582b74;
            if (*(int *)puVar4[2] != param_4) {
              if (uVar2 < 4) {
                piVar7 = (int *)0x0;
              }
              else {
                piVar7 = (int *)puVar4[3];
              }
              if (*piVar7 != param_4) {
                if (uVar2 < 5) {
                  piVar7 = (int *)0x0;
                }
                else {
                  piVar7 = (int *)puVar4[4];
                }
                if (*piVar7 != param_4) {
                  if (uVar2 < 6) {
                    piVar7 = (int *)0x0;
                  }
                  else {
                    piVar7 = (int *)puVar4[5];
                  }
                  if (*piVar7 != param_4) {
                    if (uVar2 < 7) {
                      piVar7 = (int *)0x0;
                    }
                    else {
                      piVar7 = (int *)puVar4[6];
                    }
                    if (*piVar7 != param_4) {
                      if (uVar2 < 8) {
                        piVar7 = (int *)0x0;
                      }
                      else {
                        piVar7 = (int *)puVar4[7];
                      }
                      if (*piVar7 != param_4) {
                        if (uVar2 < 9) {
                          piVar7 = (int *)0x0;
                        }
                        else {
                          piVar7 = (int *)puVar4[8];
                        }
                        if (*piVar7 != param_4) {
                          if (uVar2 < 10) {
                            piVar7 = (int *)0x0;
                          }
                          else {
                            piVar7 = (int *)puVar4[9];
                          }
                          if (*piVar7 != param_4) {
                            if (uVar2 < 0xb) {
                              piVar7 = (int *)0x0;
                            }
                            else {
                              piVar7 = (int *)puVar4[10];
                            }
                            if (*piVar7 != param_4) {
                              if (uVar2 < 0xc) {
                                piVar7 = (int *)0x0;
                              }
                              else {
                                piVar7 = (int *)puVar4[0xb];
                              }
                              if (*piVar7 != param_4) {
                                if (uVar2 < 0xd) {
                                  piVar7 = (int *)0x0;
                                }
                                else {
                                  piVar7 = (int *)puVar4[0xc];
                                }
                                if (*piVar7 != param_4) {
                                  if (uVar2 < 0xe) {
                                    piVar7 = (int *)0x0;
                                  }
                                  else {
                                    piVar7 = (int *)puVar4[0xd];
                                  }
                                  if (*piVar7 != param_4) {
                                    if (uVar2 < 0xf) {
                                      piVar7 = (int *)0x0;
                                    }
                                    else {
                                      piVar7 = (int *)puVar4[0xe];
                                    }
                                    if (*piVar7 != param_4) {
                                      if (uVar2 < 0x10) {
                                        piVar7 = (int *)0x0;
                                      }
                                      else {
                                        piVar7 = (int *)puVar4[0xf];
                                      }
                                      if (*piVar7 != param_4) {
                                        if (uVar2 < 0x11) {
                                          piVar7 = (int *)0x0;
                                        }
                                        else {
                                          piVar7 = (int *)puVar4[0x10];
                                        }
                                        if (*piVar7 != param_4) {
                                          if (uVar2 < 0x12) {
                                            piVar7 = (int *)0x0;
                                          }
                                          else {
                                            piVar7 = (int *)puVar4[0x11];
                                          }
                                          if (*piVar7 != param_4) {
                                            if (uVar2 < 0x13) {
                                              piVar7 = (int *)0x0;
                                            }
                                            else {
                                              piVar7 = (int *)puVar4[0x12];
                                            }
                                            if (*piVar7 == param_4) goto LAB_03582ef8;
                                            if (uVar2 < 0x14) {
                                              piVar7 = (int *)0x0;
                                            }
                                            else {
                                              piVar7 = (int *)puVar4[0x13];
                                            }
                                            goto LAB_03582f94;
                                          }
                                          goto LAB_03582eb8;
                                        }
                                        goto LAB_03582e78;
                                      }
                                      goto LAB_03582e38;
                                    }
                                    goto LAB_03582df8;
                                  }
                                  goto LAB_03582db8;
                                }
                                goto LAB_03582d78;
                              }
                              goto LAB_03582d38;
                            }
                            goto LAB_03582cf8;
                          }
                          goto LAB_03582cb8;
                        }
                        goto LAB_03582c78;
                      }
                      goto LAB_03582c38;
                    }
                    goto LAB_03582bf8;
                  }
                  goto LAB_03582bdc;
                }
                goto LAB_03582bc0;
              }
              goto LAB_03582ba4;
            }
            goto LAB_03582b88;
          }
        }
        uVar3 = 1;
LAB_03582fa8:
        *param_2 = iVar1;
        *param_3 = uVar3;
        return 1;
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return 0;
}

