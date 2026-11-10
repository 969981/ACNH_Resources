
void FUN_002a3110(undefined8 param_1,long param_2,undefined1 param_3,undefined1 param_4,
                 long *param_5,uint param_6,long param_7,long *param_8,uint param_9)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  int *piVar5;
  short sVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ushort uVar11;
  int local_198;
  ErrorResultVariant aEStack_194 [12];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  byte local_80;
  int local_74;
  ErrorResultVariant aEStack_70 [12];
  undefined4 local_64;
  
  local_74 = 0;
  local_188 = local_188 & 0xffffffff00000000;
  uVar1 = param_6 & 0xffff;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_188);
  *(undefined1 *)(param_2 + 0x5a) = param_3;
  *(undefined1 *)(param_2 + 0x5b) = param_4;
  FUN_00228460(param_2 + 0x5c,param_7);
  *(char *)(param_2 + 100) = (char)param_6;
  if (uVar1 < 0x21) {
    if (uVar1 == 0) {
      uVar9 = 0xb;
    }
    else {
      FUN_00228460(param_2 + 0x65,*param_5);
      if (uVar1 == 1) {
        uVar9 = 0x13;
      }
      else {
        FUN_00228460(param_2 + 0x6d,param_5[1]);
        if (uVar1 == 2) {
          uVar9 = 0x1b;
        }
        else {
          FUN_00228460(param_2 + 0x75,param_5[2]);
          if (uVar1 == 3) {
            uVar9 = 0x23;
          }
          else {
            FUN_00228460(param_2 + 0x7d,param_5[3]);
            if (uVar1 == 4) {
              uVar9 = 0x2b;
            }
            else {
              FUN_00228460(param_2 + 0x85,param_5[4]);
              if (uVar1 == 5) {
                uVar9 = 0x33;
              }
              else {
                FUN_00228460(param_2 + 0x8d,param_5[5]);
                if (uVar1 == 6) {
                  uVar9 = 0x3b;
                }
                else {
                  FUN_00228460(param_2 + 0x95,param_5[6]);
                  if (uVar1 == 7) {
                    uVar9 = 0x43;
                  }
                  else {
                    FUN_00228460(param_2 + 0x9d,param_5[7]);
                    if (uVar1 == 8) {
                      uVar9 = 0x4b;
                    }
                    else {
                      FUN_00228460(param_2 + 0xa5,param_5[8]);
                      if (uVar1 == 9) {
                        uVar9 = 0x53;
                      }
                      else {
                        FUN_00228460(param_2 + 0xad,param_5[9]);
                        if (uVar1 == 10) {
                          uVar9 = 0x5b;
                        }
                        else {
                          FUN_00228460(param_2 + 0xb5,param_5[10]);
                          if (uVar1 == 0xb) {
                            uVar9 = 99;
                          }
                          else {
                            FUN_00228460(param_2 + 0xbd,param_5[0xb]);
                            if (uVar1 == 0xc) {
                              uVar9 = 0x6b;
                            }
                            else {
                              FUN_00228460(param_2 + 0xc5,param_5[0xc]);
                              if (uVar1 == 0xd) {
                                uVar9 = 0x73;
                              }
                              else {
                                FUN_00228460(param_2 + 0xcd,param_5[0xd]);
                                if (uVar1 == 0xe) {
                                  uVar9 = 0x7b;
                                }
                                else {
                                  FUN_00228460(param_2 + 0xd5,param_5[0xe]);
                                  if (uVar1 == 0xf) {
                                    uVar9 = 0x83;
                                  }
                                  else {
                                    FUN_00228460(param_2 + 0xdd,param_5[0xf]);
                                    if (uVar1 == 0x10) {
                                      uVar9 = 0x8b;
                                    }
                                    else {
                                      FUN_00228460(param_2 + 0xe5,param_5[0x10]);
                                      if (uVar1 == 0x11) {
                                        uVar9 = 0x93;
                                      }
                                      else {
                                        FUN_00228460(param_2 + 0xed,param_5[0x11]);
                                        if (uVar1 == 0x12) {
                                          uVar9 = 0x9b;
                                        }
                                        else {
                                          FUN_00228460(param_2 + 0xf5,param_5[0x12]);
                                          if (uVar1 == 0x13) {
                                            uVar9 = 0xa3;
                                          }
                                          else {
                                            FUN_00228460(param_2 + 0xfd,param_5[0x13]);
                                            if (uVar1 == 0x14) {
                                              uVar9 = 0xab;
                                            }
                                            else {
                                              FUN_00228460(param_2 + 0x105,param_5[0x14]);
                                              if (uVar1 == 0x15) {
                                                uVar9 = 0xb3;
                                              }
                                              else {
                                                FUN_00228460(param_2 + 0x10d,param_5[0x15]);
                                                if (uVar1 == 0x16) {
                                                  uVar9 = 0xbb;
                                                }
                                                else {
                                                  FUN_00228460(param_2 + 0x115,param_5[0x16]);
                                                  if (uVar1 == 0x17) {
                                                    uVar9 = 0xc3;
                                                  }
                                                  else {
                                                    FUN_00228460(param_2 + 0x11d,param_5[0x17]);
                                                    if (uVar1 == 0x18) {
                                                      uVar9 = 0xcb;
                                                    }
                                                    else {
                                                      FUN_00228460(param_2 + 0x125,param_5[0x18]);
                                                      if (uVar1 == 0x19) {
                                                        uVar9 = 0xd3;
                                                      }
                                                      else {
                                                        FUN_00228460(param_2 + 0x12d,param_5[0x19]);
                                                        if (uVar1 == 0x1a) {
                                                          uVar9 = 0xdb;
                                                        }
                                                        else {
                                                          FUN_00228460(param_2 + 0x135,param_5[0x1a]
                                                                      );
                                                          if (uVar1 == 0x1b) {
                                                            uVar9 = 0xe3;
                                                          }
                                                          else {
                                                            FUN_00228460(param_2 + 0x13d,
                                                                         param_5[0x1b]);
                                                            if (uVar1 == 0x1c) {
                                                              uVar9 = 0xeb;
                                                            }
                                                            else {
                                                              FUN_00228460(param_2 + 0x145,
                                                                           param_5[0x1c]);
                                                              if (uVar1 == 0x1d) {
                                                                uVar9 = 0xf3;
                                                              }
                                                              else {
                                                                FUN_00228460(param_2 + 0x14d,
                                                                             param_5[0x1d]);
                                                                if (uVar1 == 0x1e) {
                                                                  uVar9 = 0xfb;
                                                                }
                                                                else {
                                                                  FUN_00228460(param_2 + 0x155,
                                                                               param_5[0x1e]);
                                                                  if (uVar1 == 0x1f) {
                                                                    uVar9 = 0x103;
                                                                  }
                                                                  else {
                                                                    FUN_00228460(param_2 + 0x15d,
                                                                                 param_5[0x1f]);
                                                                    uVar9 = 0x10b;
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
    if (param_8 != (long *)0x0) {
      uVar1 = param_9 & 0xffff;
      param_5 = param_8;
    }
    uVar10 = (ulong)uVar1;
    uVar4 = FUN_0026c89c(*(undefined8 *)PTR_DAT_04bcd350);
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    if (uVar1 != 0) {
      uVar11 = 0;
      do {
        if (*param_5 != param_7) {
          FUN_002610a0(&local_198,uVar4,local_88);
          FUN_00229780(&local_74,&local_198);
          bVar2 = local_80;
          if ((local_74 == 0) && (local_80 < 0x21)) {
            lVar7 = *(long *)(param_2 + 0x50);
            bVar3 = FUN_002aaa44(param_2);
            lVar7 = lVar7 + (long)(int)((uint)bVar2 - (uint)(bVar3 <= bVar2)) * 0x6b0;
            FUN_002a2eb8(&local_198,param_2,lVar7,uVar9);
            FUN_00229780(&local_74,&local_198);
            if (local_74 == 0) {
              *(long *)(aEStack_194 + (ulong)uVar11 * 8 + 0xc) = lVar7;
              FUN_00291df0(*(undefined8 *)(DAT_04c60f48 + 0xb8),*param_5,1);
              uVar11 = uVar11 + 1;
            }
            else {
              local_64 = 0;
              local_198 = 0x4c0d;
              nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_194,(Result *)&local_64);
              if (local_74 == local_198) {
                local_198 = 0x4c0d;
                goto LAB_002a3714;
              }
            }
          }
        }
        param_5 = param_5 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      if (uVar11 != 0) {
        sVar6 = 0;
        uVar10 = (ulong)uVar11;
        puVar8 = &local_188;
        do {
          FUN_002b0d5c(&local_198,*puVar8,(undefined1 *)(param_2 + 0x5a),uVar9,0);
          FUN_00229780(&local_74,&local_198);
          if (local_74 == 0) {
            sVar6 = sVar6 + 1;
          }
          uVar10 = uVar10 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar10 != 0);
        if (sVar6 == 0) {
          local_198 = 0x8c56;
        }
        else {
          local_198 = 0;
        }
        local_64 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_194,(Result *)&local_64);
        piVar5 = &local_198;
        goto LAB_002a375c;
      }
    }
    local_198 = 0x2c0a;
LAB_002a3714:
    local_64 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_194,(Result *)&local_64);
    piVar5 = &local_198;
  }
  else {
    local_88[0] = 0;
    local_188 = CONCAT44(local_188._4_4_,0x10c08);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_188 + 4),(Result *)local_88);
    piVar5 = (int *)&local_188;
  }
LAB_002a375c:
  FUN_002296c4(param_1,piVar5);
  return;
}

