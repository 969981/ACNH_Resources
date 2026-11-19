
undefined8 FUN_03b5f3a0(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  
  puVar12 = (uint *)(param_2 + 8);
  if (*(uint *)(param_1 + 4) == *puVar12) {
    return 1;
  }
  (**(code **)(*param_1 + 0x18))();
  if ((*(uint *)(param_1 + 4) & *(uint *)(param_1 + 4) - 1) != 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  puVar4 = PTR_DAT_04bd1e70;
  uVar10 = *puVar12;
  if (uVar10 != 0) {
    if ((uVar10 & uVar10 - 1) != 0) {
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      puVar4 = PTR_DAT_04bd1e70;
      if ((uVar5 & 1) == 0) {
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      else {
        uVar10 = *puVar12;
        if ((uVar10 & 1) == 0) {
          if ((uVar10 >> 1 & 1) == 0) {
            if ((uVar10 >> 2 & 1) == 0) {
              if ((uVar10 >> 3 & 1) == 0) {
                if ((uVar10 >> 4 & 1) == 0) {
                  if ((uVar10 >> 5 & 1) == 0) {
                    if ((uVar10 >> 6 & 1) == 0) {
                      if ((uVar10 >> 7 & 1) == 0) {
                        if ((uVar10 >> 8 & 1) == 0) {
                          if ((uVar10 >> 9 & 1) == 0) {
                            if ((uVar10 >> 10 & 1) == 0) {
                              if ((uVar10 >> 0xb & 1) == 0) {
                                if ((uVar10 >> 0xc & 1) == 0) {
                                  if ((uVar10 >> 0xd & 1) == 0) {
                                    if ((uVar10 >> 0xe & 1) == 0) {
                                      if ((uVar10 >> 0xf & 1) == 0) {
                                        if ((uVar10 >> 0x10 & 1) == 0) {
                                          if ((uVar10 >> 0x11 & 1) == 0) {
                                            if ((uVar10 >> 0x12 & 1) == 0) {
                                              if ((uVar10 >> 0x13 & 1) == 0) {
                                                if ((uVar10 >> 0x14 & 1) == 0) {
                                                  if ((uVar10 >> 0x15 & 1) == 0) {
                                                    if ((uVar10 >> 0x16 & 1) == 0) {
                                                      if ((uVar10 >> 0x17 & 1) == 0) {
                                                        if ((uVar10 >> 0x18 & 1) == 0) {
                                                          if ((uVar10 >> 0x19 & 1) == 0) {
                                                            if ((uVar10 >> 0x1a & 1) == 0) {
                                                              if ((uVar10 >> 0x1b & 1) == 0) {
                                                                if ((uVar10 >> 0x1c & 1) == 0) {
                                                                  if ((uVar10 >> 0x1d & 1) == 0) {
                                                                    if ((uVar10 >> 0x1e & 1) == 0) {
                                                                      if (-1 < (int)uVar10)
                                                                      goto LAB_03b5f8e8;
                                                                      uVar10 = 0x1f;
                                                                    }
                                                                    else {
                                                                      uVar10 = 0x1e;
                                                                    }
                                                                  }
                                                                  else {
                                                                    uVar10 = 0x1d;
                                                                  }
                                                                }
                                                                else {
                                                                  uVar10 = 0x1c;
                                                                }
                                                              }
                                                              else {
                                                                uVar10 = 0x1b;
                                                              }
                                                            }
                                                            else {
                                                              uVar10 = 0x1a;
                                                            }
                                                          }
                                                          else {
                                                            uVar10 = 0x19;
                                                          }
                                                        }
                                                        else {
                                                          uVar10 = 0x18;
                                                        }
                                                      }
                                                      else {
                                                        uVar10 = 0x17;
                                                      }
                                                    }
                                                    else {
                                                      uVar10 = 0x16;
                                                    }
                                                  }
                                                  else {
                                                    uVar10 = 0x15;
                                                  }
                                                }
                                                else {
                                                  uVar10 = 0x14;
                                                }
                                              }
                                              else {
                                                uVar10 = 0x13;
                                              }
                                            }
                                            else {
                                              uVar10 = 0x12;
                                            }
                                          }
                                          else {
                                            uVar10 = 0x11;
                                          }
                                        }
                                        else {
                                          uVar10 = 0x10;
                                        }
                                      }
                                      else {
                                        uVar10 = 0xf;
                                      }
                                    }
                                    else {
                                      uVar10 = 0xe;
                                    }
                                  }
                                  else {
                                    uVar10 = 0xd;
                                  }
                                }
                                else {
                                  uVar10 = 0xc;
                                }
                              }
                              else {
                                uVar10 = 0xb;
                              }
                            }
                            else {
                              uVar10 = 10;
                            }
                          }
                          else {
                            uVar10 = 9;
                          }
                        }
                        else {
                          uVar10 = 8;
                        }
                      }
                      else {
                        uVar10 = 7;
                      }
                    }
                    else {
                      uVar10 = 6;
                    }
                  }
                  else {
                    uVar10 = 5;
                  }
                }
                else {
                  uVar10 = 4;
                }
              }
              else {
                uVar10 = 3;
              }
            }
            else {
              uVar10 = 2;
            }
          }
          else {
            uVar10 = 1;
          }
        }
        else {
          uVar10 = 0;
        }
        iVar9 = 0;
        bVar3 = true;
        do {
          lVar6 = *(long *)(*(long *)puVar4 + 0x178);
          if ((uint)*(ushort *)(lVar6 + 0x1f0) == (uVar10 & 0xffff)) {
            plVar7 = (long *)(lVar6 + 0x60);
          }
          else {
            plVar7 = (long *)(*(long *)(lVar6 + 0x30) + (ulong)(uVar10 & 0xffff) * 0xe8);
            if ((uint)*(ushort *)(plVar7 + 0x1c) != (uVar10 & 0xffff)) {
              plVar7 = (long *)0x0;
            }
          }
          uVar5 = (**(code **)(*plVar7 + 0x58))(plVar7);
          if ((uVar5 & 1) == 0) {
            bVar3 = false;
          }
          else {
            (**(code **)(*param_1 + 0x10))(param_1,iVar9,plVar7);
            iVar9 = iVar9 + 1;
          }
          uVar13 = uVar10;
          if ((int)uVar10 < 0x20) {
            uVar13 = 0x1f;
          }
          uVar11 = uVar10;
          do {
            uVar10 = uVar13 + 1;
            if (uVar13 == uVar11) break;
            uVar10 = uVar11 + 1;
            iVar1 = uVar11 + 0x20;
            if (-1 < (int)uVar10) {
              iVar1 = uVar11 + 1;
            }
            uVar11 = uVar10;
          } while ((puVar12[iVar1 >> 5] >> (ulong)(uVar10 & 0x1f) & 1) == 0);
        } while (uVar10 != 0x20);
        if (bVar3) goto LAB_03b5f8e8;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      return 0;
    }
    if ((uVar10 & 1) == 0) {
      if ((uVar10 >> 1 & 1) == 0) {
        if ((uVar10 >> 2 & 1) == 0) {
          if ((uVar10 >> 3 & 1) == 0) {
            if ((uVar10 >> 4 & 1) == 0) {
              if ((uVar10 >> 5 & 1) == 0) {
                if ((uVar10 >> 6 & 1) == 0) {
                  if ((uVar10 >> 7 & 1) == 0) {
                    if ((uVar10 >> 8 & 1) == 0) {
                      if ((uVar10 >> 9 & 1) == 0) {
                        if ((uVar10 >> 10 & 1) == 0) {
                          if ((uVar10 >> 0xb & 1) == 0) {
                            if ((uVar10 >> 0xc & 1) == 0) {
                              if ((uVar10 >> 0xd & 1) == 0) {
                                if ((uVar10 >> 0xe & 1) == 0) {
                                  if ((uVar10 >> 0xf & 1) == 0) {
                                    if ((uVar10 >> 0x10 & 1) == 0) {
                                      if ((uVar10 >> 0x11 & 1) == 0) {
                                        if ((uVar10 >> 0x12 & 1) == 0) {
                                          if ((uVar10 >> 0x13 & 1) == 0) {
                                            if ((uVar10 >> 0x14 & 1) == 0) {
                                              if ((uVar10 >> 0x15 & 1) == 0) {
                                                if ((uVar10 >> 0x16 & 1) == 0) {
                                                  if ((uVar10 >> 0x17 & 1) == 0) {
                                                    if ((uVar10 >> 0x18 & 1) == 0) {
                                                      if ((uVar10 >> 0x19 & 1) == 0) {
                                                        if ((uVar10 >> 0x1a & 1) == 0) {
                                                          if ((uVar10 >> 0x1b & 1) == 0) {
                                                            if ((uVar10 >> 0x1c & 1) == 0) {
                                                              if ((uVar10 >> 0x1d & 1) == 0) {
                                                                if ((uVar10 >> 0x1e & 1) == 0) {
                                                                  if (-1 < (int)uVar10)
                                                                  goto LAB_03b5f8e8;
                                                                  uVar10 = 0x1f;
                                                                }
                                                                else {
                                                                  uVar10 = 0x1e;
                                                                }
                                                              }
                                                              else {
                                                                uVar10 = 0x1d;
                                                              }
                                                            }
                                                            else {
                                                              uVar10 = 0x1c;
                                                            }
                                                          }
                                                          else {
                                                            uVar10 = 0x1b;
                                                          }
                                                        }
                                                        else {
                                                          uVar10 = 0x1a;
                                                        }
                                                      }
                                                      else {
                                                        uVar10 = 0x19;
                                                      }
                                                    }
                                                    else {
                                                      uVar10 = 0x18;
                                                    }
                                                  }
                                                  else {
                                                    uVar10 = 0x17;
                                                  }
                                                }
                                                else {
                                                  uVar10 = 0x16;
                                                }
                                              }
                                              else {
                                                uVar10 = 0x15;
                                              }
                                            }
                                            else {
                                              uVar10 = 0x14;
                                            }
                                          }
                                          else {
                                            uVar10 = 0x13;
                                          }
                                        }
                                        else {
                                          uVar10 = 0x12;
                                        }
                                      }
                                      else {
                                        uVar10 = 0x11;
                                      }
                                    }
                                    else {
                                      uVar10 = 0x10;
                                    }
                                  }
                                  else {
                                    uVar10 = 0xf;
                                  }
                                }
                                else {
                                  uVar10 = 0xe;
                                }
                              }
                              else {
                                uVar10 = 0xd;
                              }
                            }
                            else {
                              uVar10 = 0xc;
                            }
                          }
                          else {
                            uVar10 = 0xb;
                          }
                        }
                        else {
                          uVar10 = 10;
                        }
                      }
                      else {
                        uVar10 = 9;
                      }
                    }
                    else {
                      uVar10 = 8;
                    }
                  }
                  else {
                    uVar10 = 7;
                  }
                }
                else {
                  uVar10 = 6;
                }
              }
              else {
                uVar10 = 5;
              }
            }
            else {
              uVar10 = 4;
            }
          }
          else {
            uVar10 = 3;
          }
        }
        else {
          uVar10 = 2;
        }
      }
      else {
        uVar10 = 1;
      }
    }
    else {
      uVar10 = 0;
    }
    do {
      lVar6 = *(long *)(*(long *)puVar4 + 0x178);
      if ((uint)*(ushort *)(lVar6 + 0x1f0) == (uVar10 & 0xffff)) {
        plVar7 = (long *)(lVar6 + 0x60);
      }
      else {
        plVar7 = (long *)(*(long *)(lVar6 + 0x30) + (ulong)(uVar10 & 0xffff) * 0xe8);
        if ((uint)*(ushort *)(plVar7 + 0x1c) != (uVar10 & 0xffff)) {
          plVar7 = (long *)0x0;
        }
      }
      uVar5 = (**(code **)(*plVar7 + 0x58))(plVar7);
      if ((uVar5 & 1) != 0) {
        (**(code **)(*param_1 + 8))(param_1,plVar7);
      }
      uVar13 = uVar10;
      if ((int)uVar10 < 0x20) {
        uVar13 = 0x1f;
      }
      uVar11 = uVar10;
      do {
        uVar10 = uVar11 + 1;
        uVar8 = uVar13 + 1;
        if (uVar13 == uVar11) break;
        uVar2 = uVar11 + 0x20;
        if (-1 < (int)uVar10) {
          uVar2 = uVar10;
        }
        uVar8 = uVar10;
        uVar11 = uVar10;
      } while ((puVar12[(int)uVar2 >> 5] >> (ulong)(uVar10 & 0x1f) & 1) == 0);
    } while (uVar8 != 0x20);
  }
LAB_03b5f8e8:
  *(uint *)(param_1 + 4) = *puVar12;
  (**(code **)*param_1)(param_1);
  return 1;
}

