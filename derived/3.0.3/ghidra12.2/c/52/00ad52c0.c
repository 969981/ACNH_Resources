
void FUN_00ad52c0(long param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  byte *pbVar9;
  uint *puVar10;
  char cVar11;
  uint *puVar12;
  long lVar13;
  byte local_4c [4];
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  lVar13 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar13 == 0) || (*(long *)(lVar13 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(lVar13 + 0xb0) + 8) == 0)) ||
      ((*(long *)(lVar13 + 0x488) == 0 || (*(long *)(*(long *)(lVar13 + 0x488) + 8) == 0)))) ||
     ((*(long *)(lVar13 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) == 0)))) {
LAB_00ad538c:
    local_48 = (undefined *)0xa13;
    FUN_0277d4ac(&local_48);
    uVar7 = FUN_0277d7b4(param_2,&local_48);
    if (((uVar7 & 1) == 0) || (uVar7 = FUN_0277e024(param_2), (uVar7 & 1) == 0)) {
      iVar6 = FUN_0277d6c4(param_2);
      if ((iVar6 == 0x8f7) && (uVar7 = FUN_0277e024(param_2), (uVar7 & 1) != 0)) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      else {
        iVar6 = FUN_0277d6c4(param_2);
        if ((iVar6 != 0xcd0) || (uVar7 = FUN_0277e024(param_2), (uVar7 & 1) == 0)) {
          puVar3 = PTR_DAT_04bb43c0;
          lVar13 = *(long *)PTR_DAT_04bb43c0;
          uVar5 = FUN_0277d6c4(param_2);
          if (*(long *)puVar3 == 0) {
            return;
          }
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (*(uint *)(lVar13 + 0x1d8) <= uVar5) {
            return;
          }
          if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
            return;
          }
          uVar7 = FUN_0277e024(param_2);
          if ((uVar7 & 1) != 0) {
            return;
          }
          local_40 = *param_2;
          uStack_3c = param_2[1];
          lVar13 = *(long *)puVar3;
          local_38 = (uint *)0x0;
          local_48 = PTR_DAT_04bc0510 + 0x10;
          uVar5 = FUN_0277d6c4(&local_40);
          if (*(long *)puVar3 == 0) {
            return;
          }
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (*(uint *)(lVar13 + 0x1d8) <= uVar5) {
            return;
          }
          if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
            return;
          }
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_2);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (*(uint *)(lVar13 + 0x1d8) <= uVar5) {
            return;
          }
          puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8);
          if (puVar12 == (uint *)0x0) {
            return;
          }
          uVar5 = *puVar12;
          if (uVar5 == 0) {
            return;
          }
          if (puVar12 == (uint *)(ulong)uVar5) {
            return;
          }
          puVar10 = (uint *)((long)puVar12 - (long)(ulong)uVar5);
          if (*puVar10 == 0) {
            return;
          }
          uVar5 = puVar10[1];
          if (uVar5 == 0) {
            return;
          }
          if ((ulong)(ushort)puVar10[2] == 0) {
            return;
          }
          lVar13 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar10 + lVar13 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar13 == 0) {
            return;
          }
          uVar1 = 0;
          if ((ulong)uVar5 != 0) {
            uVar1 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar5);
          }
          if (*puVar10 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if (*(uint *)PTR_DAT_04bc00c8 <= uVar1) {
            return;
          }
          if (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) != 0x58) {
            return;
          }
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
    }
    else {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    return;
  }
  uVar5 = FUN_0277d6c4(param_2);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if ((*(uint *)(lVar13 + 0x1d8) <= uVar5) ||
     (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_00ad538c;
  FUN_0124c030(&local_48,param_2);
  iVar6 = FUN_0123db50(&local_40,local_38);
  if (iVar6 - 0x18U < 7) {
    piVar8 = (int *)(param_1 + 0x10);
    goto LAB_00ad537c;
  }
  iVar6 = FUN_0123db50(&local_40,local_38);
  puVar4 = PTR_DAT_04bbbc78;
  puVar3 = PTR_DAT_04bbbc70;
  if (iVar6 - 0x12U < 6) {
    if ((local_38 != (uint *)0x0) && (uVar5 = *local_38, uVar5 != 0)) {
      cVar11 = *PTR_DAT_04bbbc70;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          uVar5 = *local_38;
        }
        else {
          uVar1 = *(uint *)(puVar4 + 0x4c);
          if (-1 < (int)uVar1) {
            if (((byte *)((ulong)uVar1 + (long)local_38) != (byte *)0x0) &&
               (2 < *(byte *)((ulong)uVar1 + (long)local_38))) goto LAB_00ad56c4;
            break;
          }
          if (uVar1 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)uVar5;
        if ((puVar12 == (uint *)0x0) || (local_38 == puVar12)) break;
        lVar13 = 0xc;
        if (*(char *)((long)local_38 + (10 - (long)puVar12)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)local_38 + (lVar13 - (long)puVar12);
        if (lVar13 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar12));
        *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
        if (uVar7 == 0) break;
        piVar8 = (int *)(lVar13 + 4);
        while (piVar8[-1] != -0xa58ccc9) {
          piVar8 = piVar8 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_00ad56ac;
        }
        iVar6 = 0;
        if (*piVar8 != -1) {
          iVar6 = *piVar8;
        }
        *(int *)(puVar4 + 0x4c) = iVar6;
        uVar5 = *local_38;
        if (uVar5 == 0) break;
      } while( true );
    }
LAB_00ad56ac:
    uVar7 = FUN_0124f668(&local_48,param_3);
    if ((uVar7 & 1) != 0) {
      return;
    }
    piVar8 = (int *)(param_1 + 0x108);
    goto LAB_00ad537c;
  }
LAB_00ad56c4:
  iVar6 = FUN_0123db50(&local_40);
  if (iVar6 - 0x23U < 9) {
    uVar7 = FUN_0124f668(&local_48,param_3);
    if ((uVar7 & 1) == 0) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    iVar6 = FUN_0277d6c4(param_2);
    if (iVar6 == 0xea71) {
      piVar8 = (int *)(param_1 + 0x30);
    }
    else {
      iVar6 = FUN_0277d6c4(param_2);
      if (iVar6 == 0xea74) {
        piVar8 = (int *)(param_1 + 0x34);
      }
      else {
        iVar6 = FUN_0277d6c4(param_2);
        if (iVar6 == 0xea8b) {
          piVar8 = (int *)(param_1 + 0x38);
        }
        else {
          iVar6 = FUN_0277d6c4(param_2);
          if (iVar6 == 0xeafa) {
            piVar8 = (int *)(param_1 + 0x3c);
          }
          else {
            iVar6 = FUN_0277d6c4(param_2);
            if (iVar6 == 0xeaf8) {
              piVar8 = (int *)(param_1 + 0x40);
            }
            else {
              iVar6 = FUN_0277d6c4(param_2);
              if (iVar6 == 0xeaf9) {
                piVar8 = (int *)(param_1 + 0x44);
              }
              else {
                iVar6 = FUN_0277d6c4(param_2);
                if (iVar6 == 0xeb3f) {
                  piVar8 = (int *)(param_1 + 0x48);
                }
                else {
                  iVar6 = FUN_0277d6c4(param_2);
                  if (iVar6 == 0xeb42) {
                    piVar8 = (int *)(param_1 + 0x4c);
                  }
                  else {
                    iVar6 = FUN_0277d6c4(param_2);
                    if (iVar6 == 0xeb45) {
                      piVar8 = (int *)(param_1 + 0x50);
                    }
                    else {
                      iVar6 = FUN_0277d6c4(param_2);
                      if (iVar6 == 0xeb48) {
                        piVar8 = (int *)(param_1 + 0x54);
                      }
                      else {
                        iVar6 = FUN_0277d6c4(param_2);
                        if (iVar6 == 0xeb4b) {
                          piVar8 = (int *)(param_1 + 0x58);
                        }
                        else {
                          iVar6 = FUN_0277d6c4(param_2);
                          if (iVar6 == 0xeb4e) {
                            piVar8 = (int *)(param_1 + 0x5c);
                          }
                          else {
                            iVar6 = FUN_0277d6c4(param_2);
                            if (iVar6 == 0xeb51) {
                              piVar8 = (int *)(param_1 + 0x60);
                            }
                            else {
                              iVar6 = FUN_0277d6c4(param_2);
                              if (iVar6 == 0xeb54) {
                                piVar8 = (int *)(param_1 + 100);
                              }
                              else {
                                iVar6 = FUN_0277d6c4(param_2);
                                if (iVar6 == 0xeb57) {
                                  piVar8 = (int *)(param_1 + 0x68);
                                }
                                else {
                                  iVar6 = FUN_0277d6c4(param_2);
                                  if (iVar6 == 0xeb5a) {
                                    piVar8 = (int *)(param_1 + 0x6c);
                                  }
                                  else {
                                    iVar6 = FUN_0277d6c4(param_2);
                                    if (iVar6 == 0xeb5d) {
                                      piVar8 = (int *)(param_1 + 0x70);
                                    }
                                    else {
                                      iVar6 = FUN_0277d6c4(param_2);
                                      if (iVar6 == 0xeb60) {
                                        piVar8 = (int *)(param_1 + 0x74);
                                      }
                                      else {
                                        iVar6 = FUN_0277d6c4(param_2);
                                        if (iVar6 == 0xeb63) {
                                          piVar8 = (int *)(param_1 + 0x78);
                                        }
                                        else {
                                          iVar6 = FUN_0277d6c4(param_2);
                                          if (iVar6 == 0xeb66) {
                                            piVar8 = (int *)(param_1 + 0x7c);
                                          }
                                          else {
                                            iVar6 = FUN_0277d6c4(param_2);
                                            if (iVar6 == 0xeb69) {
                                              piVar8 = (int *)(param_1 + 0x80);
                                            }
                                            else {
                                              iVar6 = FUN_0277d6c4(param_2);
                                              if (iVar6 == 0xeb6c) {
                                                piVar8 = (int *)(param_1 + 0x84);
                                              }
                                              else {
                                                iVar6 = FUN_0277d6c4(param_2);
                                                if (iVar6 == 0xeb6f) {
                                                  piVar8 = (int *)(param_1 + 0x88);
                                                }
                                                else {
                                                  iVar6 = FUN_0277d6c4(param_2);
                                                  if (iVar6 == 0xeb72) {
                                                    piVar8 = (int *)(param_1 + 0x8c);
                                                  }
                                                  else {
                                                    iVar6 = FUN_0277d6c4(param_2);
                                                    if (iVar6 == 0xeb75) {
                                                      piVar8 = (int *)(param_1 + 0x90);
                                                    }
                                                    else {
                                                      iVar6 = FUN_0277d6c4(param_2);
                                                      if (iVar6 == 0xeb78) {
                                                        piVar8 = (int *)(param_1 + 0x94);
                                                      }
                                                      else {
                                                        iVar6 = FUN_0277d6c4(param_2);
                                                        if (iVar6 == 0xeb7b) {
                                                          piVar8 = (int *)(param_1 + 0x98);
                                                        }
                                                        else {
                                                          iVar6 = FUN_0277d6c4(param_2);
                                                          if (iVar6 == 0xeb7e) {
                                                            piVar8 = (int *)(param_1 + 0x9c);
                                                          }
                                                          else {
                                                            iVar6 = FUN_0277d6c4(param_2);
                                                            if (iVar6 == 0xeb8a) {
                                                              piVar8 = (int *)(param_1 + 0xa0);
                                                            }
                                                            else {
                                                              iVar6 = FUN_0277d6c4(param_2);
                                                              if (iVar6 == 0xeb8d) {
                                                                piVar8 = (int *)(param_1 + 0xa4);
                                                              }
                                                              else {
                                                                iVar6 = FUN_0277d6c4(param_2);
                                                                if (iVar6 == 0xeb90) {
                                                                  piVar8 = (int *)(param_1 + 0xa8);
                                                                }
                                                                else {
                                                                  iVar6 = FUN_0277d6c4(param_2);
                                                                  if (iVar6 == 0xeb93) {
                                                                    piVar8 = (int *)(param_1 + 0xac)
                                                                    ;
                                                                  }
                                                                  else {
                                                                    iVar6 = FUN_0277d6c4(param_2);
                                                                    if (iVar6 == 0xeb96) {
                                                                      piVar8 = (int *)(param_1 +
                                                                                      0xb0);
                                                                    }
                                                                    else {
                                                                      iVar6 = FUN_0277d6c4(param_2);
                                                                      if (iVar6 == 0xeb99) {
                                                                        piVar8 = (int *)(param_1 +
                                                                                        0xb4);
                                                                      }
                                                                      else {
                                                                        iVar6 = FUN_0277d6c4(param_2
                                                  );
                                                  if (iVar6 == 0xec13) {
                                                    piVar8 = (int *)(param_1 + 0xb8);
                                                  }
                                                  else {
                                                    iVar6 = FUN_0277d6c4(param_2);
                                                    if (iVar6 == 0xec1f) {
                                                      piVar8 = (int *)(param_1 + 0xbc);
                                                    }
                                                    else {
                                                      iVar6 = FUN_0277d6c4(param_2);
                                                      if (iVar6 == 0xec19) {
                                                        piVar8 = (int *)(param_1 + 0xc0);
                                                      }
                                                      else {
                                                        iVar6 = FUN_0277d6c4(param_2);
                                                        if (iVar6 == 0xec1d) {
                                                          piVar8 = (int *)(param_1 + 0xc4);
                                                        }
                                                        else {
                                                          iVar6 = FUN_0277d6c4(param_2);
                                                          if (iVar6 == 0xebdb) {
                                                            piVar8 = (int *)(param_1 + 200);
                                                          }
                                                          else {
                                                            iVar6 = FUN_0277d6c4(param_2);
                                                            if (iVar6 == 0xec1b) {
                                                              piVar8 = (int *)(param_1 + 0xcc);
                                                            }
                                                            else {
                                                              iVar6 = FUN_0277d6c4(param_2);
                                                              if (iVar6 == 0xec09) {
                                                                piVar8 = (int *)(param_1 + 0xd0);
                                                              }
                                                              else {
                                                                iVar6 = FUN_0277d6c4(param_2);
                                                                if (iVar6 == 0xec0d) {
                                                                  piVar8 = (int *)(param_1 + 0xd4);
                                                                }
                                                                else {
                                                                  iVar6 = FUN_0277d6c4(param_2);
                                                                  if (iVar6 == 0xec0e) {
                                                                    piVar8 = (int *)(param_1 + 0xd8)
                                                                    ;
                                                                  }
                                                                  else {
                                                                    iVar6 = FUN_0277d6c4(param_2);
                                                                    if (iVar6 == 0xec0f) {
                                                                      piVar8 = (int *)(param_1 +
                                                                                      0xdc);
                                                                    }
                                                                    else {
                                                                      iVar6 = FUN_0277d6c4(param_2);
                                                                      if (iVar6 == 0xebdc) {
                                                                        piVar8 = (int *)(param_1 +
                                                                                        0xe0);
                                                                      }
                                                                      else {
                                                                        iVar6 = FUN_0277d6c4(param_2
                                                  );
                                                  if (iVar6 == 0xec34) {
                                                    piVar8 = (int *)(param_1 + 0xe4);
                                                  }
                                                  else {
                                                    iVar6 = FUN_0277d6c4(param_2);
                                                    if (iVar6 == 0xebe4) {
                                                      piVar8 = (int *)(param_1 + 0xe8);
                                                    }
                                                    else {
                                                      iVar6 = FUN_0277d6c4(param_2);
                                                      if (iVar6 == 0xebe8) {
                                                        piVar8 = (int *)(param_1 + 0xec);
                                                      }
                                                      else {
                                                        iVar6 = FUN_0277d6c4(param_2);
                                                        if (iVar6 == 0xebeb) {
                                                          piVar8 = (int *)(param_1 + 0xf0);
                                                        }
                                                        else {
                                                          iVar6 = FUN_0277d6c4(param_2);
                                                          if (iVar6 == 0xebec) {
                                                            piVar8 = (int *)(param_1 + 0xf4);
                                                          }
                                                          else {
                                                            iVar6 = FUN_0277d6c4(param_2);
                                                            if (iVar6 == 0xebda) {
                                                              piVar8 = (int *)(param_1 + 0xf8);
                                                            }
                                                            else {
                                                              iVar6 = FUN_0277d6c4(param_2);
                                                              if (iVar6 == 0xebea) {
                                                                piVar8 = (int *)(param_1 + 0xfc);
                                                              }
                                                              else {
                                                                iVar6 = FUN_0277d6c4(param_2);
                                                                if (iVar6 == 0xebed) {
                                                                  piVar8 = (int *)(param_1 + 0x100);
                                                                }
                                                                else {
                                                                  iVar6 = FUN_0277d6c4(param_2);
                                                                  if (iVar6 != 0xecc1) {
                                                                    return;
                                                                  }
                                                                  piVar8 = (int *)(param_1 + 0x104);
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
    goto LAB_00ad537c;
  }
  uVar7 = FUN_0123d890(local_38,4);
  if (((uVar7 & 1) != 0) && (uVar7 = FUN_0123d890(local_38,0), (uVar7 & 1) == 0)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if ((uStack_3c._2_1_ & 0x18) != 0) {
      return;
    }
    uVar7 = FUN_0123b5b0(local_38);
    if ((uVar7 & 1) == 0) {
      return;
    }
    piVar8 = (int *)(param_1 + 0x24);
    goto LAB_00ad537c;
  }
  iVar6 = FUN_0123db50(&local_40,local_38);
  if (iVar6 != 0x2e) {
    return;
  }
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
LAB_00ad5808:
    if (*pbVar9 < 8) goto LAB_00ad5880;
LAB_00ad5814:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00ad5878:
      pbVar9 = PTR_DAT_04bb5038;
      goto LAB_00ad5880;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar13 + 0x473);
    pbVar9 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar12 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar12 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar12 & 8) != 0) {
        pbVar9 = (byte *)(lVar13 + 0x471);
      }
    }
    local_4c[0] = *pbVar9;
    if (7 < local_4c[0]) goto LAB_00ad5878;
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00ad5808;
      }
      goto LAB_00ad5814;
    }
LAB_00ad5880:
    local_4c[0] = *pbVar9;
    if (7 < local_4c[0]) {
      local_4c[0] = 0xff;
    }
  }
  uVar7 = FUN_01251510(&local_48,local_4c,1);
  if ((uVar7 & 1) != 0) {
    return;
  }
  piVar8 = (int *)(param_1 + 0x2c);
LAB_00ad537c:
  *piVar8 = *piVar8 + 1;
  return;
}

