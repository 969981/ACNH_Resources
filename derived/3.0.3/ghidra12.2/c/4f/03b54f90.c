
void FUN_03b54f90(long param_1,long param_2,long param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *__dest;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  size_t __n;
  long lVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  
  puVar7 = PTR_DAT_04bd1e70;
  uVar9 = *(uint *)(param_2 + 8);
  if (uVar9 != 0) {
    if ((uVar9 & 1) == 0) {
      if ((uVar9 >> 1 & 1) == 0) {
        if ((uVar9 >> 2 & 1) == 0) {
          if ((uVar9 >> 3 & 1) == 0) {
            if ((uVar9 >> 4 & 1) == 0) {
              if ((uVar9 >> 5 & 1) == 0) {
                if ((uVar9 >> 6 & 1) == 0) {
                  if ((uVar9 >> 7 & 1) == 0) {
                    if ((uVar9 >> 8 & 1) == 0) {
                      if ((uVar9 >> 9 & 1) == 0) {
                        if ((uVar9 >> 10 & 1) == 0) {
                          if ((uVar9 >> 0xb & 1) == 0) {
                            if ((uVar9 >> 0xc & 1) == 0) {
                              if ((uVar9 >> 0xd & 1) == 0) {
                                if ((uVar9 >> 0xe & 1) == 0) {
                                  if ((uVar9 >> 0xf & 1) == 0) {
                                    if ((uVar9 >> 0x10 & 1) == 0) {
                                      if ((uVar9 >> 0x11 & 1) == 0) {
                                        if ((uVar9 >> 0x12 & 1) == 0) {
                                          if ((uVar9 >> 0x13 & 1) == 0) {
                                            if ((uVar9 >> 0x14 & 1) == 0) {
                                              if ((uVar9 >> 0x15 & 1) == 0) {
                                                if ((uVar9 >> 0x16 & 1) == 0) {
                                                  if ((uVar9 >> 0x17 & 1) == 0) {
                                                    if ((uVar9 >> 0x18 & 1) == 0) {
                                                      if ((uVar9 >> 0x19 & 1) == 0) {
                                                        if ((uVar9 >> 0x1a & 1) == 0) {
                                                          if ((uVar9 >> 0x1b & 1) == 0) {
                                                            if ((uVar9 >> 0x1c & 1) == 0) {
                                                              if ((uVar9 >> 0x1d & 1) == 0) {
                                                                if ((uVar9 >> 0x1e & 1) == 0) {
                                                                  if (-1 < (int)uVar9)
                                                                  goto LAB_03b55048;
                                                                  uVar9 = 0x1f;
                                                                }
                                                                else {
                                                                  uVar9 = 0x1e;
                                                                }
                                                              }
                                                              else {
                                                                uVar9 = 0x1d;
                                                              }
                                                            }
                                                            else {
                                                              uVar9 = 0x1c;
                                                            }
                                                          }
                                                          else {
                                                            uVar9 = 0x1b;
                                                          }
                                                        }
                                                        else {
                                                          uVar9 = 0x1a;
                                                        }
                                                      }
                                                      else {
                                                        uVar9 = 0x19;
                                                      }
                                                    }
                                                    else {
                                                      uVar9 = 0x18;
                                                    }
                                                  }
                                                  else {
                                                    uVar9 = 0x17;
                                                  }
                                                }
                                                else {
                                                  uVar9 = 0x16;
                                                }
                                              }
                                              else {
                                                uVar9 = 0x15;
                                              }
                                            }
                                            else {
                                              uVar9 = 0x14;
                                            }
                                          }
                                          else {
                                            uVar9 = 0x13;
                                          }
                                        }
                                        else {
                                          uVar9 = 0x12;
                                        }
                                      }
                                      else {
                                        uVar9 = 0x11;
                                      }
                                    }
                                    else {
                                      uVar9 = 0x10;
                                    }
                                  }
                                  else {
                                    uVar9 = 0xf;
                                  }
                                }
                                else {
                                  uVar9 = 0xe;
                                }
                              }
                              else {
                                uVar9 = 0xd;
                              }
                            }
                            else {
                              uVar9 = 0xc;
                            }
                          }
                          else {
                            uVar9 = 0xb;
                          }
                        }
                        else {
                          uVar9 = 10;
                        }
                      }
                      else {
                        uVar9 = 9;
                      }
                    }
                    else {
                      uVar9 = 8;
                    }
                  }
                  else {
                    uVar9 = 7;
                  }
                }
                else {
                  uVar9 = 6;
                }
              }
              else {
                uVar9 = 5;
              }
            }
            else {
              uVar9 = 4;
            }
          }
          else {
            uVar9 = 3;
          }
        }
        else {
          uVar9 = 2;
        }
      }
      else {
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 0;
    }
    lVar12 = *(long *)PTR_DAT_04bd1e70;
    do {
      lVar15 = *(long *)(lVar12 + 0x178);
      if (lVar15 == 0) {
LAB_03b55374:
        lVar14 = 0;
      }
      else {
        uVar11 = uVar9 & 0xffff;
        if (*(ushort *)(lVar15 + 0x1f0) == uVar11) {
          lVar14 = lVar15 + 0x60;
        }
        else {
          if (*(char *)(lVar15 + 0x28) == '\0') goto LAB_03b55374;
          lVar14 = 0;
          if ((((uVar11 != 0xffff) && (*(long *)(lVar15 + 0x30) != 0)) &&
              ((int)(uVar9 & 0xffff) < *(int *)(lVar15 + 0x48))) &&
             (lVar14 = *(long *)(lVar15 + 0x30) + (ulong)(uVar9 & 0xffff) * 0xe8,
             *(ushort *)(lVar14 + 0xe0) != uVar11)) {
            lVar14 = 0;
          }
        }
      }
      if (*(int *)(param_1 + 0x1f8) < *(int *)(param_1 + 0x1fc)) {
        *(long *)(*(long *)(param_1 + 0x200) + (long)*(int *)(param_1 + 0x1f8) * 8) = lVar14;
        *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
        lVar12 = *(long *)puVar7;
      }
      uVar11 = uVar9;
      if ((int)uVar9 < 0x20) {
        uVar11 = 0x1f;
      }
      uVar10 = uVar9;
      do {
        uVar9 = uVar10 + 1;
        uVar16 = uVar11 + 1;
        if (uVar11 == uVar10) break;
        uVar3 = uVar10 + 0x20;
        if (-1 < (int)uVar9) {
          uVar3 = uVar9;
        }
        uVar16 = uVar9;
        uVar10 = uVar9;
      } while ((((uint *)(param_2 + 8))[(int)uVar3 >> 5] >> (ulong)(uVar9 & 0x1f) & 1) == 0);
    } while (uVar16 != 0x20);
  }
LAB_03b55048:
  uVar9 = *(uint *)(param_3 + 8);
  if (uVar9 != 0) {
    if ((uVar9 & 1) == 0) {
      if ((uVar9 >> 1 & 1) == 0) {
        if ((uVar9 >> 2 & 1) == 0) {
          if ((uVar9 >> 3 & 1) == 0) {
            if ((uVar9 >> 4 & 1) == 0) {
              if ((uVar9 >> 5 & 1) == 0) {
                if ((uVar9 >> 6 & 1) == 0) {
                  if ((uVar9 >> 7 & 1) == 0) {
                    if ((uVar9 >> 8 & 1) == 0) {
                      if ((uVar9 >> 9 & 1) == 0) {
                        if ((uVar9 >> 10 & 1) == 0) {
                          if ((uVar9 >> 0xb & 1) == 0) {
                            if ((uVar9 >> 0xc & 1) == 0) {
                              if ((uVar9 >> 0xd & 1) == 0) {
                                if ((uVar9 >> 0xe & 1) == 0) {
                                  if ((uVar9 >> 0xf & 1) == 0) {
                                    if ((uVar9 >> 0x10 & 1) == 0) {
                                      if ((uVar9 >> 0x11 & 1) == 0) {
                                        if ((uVar9 >> 0x12 & 1) == 0) {
                                          if ((uVar9 >> 0x13 & 1) == 0) {
                                            if ((uVar9 >> 0x14 & 1) == 0) {
                                              if ((uVar9 >> 0x15 & 1) == 0) {
                                                if ((uVar9 >> 0x16 & 1) == 0) {
                                                  if ((uVar9 >> 0x17 & 1) == 0) {
                                                    if ((uVar9 >> 0x18 & 1) == 0) {
                                                      if ((uVar9 >> 0x19 & 1) == 0) {
                                                        if ((uVar9 >> 0x1a & 1) == 0) {
                                                          if ((uVar9 >> 0x1b & 1) == 0) {
                                                            if ((uVar9 >> 0x1c & 1) == 0) {
                                                              if ((uVar9 >> 0x1d & 1) == 0) {
                                                                if ((uVar9 >> 0x1e & 1) == 0) {
                                                                  if (-1 < (int)uVar9) {
                                                                    return;
                                                                  }
                                                                  uVar9 = 0x1f;
                                                                }
                                                                else {
                                                                  uVar9 = 0x1e;
                                                                }
                                                              }
                                                              else {
                                                                uVar9 = 0x1d;
                                                              }
                                                            }
                                                            else {
                                                              uVar9 = 0x1c;
                                                            }
                                                          }
                                                          else {
                                                            uVar9 = 0x1b;
                                                          }
                                                        }
                                                        else {
                                                          uVar9 = 0x1a;
                                                        }
                                                      }
                                                      else {
                                                        uVar9 = 0x19;
                                                      }
                                                    }
                                                    else {
                                                      uVar9 = 0x18;
                                                    }
                                                  }
                                                  else {
                                                    uVar9 = 0x17;
                                                  }
                                                }
                                                else {
                                                  uVar9 = 0x16;
                                                }
                                              }
                                              else {
                                                uVar9 = 0x15;
                                              }
                                            }
                                            else {
                                              uVar9 = 0x14;
                                            }
                                          }
                                          else {
                                            uVar9 = 0x13;
                                          }
                                        }
                                        else {
                                          uVar9 = 0x12;
                                        }
                                      }
                                      else {
                                        uVar9 = 0x11;
                                      }
                                    }
                                    else {
                                      uVar9 = 0x10;
                                    }
                                  }
                                  else {
                                    uVar9 = 0xf;
                                  }
                                }
                                else {
                                  uVar9 = 0xe;
                                }
                              }
                              else {
                                uVar9 = 0xd;
                              }
                            }
                            else {
                              uVar9 = 0xc;
                            }
                          }
                          else {
                            uVar9 = 0xb;
                          }
                        }
                        else {
                          uVar9 = 10;
                        }
                      }
                      else {
                        uVar9 = 9;
                      }
                    }
                    else {
                      uVar9 = 8;
                    }
                  }
                  else {
                    uVar9 = 7;
                  }
                }
                else {
                  uVar9 = 6;
                }
              }
              else {
                uVar9 = 5;
              }
            }
            else {
              uVar9 = 4;
            }
          }
          else {
            uVar9 = 3;
          }
        }
        else {
          uVar9 = 2;
        }
      }
      else {
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 0;
    }
    piVar1 = (int *)(param_1 + 0x38);
    puVar2 = (uint *)(param_1 + 0x58);
    do {
      lVar12 = *(long *)(*(long *)puVar7 + 0x178);
      if (lVar12 == 0) {
LAB_03b55480:
        plVar17 = (long *)0x0;
      }
      else {
        uVar11 = uVar9 & 0xffff;
        if (*(ushort *)(lVar12 + 0x1f0) == uVar11) {
          plVar17 = (long *)(lVar12 + 0x60);
        }
        else {
          if (*(char *)(lVar12 + 0x28) == '\0') goto LAB_03b55480;
          plVar17 = (long *)0x0;
          if (((uVar11 != 0xffff) &&
              (*(long *)(lVar12 + 0x30) != 0 && (int)(uVar9 & 0xffff) < *(int *)(lVar12 + 0x48))) &&
             (plVar17 = (long *)(*(long *)(lVar12 + 0x30) + (ulong)(uVar9 & 0xffff) * 0xe8),
             *(ushort *)(plVar17 + 0x1c) != uVar11)) {
            plVar17 = (long *)0x0;
          }
        }
      }
      uVar11 = *(uint *)(param_1 + 0x1f8);
      if (0 < (int)uVar11) {
        __dest = *(undefined8 **)(param_1 + 0x200);
        uVar13 = 0;
        __n = (long)(int)uVar11 * 8;
        do {
          __n = __n - 8;
          if ((long *)*__dest == plVar17) {
            iVar8 = (int)uVar13;
            if ((-1 < iVar8) && (iVar8 < (int)uVar11)) {
              if (iVar8 + 1 < (int)uVar11) {
                memmove(__dest,__dest + 1,__n);
                uVar11 = *(uint *)(param_1 + 0x1f8);
              }
              *(uint *)(param_1 + 0x1f8) = uVar11 - 1;
            }
            break;
          }
          uVar13 = uVar13 + 1;
          __dest = __dest + 1;
        } while (uVar11 != uVar13);
      }
      iVar8 = (**(code **)(*plVar17 + 0x50))(plVar17);
      if ((iVar8 == DAT_04c4bdc8) &&
         (((**(code **)(*plVar17 + 0x78))(plVar17), *(char *)(param_1 + 0x28) != '\0' ||
          (*(long *)(param_1 + 0x30) != 0)))) {
        uVar4 = *(ushort *)(plVar17 + 0x1c);
        if ((int)(uint)uVar4 < *(int *)(param_1 + 0x48)) {
          do {
            while (uVar11 = *(uint *)(param_1 + 0x58),
                  *(short *)(*(long *)(param_1 + 0x50) + (ulong)uVar4 * 2) = (short)uVar11,
                  *puVar2 != uVar11) {
              ClearExclusiveLocal();
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = (uint)uVar4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(undefined2 *)(plVar17 + 0x1c) = 0xffff;
      }
      uVar11 = uVar9;
      if ((int)uVar9 < 0x20) {
        uVar11 = 0x1f;
      }
      uVar10 = uVar9;
      do {
        uVar9 = uVar10 + 1;
        uVar16 = uVar11 + 1;
        if (uVar11 == uVar10) break;
        uVar3 = uVar10 + 0x20;
        if (-1 < (int)uVar9) {
          uVar3 = uVar9;
        }
        uVar16 = uVar9;
        uVar10 = uVar9;
      } while ((((uint *)(param_3 + 8))[(int)uVar3 >> 5] >> (ulong)(uVar9 & 0x1f) & 1) == 0);
    } while (uVar16 != 0x20);
  }
  return;
}

