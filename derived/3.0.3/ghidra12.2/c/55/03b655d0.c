
void FUN_03b655d0(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  long lVar9;
  short *psVar10;
  uint uVar11;
  long *plVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  
  puVar5 = PTR_DAT_04bd1e70;
  puVar14 = (uint *)(param_1 + 0x20);
  uVar15 = *puVar14;
  if ((uVar15 & uVar15 - 1) == 0) {
    if ((uVar15 & 1) == 0) {
      if ((uVar15 >> 1 & 1) == 0) {
        if ((uVar15 >> 2 & 1) == 0) {
          if ((uVar15 >> 3 & 1) == 0) {
            if ((uVar15 >> 4 & 1) == 0) {
              if ((uVar15 >> 5 & 1) == 0) {
                if ((uVar15 >> 6 & 1) == 0) {
                  if ((uVar15 >> 7 & 1) == 0) {
                    if ((uVar15 >> 8 & 1) == 0) {
                      if ((uVar15 >> 9 & 1) == 0) {
                        if ((uVar15 >> 10 & 1) == 0) {
                          if ((uVar15 >> 0xb & 1) == 0) {
                            if ((uVar15 >> 0xc & 1) == 0) {
                              if ((uVar15 >> 0xd & 1) == 0) {
                                if ((uVar15 >> 0xe & 1) == 0) {
                                  if ((uVar15 >> 0xf & 1) == 0) {
                                    if ((uVar15 >> 0x10 & 1) == 0) {
                                      if ((uVar15 >> 0x11 & 1) == 0) {
                                        if ((uVar15 >> 0x12 & 1) == 0) {
                                          if ((uVar15 >> 0x13 & 1) == 0) {
                                            if ((uVar15 >> 0x14 & 1) == 0) {
                                              if ((uVar15 >> 0x15 & 1) == 0) {
                                                if ((uVar15 >> 0x16 & 1) == 0) {
                                                  if ((uVar15 >> 0x17 & 1) == 0) {
                                                    if ((uVar15 >> 0x18 & 1) == 0) {
                                                      if ((uVar15 >> 0x19 & 1) == 0) {
                                                        if ((uVar15 >> 0x1a & 1) == 0) {
                                                          if ((uVar15 >> 0x1b & 1) == 0) {
                                                            if ((uVar15 >> 0x1c & 1) == 0) {
                                                              if ((uVar15 >> 0x1d & 1) == 0) {
                                                                if ((uVar15 >> 0x1e & 1) == 0) {
                                                                  if (-1 < (int)uVar15) {
                                                                    return;
                                                                  }
                                                                  uVar15 = 0x1f;
                                                                }
                                                                else {
                                                                  uVar15 = 0x1e;
                                                                }
                                                              }
                                                              else {
                                                                uVar15 = 0x1d;
                                                              }
                                                            }
                                                            else {
                                                              uVar15 = 0x1c;
                                                            }
                                                          }
                                                          else {
                                                            uVar15 = 0x1b;
                                                          }
                                                        }
                                                        else {
                                                          uVar15 = 0x1a;
                                                        }
                                                      }
                                                      else {
                                                        uVar15 = 0x19;
                                                      }
                                                    }
                                                    else {
                                                      uVar15 = 0x18;
                                                    }
                                                  }
                                                  else {
                                                    uVar15 = 0x17;
                                                  }
                                                }
                                                else {
                                                  uVar15 = 0x16;
                                                }
                                              }
                                              else {
                                                uVar15 = 0x15;
                                              }
                                            }
                                            else {
                                              uVar15 = 0x14;
                                            }
                                          }
                                          else {
                                            uVar15 = 0x13;
                                          }
                                        }
                                        else {
                                          uVar15 = 0x12;
                                        }
                                      }
                                      else {
                                        uVar15 = 0x11;
                                      }
                                    }
                                    else {
                                      uVar15 = 0x10;
                                    }
                                  }
                                  else {
                                    uVar15 = 0xf;
                                  }
                                }
                                else {
                                  uVar15 = 0xe;
                                }
                              }
                              else {
                                uVar15 = 0xd;
                              }
                            }
                            else {
                              uVar15 = 0xc;
                            }
                          }
                          else {
                            uVar15 = 0xb;
                          }
                        }
                        else {
                          uVar15 = 10;
                        }
                      }
                      else {
                        uVar15 = 9;
                      }
                    }
                    else {
                      uVar15 = 8;
                    }
                  }
                  else {
                    uVar15 = 7;
                  }
                }
                else {
                  uVar15 = 6;
                }
              }
              else {
                uVar15 = 5;
              }
            }
            else {
              uVar15 = 4;
            }
          }
          else {
            uVar15 = 3;
          }
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        uVar15 = 1;
      }
    }
    else {
      uVar15 = 0;
    }
    do {
      lVar9 = *(long *)(*(long *)puVar5 + 0x178);
      if ((uint)*(ushort *)(lVar9 + 0x1f0) == (uVar15 & 0xffff)) {
        plVar12 = (long *)(lVar9 + 0x60);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar9 + 0x30) + (ulong)(uVar15 & 0xffff) * 0xe8);
      }
      sVar6 = (**(code **)(*plVar12 + 0x48))(plVar12);
      nn::os::LockMutex((MutexType *)(param_1 + 0x50));
      if (*(long *)(param_1 + 0x40) != param_1 + 0x38) {
        lVar9 = (long)*(int *)(param_1 + 0x4c);
        psVar10 = (short *)(*(long *)(param_1 + 0x40) - lVar9);
        do {
          if (*psVar10 == sVar6) {
            uVar17 = *(undefined4 *)(psVar10 + 10);
            goto LAB_03b65c68;
          }
          psVar10 = (short *)(*(long *)((long)psVar10 + lVar9 + 8) - lVar9);
        } while (psVar10 != (short *)((param_1 + 0x38) - lVar9));
      }
      uVar17 = 0;
      sVar6 = -1;
LAB_03b65c68:
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
      sVar7 = (**(code **)(*plVar12 + 0x48))(plVar12);
      if (sVar7 == sVar6) {
        FUN_03b66350(uVar17,param_1,plVar12,param_2,param_3);
      }
      uVar8 = uVar15;
      if ((int)uVar15 < 0x20) {
        uVar8 = 0x1f;
      }
      uVar16 = uVar15;
      do {
        uVar15 = uVar16 + 1;
        uVar11 = uVar8 + 1;
        if (uVar8 == uVar16) break;
        uVar4 = uVar16 + 0x20;
        if (-1 < (int)uVar15) {
          uVar4 = uVar15;
        }
        uVar11 = uVar15;
        uVar16 = uVar15;
      } while ((puVar14[(int)uVar4 >> 5] >> (ulong)(uVar15 & 0x1f) & 1) == 0);
    } while (uVar11 != 0x20);
  }
  else {
    if ((uVar15 & 1) == 0) {
      if ((uVar15 >> 1 & 1) == 0) {
        if ((uVar15 >> 2 & 1) == 0) {
          if ((uVar15 >> 3 & 1) == 0) {
            if ((uVar15 >> 4 & 1) == 0) {
              if ((uVar15 >> 5 & 1) == 0) {
                if ((uVar15 >> 6 & 1) == 0) {
                  if ((uVar15 >> 7 & 1) == 0) {
                    if ((uVar15 >> 8 & 1) == 0) {
                      if ((uVar15 >> 9 & 1) == 0) {
                        if ((uVar15 >> 10 & 1) == 0) {
                          if ((uVar15 >> 0xb & 1) == 0) {
                            if ((uVar15 >> 0xc & 1) == 0) {
                              if ((uVar15 >> 0xd & 1) == 0) {
                                if ((uVar15 >> 0xe & 1) == 0) {
                                  if ((uVar15 >> 0xf & 1) == 0) {
                                    if ((uVar15 >> 0x10 & 1) == 0) {
                                      if ((uVar15 >> 0x11 & 1) == 0) {
                                        if ((uVar15 >> 0x12 & 1) == 0) {
                                          if ((uVar15 >> 0x13 & 1) == 0) {
                                            if ((uVar15 >> 0x14 & 1) == 0) {
                                              if ((uVar15 >> 0x15 & 1) == 0) {
                                                if ((uVar15 >> 0x16 & 1) == 0) {
                                                  if ((uVar15 >> 0x17 & 1) == 0) {
                                                    if ((uVar15 >> 0x18 & 1) == 0) {
                                                      if ((uVar15 >> 0x19 & 1) == 0) {
                                                        if ((uVar15 >> 0x1a & 1) == 0) {
                                                          if ((uVar15 >> 0x1b & 1) == 0) {
                                                            if ((uVar15 >> 0x1c & 1) == 0) {
                                                              if ((uVar15 >> 0x1d & 1) == 0) {
                                                                if ((uVar15 >> 0x1e & 1) == 0) {
                                                                  if (-1 < (int)uVar15) {
                                                                    return;
                                                                  }
                                                                  uVar15 = 0x1f;
                                                                }
                                                                else {
                                                                  uVar15 = 0x1e;
                                                                }
                                                              }
                                                              else {
                                                                uVar15 = 0x1d;
                                                              }
                                                            }
                                                            else {
                                                              uVar15 = 0x1c;
                                                            }
                                                          }
                                                          else {
                                                            uVar15 = 0x1b;
                                                          }
                                                        }
                                                        else {
                                                          uVar15 = 0x1a;
                                                        }
                                                      }
                                                      else {
                                                        uVar15 = 0x19;
                                                      }
                                                    }
                                                    else {
                                                      uVar15 = 0x18;
                                                    }
                                                  }
                                                  else {
                                                    uVar15 = 0x17;
                                                  }
                                                }
                                                else {
                                                  uVar15 = 0x16;
                                                }
                                              }
                                              else {
                                                uVar15 = 0x15;
                                              }
                                            }
                                            else {
                                              uVar15 = 0x14;
                                            }
                                          }
                                          else {
                                            uVar15 = 0x13;
                                          }
                                        }
                                        else {
                                          uVar15 = 0x12;
                                        }
                                      }
                                      else {
                                        uVar15 = 0x11;
                                      }
                                    }
                                    else {
                                      uVar15 = 0x10;
                                    }
                                  }
                                  else {
                                    uVar15 = 0xf;
                                  }
                                }
                                else {
                                  uVar15 = 0xe;
                                }
                              }
                              else {
                                uVar15 = 0xd;
                              }
                            }
                            else {
                              uVar15 = 0xc;
                            }
                          }
                          else {
                            uVar15 = 0xb;
                          }
                        }
                        else {
                          uVar15 = 10;
                        }
                      }
                      else {
                        uVar15 = 9;
                      }
                    }
                    else {
                      uVar15 = 8;
                    }
                  }
                  else {
                    uVar15 = 7;
                  }
                }
                else {
                  uVar15 = 6;
                }
              }
              else {
                uVar15 = 5;
              }
            }
            else {
              uVar15 = 4;
            }
          }
          else {
            uVar15 = 3;
          }
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        uVar15 = 1;
      }
    }
    else {
      uVar15 = 0;
    }
    do {
      lVar9 = *(long *)(DAT_05aebb88 + 0x178);
      if (lVar9 == 0) {
LAB_03b659c0:
        plVar12 = (long *)0x0;
      }
      else {
        uVar8 = uVar15 & 0xffff;
        if (*(ushort *)(lVar9 + 0x1f0) == uVar8) {
          plVar12 = (long *)(lVar9 + 0x60);
        }
        else {
          if (*(char *)(lVar9 + 0x28) == '\0') goto LAB_03b659c0;
          plVar12 = (long *)0x0;
          if (((uVar8 != 0xffff) &&
              (*(long *)(lVar9 + 0x30) != 0 && (int)(uVar15 & 0xffff) < *(int *)(lVar9 + 0x48))) &&
             (plVar12 = (long *)(*(long *)(lVar9 + 0x30) + (ulong)(uVar15 & 0xffff) * 0xe8),
             *(ushort *)(plVar12 + 0x1c) != uVar8)) {
            plVar12 = (long *)0x0;
          }
        }
      }
      uVar8 = (**(code **)(*plVar12 + 0x48))(plVar12);
      if ((puVar14[uVar8 >> 5 & 0x7ff] >> (ulong)(uVar8 & 0x1f) & 1) == 0) {
        iVar13 = -1;
      }
      else {
        uVar8 = uVar8 & 0xffff;
        if (0x1f < uVar8) {
          uVar8 = 0x20;
        }
        if (uVar8 == 0) {
          iVar13 = 0;
        }
        else {
          uVar16 = *puVar14;
          if (uVar8 < 4) {
            iVar13 = 0;
            uVar11 = 0;
          }
          else {
            iVar13 = 0;
            uVar11 = 0;
            do {
              uVar3 = uVar11 & 0x1f;
              uVar4 = uVar11 + 1;
              uVar1 = uVar11 + 2;
              uVar2 = uVar11 + 3;
              uVar11 = uVar11 + 4;
              iVar13 = (uVar16 >> (ulong)(uVar2 & 0x1f) & 1) + (uVar16 >> (ulong)(uVar1 & 0x1f) & 1)
                       + (uVar16 >> (ulong)(uVar4 & 0x1f) & 1) +
                         (uVar16 >> (ulong)uVar3 & 1) + iVar13;
            } while (uVar11 != (uVar8 & 0x3c));
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            uVar4 = uVar11 & 0x1f;
            uVar11 = uVar11 + 1;
            iVar13 = (uVar16 >> (ulong)uVar4 & 1) + iVar13;
          }
        }
      }
      sVar6 = (**(code **)(*plVar12 + 0x48))(plVar12);
      nn::os::LockMutex((MutexType *)(param_1 + 0x50));
      if (*(long *)(param_1 + 0x40) != param_1 + 0x38) {
        lVar9 = (long)*(int *)(param_1 + 0x4c);
        psVar10 = (short *)(*(long *)(param_1 + 0x40) - lVar9);
        do {
          if (*psVar10 == sVar6) {
            uVar17 = *(undefined4 *)(psVar10 + 10);
            goto LAB_03b65b08;
          }
          psVar10 = (short *)(*(long *)((long)psVar10 + lVar9 + 8) - lVar9);
        } while (psVar10 != (short *)((param_1 + 0x38) - lVar9));
      }
      uVar17 = 0;
      sVar6 = -1;
LAB_03b65b08:
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
      sVar7 = (**(code **)(*plVar12 + 0x48))(plVar12);
      if (sVar7 == sVar6) {
        FUN_03b66000(uVar17,param_1,iVar13,plVar12,param_2,param_3);
      }
      uVar8 = uVar15;
      if ((int)uVar15 < 0x20) {
        uVar8 = 0x1f;
      }
      uVar16 = uVar15;
      do {
        uVar15 = uVar16 + 1;
        uVar11 = uVar8 + 1;
        if (uVar8 == uVar16) break;
        uVar4 = uVar16 + 0x20;
        if (-1 < (int)uVar15) {
          uVar4 = uVar15;
        }
        uVar11 = uVar15;
        uVar16 = uVar15;
      } while ((puVar14[(int)uVar4 >> 5] >> (ulong)(uVar15 & 0x1f) & 1) == 0);
    } while (uVar11 != 0x20);
  }
  return;
}

